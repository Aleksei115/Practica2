//char **matriz_productos, int *matriz_numeros


void menu(){

    printf("\n\t\tBienvenido al Outlet de automóviles \nTenemos desde la marca más económica hasta la que realmente deseas.\n");

    int opcion = 10;
    printf("\nLAS OPCIONES SON: \n\n");
    printf("\t\t1.- Mostrar el catálogo de productos.\n");
    printf("\t\t2.- Agregar productos a tu carrito de compras.\n");
    printf("\t\t3.- Eliminar productos de tu carrito de compras.\n");
    printf("\t\t4.- Mostrar carrito con el total de tus compras.\n");
    printf("\t\t5.- Salir de nuestro Outlet.\n\n");
    printf("Introduce la opcion que deseas: ");
    do
    {

        

        switch (opcion)
        {
            case 1:
                mostrar(productos,numeros);
                break;


            case 2:
                agregar(productos,numeros);
                break;


            case 3:
                system("clear");
                eliminar(productos,numeros);
                break;


            case 4:
                system("clear");
                mostrarCarrito(productos,numeros);
                break;


            case 5:
                    system("clear");
                    printf("\nGracias por utilizar nuestro Outlet Virtual!!!\n\n");
                    exit(1);
                break;

        }

    } while (scanf("%d", &opcion) == 1 && opcion <= 5 && opcion > 0);

        printf("\nOpción incorrecta...\n");


    
    /*for (int y = 0; y < 5; y++)
    {
        printf("%s\n",*(matriz_productos+y));

        
    }*/
    
    
    

}