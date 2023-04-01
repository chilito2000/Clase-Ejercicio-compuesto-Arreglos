#include <iostream>

using namespace std;
int main() {
    int opc;
    cout<<"1.RA OPERACION: SUMA DE 1O POSICIONES "<<endl;
    cout<<"2.DA OPERACION: ENCONTRAR NUMERO MAYOR "<<endl;
    cout<<"3.RA OPERACION: INVERTIR EL ORDEN LOS ELEMENTOS"<<endl;
    cout<<"4.TA OPERACION: SUMA DE 10 POSICIONES INGRESADAS"<<endl;
    cout<<"5.TA OPERACION: CONTAR LAS VECES QUE HAY DE UN ELEMENTO"<<endl;
    cout<<"INGRESE NUMERO DE OPCION:";
    cin>>opc;
    switch (opc) {
        case 1: {
            int arreglo_uno[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10,};
            int suma = 0;
            for (int i = 0; i < 10; i++) {
                suma = suma + arreglo_uno[i];
            }
            cout << "La suma de los numeros es: " << suma << endl;
        }
            break;

        case 2: {
            int arreglo_dos[6] = {84, 2, 8, 4, 5, 166};
            int mayor = 0;
            for (int i = 0; i < arreglo_dos[i]; i++) {
                if (arreglo_dos[i] > mayor) {
                    mayor = arreglo_dos[i];
                }
            }
            cout << "Numeros Mayor es: " << mayor << endl;
        }
            break;

        case 3: {
            int can, i, orden;
            int arreglo_tres[8];
            cout << "Ingrese cantidad para Operar: ";
            cin >> can;
            for (int i = 0; i < can; i++) {
                cout << "Ingrese un valor: ";
                cin >> arreglo_tres[i];
            }
            for (i = 0; i < can / 2; i++) {
                orden = arreglo_tres[i];
                arreglo_tres[i] = arreglo_tres[can - 1 - i];
                arreglo_tres[can - 1 - i] = orden;
            }
            for (i = 0; i < can; i++) {
                cout << i + 1 << " : " << arreglo_tres[i] << endl;
            }
        }
            break;
        case 4: {
            int can,suma=0;
            int arreglo_cuatro[8];
            cout << "Ingrese cantidad para Operar: ";
            cin >> can;
            for (int i = 0; i < can; i++) {
                cout << "Ingrese un valor: ";
                cin >> arreglo_cuatro[i];
            }

            for (int i = 0; i < arreglo_cuatro[i]; i++) {
                suma = suma + arreglo_cuatro[i];
            }
            cout << "La suma de los numeros es: " << suma << endl;
        }
            break;
        case 5: {
            int contador,i;
            string frutas;

            string fruta[] = {"fresa", "sandia", "melon", "fresa", "naranja", "melon", "mango", "naranja", "fresa"};
            contador = 0;
            for (i = 0; i < 9; i++) {
                cout << i + 1 << " frutas: " << fruta[i] << endl;
            }

            cout << "Escriba la fruta que quiere saber cuantas veces se repite: ";
            cin >> frutas;
            for (i = 0; i < 9; i++) {
                if (frutas == fruta[i])
                    contador++;
            }
            cout << "la fruta: " << frutas << " se repite: " << contador << endl;
        }
break;

    }

    return 0;
}