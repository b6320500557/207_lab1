#include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int i,j,a[N],x=0;
    for(i=1;i<=N;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=N;i++)
    {
        if(j<a[i])
        {
            j = a[i];
            x++;

        }
    }
    printf("%d %d",x,j);
    return 0;
}
