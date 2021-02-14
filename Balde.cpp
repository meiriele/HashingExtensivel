#include "Balde.h"

Balde::Balde(int M, int B)
{
  d = B;
  entradas = new string [M];
  contador = 0;
}

Balde::~Balde()
{
    delete [] entradas;
}

int Balde::Busca (string chave)
{
    if (contador == tam)
        return 0;
    for(int i=0; i<contador; i++)
    {
        if (entradas[i]==chave)
            return 1;
    }
    return -1;
}

void Balde::Insere (string chave)
{
    int busca = Busca(chave);
    if(busca == -1)
    {
        entradas[contador-1]=chave;
        contador++;
    }
}

int Balde::Getd ()
{
    return d;
}

void Balde::Aumentad()
{
    d++;
}

void Balde::Diminuid()
{
    if(d-1 == 0)
        cout<<"ERRO! d=0 "<<endl;
    else
        d--;
}

void Balde::PrintaBalde()
{
    cout<<endl<<"Inicio Balde - dlocal = "<< d<<" :"<<endl;
    for(int i=0; i<contador;i++)
        cout<<entradas[i]<<endl;
    cout<<"Fim Balde"<<endl<<endl;
}

void Balde::GetEntradas(string* copia)
{
    copia = new string [contador];
    for (int i=0; i<contador;i++)
        copia [i]=entradas[i];
}
