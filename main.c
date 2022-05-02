#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

int main()
{
    int op,op1,op2,op3;
    do
    {
        system("cls");
        printf("TRABAJO PRACTICO PILAS AVANZADAS Y FUNCIONES - RUIZ NICOLAS\n\n");
        printf("1)PILAS AVANZADAS\n");
        printf("2)FUNCIONES CON PILAS\n");
        printf("3)FUNCIONES SIN PILAS (bis)\n");
        printf("4)SALIR\n\n");
        printf("Ingrese una opcion: ");
        scanf("%d",&op);
        switch(op)
        {
        case 1:
            do
            {
                system("cls");
                printf("PILAS AVANZADAS - RUIZ NICOLAS\n\n");
                for(int i=1; i<14; i++)
                {
                    printf("- EJERCICIO %i\n",i);
                }
                printf("\nPresione 0 (cero) para volver atras");

                printf("\n\nIngrese un ejercicio: ");
                scanf("%d",&op1);
                switch(op1)
                {
                case 0:
                    break;
                case 1:
                    system("cls");
                    PilasAvanzadas1();
                    printf("\n\n-----PRESIONE UNA TECLA PARA VOLVER AL MENU ANTERIOR----");
                    getch();
                    break;
                case 2:
                    system("cls");
                    PilasAvanzadas2();
                    printf("\n\n-----PRESIONE UNA TECLA PARA VOLVER AL MENU ANTERIOR----");
                    getch();
                    break;
                case 3:
                    system("cls");
                    PilasAvanzadas3();
                    printf("\n\n-----PRESIONE UNA TECLA PARA VOLVER AL MENU ANTERIOR----");
                    getch();
                    break;
                case 4:
                    system("cls");
                    PilasAvanzadas4();
                    printf("\n\n-----PRESIONE UNA TECLA PARA VOLVER AL MENU ANTERIOR----");
                    getch();
                    break;
                case 5:
                    system("cls");
                    PilasAvanzadas5();
                    printf("\n\n-----PRESIONE UNA TECLA PARA VOLVER AL MENU ANTERIOR----");
                    getch();
                    break;
                case 6:
                    system("cls");
                    PilasAvanzadas6();
                    printf("\n\n-----PRESIONE UNA TECLA PARA VOLVER AL MENU ANTERIOR----");
                    getch();
                    break;
                case 7:
                    system("cls");
                    PilasAvanzadas7();
                    printf("\n\n-----PRESIONE UNA TECLA PARA VOLVER AL MENU ANTERIOR----");
                    getch();
                    break;
                case 8:
                    system("cls");
                    PilasAvanzadas8();
                    printf("\n\n-----PRESIONE UNA TECLA PARA VOLVER AL MENU ANTERIOR----");
                    getch();
                    break;
                case 9:
                    system("cls");
                    PilasAvanzadas9();
                    printf("\n\n-----PRESIONE UNA TECLA PARA VOLVER AL MENU ANTERIOR----");
                    getch();
                    break;
                case 10:
                    system("cls");
                    PilasAvanzadas10();
                    printf("\n\n-----PRESIONE UNA TECLA PARA VOLVER AL MENU ANTERIOR----");
                    getch();
                    break;
                case 11:
                    system("cls");
                    PilasAvanzadas11();
                    printf("\n\n-----PRESIONE UNA TECLA PARA VOLVER AL MENU ANTERIOR----");
                    getch();
                    break;
                case 12:
                    system("cls");
                    PilasAvanzadas12();
                    printf("\n\n-----PRESIONE UNA TECLA PARA VOLVER AL MENU ANTERIOR----");
                    getch();
                    break;
                case 13:
                    system("cls");
                    PilasAvanzadas13();
                    printf("\n\n-----PRESIONE UNA TECLA PARA VOLVER AL MENU ANTERIOR----");
                    getch();
                    break;
                default:
                    system("cls");
                    printf("No existe esa opcion\n\n");
                    system("PAUSE");
                    break;
                }
            }
            while(op1!=0);
            break;
        case 2:
            do
            {
                system("cls");
                printf("FUNCIONES CON PILAS - RUIZ NICOLAS\n\n");
                for(int i=1; i<11; i++)
                {
                    printf("- EJERCICIO %i\n",i);
                }
                printf("\nPresione 0 (cero) para volver atras");

                printf("\n\nIngrese un ejercicio: ");
                scanf("%d",&op2);
                switch(op2)
                {
                case 0:
                    break;
                case 1:
                    system("cls");
                    Funciones1();
                    printf("\n\n-----PRESIONE UNA TECLA PARA VOLVER AL MENU ANTERIOR----");
                    getch();
                    break;
                case 2:
                    system("cls");
                    Funciones2();
                    printf("\n\n-----PRESIONE UNA TECLA PARA VOLVER AL MENU ANTERIOR----");
                    getch();
                    break;
                case 3:
                    system("cls");
                    Funciones3();
                    printf("\n\n-----PRESIONE UNA TECLA PARA VOLVER AL MENU ANTERIOR----");
                    getch();
                    break;
                case 4:
                    system("cls");
                    Funciones4();
                    printf("\n\n-----PRESIONE UNA TECLA PARA VOLVER AL MENU ANTERIOR----");
                    getch();
                    break;
                case 5:
                    system("cls");
                    Funciones5();
                    printf("\n\n-----PRESIONE UNA TECLA PARA VOLVER AL MENU ANTERIOR----");
                    getch();
                    break;
                case 6:
                    system("cls");
                    Funciones6();
                    printf("\n\n-----PRESIONE UNA TECLA PARA VOLVER AL MENU ANTERIOR----");
                    getch();
                    break;
                case 7:
                    system("cls");
                    Funciones7();
                    printf("\n\n-----PRESIONE UNA TECLA PARA VOLVER AL MENU ANTERIOR----");
                    getch();
                    break;
                case 8:
                    system("cls");
                    Funciones8();
                    printf("\n\n-----PRESIONE UNA TECLA PARA VOLVER AL MENU ANTERIOR----");
                    getch();
                    break;
                case 9:
                    system("cls");
                    Funciones9();
                    printf("\n\n-----PRESIONE UNA TECLA PARA VOLVER AL MENU ANTERIOR----");
                    getch();
                    break;
                case 10:
                    system("cls");
                    Funciones10();
                    printf("\n\n-----PRESIONE UNA TECLA PARA VOLVER AL MENU ANTERIOR----");
                    getch();
                    break;
                default:
                    system("cls");
                    printf("No existe esa opcion\n\n");
                    system("PAUSE");
                    break;
                }
            }
            while(op2!=0);
            break;
        case 3:
            do
            {
                system("cls");
                printf("FUNCIONES SIN PILAS (bis) - RUIZ NICOLAS\n\n");
                for(int i=1; i<8; i++)
                {
                    printf("- EJERCICIO %i\n",i);
                }
                printf("\nPresione 0 (cero) para volver atras");

                printf("\n\nIngrese un ejercicio: ");
                scanf("%d",&op3);

                switch(op3)
                {
                case 0:
                    break;
                case 1:
                    system("cls");
                    Funciones1Bis();
                    printf("\n\n-----PRESIONE UNA TECLA PARA VOLVER AL MENU ANTERIOR----");
                    getch();
                    break;
                case 2:
                    system("cls");
                    Funciones2Bis();
                    printf("\n\n-----PRESIONE UNA TECLA PARA VOLVER AL MENU ANTERIOR----");
                    getch();
                    break;
                case 3:
                    system("cls");
                    Funciones3Bis();
                    printf("\n\n-----PRESIONE UNA TECLA PARA VOLVER AL MENU ANTERIOR----");
                    getch();
                    break;
                case 4:
                    system("cls");
                    Funciones4Bis();
                    printf("\n\n-----PRESIONE UNA TECLA PARA VOLVER AL MENU ANTERIOR----");
                    getch();
                    break;
                case 5:
                    system("cls");
                    Funciones5Bis();
                    printf("\n\n-----PRESIONE UNA TECLA PARA VOLVER AL MENU ANTERIOR----");
                    getch();
                    break;
                case 6:
                    system("cls");
                    Funciones6Bis();
                    printf("\n\n-----PRESIONE UNA TECLA PARA VOLVER AL MENU ANTERIOR----");
                    getch();
                    break;
                case 7:
                    system("cls");
                    Funciones7Bis();
                    printf("\n\n-----PRESIONE UNA TECLA PARA VOLVER AL MENU ANTERIOR----");
                    getch();
                    break;
                default:
                    system("cls");
                    printf("No existe esa opcion\n\n");
                    system("PAUSE");
                    break;
                }
            }
            while(op3!=0);
            break;
        case 4:
            break;
        default:
            system("cls");
            printf("No existe esa opcion\n\n");
            system("PAUSE");
            break;
        }
    }
    while(op!=4);
    return 0;
}

