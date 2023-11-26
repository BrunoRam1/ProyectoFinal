    #include<stdio.h>
    #include<string.h>
    #include<stdlib.h>
    #include"estructura.h"

    void agg_tarea(struct Tarea tarea[], int *numTareas){
        if(*numTareas<100){

            printf("Ingresa el Nombre de tu tarea\n");
            scanf(" %[^\n]", tarea[*numTareas].nombre);     //GUARDAS LA CADENA CON AYUDA DE LA ESTRUCTURA

            tarea[*numTareas].completada = 0;             //INICIALIZAS SU ESTADO EN 0 PARA QUE SEA PENDIENTE
            (*numTareas)++;                            //INCREMENTA EL VALOR DE LA VARIABLE APUNTADA

            printf("Listo una tarea mas para tu esclavitud, Felicidades!\n");
        }else{
            printf("Ya no se pueden agregar tareas pa, dile a tu profe que ya estuvo bueno\n\n");
        }
    }
