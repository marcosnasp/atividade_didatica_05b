#pragma once

float calculaMedia(float v[], int n);
void extrairNotasPorAluno(float *matrizNotasAlunos, float *notasAlunos, int qtdeNotas, int posicaoAlunoMapa);
void preencherNotasPorAluno(float *matrizNotasAlunos, int qtdeAlunos, int qtdeNotas);
void calcularPercentualPorMedia(float *vetorMedia, int numMedias, int qtdePorFaixaPercentual[]);
int calcularPercentual(short quantidadeMediaPorFaixa, short qteMedias);