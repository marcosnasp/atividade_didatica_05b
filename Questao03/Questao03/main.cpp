#include <iostream>
#include <algorithm>
#include <numeric>

#include "funcoes.hpp"
using namespace std;

int main() {
	const short qtdeAlunos = 2, qtdeNotas = 3, qtdePercentualNota = 10, qtdeMedias = 10;
	float matrizNotasAlunos[qtdeAlunos][qtdeNotas];
	float media[qtdeAlunos] = { 0.0 };
	float notasAlunos[qtdeNotas] = { 0.0, 0.0, 0.0 };
	float mediaAluno = 0.0;
	short qtdePorFaixaPercentual[qtdePercentualNota] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

	preencherNotasPorAluno(*matrizNotasAlunos, qtdeAlunos, qtdeNotas);
	for (short i = 0; i < qtdeAlunos; i++) {
		extrairNotasPorAluno(*matrizNotasAlunos, notasAlunos, qtdeNotas, i);
		media[i] = calculaMedia(notasAlunos, qtdeNotas);
		cout << "A Media do Aluno " << i << " e: " << media[i] << endl;
	}

	cout << "Calculo do Percentual Medio por Nota" << endl;
	calcularPercentualPorMedia(media, qtdeAlunos, qtdePorFaixaPercentual);
	for (short i = 0; i < qtdePercentualNota; i++)
	{
		int percentual = calcularPercentual(qtdePorFaixaPercentual[i], qtdeAlunos);
		switch (i)
		{
		case 0:
			cout << "O Percentual de Medias entre 0 e 1 e: " << percentual << endl;
			break;
		case 1:
			cout << "O Percentual de Medias entre 1 e 2 e: " << percentual << endl;
			break;
		case 2:
			cout << "O Percentual de Medias entre 2 e 3 e: " << percentual << endl;
			break;
		case 3:
			cout << "O Percentual de Medias entre 3 e 4 e: " << percentual << endl;
			break;
		case 4:
			cout << "O Percentual de Medias entre 4 e 5 e: " << percentual << endl;
			break;
		case 5:
			cout << "O Percentual de Medias entre 5 e 6 e: " << percentual << endl;
			break;
		case 6:
			cout << "O Percentual de Medias entre 6 e 7 e: " << percentual << endl;
			break;
		case 7:
			cout << "O Percentual de Medias entre 7 e 8 e: " << percentual << endl;
			break;
		case 8:
			cout << "O Percentual de Medias entre 8 e 9 e: " << percentual << endl;
			break;
		case 9:
			cout << "O Percentual de Medias entre 9 e 10 e: " << percentual << endl;
			break;
		default:
			break;
		}		
	}
}