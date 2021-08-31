#include <iostream>
#include "funcoes.hpp"
#include <iterator>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[])
{
    const short N = 3;
    float lambda[N] = {1, 2, 3};
    float A[N][N];

    criar_matriz(N, N, *A);
    vandermonde(*A, N, lambda);
    imprimir_matriz(N, N, *A);
    return 0;
}