void PilasAvanzadas1()
{
    printf("EJERCICIO 1 - TP PILAS AVANZADAS\n\n");
    printf("Sumar los elementos de una pila (usar variables)\n\n");

    Pila p1,aux;
    inicpila(&p1);
    inicpila(&aux);
    char seguir='s';
    int sumaTotal=0;
    do
    {
        leer(&p1);
        printf("Desea seguir ingresando elementos? Presione 's': ");
        fflush(stdin);
        scanf("%c",&seguir);
    }
    while(seguir=='s');

    while(!pilavacia(&p1))
    {
        sumaTotal=sumaTotal+tope(&p1);
        apilar(&aux,desapilar(&p1));
    }

    printf("\nLa suma de todos los elementos es: %i",sumaTotal);
}

void PilasAvanzadas2()
{
    printf("EJERCICIO 2 - TP PILAS AVANZADAS\n\n");
    printf("Contar los elementos de una pila (usar variables)\n\n");
    Pila p1,aux;
    inicpila(&aux);
    inicpila(&p1);
    char seguir='s';
    int contador=0;
    do
    {
        leer(&p1);
        printf("Desea seguir ingresando elementos? Presione 's': ");
        fflush(stdin);
        scanf("%c",&seguir);
    }
    while(seguir=='s');

    mostrar(&p1);

    while(!pilavacia(&p1))
    {
        contador++;
        apilar(&aux,desapilar(&p1));
    }

    printf("Cantidad de elementos de la pila: %i",contador);
}

