#ifndef BINGO_H_INCLUDED
#define BINGO_H_INCLUDED

#include <iostream>
#include <locale.h>
using namespace std;
#include <windows.h>
#include <time.h>
#include <conio.h>
#include "menu.h"
#include <fstream>

#define TAM 5


void ordenaVetor(int vetor[TAM]) {

    int aux;
    for (int i = 0; i < TAM; i++)
    {
        for (int j = 0; j < TAM; j++)
        {
            if (vetor[i] < vetor[j])
            {
                aux = vetor[i];
                vetor[i]=vetor[j];
                vetor[j]=aux;
            }
        }
    }


}

void sorteiaVetor (int vetor[], int x) {
    for (int i = 0; i < TAM; i++) {
        vetor[i] = (rand()%15) + x;
        for (int j = 0; j < i; j++) {
            if (vetor[i] == vetor [j]) {
                i--;
            }
        }
    }
}

int mat(int mat[TAM][TAM])
{
    int i, j,x = 1, vetor[TAM];
    for (i=0; i<TAM; i++){
        sorteiaVetor(vetor, x);
        ordenaVetor (vetor);
        for(j=0; j<TAM; j++){
            mat[i][j] = vetor[j];
        }
        x = x + 15;
    }

    for (i=0; i<TAM; i++){
        for(j=0; j<TAM; j++){
            cout<<mat[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl;
}

string escrever(int cartela) //Função para gravar o vencedor
{
    FILE * pFile;
    pFile = fopen ("Vencedor.txt","a");


    char nome[20];
    char cartelavencedora[2];
    itoa (cartela,cartelavencedora ,10);
    cout<<"Digite o nome do vencedor: ";
    cin>>nome;
    for(int contador=0; contador<=strlen(nome);contador++){ //transforma todas as letras em maiuscula
            nome[contador] = toupper((nome[contador]));
    }

    if (pFile!=NULL)
    {
                fputs ("\n\n",pFile);
                fputs ("Cartela Vencedor: ",pFile);
                fputs (cartelavencedora,pFile);
                fputs ("\n\n",pFile);
                fputs ("Vencedor: ",pFile);
                fputs (nome,pFile);
                fclose (pFile);
                return "Gravado com sucesso no arquivo!";
    }else{
        return "Arquivo de dados não foi encontrado!";
    }
}

/*int leitura (int x) {



    cout<<"Com quantas cartelas deseja jogar sendo no minimo 5 e no maximo 20 :";
    cin>>x;
    if (x < 5) {
    cout<<"Valor Inválido! Digite novamente.\n\n";
    leitura (x);
    }
    if (x > 20) {
    cout<<"Valor Inválido! Digite novamente.\n\n";
    leitura (x);
        }
    return x;
    }*/

int bingo(){

    srand(time(NULL));
    int a[TAM][TAM] = {0}, b[TAM][TAM] = {0},c[TAM][TAM] = {0},d[TAM][TAM] = {0},e[TAM][TAM] = {0},f[TAM][TAM] = {0},g[TAM][TAM] = {0},h[TAM][TAM] = {0},i[TAM][TAM] = {0},j[TAM][TAM] = {0};
    int k[TAM][TAM] = {0},l[TAM][TAM] = {0},m[TAM][TAM] = {0},n[TAM][TAM] = {0},o[TAM][TAM] = {0},p[TAM][TAM] = {0},q[TAM][TAM] = {0},r[TAM][TAM] = {0},s[TAM][TAM] = {0},t[TAM][TAM] = {0};
    int cont1=0,cont2=0,cont3=0,cont4=0,cont5=0,cont6=0,cont7=0,cont8=0,cont9=0,cont10=0,cont11=0,cont12=0,cont13=0,cont14=0,cont15=0,cont16=0,cont17=0,cont18=0,cont19=0,cont20=0;
    int x;

    cout<<"Com quantas cartelas deseja jogar sendo no minimo 5 e no maximo 20 :";
    cin>>x;
    cout<<endl<<endl;
    while (x<5 or x>20){
    cout<<"Numero invalido digite novamente";
    cout<<endl<<endl;
    }


    //leitura(x);função bugada



    for(int z=1; z<=x; z++){
        if(z==0)        {            return 0;      }
        if(z==1)        {            mat(a);        }
        if(z==2)        {            mat(b);        }
        if(z==3)        {            mat(c);        }
        if(z==4)        {            mat(d);        }
        if(z==5)        {            mat(e);        }
        if(z==6)        {            mat(f);        }
        if(z==7)        {            mat(g);        }
        if(z==8)        {            mat(h);        }
        if(z==9)        {            mat(i);        }
        if(z==10)       {            mat(j);        }
        if(z==11)       {            mat(k);        }
        if(z==12)       {            mat(l);        }
        if(z==13)       {            mat(m);        }
        if(z==14)       {            mat(n);        }
        if(z==15)       {            mat(o);        }
        if(z==16)       {            mat(p);        }
        if(z==17)       {            mat(q);        }
        if(z==18)       {            mat(r);        }
        if(z==19)       {            mat(s);        }
        if(z==20)       {            mat(t);        }
    }




int vet[75];

    for (int i = 0; i < 75; i++) {
        vet[i] = rand() % 75 + 1;
        for (int j = 0; j < i; j++) {
            if (vet[i] == vet[j]) {
                i--;
            }
        }
    }
    cout<<"\n\nInicio do sorteio das pedras \n\n";
    for (int u = 0; u < 75; u++) {
        getch();
        cout<<vet[u]<<"\n\n";



      for (int v = 0; v < TAM; v++){

        for (int w = 0; w < TAM; w++)
        {
            if (vet[u] == a[v][w])
            {
                cont1++;
            }
        }
    }



	for (int v = 0; v < TAM; v++){ for (int w = 0; w < TAM; w++) { if (vet[u] == b[v][w]) { cont2++; } } }
 	for (int v = 0; v < TAM; v++){ for (int w = 0; w < TAM; w++) { if (vet[u] == c[v][w]) { cont3++; } } }
	for (int v = 0; v < TAM; v++){ for (int w = 0; w < TAM; w++) { if (vet[u] == d[v][w]) { cont4++; } } }
	for (int v = 0; v < TAM; v++){ for (int w = 0; w < TAM; w++) { if (vet[u] == f[v][w]) { cont5++; } } }
	for (int v = 0; v < TAM; v++){ for (int w = 0; w < TAM; w++) { if (vet[u] == g[v][w]) { cont6++; } } }
	for (int v = 0; v < TAM; v++){ for (int w = 0; w < TAM; w++) { if (vet[u] == h[v][w]) { cont7++; } } }
 	for (int v = 0; v < TAM; v++){ for (int w = 0; w < TAM; w++) { if (vet[u] == i[v][w]) { cont8++; } } }
	for (int v = 0; v < TAM; v++){ for (int w = 0; w < TAM; w++) { if (vet[u] == j[v][w]) { cont9++; } } }
	for (int v = 0; v < TAM; v++){ for (int w = 0; w < TAM; w++) { if (vet[u] == k[v][w]) { cont10++; } } }
	for (int v = 0; v < TAM; v++){ for (int w = 0; w < TAM; w++) { if (vet[u] == l[v][w]) { cont11++; } } }
	for (int v = 0; v < TAM; v++){ for (int w = 0; w < TAM; w++) { if (vet[u] == m[v][w]) { cont12++; } } }
 	for (int v = 0; v < TAM; v++){ for (int w = 0; w < TAM; w++) { if (vet[u] == n[v][w]) { cont13++; } } }
	for (int v = 0; v < TAM; v++){ for (int w = 0; w < TAM; w++) { if (vet[u] == o[v][w]) { cont14++; } } }
	for (int v = 0; v < TAM; v++){ for (int w = 0; w < TAM; w++) { if (vet[u] == p[v][w]) { cont15++; } } }
	for (int v = 0; v < TAM; v++){ for (int w = 0; w < TAM; w++) { if (vet[u] == q[v][w]) { cont16++; } } }
	for (int v = 0; v < TAM; v++){ for (int w = 0; w < TAM; w++) { if (vet[u] == r[v][w]) { cont17++; } } }
 	for (int v = 0; v < TAM; v++){ for (int w = 0; w < TAM; w++) { if (vet[u] == s[v][w]) { cont18++; } } }
	for (int v = 0; v < TAM; v++){ for (int w = 0; w < TAM; w++) { if (vet[u] == t[v][w]) { cont20++; } } }





        if(cont1==25){ cout<<"cartela 1 venceu"<<endl<<endl; escrever(1);_sleep(1000);return 0; }
        if(cont2==25){ cout<<"cartela 2 venceu"<<endl<<endl; escrever(2);_sleep(1000);return 0; }
        if(cont3==25){ cout<<"cartela 3 venceu"<<endl<<endl; escrever(3);_sleep(1000);return 0; }
        if(cont4==25){ cout<<"cartela 4 venceu"<<endl<<endl; escrever(4);_sleep(1000);return 0; }
        if(cont5==25){ cout<<"cartela 5 venceu"<<endl<<endl; escrever(5);_sleep(1000);return 0; }
        if(cont6==25){ cout<<"cartela 6 venceu"<<endl<<endl; escrever(6);_sleep(1000);return 0; }
        if(cont7==25){ cout<<"cartela 7 venceu"<<endl<<endl; escrever(7);_sleep(1000);return 0; }
        if(cont8==25){ cout<<"cartela 8 venceu"<<endl<<endl; escrever(8);_sleep(1000);return 0; }
        if(cont9==25){ cout<<"cartela 9 venceu"<<endl<<endl; escrever(9);_sleep(1000);return 0; }
        if(cont10==25){ cout<<"cartela 10 venceu"<<endl<<endl; escrever(10);_sleep(1000);return 0; }
        if(cont11==25){ cout<<"cartela 11 venceu"<<endl<<endl; escrever(11);_sleep(1000);return 0; }
        if(cont12==25){ cout<<"cartela 12 venceu"<<endl<<endl; escrever(12);_sleep(1000);return 0;; }
        if(cont13==25){ cout<<"cartela 13 venceu"<<endl<<endl; escrever(13);_sleep(1000);return 0; }
        if(cont14==25){ cout<<"cartela 14 venceu"<<endl<<endl; escrever(14);_sleep(1000);return 0; }
        if(cont15==25){ cout<<"cartela 15 venceu"<<endl<<endl; escrever(15);_sleep(1000);return 0; }
        if(cont16==25){ cout<<"cartela 16 venceu"<<endl<<endl; escrever(16);_sleep(1000);return 0; }
        if(cont17==25){ cout<<"cartela 17 venceu"<<endl<<endl; escrever(17);_sleep(1000);return 0; }
        if(cont18==25){ cout<<"cartela 18 venceu"<<endl<<endl; escrever(18);_sleep(1000);return 0; }
        if(cont19==25){ cout<<"cartela 19 venceu"<<endl<<endl; escrever(19);_sleep(1000);return 0; }
        if(cont20==25){ cout<<"cartela 20 venceu"<<endl<<endl; escrever(20);_sleep(1000);return 0; }


    }





return 0;


}
#endif // BINGO_H_INCLUDED
