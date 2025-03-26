//Q1
// #include<stdio.h>
// int main(){
//     int num1,num2,num3;
//     printf("Enter 3 numbers to calculate average: ");
//     scanf("%d%d%d",&num1,&num2,&num3);
//     printf("Average of %d, %d and %d is %f",num1,num2,num3,(num1+num2+num3)/3.0);
//     return 0;
// }

//Q2
// #include<stdio.h>
// int main(){
//     int radius;
//     printf("Enter radius to know Circumference of Circle: ");
//     scanf("%d",&radius);
//     printf("Circumference is %f",2*3.14*radius);
//     return 0;
// }

//Q3
// #include<stdio.h>
// int main(){
//     int principal,time;
//     float rate;
//     printf("Enter principal,rate,time to know Simple Interest: ");
//     scanf("%d%f%d",&principal,&rate,&time);
//     printf("Simple Interest is %f",principal*rate*time/100);
//     return 0;
// }

//Q4
// #include<stdio.h>
// int main(){
//     int length,breadth,height;
//     printf("Enter length,breadth,height to know Simple Interest: ");
//     scanf("%d%d%d",&length,&breadth,&height);
//     printf("Volume is %d",length*breadth*height);
//     return 0;
// }

// Q5
#include<stdio.h>
int main(){
    int selling_price,cost_price;
    printf("Enter Selling price and Cost price for 1 dozen bananas ");
    scanf("%d%d",&selling_price,&cost_price);
    printf("Profit or loss after selling 25 bananas is by using Unitary method is: %f",(selling_price-cost_price)/12.0*25);
    return 0;
}