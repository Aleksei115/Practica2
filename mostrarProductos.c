
void mostrar(){

    printf("Si quieres regresar al menú introduce 5:");

    printf("\n--------------------------------------------------------\n");

    printf("\t\tAQUI ESTA EL CATÁLOGO\n\n");

    printf("#OPCION \tMARCA    \tEN STOCK  \tPRECIO\n\n");

    //Imprime opcion,producto, disponibilidad y precio

    for (int i = 0; i < 5; i++)
        printf("%5d %15s %15d %15d$\n\n",i,*(productos + i),*(numeros + i), *(numeros + (i+10)) );
        
    printf("\n--------------------------------------------------------\n");

}



