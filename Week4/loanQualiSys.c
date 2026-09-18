#include <stdio.h>

int main(){

    char customerName[100];
    int customerAge;
    float loanAmount;
    float salary;
    int hasExistingloan;



    printf(" Enter your loan status (1 for yes, 0 for no):");
    scanf("%d", &hasExistingloan);

    printf("Enter monthly salary:");
    scanf("%f", &salary);

    if (hasExistingloan ==1 || salary < 5000){
        
        printf("Not qualified for a loan\n");
    } else {
        printf("Enter your age:");
        scanf("%d", &customerAge);

        printf("Enter requested loan amount:");
        scanf("%f", &loanAmount);

        printf("Enter your name:");
        scanf("%s", customerName);

        if (loanAmount > 5000 && customerAge >= 60){

            printf("Too much for an old person,loan is rejected\n");
    } else if (loanAmount > 50000 && customerAge < 18){

        printf("Too much loan for a minor,loan is rejected\n");

    } else {

        printf(" Dear %s, you qualified for a loan!\n", customerName);
    } 
 }
    
    
    return 0;
}