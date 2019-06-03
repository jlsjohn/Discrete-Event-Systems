TARGETDIR="project"
CONTRACT="supervisor"
HEPTAGON="/home/labcontrol/.opam/default/lib/heptagon/c"
LIBMICROHTTPD="/usr/lib/x86_64-linux-gnu/libmicrohttpd.so"

#atualiza/cria controller_services.c dentro do codigo c gerado pelo heptagon
cp ./controller_services.c $TARGETDIR"_c"

gcc -I $CONTRACT"_controller_c" -I $HEPTAGON -c -o $TARGETDIR"_c"/controller_services.o $TARGETDIR"_c"/controller_services.c
gcc -o $CONTRACT"_controller" $TARGETDIR"_c"/controller_services.o $TARGETDIR"_c"/$TARGETDIR".o" $LIBMICROHTTPD $CONTRACT"_controller_c"/$CONTRACT"_controller.o"
