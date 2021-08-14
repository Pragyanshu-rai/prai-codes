#include<stdio.h>

long int repeatedSum(long int number){

    long int sum = 0;
    
    while(1){
        sum += number % 10;
        number /= 10;

        if(number % 10 == 0){

            if(sum / 10 < 1){
                break;
            }

            number = sum;
            sum = 0;
        }
    }

    return sum;
}

int main(){

    long int number;

    printf("Enter The number: ");
    scanf("%ld", &number);
    printf("The Repeated Sum is : %ld\n", repeatedSum(number));

    return 0;
}