#include <iostream>
using namespace std;

main()
{
    int vidas = 0, tiros = 0, life = 0, dedos = 0;

    cout << "me diga quantas vidas existem na sua sala: " << endl;
    cin >> vidas;
    cout << "diga quantas balas uma sniper L115 pode disparar: " << endl;
    cin >> tiros;
    cout << "me diga quanto de hp seu jogador fica após receber um tiro de um .45: " << endl;
    cin >> life;
    cout << "me diga quantos dedos tem o presidente Lula: " << endl;
    cin >> dedos;
    system("pause");
    cout << vidas << "\n";
    cout << tiros << "\n";
    cout << life << "\n";
    cout << dedos << "\n";

    return 0;
}