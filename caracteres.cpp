#include <iostream>
#include <string>

using namespace std;

// Retorna o números de ocorrências do caractere 'c' na string 'str' (com 'n' caracteres).
// Algoritmo deve ser recursivo e sem comandos de repetição.
int contaCaracteres(string str, int n, char c)
{
    if(n < 0){  // ponto de parada
        return 0;
    } else {
        if(str[n] == c){ // se o caractere da string na posição n for igual ao caractere a ser comparado:
            return contaCaracteres(str, n-1, c) + 1; // retorna a função somada com 1 (que servirá como contador)
        } else {                                     // se não for igual, retorna a função mais uma vez, mas sem somar com 1, já que não era igual
            return contaCaracteres(str, n-1, c);
        }
    }
}

int main() 
{
   string palavra;
   getline(cin,palavra);
   char letra;
   cin >> letra;

   cout << contaCaracteres(palavra, palavra.size()-1, letra) << endl;
}