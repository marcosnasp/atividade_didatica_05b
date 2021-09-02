#include <math.h>
#include <iostream>
using namespace std;

float calculaMedia(float v[], int n)
{
    float S = 0.0;
    for (int i = 0; i < n; i++)
    {
        S += v[i];
    }
    S = S / n;
    return S;
}

void extrairNotasPorAluno(float *matrizNotasAlunos, float *notasAlunos, int qtdeNotas, int posicaoAlunoMapa) {
    for (int j = 0; j < qtdeNotas; j++)
    {
       notasAlunos[j] = matrizNotasAlunos[posicaoAlunoMapa * qtdeNotas + j];
    }
}

void preencherNotasPorAluno(float *matrizNotasAlunos, int qtdeAlunos, int qtdeNotas) {
    for (int i = 0; i < qtdeAlunos; i++)
    {
        for(int j = 0; j < qtdeNotas; j++)
        {
            cout << "Digite a Nota " << j << " do Aluno " << i << ": ";
            cin >> matrizNotasAlunos[i * 3 + j];
        }
        cout<<endl;
    }
}

void calcularPercentualPorMedia(float *vetorMedia, int numMedias, int qtdePorFaixaPercentual[]) {
    float mediaParaAnalise = 0.0;
    for (short i = 0; i < numMedias; i++) {
        mediaParaAnalise = vetorMedia[i];
        //cout << "Media para analise: " << i << ", valor: " << mediaParaAnalise << endl;
        if (mediaParaAnalise >= 0 && mediaParaAnalise <= 1) {
            qtdePorFaixaPercentual[0] += 1;
        }
        if (mediaParaAnalise > 1 && mediaParaAnalise <= 2) {
            qtdePorFaixaPercentual[1] += 1;
        }
        if (mediaParaAnalise > 2 && mediaParaAnalise <= 3) {
            qtdePorFaixaPercentual[2] += 1;
        }
        if (mediaParaAnalise > 3 && mediaParaAnalise <= 4) {
            qtdePorFaixaPercentual[3] += 1;
        }
        if (mediaParaAnalise > 4 && mediaParaAnalise <= 5) {
            qtdePorFaixaPercentual[4] += 1;
        }
        if (mediaParaAnalise > 5 && mediaParaAnalise <= 6) {
            qtdePorFaixaPercentual[5] += 1;
        }
        if (mediaParaAnalise > 6 && mediaParaAnalise <= 7) {
            qtdePorFaixaPercentual[6] += 1;
        }
        if (mediaParaAnalise > 7 && mediaParaAnalise <= 8) {
            qtdePorFaixaPercentual[7] += 1;
        }
        if (mediaParaAnalise > 8 && mediaParaAnalise <= 9) {
            qtdePorFaixaPercentual[8] += 1;
        }
        if (mediaParaAnalise > 9 && mediaParaAnalise <= 10) {
            qtdePorFaixaPercentual[9] += 1;
        }
    }
}

int calcularPercentual(short quantidadeMediaPorFaixa, short qteMedias) {
    return (quantidadeMediaPorFaixa / qteMedias) * 100;
}