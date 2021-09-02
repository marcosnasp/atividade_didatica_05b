#include <iostream>
#include "funcoes.hpp"
#include <iterator>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[])
{
    const short N = 3;
    float lambda[N];
    float A[N][N];

    lerLambda(lambda, N);
    vandermonde(lambda, N, *A);
    imprimir_matriz(N, N, *A);
    return 0;
}