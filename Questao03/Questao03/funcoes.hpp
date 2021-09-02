#pragma once

float calculaMedia(float v[], int n);
void extrairNotasPorAluno(float *matrizNotasAlunos, float *notasAlunos, short qtdeNotas, short posicaoAlunoMapa);
void preencherNotasPorAluno(float *matrizNotasAlunos, short qtdeAlunos, short qtdeNotas);
void calcularPercentualPorMedia(float vetorMedia[], short numMedias, short qtdePorFaixaPercentual[]);
int calcularPercentual(short quantidadeMediaPorFaixa, short qteMedias);