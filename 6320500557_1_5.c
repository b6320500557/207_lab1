#include <stdio.h>
int main()
{
    int N,location=0,i,max;
    scanf("%d",&N);
    int Number[N];
    for(i=0;i<N;i++)
    {
        scanf("%d",&Number[i]);
        if( max<Number[i] )
        {
            max = Number[i];
            location = i+1;
        }
    }
    printf("%d %d",location,max);
    return 0;
}
