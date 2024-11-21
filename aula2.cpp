#include <iostream>

using namespace std;

int main()
{
    int vidas = 0;         // vai receber números inteiros
    char Nomes = 'C';      // Recebe letras
    double decimal = 5.3;  // recebe decimais como 5,9
    float decimal2 = 5.2;  // funciona como um decimal como o double, porém com uma precisão menor.
    bool vivo = true;      // variavel de true = 1 or else = 0
    string Nome = "Lucas"; // recebe um texto completo desde que seja incluido dentro das "", como "lucas"

    cout << "digite o nome da pessoa";
    cin >> Nome;
    cout << "escreva a quantidade de dinheiro";
    cin >> decimal;
    cout << "digite uma letra";
    cin >> Nomes;
    cout << "diga o numero de vidas";
    cin >> vidas;
    cout << "digite se o jogador esta vivo ou morto";
    cin >> vivo;

    cout << vidas << "\n"; // o cout é a impressão do código na tela, tudo oq sair na tela é através dele
    cout << Nomes << "\n";
    cout << decimal << "\n";
    cout << decimal2 << "\n";
    cout << vivo << "\n";
    cout << Nome << "\n" system("pause");
    return 0;
}