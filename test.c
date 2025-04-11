#include <stdio.h>
//test program
int main(){
    int z;
    z = 1;
    int res;
    char operation;
    printf("Hello!\n");
    printf("Welcome to C!\n\n");
    printf("\x1B[32mMade by Panz3rByte\x1B[0m\n\n");
    while (z < 9){
        int dCALC, dCALC2;
        printf("Please input the first number: ");
        scanf("%d", &dCALC);
        printf("Success, input the second one: ");
        scanf("%d", &dCALC2);
        printf("Enter calculation operation: ");
        scanf(" %c", &operation); //es muss "LEERZEICHEN %c" sein, da er vom anderen input das enter (neue zeile dementsprechend) mitzählt da es als whitespace im puffer gespeichert ist
        if (operation == '+'){
            res = dCALC + dCALC2;
        }else if (operation == '-'){
            res = dCALC - dCALC;
        }else if(operation == '*'){
            res = dCALC * dCALC2;
        }else if (operation == '/' && dCALC2 != 0){ // && = 'und'; || = 'oder' (MERKEN!)
            res = dCALC/dCALC2;
        }
        printf("\nGot it, its %d\n\n", res);   
    }
    return 0; //end program
}   