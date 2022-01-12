#include <stdio.h> 
int main()
{ 
    int num; 
    float sum=0.0, num1, num2; 
    printf("\n Enter the value of number: "); 
    scanf ("%d", &num); 
    for(num2=1.0;num2<=num;num2++) { 
        num1=1/num2; 
        sum = sum +num1; 
    } 
    printf("\n The sum of series upto l/%d = %f",num,sum); 
    return 0; 
}

