#include<stdio.h>
int main()
{
    int i=1,ID=43;
    for(;;)
    {
        printf("%d\n",i);
        i=i+2;

        if(i==ID)
            break;
    }
}
