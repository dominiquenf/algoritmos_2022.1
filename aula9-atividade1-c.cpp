// Um casal de amigos está brincando de par ou ímpar. 
// A cada uma das 10 jogadas que farão, 
// armazene em um vetor o número escolhido pelo jogador A (que escolheu par), 
// e em um segundo vetor, o número escolhido pelo jogador B (que escolheu ímpar). 
// Também a cada jogada, informe o jogador vencedor. 
// Ao final, informe quantas vezes cada jogador venceu.

#include <iostream>
#include <locale>

using namespace std;

int main ()
{
    setlocale (LC_ALL, "ptb");
    
    int ind, total, jogadorA[10], jogadorB[10], vencA=0, vencB=0;
    
    cout << "Bem vindo ao jogo par ou ímpar." << endl;
    for (ind=0;ind<10;ind++)
    {
        
        cout << ind+1 << "ª jogada." << endl;
        cout << "Número escolhido pelo jogador A: ";
        cin >> jogadorA[ind];
        cout << "Número escolhido pelo jogador B: ";
        cin >> jogadorB[ind];
        total = jogadorA[ind] + jogadorB[ind];
        
        if (total%2==0)
        {
            cout << "Vitória do jogador A." << endl;
            vencA++;
        }
        else 
        {
            cout << "Vitoria do jogador B." << endl;
            vencB++;
        }
    }
        cout << "O jogador A venceu " << vencA << " vezes e o jogador B venceu " << vencB << " vezes." << endl;
}