void menu();
void regresar();

void agregar(char **matriz_productos, int *matriz_numeros){

    
    mostrar(productos,numeros);
    //system("clear");

    int num_opcion, cantidad;
    do
    {

        switch (num_opcion)
        {
            case 0:
                printf("\nIntroduce el número de carros que deseas: ");

                if (scanf("%d",&cantidad) == 1){

                    if (cantidad <= *(numeros+num_opcion))
                    {
                        *(numeros+num_opcion+5) = cantidad;                             //Sumo a carrito 

                        *(numeros+num_opcion) = *(numeros+num_opcion) - cantidad;       //Resto a la cantidad en stock

                        printf("\nSe agrego a tu carrito exitosamente!!\n");

                        regresar();
                    }
                    else
                        printf("\nLo sentimos no tenemos en stock\n");
                }
                else
                    exit(1);
                
                break;


            case 1:
                break;


            case 2:
            
                break;


            case 3:
                
                break;


            case 4:

                break;

        }
        printf("Introduce la opcion que deseas: ");

    } while (scanf("%d",&num_opcion) == 1 && num_opcion <= 5);
    

}

void regresar(){
    int pregunta;

    system("clear");
    printf("\nDesea seguir comprando?\n");
    printf("\n1-SI\n");
    printf("\n2-NO\n");

    if(scanf("%d",&pregunta) == 1){

        if (pregunta == 1)
            mostrar(productos,numeros);
        if (pregunta == 2)
            menu();
        
    }
        
        
}