void PilasAvanzadas3()
{
    printf("EJERCICIO 3 - TP PILAS AVANZADAS.\n\n");
    printf("Calcular el promedio de los valores de una pila (usar variables)\n\n");

    Pila p1,aux;
    char seguir ='s';
    inicpila(&p1);
    inicpila(&aux);
    float prom,suma=0,contador=0;
    do
    {
        leer(&p1);
        printf("Desea seguir ingresando elementos? Presione 's': ");
        fflush(stdin);
        scanf("%c",&seguir);
    }
    while(seguir=='s');

    while(!pilavacia(&p1))
    {
        apilar(&aux,desapilar(&p1));
        suma=suma + tope(&aux);
        contador++;
    }

    prom = suma / contador;

    printf("\nEl promedio de los elementos es: %.2f",prom);
}

void PilasAvanzadas4()
{
    printf("EJERCICIO 4 - TP PILAS AVANZADAS\n\n");
    printf("Encontrar el menor elemento de una pila y guardarlo en otra. (sin variables, solo pilas)\n\n");

    Pila p1,menor,aux;
    inicpila(&p1);
    inicpila(&menor);
    inicpila(&aux);
    srand(time(NULL));

    apilar(&p1,rand()%999);
    apilar(&p1,rand()%999);
    apilar(&p1,rand()%999);
    apilar(&p1,rand()%999);

    printf("Pila Original: ");
    mostrar(&p1);
    apilar(&menor,desapilar(&p1));

    while(!pilavacia(&p1))
    {
        if(tope(&p1)<=tope(&menor))
        {
            apilar(&aux,desapilar(&menor));
            apilar(&menor,desapilar(&p1));
        }
        else
        {
            apilar(&aux,desapilar(&p1));
        }
    }

    while(!pilavacia(&aux))
    {
        apilar(&p1,desapilar(&aux));
    }

    printf("Pila: ");
    mostrar(&p1);
    printf("Pila MENOR: ");
    mostrar(&menor);
}

void PilasAvanzadas5()
{
    printf("EJERCICIO 5 - TP PILAS AVANZADAS\n\n");
    printf("Insertar un elemento en una pila ordenada de menor (tope) a mayor (base) de forma tal que se conserve el orden. (sin variables, solo pilas)\n\n");

    Pila p1,aux,aux2;
    inicpila(&p1);
    inicpila(&aux);
    inicpila(&aux2);

    apilar(&p1,9);
    apilar(&p1,8);
    apilar(&p1,6);
    apilar(&p1,3);
    apilar(&p1,1);

    printf("Pila DADA:");
    mostrar(&p1);
    leer(&aux);

    while(!pilavacia(&aux) && tope(&p1)<tope(&aux))
    {
        apilar(&aux2,desapilar(&p1));
    }

    apilar(&p1,desapilar(&aux));

    while(!pilavacia(&aux2))
    {
        apilar(&p1,desapilar(&aux2));
    }


    printf("Pila ORDENADA:");
    mostrar(&p1);

}

void PilasAvanzadas6()
{
    printf("EJERCICIO 6 - TP PILAS AVANZADAS\n\n");
    printf("Usando lo resuelto en el ejercicio 4, pasar los elementos de una pila a otra de forma tal que la segunda pila quede ordenada de mayor (tope) a menor (base). Esto se llama metodo de ordenacion por seleccion.\n\n");

    Pila dada,menor,ordenada,aux;
    inicpila(&dada);
    inicpila(&menor);
    inicpila(&ordenada);
    inicpila(&aux);
    srand(time(NULL));

    apilar(&dada,rand()%1000);
    apilar(&dada,rand()%1000);
    apilar(&dada,rand()%1000);
    apilar(&dada,rand()%1000);
    apilar(&dada,rand()%1000);

    printf("Pila DADA: ");
    mostrar(&dada);

    while(!pilavacia(&dada))
    {
        apilar(&menor,desapilar(&dada));
        while(!pilavacia(&dada))
        {
            if(tope(&dada)<tope(&menor))
            {
                apilar(&aux,desapilar(&menor));
                apilar(&menor,desapilar(&dada));
            }
            else
            {
                apilar(&aux,desapilar(&dada));
            }
        }

        apilar(&ordenada,desapilar(&menor));

        while(!pilavacia(&aux))
        {
            apilar(&dada,desapilar(&aux));
        }
    }

    printf("Pila Ordenada Ascendente");
    mostrar(&ordenada);
}

void PilasAvanzadas7()
{
    printf("Ejercicio 7 - TP PILAS AVANZADAS\n\n");
    printf("Determinar si un elemento buscado esta dentro de una pila. Al encontrarlo, finalizar la busqueda.\n\n");

    Pila dada,buscado,aux;
    inicpila(&dada);
    inicpila(&buscado);
    inicpila(&aux);
    srand(time(NULL));

    apilar(&dada,rand()%1000);
    apilar(&dada,rand()%1000);
    apilar(&dada,rand()%1000);
    apilar(&dada,rand()%1000);
    apilar(&dada,rand()%1000);

    printf("Pila DADA:");
    mostrar(&dada);

    leer(&buscado);

    while(!pilavacia(&dada)&& tope(&dada)!=tope(&buscado))
    {
        apilar(&aux,desapilar(&dada));
    }

    if(tope(&dada)==tope(&buscado))
        printf("\n\nEl elemento buscado esta dentro de la pila!\n\n");
    else
        printf("\n\nEl elemento buscado no se encuentra en la pila.\n\n");
}

