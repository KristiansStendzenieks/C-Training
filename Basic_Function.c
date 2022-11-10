#include <stdio.h>
#include <stdlib.h>

int main()
{
    sayHi("Gregg", 42);
    sayHi("Tim", 69);
    sayHi("Mark", 420);

    return 0;
}

void sayHi(char name[], int age){
    printf("Hello %s you are %d\n", name, age);

}

/*

int addNumbers(int num1, int num2);

int main(){
     int sum = addNumbers(4, 60);
     printf("%d \n", sum);

     return 0;
}

int addNumbers(int num1, int num2){
     return num1 + num2;
}
*/
