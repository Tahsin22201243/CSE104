#include<stdio.h>
int main()
{
    int i=1,id=43;
    while(i<100)
    {
        printf("%d\n",i);
        i=i+2;
        i++;
        if(i>=id+1)
            break;

    }

}
