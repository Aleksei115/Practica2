/*void agregar(char **, int *);
void eliminar(char **, int *);
void menu();
void error();*/

int pregunta;


void regresar(int programa){

    system("clear");

    printf("\nDesea seguir comprando/elimando? Pulse 2 para regresar al menú\n\n");
    printf("1-Si\n");
    printf("2-No\n\n");

    printf("Introduce la opcion que deseas: ");
    if(programa == 1){
        if(scanf("%d",&pregunta) == 1){

            if (pregunta == 1){
                system("clear");
                agregar(productos,numeros);
            }
            if (pregunta == 2)
                menu();
            if (pregunta != 1 && pregunta != 2)
                error();
        }
        else
            error();
    }
    else{
        if(scanf("%d",&pregunta) == 1){

            if (pregunta == 1){
                system("clear");
                eliminar(productos,numeros);
            }
            if (pregunta == 2)
                menu();
            if (pregunta != 1 && pregunta != 2)
                error();
        }
        else
            error();
    }    
        
}

