#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include "Balde.h"
#include "Diretorio.h"

using namespace std;

/* Print usage menu */

void menu()
{
    cout<< endl << endl << "MENU"<< endl;
    cout<<"--------------------"<<endl<<endl;
    cout<<"Digite as requisicoes no seguinte formato: "<<endl<<endl;
    cout<<"insere <chave> <valor>     (chave: formato int, valor: formato string)"<<endl;
    cout<<"delete <chave> <modo>      (modo: 0-apenas retira / 1-Concatena baldes vazios / 2-Concatena baldes e encolhe )"<<endl;
    cout<<"atualiza <chave> <novo valor>"<<endl;
    cout<<"procura <chave>"<<endl;
    cout<<"printa"<<endl;
    cout<<"exit"<<endl;
    cout<<"--------------------"<<endl;
}


int main()
{
     cout<< "ATIVIDADE 01 DA DISCIPLINA DE ESTRUTURA DE DADOS 2 - 2020.3" << endl;
    cout<< "DISCENTE: Maria Meiriele Dias da Silva" << endl;
    cout<< "MATRICULA: 201476009 "<< endl;

    bool mostrarMensagem, mostrarDuplicidadeDePonteiros;
    int tamBalde, dGLobalInicial;
    int chave, modo;
    string escolha, valor;

    mostrarMensagem = 1; //utilizar 0 quando o input vier de file e nao do console

    mostrarDuplicidadeDePonteiros = 0; //utilizar 1 para mostrar duplicidade de ponteiros

    if(mostrarMensagem)
        cout<<endl<<"Digite o tamanho do balde : ";
    cin>>tamBalde;
    if(mostrarMensagem)
        cout<<"Digite o numero de bits inicial para o dGlobal : ";
    cin>>dGLobalInicial;

    Diretorio d(dGLobalInicial,tamBalde);
    cout<<endl<<"Estrutura Diretorio Inicializada"<<endl;

    if(mostrarMensagem)
        menu();

    do
    {
        cout<<endl;
        if(mostrarMensagem)
            cout<<">>> ";
        cin>>escolha;
        if(escolha=="insere")
        {
            cin>>chave>>valor;
            if(mostrarMensagem)
                cout<<endl;
            d.Insere(chave,valor,0);
        }
        else if(escolha=="delete")
        {
            cin>>chave>>modo;
            if(mostrarMensagem)
                cout<<endl;
            d.Remove(chave,modo);
        }
        else if(escolha=="atualiza")
        {
            cin>>chave>>valor;
            if(mostrarMensagem)
                cout<<endl;
            d.Atualiza(chave,valor);
        }
        else if(escolha=="procura")
        {
            cin>>chave;
            if(mostrarMensagem)
                cout<<endl;
            d.Procura(chave);
        }
        else if(escolha=="printa")
        {
            if(mostrarMensagem)
                cout<<endl;
            d.Printa(mostrarDuplicidadeDePonteiros);
        }
    }
    while(escolha!="exit");

    return 0;
}

