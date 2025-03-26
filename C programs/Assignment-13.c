// //Q1
// #include<stdio.h>
// int main(){
//     int i=1,sum=0,n;
//     printf("Enter a number to find the sum of its n natural numbers: ");
//     scanf("%d",&n);
//     while(i<=n){
//         sum =sum+i;
//         i++;
//     }
//     printf("THe sum is %d",sum);
//     return 0;
// }   // OR by using formula n*(n+1)/2

// //Q2
// #include<stdio.h>
// int main(){
//     int i=1,sum=0,n;
//     printf("Enter a number to find the sum of its n even natural numbers: ");
//     scanf("%d",&n);
//     while(i<=n){
//         sum =sum+2*i;
//         i++;
//     }
//     printf("THe sum is %d",sum);
//     return 0;
// }

// //Q3
// #include<stdio.h>
// int main(){
//     int i=1,sum=0,n;
//     printf("Enter a number to find the sum of its n odd natural numbers: ");
//     scanf("%d",&n);
//     while(i<=n){
//         sum =sum+2*i-1;
//         i++;
//     }
//     printf("THe sum is %d",sum);
//     return 0;
// }

//Q4
// #include<stdio.h>
// int main(){
//     int i=1,sum=0,n;
//     printf("Enter a number to find the sum of squares of its n  natural numbers: ");
//     scanf("%d",&n);
//     while(i<=n){
//         sum =sum +i*i;
//         i++;
//     }
//     printf("THe sum is %d",sum);
//     return 0;
// }

//Q5
#include<stdio.h>
int main(){
    int i=1,sum=0,n;
    printf("Enter a number to find the sum of its even natural numbers: ");
    scanf("%d",&n);
    while(i<=n){
        sum =sum+i*i*i;
        i++;
    }
    printf("THe sum is %d",sum);
    return 0;
}