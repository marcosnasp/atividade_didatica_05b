#include <iostream>
#include "funcoes.hpp"
using namespace std;

void vandermonde(float *lambda, short N, float *A)
{
    //float A_Linha[N][N];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            A[i * N + j] = lambda[i] * A[i * N + j];
        }
    }
}

void criar_matriz(int linhas, int colunas, float *matriz_criada)
{
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            matriz_criada[i * colunas + j] = 10.0;
        }
    }
}

void imprimir_matriz(int linhas, int colunas, float *matriz) {
    for (int i=0; i < linhas; i++)
    {
      for(int j=0; j < colunas; j++)
        {
            cout<<"valor de A["<<i<<"]["<<j<<"]: ";
            matriz[i * colunas + j];
        }
        cout<<endl;
    }
}

int retorna_param(int n)
{
    return n;
}
