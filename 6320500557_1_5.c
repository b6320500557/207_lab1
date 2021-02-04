#include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int i,j,a[N];
    for(i=1;i<=N;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=N;i++)
    {
        if(j<a[i])
        {
            j = a[i];
        }
    }
    printf("%d %d",i,j);
    return 0;
}
