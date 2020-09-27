#include <stdio.h> 
 
int main(void)
{ 
  int x;
  float a,b,ans;
  printf("M e n u\n");
  printf("1.Add (+) \n");
  printf("2.Subtract (-) \n");
  printf("3.Multiply (*) \n");
  printf("4.Divide (/) \n");
  printf("5.Modulo (%%) \n");
  scanf("%d",&x);

  printf("Enter num1 : ");
  scanf("%f",&a);
  printf("Enter num2 : ");
  scanf("%f",&b);
  int m = (int) a;
  int n = (int) b;
  int MN;

  switch(x)
   {
     case 1 :printf("Anwser is :%.2f + %.2f =%.2f\n",a,b,a+b);break;
     case 2 :printf("Anwser is :%.2f - %.2f =%.2f\n",a,b,a-b);break;
     case 3 :printf("Anwser is :%.2f * %.2f =%.2f\n",a,b,a*b);break;
     case 4 :ans = a/b;
            if(b==0)printf("Devide by zero !!!");
            else printf("Anwser is :%.2f / %.2f =%.2f\n",a,b,a/b);break;
     case 5 :MN = m%n;
            printf("Anwser is :%d %% %d = %d",m,n,MN);break;
   }
  return 0; 

} 