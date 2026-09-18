#include <stdio.h>




int main() {
    
     char studentName[100];
     int Mark;


     printf("Enter Student Name:");
     scanf("%s",studentName);

     printf("Enter student Mark:");
     scanf("%d", &Mark);

     if (Mark >=80 && Mark <=100){
        
        printf("A - Excellent\n");
     }
        else if (Mark >=70 && Mark <=79){

            printf("B - very good\n");
        }
        else if (Mark >=60 && Mark <=69){

            printf("C - good\n");
        }
        else if (Mark >=50 && Mark <=59){
            printf("D - Better\n");
        }
        else if (Mark >=0 && Mark <=49){
            printf("E - Try harder\n");
        }
        else{
            printf("Not promoted\n");
        }
     

    
    return 0;

}