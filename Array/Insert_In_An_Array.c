#include<stdio.h>
void display_array(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}

void insert_array(int a[],int n, int pos, int val)
{
    int ind = pos-1;

    for(int i=n;i>ind;i--)
    {
        a[i] = a[i -1];
    }
    a[ind] = val;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n+1];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int val,pos;
    scanf("%d %d",&val,&pos);

    insert_array(a,n,pos,val);
    display_array(a,n+1);
    return 0;
}