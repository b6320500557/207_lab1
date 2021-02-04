#include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int Number[N],location=0,i,max=0;
    for(i=1; i<=N; i++)
        scanf("%d",&Number[i]);
    for(i=1; i<=N; i++)
    {
        if( max < Number[i] )
        {
            max = Number[i];
            location=i;
        }
    }
    printf("%d %d",location,max);
    return 0;
}
