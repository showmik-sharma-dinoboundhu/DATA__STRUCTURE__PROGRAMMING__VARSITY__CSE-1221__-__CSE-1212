#include<stdio.h>
void print_array(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}

void delete_array(int a[],int n, int pos)
{
    int ind = pos-1;
    for(int i=ind;i<n -1;i++)
    {
        a[i] = a[i + 1];
    }
 
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int pos;
    scanf("%d ", &pos);

    delete_array(a, n, pos);
    print_array(a,n-1);
    return 0;
}