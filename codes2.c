#include<stdio.h>
void main(){
    int n,i,fac=1;
    scanf("%d",&n);
    if(n<0)
    printf("error");
    else{
        for(i=1;i<=n;++i){
            fac*=i;
}
printf("%d",fac);


}}
//armstrong
#include<stdio.h>
void main(){
    int n1,n2,rem,result;
    scanf("%d",&n1);
    n2=n1;
    while(n2!=0){
    rem=n2%10;
    result=rem*rem*rem;
    n1/=10;
    if(result==1){
        printf("armstrong");

    }
    else{
        printf("not armstrong");
    }
    }
} 
//fiboannci
#include<stdio.h>
void main(){
int n;
int t1=0,t2=0;
int t3=t1+t2;
scanf("%d",&n);
printf("%d, %d, ",t1,t2);
for(int i=3;i<=n;++i){
    printf("%d, ",t3);
    t1=t2;
    t2=t3;
    t3=t1+t2;
}
}
//Reverse
#include<stdio.h>
void main(){
    int n;
    scanf('%d',n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",arr[i]);
    }
    for(int i=n-1;i>=0;i--){
        printf("reverse",arr[i]);

    }
}
//print prime upto n
#include<stdio.h>
void main(){
    int n,i,j,fact=1;
    scanf("%d",&n);
    for(i=1;i<n;i++){
        fact=0;
        for(j=i;i<n;i++){
            if(i%j==0)
            fact++;
        }
        if(fact==2)
        printf("%d",i);

    }
    
}
//frequency
#include<stdio.h>
void main(){
    int n,i,j;
    scanf("%d",&n);
    int arr[n];
    for(i=1;i<=n;i++){
        scanf("%d",arr[i]);
    }
    for(i=0;i<=n;i++){
        int c=0;
    for(j=0;j<=n;j++){
        if(arr[i]=arr[j])c++;
        printf("%d",c);

    }
}
}