void PilasAvanzadas8()
{
    printf("EJERCICIO 8 - TP PILAS AVANZADAS\n\n");
    printf("Eliminar un elemento de una pila. El eliminarlo, finalizar el recorrido y dejar el resto en el mismo orden.\n\n");

    Pila dada,aux,eliminar,dada2;
    inicpila(&dada);
    inicpila(&aux);
    inicpila(&eliminar);
    inicpila(&dada2);

    srand(time(NULL));

    apilar(&dada,rand()&1000);
    apilar(&dada,rand()&1000);
    apilar(&dada,rand()&1000);
    apilar(&dada,rand()&1000);
    apilar(&dada,rand()&1000);

    printf("Pila DADA:");
    mostrar(&dada);

    leer(&eliminar);

    while(!pilavacia(&dada)&&tope(&dada)!=tope(&eliminar))
    {
        apilar(&aux,desapilar(&dada));
    }

    if(tope(&eliminar)==tope(&dada))
        apilar(&eliminar,desapilar(&dada));
    else
        printf("\nEl elemento que se quiere eliminar no existe.");

    while(!pilavacia(&aux))
    {
        apilar(&dada,desapilar(&aux));
    }
    while(!pilavacia(&dada))
    {
        apilar(&aux,desapilar(&dada));
    }
    while(!pilavacia(&aux))
    {
        apilar(&dada2,desapilar(&aux));
    }

    printf("\n\nPila DADA2:");
    mostrar(&dada2);
}

void PilasAvanzadas9()
{
    printf("EJERCICIO 9 - TP PILAS AVANZADAS\n\n");
    printf("Verificar si una pila DADA es capicua.\n\n");
    Pila dada,aux,copia,auxdada,auxcopia;
    inicpila(&auxdada);
    inicpila(&auxcopia);
    inicpila(&dada);
    inicpila(&aux);
    inicpila(&copia);
    int control=0;

    leer(&dada);
    leer(&dada);
    leer(&dada);
    leer(&dada);
    leer(&dada);

    while(!pilavacia(&dada))
    {
        control=tope(&dada);
        apilar(&copia,control);
        apilar(&aux,desapilar(&dada));
    }

    while(!pilavacia(&aux))
    {
        apilar(&dada,desapilar(&aux));
    }

    printf("\nPila DADA:");
    mostrar(&dada);

    printf("Pila DADA INVERTIDA:");
    mostrar(&copia);

    while(!pilavacia(&dada)&&!pilavacia(&copia)&&tope(&dada)==tope(&copia))
    {
        apilar(&auxdada,desapilar(&dada));
        apilar(&auxcopia,desapilar(&copia));
    }

    if(pilavacia(&dada)&&pilavacia(&copia))
        printf("La pila DADA es capicua!\n");
    else
        printf("La pila DADA no es capicua\n");
}

void PilasAvanzadas10()
{
    printf("EJERCICIO 10 - TP PILAS AVANZADAS\n\n");
    printf("Dadas dos pilas A y B que simulan conjuntos (cada conjunto no tiene elementos repetidos sobre si mismo), realizar un programa que calcule en la pila C la operacion de union.\n");
    printf("A : base 1 2 3  tope\n");
    printf("B: base 2 3 5 7 tope\n");
    printf("Pila AUB = base 3 2 1 7 5 tope\n\n");

    Pila pA,pB,pC,aux;
    inicpila(&pA);
    inicpila(&pB);
    inicpila(&pC);
    inicpila(&aux);

    apilar(&pA,1);
    apilar(&pA,2);
    apilar(&pA,3);

    apilar(&pB,2);
    apilar(&pB,3);
    apilar(&pB,5);
    apilar(&pB,7);

    printf("Pila A:");
    mostrar(&pA);
    printf("\Pila B:");
    mostrar(&pB);


    while(!pilavacia(&pB)&&!pilavacia(&pA))
    {
        if(tope(&pA)==tope(&pB))
        {
            apilar(&aux,desapilar(&pB));
            apilar(&aux,desapilar(&pA));
        }
        else
            apilar(&pC,desapilar(&pB));
    }

    apilar(&pC,desapilar(&pA));

    while(!pilavacia(&aux))
    {
        apilar(&pC,desapilar(&aux));
        apilar(&pA,desapilar(&aux));
    }

    printf("Pila A U B: ");
    mostrar(&pC);
}

