#include<stdio.h>
void display_array(int a[], int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
void find_value(int a[], int n)
{
    int x;
    scanf("%d",&x);

    int found = 0;
    for(int i=0;i<n;i++)
    {
        if(a[i] == x)
        {
            found = 1;
            printf("%d \n",a[i]);
            break;
        }
    }
    printf("%d\n",found);
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
   find_value(a,n);
   display_array(a,n);
    return 0;
}