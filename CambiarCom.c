    #include<stdio.h>
    #include<string.h>
    #include<stdlib.h>
    #include"estructura.h"

    void cambiar_a_com(struct Tarea tarea[], int numTareas){
        char nombre[30];
        printf("Dime el nombre de la tarea que completaste\n");
        scanf(" %[^\n]",nombre);

        for(int i = 0; i < numTareas; i++){             //SI I ES MENOR QUE EL NUMERO DE TAREAS SE REPETIRA

            if (strcmp(tarea[i].nombre, nombre) == 0) { //USAMOS STRCMP PARA HACER UNA COMPRACION ENTRE CADENAS DE LOS NOMBRE PARA VER SI SON IGUALES
            tarea[i].completada = 1;                   //CAMBIA SU ESTADO A COMPLETA CON EL 1

            printf("Listo ya esta completada\n");
            return;                                 //SALIMOS
            }

        }

        printf("No encontre la Tarea, escribela bien\n");

    }