void PilasAvanzadas11()
{
    printf("EJERCICIO 11 - TP PILAS AVANZADAS\n\n");
    printf("Intercalar dos pilas ordenadas en forma creciente (ORDENADA1 y ORDENADA2) dejando el resultado en una pila también ordenada en forma creciente (ORDENADAFINAL).\n\n");

    Pila ord1,ord2,ordFinal,aux;
    inicpila(&aux);
    inicpila(&ord1);
    inicpila(&ord2);
    inicpila(&ordFinal);

    apilar(&ord1,2);
    apilar(&ord1,4);
    apilar(&ord1,6);
    apilar(&ord1,8);
    apilar(&ord1,10);

    apilar(&ord2,1);
    apilar(&ord2,3);
    apilar(&ord2,5);
    apilar(&ord2,7);
    apilar(&ord2,9);

    printf("Pila ORDENADA 1:");
    mostrar(&ord1);

    printf("\nPila ORDENADA 2:");
    mostrar(&ord2);

    while(!pilavacia(&ord1)&&!pilavacia(&ord2))
    {
        if(tope(&ord1)<tope(&ord2))
        {
            apilar(&aux,desapilar(&ord2));
            apilar(&aux,desapilar(&ord1));
        }
        else
        {
            apilar(&aux,desapilar(&ord1));
            apilar(&aux,desapilar(&ord2));
        }
    }

    while(!pilavacia(&aux))
    {
        apilar(&ordFinal,desapilar(&aux));
    }
    printf("\n\nPila ORDENADA FINAL:");
    mostrar(&ordFinal);
}

void PilasAvanzadas12()
{
    printf("EJERCICIO 12 - TP PILAS AVANZADAS\n\n");
    printf("Dada la pila ORIGEN ordenarla en forma ascendente por metodo de insercion dejando el resultado en la pila ORIGEN. Para este ejercicio usar lo aprendido para el ejercicio 5.\n\n");

    Pila origen,aux,ord;
    inicpila(&origen);
    inicpila(&ord);
    inicpila(&aux);

    srand(time(NULL));

    apilar(&origen,rand()%1000);
    apilar(&origen,rand()%1000);
    apilar(&origen,rand()%1000);
    apilar(&origen,rand()%1000);
    apilar(&origen,rand()%1000);

    printf("Pila ORIGEN:");
    mostrar(&origen);

    while(!pilavacia(&origen))
    {
        while(!pilavacia(&ord)&&tope(&ord)<tope(&origen))
        {
            apilar(&aux,desapilar(&ord));
        }

        apilar(&ord,desapilar(&origen));

        while(!pilavacia(&aux))
        {
            apilar(&ord,desapilar(&aux));
        }

    }

    while(!pilavacia(&ord))
    {
        apilar(&origen,desapilar(&ord));
    }

    printf("Pila ORIGEN ORDENADA:");
    mostrar(&origen);
}

void PilasAvanzadas13()
{
    printf("EJERCICIO 13 - TP PILAS AVANZADAS\n\n");

    Pila jugador1,jugador2,mazo,pj1,pj2,aux;
    inicpila(&jugador1);
    inicpila(&jugador2);
    inicpila(&mazo);
    inicpila(&pj1);
    inicpila(&pj2);
    inicpila(&aux);

    srand(time(NULL));

    for(int i=0; i<16; i++)
    {
        apilar(&mazo,rand()&13);
    }

    printf("Pila MAZO:");
    mostrar(&mazo);

    while(!pilavacia(&mazo))
    {
        apilar(&jugador1,desapilar(&mazo));
        apilar(&jugador1,desapilar(&mazo));

        apilar(&jugador2,desapilar(&mazo));
        apilar(&jugador2,desapilar(&mazo));
    }
    printf("Mazo JUGADOR1");
    mostrar(&jugador1);
    printf("Mazo JUGADOR2");
    mostrar(&jugador2);

    int pnj1=0;
    int pnj2=0;

    while(!pilavacia(&jugador1)&&!pilavacia(&jugador2))
    {
        pnj1=pnj1 + tope(&jugador1);
        pnj2=pnj2 + tope(&jugador2);

        apilar(&aux,desapilar(&jugador1));
        apilar(&aux,desapilar(&jugador2));
    }

    if(pnj1>=pnj2)
    {
        while(!pilavacia(&aux))
        {
            apilar(&pj1,desapilar(&aux));
        }
    }
    else
    {
        while(!pilavacia(&aux))
        {
            apilar(&pj2,desapilar(&aux));
        }
    }

    printf("\nPila puntos del jugador 1: %d",pnj1);
    printf("\nPila puntos del jugador 2: %d\n",pnj2);
}

void cargarPila(Pila *pilita)
{
    char seguir;
    do
    {
        leer(pilita);
        printf("Desea seguir ingresando elementos? Presione 's': ");
        fflush(stdin);
        scanf("%c",&seguir);
        printf("\n");
    }
    while(seguir=='s');
}

void pasarPilaAOtra(Pila *pilita, Pila *pilota)
{
    while(!pilavacia(pilita))
    {
        apilar(pilota,desapilar(pilita));
    }
}

void pasarPilaMismoOrden(Pila *pilita, Pila *pilota)
{
    Pila aux;
    inicpila(&aux);
    while(!pilavacia(pilita))
    {
        apilar(&aux,desapilar(pilita));
    }
    while(!pilavacia(&aux))
    {
        apilar(pilota,desapilar(&aux));
    }
}

