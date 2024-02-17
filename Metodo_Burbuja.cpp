#include<iostream>
#include<conio.h>

using namespace std;

int main() {
    int arreglo[] = {24, 2, 19, 26, 9, 4, 20, 11, 5, 22};
    int i, j, aux;
    int comparaciones = 0;
    int intercambios = 0;

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10 - i - 1; j++) {
            comparaciones++;
            if (arreglo[j] > arreglo[j + 1]) {
                intercambios++;
                aux = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = aux;
            }
        }
    }

    cout << "Arreglo en orden Ascendente:";
    for (i = 0; i < 10; i++) {
        cout << arreglo[i] << " ";
    }
    cout << "\nArreglo en orden Descendente: ";
    for(i=9; i>=0; i--){
        cout << arreglo[i] << " ";
    }

    cout << "\nEl numero de comparaciones que tuvo el arreglo es de: " << comparaciones << endl;
    cout << "El numero de intercambios que tuvo el arreglo es de: " << intercambios << endl;

    getch();
}
