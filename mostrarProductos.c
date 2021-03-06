void menu();

int mostrar(char **matriz_productos, int *matriz_numeros){

  int op = 1;

    if(op != 0){
        system("clear");

        printf("\n--------------------------------------------------------\n");

        printf("\t\tAQUI ESTA EL CATÁLOGO\n\n");
        printf("#OPCION \tMARCA    \tEN STOCK  \tPRECIO\n\n");

        //Imprime opcion,producto, disponibilidad y precio

        for (int i = 0; i < 5; i++)
        {
            printf("%5d %15s %15d %15d$\n\n",i,*(matriz_productos+i),*(matriz_numeros+i), *(matriz_numeros+(i+10)) );
        }
        
        printf("\n--------------------------------------------------------\n");
        printf("Si quieres regresar al menu introduce 0: ");
        scanf("%d",&op);
    }
    if(op == 0){
        system("clear");
        menu();
    }
    else
        exit(1);
    
}