int busquedaMenor(Pila *pilita)
{
    Pila aux,menor;

    inicpila(&menor);
    inicpila(&aux);

    while(!pilavacia(pilita))
    {
        apilar(&menor,desapilar(pilita));

        while(!pilavacia(pilita))
        {
            if(tope(pilita)<tope(&menor))
            {
                apilar(&aux,desapilar(&menor));
                apilar(&menor,desapilar(pilita));
            }
            else
            {
                apilar(&aux,desapilar(pilita));
            }
        }

        int menorr=tope(&menor);

        while(!pilavacia(&aux))
        {
            apilar(pilita,desapilar(&aux));
        }

        return menorr;
    }
}

void Seleccion(Pila *origen,Pila *destino)
{
    Pila aux,menor;
    inicpila(&aux);
    inicpila(&menor);

    while(!pilavacia(origen))
    {
        apilar(&menor,desapilar(origen));

        while(!pilavacia(origen))
        {
            if(tope(origen)<tope(&menor))
            {
                apilar(&aux,desapilar(&menor));
                apilar(&menor,desapilar(origen));
            }
            else
            {
                apilar(&aux,desapilar(origen));
            }
        }
        while(!pilavacia(&aux))
        {
            apilar(origen,desapilar(&aux));
        }

        apilar(destino,desapilar(&menor));
    }
}

void insertarElemento(Pila *pilita)
{
    Pila nuevoElemento,aux;
    inicpila(&nuevoElemento);
    inicpila(&aux);
    leer(&nuevoElemento);

    while(!pilavacia(pilita)&&tope(pilita)>tope(&nuevoElemento))
    {
        apilar(&aux,desapilar(pilita));
    }

    apilar(pilita,desapilar(&nuevoElemento));

    while(!pilavacia(&aux))
    {
        apilar(pilita,desapilar(&aux));
    }
}

void Incersion(Pila *origen,Pila *destino)
{
    Pila aux;
    inicpila(&aux);

    while(!pilavacia(origen))
    {
        while(!pilavacia(destino)&&tope(destino)>tope(origen))
        {
            apilar(&aux,desapilar(destino));
        }


        apilar(destino,desapilar(origen));

        while(!pilavacia(&aux))
        {
            apilar(destino,desapilar(&aux));
        }
    }
}

int sumadosElementos(Pila*pilita)
{
    int suma=0;
    Pila aux;
    inicpila(&aux);

    for(int i=0; i<2; i++)
    {
        suma=suma + tope(pilita);
        apilar(&aux,desapilar(pilita));
    }

    while(!pilavacia(&aux))
    {
        apilar(pilita,desapilar(&aux));
    }

    return suma;

}

int suma(Pila pilita)
{
    int sum=0;
    while(!pilavacia(&pilita))
    {
        sum = sum + tope(&pilita);
        desapilar(&pilita);
    }

    return sum;
}

int cantidadElementos(Pila pilita)
{
    int acumulador=0;
    while(!pilavacia(&pilita))
    {
        acumulador++;
        desapilar(&pilita);
    }
    return acumulador;
}

int division (int n1, int n2)
{
    int division=0;
    division=n1/n2;

    return division;
}

int promedio(Pila pilita)
{
    int sum=suma(pilita);
    int cant=cantidadElementos(pilita);
    int div=division(sum,cant);

    return div;
}

void cargarElementosUnDigito(Pila *pilita)
{
    char s='s';
    int n;
    do
    {
        printf("Cargue pila con elemento de un digito: \n");
        scanf("%i",&n);
        if(n>=0 && n<=9)
            apilar(pilita,n);
        else
            printf("El numero no es de un digito o no es positivo.\n");

        printf("Desea continuar cargando? Presione 's':");
        fflush(stdin);
        scanf("%c",&s);
    }
    while(s=='s');
}

int pasarADigito(Pila pilita)
{
    int suma=0;
    int digito;
    double potencia= cantidadElementos(pilita);

    double elevado= pow(10,potencia);

    while(!pilavacia(&pilita))
    {
        digito=tope(&pilita)*elevado;
        elevado=elevado/10;
        suma=suma+digito;

        desapilar(&pilita);
    }
    suma=suma/10;

    return suma;

}

void Funciones1()
{
    printf("EJERCICIO 1 - TP FUNCIONES\n\n");
    printf("Hacer una funcion que permita ingresar varios elementos a una pila, tanto como quiera el usuario.\n\n");
    Pila p1;
    inicpila(&p1);
    cargarPila(&p1);
}

void Funciones2()
{
    printf("EJERCICIO 2 - TP FUNCIONES\n\n");
    printf("Hacer una funcion que pase todos los elementos de una pila a otra.\n\n");
    Pila origen, destino;
    inicpila(&origen);
    inicpila(&destino);

    cargarPila(&origen);
    printf("Pila ORIGEN:");
    mostrar(&origen);

    pasarPilaAOtra(&origen,&destino);
    printf("Pila DESTINO:");
    mostrar(&destino);
}

void Funciones3()
{
    printf("EJERCICIO 3 - TP FUNCIONES\n\n");
    printf("Hacer una funcio n que pase todos los elementos de una pila a otra, pero conservando el orden.\n\n");
    Pila origen, destino;
    inicpila(&origen);
    inicpila(&destino);

    cargarPila(&origen);
    printf("Pila ORIGEN");
    mostrar(&origen);

    pasarPilaMismoOrden(&origen,&destino);
    printf("Pila DESTINO");
    mostrar(&destino);
}

