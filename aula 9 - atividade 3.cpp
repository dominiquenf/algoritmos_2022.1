// aula 9 - atividade 3
// 3 - Seu professor precisa de ajuda para corrigir as provas objetivas de seus alunos. 
// Ele deseja que você escreva um programa em C++ que receba as respostas das provas de seus alunos 
// e informe quantos acertos cada um deles têm. 
// A prova consta de 15 questões, com alternativas que vão de A a E. 
// Para ajudá-lo, você vai criar um vetor chamado gabarito, que irá conter as respostas da prova. 
// As respostas de cada aluno serão armazenadas no vetor prova. 
// Para cada turma, cuja quantidade de alunos será informada pelo professor, 
// receba o conjunto de respostas de cada aluno, compare-as com o gabarito e informe quantos acertos ele teve.

#include <iostream>
#include <locale>
#include <string>

using namespace std;

int main() 
{
    setlocale(LC_ALL,"ptb");
    
    char gabarito[15], prova[15];
    int ind, qtdAlunos, acertos=0, resp, pos;
    
    cout << "GABARITO" << endl;
    for (ind=0;ind<15;ind++)
    {
        cout << "Digite a resposta da " << ind+1 << "ª resposta: ";
        cin >> gabarito[ind];
    }
    
    cout << "Digite a quantidade de alunos: ";
    cin >> qtdAlunos;
    
    for (ind=0;ind<qtdAlunos;ind++)
    {
        cout << "Respostas da prova do " << ind+1 << "º aluno." << endl;
        for (pos=0;pos<15;pos++)
        {
            cout << "Questão " << pos+1 << ": ";
            cin >> prova[pos];
            if (prova[pos]==gabarito[pos])
            {
                cout << "Resposta correta!" << endl;
                acertos++;
            } else 
            {
                cout << "Resposta errada." << endl;
            }
            
        }
        cout << "O aluno acertou " << acertos << " questões." << endl;        
        acertos=0;
    }
    
    
}