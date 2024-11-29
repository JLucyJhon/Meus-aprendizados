#include <iostream>
using namespace std;

int p1, p2; // variáveis locais

int main()
{
    // operadores matemáticos: +, -, /, *, %
    int n1, n2; // variável local.
    int result;
    int res1, res2;

    n1 = 5;
    n2 = 9;
    p1 = 4;
    p2 = 6;

    result = p1 + p2 * n2 / n1;
    res1 = n2 / n1;
    res2 = n2 % n1;

    cout << "o resultado da conta é: " << result << "\n\n";
    cout << "o resultado completo da conta é: " << res1 << "\n";
    cout << "o resto que sobrou então seria: " << res2 << "\n\n";
    return 0;
}
