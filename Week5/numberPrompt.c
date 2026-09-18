#include <stdio.h>

int main() {
    /*int num[6];
    for( int i = 0; i <= 5; i++){
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num[i]);
    }

printf("The numbers you entered are: ");
    for( int i = 0; i <= 5; i++){
        printf(" %d\n ", num[i]);
    }
    printf("\n");*/

   /*
    int num[6];
    int i = 0;
    while(i < 6){
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num[i]);
        i++;
    }
    i = 0;
    while(i < 6){
            printf(" %d\n", num[i]);
            i++;
    }*/
    int num [6];
    int i = 0;
    do{
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num[i]); 
      
         i++;
    } while(i < 6);
    
    i = 0;
    printf("the numbers you entred are: \n");
    while( i < 6){
    printf("%d\n" , num[i]);
    i++;
    }

return 0;
}
    