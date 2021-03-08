void mostrarProductosAdquiridos(char **, int *);
void eliminarProductosAdquiridos(char **, int *, int);
void regresar(int);                            //para eliminar declaracion implicita




void eliminar(char **matriz_productos, int *matriz_numeros){

    int num_opcion, cantidad;

    mostrarProductosAdquiridos(productos,numeros);

    do
    {

        switch (num_opcion)
        {
            case 0:
                eliminarProductosAdquiridos(productos,numeros,num_opcion);
                break;


            case 1:
                eliminarProductosAdquiridos(productos,numeros,num_opcion);
                break;


            case 2:
                eliminarProductosAdquiridos(productos,numeros,num_opcion);
                break;


            case 3:
                eliminarProductosAdquiridos(productos,numeros,num_opcion);
                break;


            case 4:
                eliminarProductosAdquiridos(productos,numeros,num_opcion);
                break;

            case 5:
                menu();
                break;

        }
        printf("Introduce la opcion que deseas : ");

    } while (scanf("%d",&num_opcion) == 1 && cantidad > 0 && num_opcion <= 5);
    
    error();

}




void eliminarProductosAdquiridos(char **matriz_productos, int *matriz_numeros, int num_opcion){
    int cantidad;
    printf("\nIntroduce el número de carros que deseas eliminar del carrito: ");

    if (scanf("%d",&cantidad) == 1 && cantidad > 0 ){

        if (cantidad <= *(numeros+num_opcion+5)){
            *(numeros+num_opcion+5) =*(numeros+num_opcion+5) - cantidad;                             //Sumo a carrito 

             *(numeros+num_opcion) = *(numeros+num_opcion) + cantidad;       //Resto a la cantidad en stock

            printf("\nSe quito de tu carrito exitosamente!!\n");
            regresar(2);
        }
        else{
            printf("\nLo sentimos no tienes en elementos suficientes en tu carrito...Por favor espera!\n");
            system("sleep 2s && clear");
            eliminar(productos,numeros);
        }
    }
    else
        error();

}



void mostrarProductosAdquiridos(char **matriz_productos, int *matriz_numeros){
    printf("Si quieres regresar al menú introduce 5:");
    printf("\n--------------------------------------------------------\n");

    printf("\t\tAQUI ESTA LO QUE HAS AGREGADO\n\n");
    printf("#OPCION \tMARCA    \tEN CARRO\n\n");

    //Imprime opcion,producto y en carro

    for (int i = 0; i < 5; i++)
        printf("%5d %15s %15d\n\n",i,*(matriz_productos+i),*(matriz_numeros+(i+5)) );
        
    printf("\n--------------------------------------------------------\n");
}