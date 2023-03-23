//print factorial upto n
#include <stdio.h>
int main() {
    int n, i,fact = 1;
    printf("Enter an integer: ");
    scanf("%d", &n);
    if (n < 0)
        printf("Error");
    else {
        for (i = 1; i <= n; ++i) {
            fact *= i;
        }
        printf("%d = %d", n,fact);
    }
}
//print prime no upto n
#include<stdio.h>
int main()
{
    int n,fact;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        fact=0;
        for(int j=1; j<=n; j++)
        {
            if(i%j==0)
                fact++;
        }
        if(fact==2)
            printf("%d " ,i);
    }
}
//print reverse of given no
#include <stdio.h>
void main(){
  int n,r,rev=0;
printf("Enter the no %d");
scanf("%d",&n);
  while(n!=0){
    r=n % 10;
    rev = rev *10 + r;
    n/=10;
  }
  {
  printf("reverse no is %d",rev);
  }

}