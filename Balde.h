#ifndef BALDE_H
#define BALDE_H
#include <iostream>
#include<string>

using namespace std;

class Balde
{
    public:
        Balde(int M, int B);
        ~Balde();
        int Busca (string chave);
        void Insere (string chave);
        int Getd ();
        void Aumentad();
        void Diminuid();
        void PrintaBalde();
        void GetEntradas(string* copia);


    private:
        int tam, d, contador;
        string * entradas;
};

#endif // BALDE_H
