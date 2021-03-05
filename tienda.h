#define _PRUEBA
static char *productos[]= {"BMW ", "AUDI", "CHEVROLET", "MAZDA", "FERRARI"};  //crea un arreglo estatico


/*int numeros[3][5]= {{100, 150, 20, 90, 199},                                //Disponibilidad
                    {550000, 650000, 225000, 350000, 2500000},                           //Precio
                    {0, 0, 0, 0, 0}};                                       //Productos en Carro
*/

int numeros[15]= {100, 150, 20, 90, 199,                                //Disponibilidad
                    550000, 650000, 225000, 350000, 2500000,                           //Precio
                    0, 0, 0, 0, 0};


#ifdef _PRUEBA

    #include <stdio.h>
    #include <string.h>                     //Declaro librerias 
    #include <stdlib.h>

    #include "mostrarProductos.c"
    #include "agregarProductos.c"           //Incluyo los archivos con  las funciones
    #include "eliminarProductos.c"
    #include "mostrarCarrito.c"
    #include "menu.c"
    
    
    void mostrarCarrito(char **, int *);
    void mostrar(char **, int *);
    void agregar(char **, int *);
    void eliminar(char **, int *);
    void menu();
    
    

    //void (*array_funciones[]) (char **, int *) = {mostrar,agregar,};
    
    
    

#endif