#include<stdio.h>
int main()
{
    int n1,n2, x,y, lcm,hcf,t;

    printf("enter the two number");
    scanf("%d%d",&n1,&n2);
    x=n1;
    y=n2;

  
      
    while (y != 0)
  {
    t = y;
    y = x % y;
    x= t;
  }
   hcf=x;
   lcm= (n1*n2)/hcf;
   printf("hcf of %d and %d = %d\n",n1,n2,hcf);

   printf("lcm of the number %d and %d = %d\n",n1,n2,lcm);
    return 0;


    
} 