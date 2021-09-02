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

void extrairNotasPorAluno(float *matrizNotasAlunos, float *notasAlunos, short qtdeNotas, short posicaoAlunoMapa) {
    for (int j = 0; j < qtdeNotas; j++)
    {
       notasAlunos[j] = matrizNotasAlunos[posicaoAlunoMapa * qtdeNotas + j];
    }
}

void preencherNotasPorAluno(float *matrizNotasAlunos, short qtdeAlunos, short qtdeNotas){
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

void calcularPercentualPorMedia(float vetorMedia[], short numMedias, short qtdePorFaixaPercentual[]) {
    float mediaParaAnalise = 0.0;
    for (short i = 0; i < numMedias; i++) {
        mediaParaAnalise = vetorMedia[i];
        if (mediaParaAnalise >= 0 && mediaParaAnalise <= 1) {
            qtdePorFaixaPercentual[i] += 1;
            return;
        }
        if (mediaParaAnalise >= 1 && mediaParaAnalise <= 2) {
            qtdePorFaixaPercentual[i] += 1;
            return;
        }
        if (mediaParaAnalise >= 2 && mediaParaAnalise <= 3) {
            qtdePorFaixaPercentual[i] += 1;
            return;
        }
        if (mediaParaAnalise >= 3 && mediaParaAnalise <= 4) {
            qtdePorFaixaPercentual[i] += 1;
            return;
        }
        if (mediaParaAnalise >= 4 && mediaParaAnalise <= 5) {
            qtdePorFaixaPercentual[i] += 1;
            return;
        }
        if (mediaParaAnalise >= 5 && mediaParaAnalise <= 6) {
            qtdePorFaixaPercentual[i] += 1;
            return;
        }
        if (mediaParaAnalise >= 6 && mediaParaAnalise <= 7) {
            qtdePorFaixaPercentual[i] += 1;
            return;
        }
        if (mediaParaAnalise >= 7 && mediaParaAnalise <= 8) {
            qtdePorFaixaPercentual[i] += 1;
            return;
        }
        if (mediaParaAnalise >= 8 && mediaParaAnalise <= 9) {
            qtdePorFaixaPercentual[i] += 1;
            return;
        }
        if (mediaParaAnalise >= 9 && mediaParaAnalise <= 10) {
            qtdePorFaixaPercentual[i] += 1;
            return;
        }
    }
}

int calcularPercentual(short quantidadeMediaPorFaixa, short qteMedias) {
    return (quantidadeMediaPorFaixa / qteMedias) * 100;
}