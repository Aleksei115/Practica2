#define _PRUEBA
static char *productos[]= {"BMW", "AUDI", "CHEVROLET", "MAZDA", "FERRARI"};  //crea un arreglo estatico

int numeros[15]= {100, 150, 20, 90, 199,                                //Stock
                    0, 0, 0, 0, 0,                                      //Carrito
                    550000, 650000, 225000, 350000, 2500000};           //Precio
int total = 0;


#ifdef _PRUEBA

    #include <stdio.h>
    #include <string.h>                     //Declaro librerias 
    #include <stdlib.h>

    #include "pagar.c"
    #include "error.c"
    #include "mostrarProductos.c"
    #include "agregarProductos.c"           //Incluyo los archivos con  las funciones
    #include "eliminarProductos.c"
    #include "mostrarCarrito.c"
    #include "menu.c"
    #include "regresar.c"
    

    void pagar(int);
    void error();
    void mostrar();
    void agregar();
    void mostrarCarrito();
    void eliminar();
    void menu();
    void regresar(int);
    
  
#endif