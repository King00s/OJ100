#include<stdio.h>
int main()
{
    char st[1001];
    char r=0;
    int i,n,u;
    int a[1001]={0};
    scanf(" %d",&n);
    for(u=0;n>u;n--)
        {
            int a[1001]={0};
            scanf("%s",st);
            for(i=0;st[i]!='\0';)
        {
            if(st[i]>'a'&&st[i]<'z')
            {
            a[st[i]]++;
            }
            i=i+1;
        }
        int max=0;
        for(i=0;i<=1001;i++)
            {
                if(a[i]>max)
            {
                max=a[i];
                r=i;
            }
            }
            printf("%c %d\n",r,max);
            r=0;
        }
    return 0;
}
