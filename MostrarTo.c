    #include<stdio.h>
    #include<string.h>
    #include<stdlib.h>
    #include"estructura.h"

    void mostar_tareas(struct Tarea tarea[], int numTareas){
        printf("Estas son todas las tareas con sus estados\n");

            for (int i = 0; i < numTareas; i++) {   //SI I ES MENOR QUE EL NUMERO DE TAREAS SE REPETIRA
            printf("- %s (%s)\n", tarea[i].nombre, (tarea[i].completada == 0) ? "Pendiente" : "Completada");  //IMPRIME EL NOMBRE DE LA TAREA Y ---
                                                                                                        //--- SU ESTADO DETERMINADO CON EL ?
            }
    }
