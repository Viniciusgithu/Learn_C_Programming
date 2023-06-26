#include <stdio.h>
int main()
{
            int num;
            printf("Informe o número:\n");
            scanf("%d", &num);
            if (num % 3 == 0)
                        printf("Impressão 1");
            else
                        printf("Impressão 2");
            return (0);
}