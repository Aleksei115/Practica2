void regresar(){
    int pregunta;

    system("clear");
    printf("\nDesea seguir comprando?\n");
    printf("\n1-SI\n");
    printf("\n2-NO\n");

    if(scanf("%d",&pregunta) == 1 && pregunta == 1)
        return
    if(scanf("%d",&pregunta) == 1 && pregunta == 2)
        menu();
}