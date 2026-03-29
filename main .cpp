#include <iostream>
#include <string>

using namespace std;

int main() {
    string nombre;
    double num1, num2;
    int opcion;
    char continuar, mismosDatos;

    // 1. Solicitar nombre (una sola vez)
    cout << "Ingresa tu nombre: ";
    getline(cin, nombre);

    do {
        // 2. Ingreso de valores iniciales
        cout << "\nEscribe el primer numero: ";
        cin >> num1;
        cout << "Escribe el segundo numero: ";
        cin >> num2;

        do {
            // 3. Menú de opciones
            cout << "\nHola " << nombre << ", elige una opcion:" << endl;
            cout << "\n--- MENU DE OPERACIONES ---" << endl;
            cout << "1. Suma" << endl;
            cout << "2. Resta" << endl;
            cout << "3. Multiplicacion" << endl;
            cout << "4. Division" << endl;
            cout << "5. Todas a la vez" << endl;
            cout << "Elige una opcion: ";
            cin >> opcion;

            cout << "\n";

            // 4. Procesamiento de la opción elegida
            switch (opcion) {
                case 1:
                    cout << "La suma es: " << num1 + num2 << endl;
                    break;
                case 2:
                    cout << "La resta es: " << num1 - num2 << endl;
                    break;
                case 3:
                    cout << "La multiplicacion es: " << num1 * num2 << endl;
                    break;
                case 4:
                    if (num2 != 0) cout << "La division es: " << num1 / num2 << endl;
                    else cout << "La division es: Error (division por cero)" << endl;
                    break;
                case 5:
                    cout << "\n Hola " << nombre <<"  La suma es: " << num1 + num2 << endl;
                    cout << "\n Hola " << nombre <<"  La resta es: " << num1 - num2 << endl;
                    cout << "\n Hola " << nombre <<"  La multiplicacion es: " << num1 * num2 << endl;
                    if (num2 != 0) cout << "\nHola " << nombre <<"  La division es: " << num1 / num2 << endl;
                    else cout << "La division es: Error (division por cero)" << endl;
                    break;
                default:
                    cout << "Opcion no valida." << endl;
            }

            // 5. Preguntar si desea continuar y con qué datos
            cout << "\n" << nombre << ", ¿deseas realizar otra operacion? (s/n): ";
            cin >> continuar;

            if (continuar == 's' || continuar == 'S') {
                cout << "¿Deseas usar los mismos numeros (" << num1 << " y " << num2 << ")? (s/n): ";
                cin >> mismosDatos;
            } else {
                mismosDatos = 'n'; // Para salir del ciclo interno si decide no continuar
            }

        } while ((continuar == 's' || continuar == 'S') && (mismosDatos == 's' || mismosDatos == 'S'));

    } while (continuar == 's' || continuar == 'S');

    cout << "\nPrograma finalizado. ¡Que tengas un excelente dia!" << endl;

    return 0;
}