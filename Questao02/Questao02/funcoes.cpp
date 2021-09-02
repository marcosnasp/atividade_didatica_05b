#include <iostream>
#include <math.h>
#include "funcoes.hpp"
using namespace std;

void vandermonde(float* lambda, short N, float* A)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            A[i * N + j] = pow(lambda[i], j);
        }
    }
}

void imprimir_matriz(int linhas, int colunas, float* matriz) {
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
           cout << "valor de A[" << i << "][" << j << "]: " << matriz[i * colunas + j] << endl;
        }
        cout << endl;
    }
}

void lerLambda(float lambda[], short n) {
    for (short i = 0; i < n; i++) {
        cout << "Digite o valor " << i << " do vetor ate completar " << n << " numeros: " << endl;
        cin >> lambda[i];
    }
    cout << endl;
}

int retorna_param(int n)
{
    return n;
}