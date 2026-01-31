#include<stdio.h>
int main()
{
    
    int n;
    scanf("%d",&n);
    int First=n/1000;
    if (First%2 ==0)
    {
        printf("EVEN");
        /* code */
    }else
    {
        printf("ODD");
    }
    
   
    return 0;
}
 