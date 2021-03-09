void menu();
void regresar(int);                 //para eliminar declaracion implicita
void comprar(int,int);


void agregar(char **matriz_productos, int *matriz_numeros){
    
    int num_opcion  , cantidad;

    fflush(stdin);

    mostrar(productos,numeros);

    printf("Introduce la opcion que deseas: ");
    
    int comprobacion = scanf(" %d",&num_opcion);

    while (comprobacion == 1 && cantidad > 0 && num_opcion <= 5 ){

        switch (num_opcion)
        {
            case 0:
                comprar(num_opcion, cantidad);
                break;


            case 1:
                comprar(num_opcion, cantidad);
                break;


            case 2:
                comprar(num_opcion, cantidad);
                break;


            case 3:
                comprar(num_opcion, cantidad);
                break;


            case 4:
                comprar(num_opcion, cantidad);
                break;
            
            case 5:
                menu(num_opcion, cantidad);
                break;

        }
        printf("Introduce la opcion que deseas: ");
    
    }
    
    error();
}


void comprar(int num_opcion, int cantidad){

    printf("\nIntroduce el número de carros que deseas comprar: ");

    if (scanf("%d",&cantidad) == 1 && cantidad >= 0 ){

        if (cantidad <= *(numeros+num_opcion)){
            *(numeros+num_opcion+5) = cantidad;                             //Sumo a carrito 

             *(numeros+num_opcion) = *(numeros+num_opcion) - cantidad;       //Resto a la cantidad en stock

            printf("\nSe agrego a tu carrito exitosamente!!\n");
            regresar(1);
        }
        else{
            system("clear");
            agregar(productos,numeros);
          
        }
    }
    else
        error();                                                            

}



