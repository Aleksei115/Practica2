


void mostrarCarrito(char **matriz_productos, int *matriz_numeros){
    
    printf("Si quieres regresar al menú introduce 5:");

    printf("\n--------------------------------------------------------\n");

    printf("\t\tAQUI ESTA EL CARRITO CON TOTAL\n\n");

    printf("\tMARCA    \tEN CARRO  \tPRECIO\n\n");

    //Imprime opcion,producto, disponibilidad y precio

    for (int i = 0; i < 5; i++){
        
        if (*(matriz_numeros+i+5) == 0)
            i++;
        else
            printf("%15s %15d %15d$\n\n",*(matriz_productos+i),*(matriz_numeros+(i+5)), *(matriz_numeros+(i+10)) );
        

        total = total + (*(matriz_numeros+i+5) * *(matriz_numeros+i+10));
    }
    printf("EL TOTAL DE LA COMPRA: %d", total);

    printf("\n--------------------------------------------------------\n");
    
}