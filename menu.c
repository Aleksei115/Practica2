//char **matriz_productos, int *matriz_numeros


void menu(){

    printf("\n\t\tBienvenido al Outlet de autom%cviles \nTenemos desde la marca m%cs econ%cmica hasta la que realmente deseas.\n",162,160,162);

    int opcion = 10;
    printf("\nLAS OPCIONES SON: \n\n");
    printf("\t\t1.- Mostrar el cat%clogo de productos.\n",160);
    printf("\t\t2.- Agregar productos a tu carrito de compras.\n");
    printf("\t\t3.- Eliminar productos de tu carrito de compras.\n");
    printf("\t\t4.- Mostrar carrito con el total de tus compras.\n");
    printf("\t\t5.- Salir de nuestro Outlet.\n\n");
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
                eliminar(productos,numeros);
                break;


            case 4:
                mostrarCarrito(productos,numeros);
                break;


            case 5:
                    printf("\nGracias por utilizar nuestro Outlet Virtual!!!\n\n");
                    return;

                break;

        }


        printf("Introduce la opcion que deseas: ");

    } while (scanf("%d", &opcion) == 1 && opcion <= 5);

        printf("\nOpci%cn incorrecta...\n",162);


    
    /*for (int y = 0; y < 5; y++)
    {
        printf("%s\n",*(matriz_productos+y));

        
    }*/
    
    
    

}