    #include<stdio.h>
    #include<string.h>
    #include<stdlib.h>
    #include"estructura.h"
    #include"agg.h"
    #include"CambiarCom.h"
    #include"MostrarFal.h"
    #include"MostrarTo.h"
    #include"Busca.h"
    #include"Salir.h"

    int main(){
        struct Tarea tarea[100]; //PONE UN ID A LA ESTRUCTURA
        int numTareas = 0;        //INICIALIZA EL NUMERO DE TAREAS EN 0
        int opcion;           //OPCION PARA EL SWITCH

        do{
        printf("        Menu\n");
        printf("1. Agregar Tarea\n2. Cambiar a completado una Tarea\n3. Mostrar Tareas Pendientes\n4. Mostrar Todas las Tareas\n5. Buscar Tarea\n6. Salir\n");
        printf("Que quieres hacer?\n");
        scanf("%d", &opcion);

        system("cls");        //LIMPIA LA PANTALLA

            switch(opcion){
            case 1:
                agg_tarea(tarea,&numTareas);
                break;
            case 2:
                cambiar_a_com(tarea,numTareas);
                break;
            case 3:
                mostrar_pen(tarea,numTareas);
                break;
            case 4:
                mostar_tareas(tarea,numTareas);
                break;
            case 5:{
                char nombre[30];
                printf("Ingrese el nombre a buscar:\n");
                scanf(" %[^\n]", nombre);
                buscar(tarea,numTareas, nombre,0);
                break;
                }
            case 6:
                salir();
                break;
            default:
                printf("No sea menso mijo, dije del 1-6\nElige otra opcion\n\n");
                break;

            }

        }while(opcion !=6);       //REPITE EL PROGRAMA SI "OPCION" ES DIFERENTE DE 6

        return 0;

    }
