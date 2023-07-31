#include<stdio.h>
int main()
{
    int i,j,k;
    for (i=5,j=1,k=5;j<=10;j++,k+=5)
    {
        printf("%d x %d= %d\n",i,j,k);
    }
}

