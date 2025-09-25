#include <stdio.h>
#include <stdlib.h>

int main()
{
    int bilangan;

    printf("Masukan bilangan bulat:");
    scanf("%d", &bilangan);

    if (bilangan > 0)
    {
        printf("Bilanagan Positif.");
    }
    else if (bilangan < 0)
    {
       printf("Bilangan Negatif.");
    }else{
        printf("Nol.");
    }
    
    return 0;
}