#include <iostream>

using namespace std;

int main() {
    int arreglo[] = {64, 25, 12, 22, 11, 34, 10, 2, 45, 65};
    int n = sizeof(arreglo) / sizeof(arreglo[0]);

    cout << "Arreglo original: ";
    for (int i = 0; i < n; i++) {
        cout << arreglo[i] << " ";
    }
    cout<<endl;

    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arreglo[j] > arreglo[j + 1]) {
                int temp = arreglo[j];
                arreglo[j] = arreglo[j+1];
                arreglo[j+1] = temp;
                
            }
        }
    }
    
    cout << "Arreglo ordenado de forma ascendente: ";
    for (int i = 0; i < n; i++) {
        cout << arreglo[i] << " ";
    }
    
    return 0;
}

