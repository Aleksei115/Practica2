void mostrarProductosAdquiridos();
void eliminarProductosAdquiridos(int);
void regresar(int);                            //para eliminar declaracion implicita




void eliminar(){

    system("clear");

    int num_opcion, cantidad;

    mostrarProductosAdquiridos();

    do
    {

        switch (num_opcion)
        {
            case 0:
                eliminarProductosAdquiridos(num_opcion);
                break;


            case 1:
                eliminarProductosAdquiridos(num_opcion);
                break;


            case 2:
                eliminarProductosAdquiridos(num_opcion);
                break;


            case 3:
                eliminarProductosAdquiridos(num_opcion);
                break;


            case 4:
                eliminarProductosAdquiridos(num_opcion);
                break;

            case 5:
                menu();
                break;

        }
        printf("Introduce la opcion que deseas : ");

    } while (scanf("%d",&num_opcion) == 1 && cantidad >= 0 && num_opcion <= 5);
    
    error();

}




void eliminarProductosAdquiridos(int num_opcion){
    int cantidad;
    

    if (*(numeros+num_opcion+5) == 0){  

        printf("\nNo tiene produtos en carro. Introduzca 6 para regresar: ");

        if(scanf("%d",&num_opcion) != 1 || num_opcion != 6)
            error();

        system("clear");

        eliminar();
    }
    else{
        printf("\nIntroduce el número de carros que deseas eliminar del carrito: ");

        if (scanf("%d",&cantidad) == 1 && cantidad >= 0 ){
    
            if (cantidad <= *(numeros + num_opcion + 5)){
                *(numeros+num_opcion + 5) -= cantidad;                             //Sumo a carrito 

                *(numeros+num_opcion) += cantidad;       //Resto a la cantidad en stock

                printf("\nSe quito de tu carrito exitosamente!!\n");
                regresar(2);
            }
            else
                eliminar();
        }
        else
            error();
    }   
}



void mostrarProductosAdquiridos(){

    printf("Si quieres regresar al menú introduce 5:");

    printf("\n--------------------------------------------------------\n");

    printf("\t\tAQUI ESTA LO QUE HAS AGREGADO\n\n");
    
    printf("#OPCION \tMARCA    \tEN CARRO\n\n");

    //Imprime opcion,producto y en carro

    for (int i = 0; i < 5; i++)
            printf("%5d %15s %15d\n\n",i,*(productos + i),*(numeros + (i+5) ) );

        
    printf("\n--------------------------------------------------------\n");
}