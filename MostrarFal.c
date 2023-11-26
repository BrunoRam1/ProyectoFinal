    #include<stdio.h>
    #include<string.h>
    #include<stdlib.h>
    #include"estructura.h"

    void mostrar_pen(struct Tarea tarea[], int numTareas){
        printf("Estas son las tareas Pendientes\n");

        for (int i = 0; i < numTareas; i++) {       //SI I ES MENOR QUE EL NUMERO DE TAREAS SE REPETIRA

            if (tarea[i].completada == 0) {            //SI LA CONDICION DE LA TAREA ESTA EN 0 IMPRIMIRA
                printf("- %s\n", tarea[i].nombre);
            }

        }
    }
