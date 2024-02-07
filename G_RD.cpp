
#include<stdio.h>
int main()
{


        int ara[1005];
        int i,n;
        scanf("%d",&n);
        for(i=0; i<n; i++)
        {
            scanf("%d",&ara[i]);
        }
        for(i=0;i<n;i+=1)
    {
        int f=1;
        for(int j=0;j<i;j+=1)
        {
            if(ara[i]==ara[j])f=0;
        }
        if(f==1)
        {
            printf("%d ",ara[i]);
        }
    }
    printf("\n");
  
    return 0;
}
