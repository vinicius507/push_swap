{
  lib,
  stdenv,
  libft,
}:
stdenv.mkDerivation {
  pname = "push-swap";
  version = "1.0.0";
  src = ../../push_swap;
  buildPhase = ''
    export LIBFT_PATH="${libft}"
    make
  '';
  installPhase = ''
    mkdir -p $out/bin
    cp push_swap $out/bin
  '';
  meta = with lib; {
    license = licenses.agpl3Only;
    mainProgram = "push_swap";
  };
}
