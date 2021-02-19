#include <iostream>
#include <locale.h>
#include <Windows.h>
#include <string>
#include <algorithm>
#include <cstring>
using namespace std;


int main(void) {
    setlocale(LC_ALL, "portuguese");
    //código
    string textoBase;
    char serSubstituido;
    char paraSubstituir;



    cout << "INSIRA O TEXTO BASE:\n";
    getline(cin, textoBase);


    cout << "INSIRA O CARACTERE A SER SUBSTITUIDO:\n";
    cin >> serSubstituido;


    cout << "INSIRA O CARACTERE PARA SUBSTITUIR:\n";
    cin >> paraSubstituir;


    replace(textoBase.begin(), textoBase.end(), serSubstituido, paraSubstituir);
    cout << textoBase << endl;


    //código
    system("pause>0");
}