void Funciones4()
{
    printf("EJERCICIO 4 - TP FUNCIONES\n\n");
    printf("Hacer una funcion que encuentre el menor elemento de una pila y lo retorna. La misma debe eliminar ese dato de la pila.\n\n");
    Pila origen;
    inicpila(&origen);

    cargarPila(&origen);
    printf("Pila ORIGEN:");
    mostrar(&origen);

    int menor=busquedaMenor(&origen);
    printf("El elemento menor de la pila ORGIEN es:  %d",menor);
    printf("\nPila ORIGEN sin Menor:");
    mostrar(&origen);
}

void Funciones5()
{
    printf("EJERCICIO 5 - TP FUNCIONES\n\n");
    printf("Hacer una funcion que pase los elementos de una pila a otra, de manera que se genere una nueva pila ordenada. Usar la funcion del ejercicio 4. (Ordenamiento por seleccion)\n\n");
    Pila p1,ordenada;
    inicpila(&p1);
    inicpila(&ordenada);

    cargarPila(&p1);
    printf("Pila ORIGEN:");
    mostrar(&p1);

    Seleccion(&p1,&ordenada);
    printf("Pila ORDENADA:");
    mostrar(&ordenada);
    return 0;
}

void Funciones6()
{
    printf("EJERCICIO 6 - TP FUNCIONES\n\n");
    printf("Hacer una funcion que inserta en una pila ordenada un nuevo elemento, conservando el orden de esta.\n\n");
    Pila ordenada;
    inicpila(&ordenada);
    apilar(&ordenada,2);
    apilar(&ordenada,8);
    apilar(&ordenada,11);
    apilar(&ordenada,13);
    apilar(&ordenada,15);
    apilar(&ordenada,20);

    printf("Pila ORDENADA:");
    mostrar(&ordenada);

    insertarElemento(&ordenada);
    printf("\n\nPila ORDENADA con elemento nuevo:");
    mostrar(&ordenada);
}

void Funciones7()
{
    printf("EJERCICIO 7 - TP FUNCIONES\n\n");
    printf("Hacer una funcion que pase los elementos de una pila a otra, de manera que se genere una nueva pila ordenada. Usar la funcion del ejercicio 6.  (Ordenamiento por insercion)\n\n");

    Pila origen, destino;
    inicpila(&origen);
    inicpila(&destino);

    cargarPila(&origen);
    printf("Pila ORIGEN");
    mostrar(&origen);

    Incersion(&origen,&destino);
    printf("Pila DESTINO:");
    mostrar(&destino);
}

void Funciones8()
{
    printf("EJERCICIO 8 - TP FUNCIONES\n\n");
    printf("Hacer una funcion que sume y retorne los dos primeros elementos de una pila (tope y anterior), sin alterar su contenido.\n\n");

    Pila p1;
    inicpila(&p1);

    cargarPila(&p1);
    mostrar(&p1);

    int suma=sumadosElementos(&p1);
    printf("La suma de los dos primero elementos de una pila son: %d",suma);
    printf("\n\n");
    return 0;
}

void Funciones9()
{
    printf("EJERCICIO 9 - TP FUNCIONES\n\n");
    printf("Hacer una funcion que calcule el promedio de los elementos de una pila, para ello hacer también una funcion que calcule la suma, otra para la cuenta y otra que divida. En total son cuatro funciones, y la funcion que calcula el promedio invoca a las otras 3.\n\n");
    Pila p1;
    inicpila(&p1);

    cargarPila(&p1);
    mostrar(&p1);

    int prom=promedio(p1);
    printf("El promedio de la pila es: %d",prom);
}

void Funciones10()
{
    printf("EJERCICIO 10 - TP FUNCIONES\n\n");
    printf("Hacer una funcion que reciba una pila con números de un solo digito (es responsabilidad de quien usa el programa) y que transforme esos dígitos en un numero decimal.\n\n");
    Pila dada;
    inicpila(&dada);
    cargarElementosUnDigito(&dada);
    mostrar(&dada);

    int digitos=pasarADigito(dada);
    printf("Pila en numero decimal: %d",digitos);
}

int valorRandom()
{
    srand(time(NULL));
    int valor=rand()%100;
    return valor;
}

void Funciones1Bis()
{
    printf("EJERCICIO 1 - TP FUNCIONES BIS\n\n");
    printf("Desarrollar una función que devuelva un valor RANDOM en el rango de 0 a 100.\n\n");
    int random=valorRandom();
    printf("El valor RANDOM es %d",random);
}

void Funciones2Bis()
{
    printf("EJERCICIO 2 - TP FUNCIONES BIS\n\n");
    printf("Disenie una funcion que reciba 3 numeros enteros y muestre el mayor y el menor.\n\n");
    int n1,n2,n3;
    printf("Ingrese 3 numero: \n");
    scanf("%i",&n1);
    scanf("%i",&n2);
    scanf("%i",&n3);

    if(n1>=n2 && n1>=n3)
    {
        printf("El numero mayor es el: %d\n",n1);
        if(n2<n3)
            printf("El numero menor es el: %d",n2);
        else
            printf("El numero menor es el: %d",n3);

    }

    else
    {
        if(n2>=n1 && n2>=n3)
        {
            printf("El numero mayor es el: %d\n",n2);
            if(n1<=n3)
                printf("El numero menor es el: %d",n1);
            else
                printf("El numero menor es el: %d",n3);
        }
        else
        {
            if(n3>=n1 && n3>=n2)
            {
                printf("El numero mayor es el: %d\n",n3);
                if(n1<=n2)
                    printf("El numero menor es el: %d",n1);
                else
                    printf("El numero menor es el: %d",n2);
            }
        }
    }
}

