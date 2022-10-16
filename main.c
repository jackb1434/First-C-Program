#include <stdio.h>

// instantiate functions (kinda like variables)
int sum(int k);
void myFuncion();


// main function
int main(){
    int result = sum(3060);
    printf("%d", result);
    return 0;
}

// Takes a number you give it and multiplies it by a multiplier you give it
void myFunction(){
    int myNum;
    int multiplier;

    printf("Type a number: ");
    scanf("%d",&myNum);

    printf("Type a multiplier: ");
    scanf("%d",&multiplier);

    int final  = myNum * multiplier;

    printf("Your final number: %d", final);
}

// Reccursion demo
int sum(int k){
    if (k > 0){
        return k + sum(k - 1);
    }else{
        return 0;
    }
}