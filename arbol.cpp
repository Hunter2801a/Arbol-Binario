#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include <iostream>
#include <vector>
#include <string>

using namespace std;

void PreOrden(const vector<char>& nodos);
void EnOrden(const vector<char>& nodos);
void PostOrden(const vector<char>& nodos);

int main() {
    string palabra = "";
    vector<char> nodos(7, ' ');
    int opcion;

    do {
        cout << "Menu:" << endl;
        cout << "1- Ingresar Palabra o numeros" << endl;
        cout << "2- Imprimir Arbol Prefijo" << endl;
        cout << "3- Imprimir Arbol Sufijo" << endl;
        cout << "4- Imprimir Arbol Postfijo" << endl;
        cout << "5- Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        cin.ignore(); // Ignorar el salto de línea después de la opción

        switch (opcion) {
            case 1:
                // Insertar Palabra
                while (true) {
                    cout << "Ingrese la palabra o el numero: ";
                    getline(cin, palabra);

                    if (palabra.length() > 7) {
                        cout << "La palabra ingresada es mayor a 7. Intente nuevamente." << endl;
                    } else {
                        for (int i = 0; i < 7; i++) {
                            nodos[i] = i < palabra.length() ? palabra[i] : ' ';
                        }
                        break;
                    }
                }
                break;

            case 2:
                // Imprimir Árbol Pre Orden
                cout << "Recorrido Pre-Orden" << endl;
                PreOrden(nodos);
                break;

            case 3:
                // Imprimir Árbol En Orden
                cout << "Recorrido En-Orden" << endl;
                EnOrden(nodos);
                break;

            case 4:
                // Imprimir Árbol Post Orden
                cout << "Recorrido Post-Orden" << endl;
                PostOrden(nodos);
                break;

            case 5:
                // Salir
                cout << "Adios" << endl;
                break;

            default:
                cout << "Debe ingresar un número del menú. Intente nuevamente." << endl;
                break;
        }
    } while (opcion != 5);

    return 0;
}

void PreOrden(const vector<char>& nodos) {
    cout << "                       |" << nodos[0] << "|" << endl;
    cout << "                        |" << endl;
    cout << "                ______/ \\" << endl;
    cout << "               |                 |" << endl;
    cout << "               |                 |" << endl;
    cout << "               |                 |" << endl;
    cout << "              |" << nodos[1] << "|               |" << nodos[4] << "|" << endl;
    cout << "               |                 |" << endl;
    cout << "          ___/ \\___       ___/ \\_" << endl;
    cout << "         |           |     |           |" << endl;
    cout << "         |           |     |           |" << endl;
    cout << "        |" << nodos[2] << "|         |" << nodos[3] << "|   |" << nodos[5] << "|         |" << nodos[6] << "|" << endl;
}

void EnOrden(const vector<char>& nodos) {
    cout << "                       |" << nodos[3] << "|" << endl;
    cout << "                        |" << endl;
    cout << "                ______/ \\" << endl;
    cout << "               |                 |" << endl;
    cout << "               |                 |" << endl;
    cout << "               |                 |" << endl;
    cout << "              |" << nodos[1] << "|               |" << nodos[5] << "|" << endl;
    cout << "               |                 |" << endl;
    cout << "          ___/ \\___       ___/ \\_" << endl;
    cout << "         |           |     |           |" << endl;
    cout << "         |           |     |           |" << endl;
    cout << "        |" << nodos[0] << "|         |" << nodos[2] << "|   |" << nodos[4] << "|         |" << nodos[6] << "|" << endl;
}

void PostOrden(const vector<char>& nodos) {
    cout << "                       |" << nodos[6] << "|" << endl;
    cout << "                        |" << endl;
    cout << "                ______/ \\" << endl;
    cout << "               |                 |" << endl;
    cout << "               |                 |" << endl;
    cout << "               |                 |" << endl;
    cout << "              |" << nodos[2] << "|               |" << nodos[5] << "|" << endl;
    cout << "               |                 |" << endl;
    cout << "          ___/ \\___       ___/ \\_" << endl;
    cout << "         |           |     |           |" << endl;
    cout << "         |           |     |           |" << endl;
    cout << "        |" << nodos[0] << "|         |" << nodos[1] << "|   |" << nodos[3] << "|         |" << nodos[4] << "|" << endl;
}