void Funciones3Bis()
{
    printf("EJERCICIO 3 - TP FUNCIONES BIS\n\n");
    printf("Diseñe una función que reciba un número entero N y realice la suma de los números enteros positivos menores que N y lo retorne. N es un  dato ingresado por el usuario en el main.\n\n");
    int n;
    printf("Ingrese un numero: ");
    scanf("%d",&n);
    int suma = sumaNumMenoresAN(n);
    printf("\nLa suma de los numeros anteriores a N es: %d",suma);
}


int sumaNumMenoresAN(int n)
{
    int suma=0;
    for(int i=0; i<n; i++)
    {
        suma = suma + i;
    }
    return suma;
}

void Funciones4Bis()
{
    printf("EJERCICIO 4 - TP FUNCIONES BIS\n\n");
    printf("Desarrollar una funcion que muestre la tabla de multiplicar de un numero entero recibido por parametro.\n\n");
    int num;
    printf("Ingrese un numero: ");
    scanf("%d",&num);
    TablaMultiplicar(num);
}

void TablaMultiplicar(int n)
{
    int resultado;
    for(int i=1; i<=10; i++)
    {
        resultado= n*i;
        printf("%d x %d = %d\n",n,i,resultado);
    }
}

void Funciones5Bis()
{
    printf("EJERCICIO 5 -TP FUNCIONES BIS\n\n");
    printf("Realice una pequeña calculadora, utilizando funciones (una función de suma, una de multiplicación, una de resta, una de división…)\n\n");
    int e;
    do
    {
        system("cls");
        printf("CALCULADORA\n\n");
        printf("1) SUMAR\n");
        printf("2) RESTAR\n");
        printf("3) MULTIPLICAR\n");
        printf("4) DIVIDIR\n");
        printf("5) SALIR\n\n");
        printf("Ingrese la operacion: ");
        scanf("%d",&e);
        switch(e)
        {
        case 1:
            system("cls");
            sumaCalculadora();
            printf("\n\nPresione ENTER para continuar");
            getch();
            break;
        case 2:
            system("cls");
            restaCalculadora();
            printf("\n\nPresione ENTER para continuar");
            getch();
            break;
        case 3:
            system("cls");
            multiCalculadora();
            printf("\n\nPresione ENTER para continuar");
            getch();
            break;
        case 4:
            system("cls");
            diviCalculadora();
            printf("\n\nPresione ENTER para continuar");
            getch();
            break;
        case 5:
            break;
        }
    }
    while(e!=5);
}

void sumaCalculadora()
{
    int n1,n2,resultado;
    printf("Ingrese dos numero:\n");
    scanf("%d",&n1);
    scanf("%d",&n2);
    resultado=n1+n2;
    printf("%d + %d = %d",n1,n2,resultado);

}

void restaCalculadora()
{
    int n1,n2,resultado;
    printf("Ingrese dos numero:\n");
    scanf("%d",&n1);
    scanf("%d",&n2);
    resultado=n1-n2;
    printf("%d - %d = %d",n1,n2,resultado);
}

void multiCalculadora()
{
    int n1,n2,resultado;
    printf("Ingrese dos numero:\n");
    scanf("%d",&n1);
    scanf("%d",&n2);
    resultado=n1*n2;
    printf("%d x %d = %d",n1,n2,resultado);
}

void diviCalculadora()
{
    int n1,n2,resultado;
    printf("Ingrese dos numero:\n");
    scanf("%d",&n1);
    scanf("%d",&n2);
    resultado=n1/n2;
    printf("%d / %d = %d",n1,n2,resultado);
}

void Funciones6Bis()
{
    printf("EJERCICIO 6 - TP FUNCIONES BIS\n\n");
    printf("Realizar una funcion que reciba un numero positivo entero por parametro por referencia, y cambie su signo a negativo.\n\n");

    int num;
    printf("Ingrese un numero positivo: ");
    scanf("%i",&num);

    int negativo = positivoAnegativo(num);
    printf("\nEl numero positivo a negativo es: %i",num);
}

int positivoAnegativo(int n)
{
    int resultado;
    resultado= n * (-1);
    return resultado;
}

void Funciones7Bis()
{
    printf("EJERCICIO 7 - TP FUNCIONES BIS\n\n");

    printf("Realizar una funcion que reciba dos números enteros por parametro por referencia y cargue sus valores el usuario dentro de la funcion.\n\n");

    int n1,n2;
    printf("Ingrese primer numero: ");
    scanf("%i",&n1);
    printf("Ingrese segundo numero: ");
    scanf("%i",&n2);
    printf("Los valores ingresados son %i y %i", n1, n2);

}



