    #include<stdio.h>
    #include<string.h>
    #include<stdlib.h>
    #include"estructura.h"

    void buscar(struct Tarea tarea[], int numTareas, char nombre[], int ayuda){
         if(ayuda >= numTareas){                                //SI AYUDA ES MENOR O IGUAL QUE NUMERO DE TAREAS SIGNIFICA ---
            printf("Tarea no encontrada\n");                    //--- QUE SE REVISARON TODAS LAS TAREAS Y NO SE ENCONTRO CON EL NOMBRE DADO
            return;                                             //SALIMOS DE LA FUNCION
         }

        if (strcmp(tarea[ayuda].nombre, nombre) == 0) {        //SE COMPARAN LAS CADENAS CON EL STRCMP
        printf("Tarea encontrada: %s (%s)\n", tarea[ayuda].nombre, (tarea[ayuda].completada == 0) ? "Pendiente" : "Completada");
            } else {
        buscar(tarea, numTareas, nombre, ayuda + 1);
        }

    }
