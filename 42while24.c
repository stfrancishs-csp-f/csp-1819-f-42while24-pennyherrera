#include <stdio.h>
int main(void)
{
    int sum=0;
    int k=0;

    while (k<5)

    {
        printf("       %d\n",k);
        sum=sum+k;
        k++;
    }
    
    printf ("sum = %d\n",sum);
    //add sum = in previous line

    for (k=4;k>=0;k--)
    
    {
        printf ("       %d\n", k);
    }
    printf ("Blastoff!\n");
    return 0;
}

