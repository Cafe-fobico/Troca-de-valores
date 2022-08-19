#include <iostream>

using namespace std;

int main () {
    setlocale (LC_ALL, "Portuguese");

    int VA=2;
    int VB=1;
    int VC=3;

    cout << "Dois valores de variaveis que no processo final serao invertidos"
    cout << "digite o valor da primeira variavel: ";
    cin >> VA;
    cout << "digite o valor da segunda variavel: ";
    cin >> VB;

    VC = VA;
    VA = VB;
    VB = VC;

    cout << "A primeira variavel agora vale: " << VA <<"\n";
    cout << "E a segunda variavel vale: " << VB <<"\n";

    return 0;
}
