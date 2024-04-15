{
  inputs = {
    nixpkgs.url = "nixpkgs";
    libft.url = "github:vinicius507/libft";
  };

  outputs = {
    self,
    nixpkgs,
    libft,
  }: let
    allSystems = [
      "x86_64-linux"
      "aarch64-linux"
    ];

    forEachSystem = f:
      nixpkgs.lib.genAttrs allSystems (system:
        f {
          pkgs = import nixpkgs {
            inherit system;
            overlays =
              [
                libft.overlays.devshell
                libft.overlays.libft
              ]
              ++ builtins.attrValues self.overlays;
          };
        });
  in {
    checks = forEachSystem ({pkgs}: {
      norminette-check = pkgs.stdenvNoCC.mkDerivation {
        name = "norminette-check";
        src = ./push_swap;
        dontBuild = true;
        doCheck = true;
        checkPhase = with pkgs; ''
          ${norminette}/bin/norminette $src
        '';
        installPhase = "touch $out"; # Derivation must build an output.
      };
    });
    packages = forEachSystem ({pkgs}: {
      default = pkgs.push-swap;
      push-swap = import ./nix/pkgs/push-swap.nix {
        inherit (pkgs) lib libft;
        inherit (pkgs.llvmPackages_12) stdenv;
      };
    });
    overlays = {
      push-swap = final: prev: {
        push-swap = self.packages.${final.system}.push-swap;
      };
    };
    devShells = forEachSystem ({pkgs}: {
      default = pkgs.mkShell {
        packages = with pkgs; [
          bear
          clang-tools_12
          gnumake
          norminette
          valgrind
        ];
        shellHook = ''
          export LIBFT_PATH="${pkgs.libft}"
        '';
      };
    });
  };
}
