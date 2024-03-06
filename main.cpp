#include <iostream>
#include "pila.hpp"
#include "constancia.hpp"

int main() {
    pila<constancia, 5> miPilaCola;

    int opcion;
    do {
        system("cls");
        cout << "----- MENU -----" << endl;
        cout << "1. Enqueu" << endl;
        cout << "2. Dequeu" << endl;
        cout << "3. Salir" << endl;
        cout << "Ingrese su opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                {
                     if (miPilaCola.Llena()) {
                        cout << "La cola esta llena." << endl;
                        break;
                    } else {
                        string nombreAlumno;
                        cout << "Ingresa el nombre del alumno para agendar la constancia: ";
                        cin.ignore();
                        getline(cin, nombreAlumno);
                        miPilaCola.enqueu(constancia(nombreAlumno));
                    }
                }
                break;
            case 2:
            {
                if (miPilaCola.Vacia()) {
                        cout << "No hay mas constancias en cola." << endl;
                        break;
                    } else {
                        miPilaCola.bot();
                        miPilaCola.dequeu();
                    }
            }
                break;
            case 3:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opción no válida. Por favor, ingrese una opción válida." << endl;
                break;
        }
        system("PAUSE");
    } while (opcion != 3);

    return 0;
}
