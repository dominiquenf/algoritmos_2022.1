// aula9-atividade1-d
// Você está tentando métodos bastante rudimentares de criptografia para que seus dados fiquem seguros. 
// Em um deles, você recebe os elementos de um vetor de 20 letra e as transfere para outro vetor no qual 
// as letras estarão armazenadas na ordem inversa em que foram recebidas.

#include <iostream>
#include <locale>
#include <string>

using namespace std; 

int main()
{   
    setlocale(LC_ALL,"ptb");
    
    int ind;   
    char vetor1[20], vetor2[20];   
    cout <<"*** Vetor 1 ***\n";   
    for (ind=0;ind<=19;ind++)   
    {     
        cout <<"Informe o "<<ind+1<<"o. elemento: ";     
        cin >>vetor1[ind];     
        vetor2[19-ind]=vetor1[ind];   
        
    }   
        cout <<"*** Vetor 2 ***\n";   
        for (ind=0;ind<=19;ind++)   
        {     
            cout <<"O "<< ind+1 << "o. elemento é: " <<vetor2[ind]<<"\n";   
            
        } 
} 