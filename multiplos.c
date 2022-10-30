#include <stdio.h>

int main()
{
    int M, N;
    scanf("%d %d", &M, &N);

    if (M % N == 0 || N % M == 0)
    {
        printf("Sao Multiplos\n");
    }
    else
    {
        printf("Nao sao Multiplos\n");
    }
}