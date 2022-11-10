#include<stdio.h>
#include<stdlib.h>

int main()
{
	printf("O n\n");
	printf("C i n e m a\n");
	printf("A t\n");
	printf("T h e\n");
	printf("C i n e m a :\n");
	printf("O n\n");
	printf("L o c a t i o n\n");

	return 0;
}

-----------------------------------

#include <stdio.h>
#include <stdlib.h>

int main()
{
   	printf("    /|\n");
	printf("   / |\n");
	printf("  /  |\n");
	printf(" /   |\n");


    return 0;
}

-----------------------------------

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char characterName[] = "Gregs";
    int characterAge = 35;
   	printf("Bija dzeks ko sauca %s\n", characterName);
   	//%s = string = Collection of Characters
	printf("Vins bija %d gadus vecs.\n", characterAge);
    //%d = decimal = raksta, kad jaateelo skaitlis
	characterAge = 30;
	printf("Vinam loti patika zalais %s\n", characterName);
	printf("Bet vinam galigi nepatika ka vinam ir %d.\n", characterAge);

    return 0;
}

-----------------------------------

#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    int age = 40;
    double gpa = 6.9;//double = number with decimal points
    float spa = 69.69;
    char grade = 'A'; //char = stores a single character
    char phrase[] = "One Six Niner";//char[] - stores a string of characters
    // you can make them unsigned by adding "unsigned" prefix 
    short age0 = 10; // atleast 16-bits signed integer 
    int age1 = 20; // atleast 16-bits signed integer (not smaller than short) 
    long age2 = 30; // atleast 32-bits signed integer 
    long long age3 = 40; // atleast 64-bits signed integer
    float gpa0 = 2.5; // single percision floating point 
    double gpa1 = 3.5; // double-precision floating point 
    long double gpa2 = 3.5; // extended-precision floating point
    // boolean 
    int isTall; // 0 if false, non-zero if true 
    isTall = 1;
    testGrade = 'F';
    printf("%s, your grade is %c \n", name, testGrade);
    return 0;
}

-----------------------------------

%c character = 'A'
%d integer number (base 10) = '10'
%e exponential floating-point number
%f floating-point number = '6.9'
%i integer (base 10)
%o octal number (base 8)
%s a string of characters
%u unsigned decimal (integer) number
%x number in hexadecimal (base 16)
%% print a percent sign
% print a percent sign


-----------------------------------

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int favNum = 69;
    char myChar = 'X';
    printf("My favorite %s is %d", "number", favNum);


    return 0;
}


-----------------------------------

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num = 6.9; //%f
    int num2 = 69; //%d

    printf("%f\n", 6.9 * 42); // 289.800000
    printf("%f\n", 69 / 4.2); // 16.428571
    printf("%f\n", 6.9 + 4.2); // 11.100000
    printf("%f\n", 69 - 4.2); // 64.800000
    printf("%f\n", 69 - 42); // 0 - jo vajag %d nevis %f
    printf("%d\n", 69 - 42); // 27
    printf("%f\n", num); // 6.9 - floating
    printf("%d\n", num2); // 69 - decimal


    return 0;
}
/*
printf("%d \n", 2 * 3);       // Basic Arithmetic: +, -, /, *
printf("%d \n", 10 % 3);      // Modulus Op. : returns remainder of 10/3
printf("%d \n", 1 + 2 * 3);   // order of operations
printf("%f \n", 10 / 3.0);    // int's and doubles


int num = 10;
num += 100;                   // +=, -=, /=, *=
printf("%d \n",num);

num++;
printf("%d \n", num);

printf("%f \n", pow(2, 3));
printf("%f \n", sqrt(144));
printf("%f \n", round(2.7));
*/

-----------------------------------

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("%f\n", pow(2, 3) ); // 2^3
    printf("%f\n", sqrt(36) ); // 6
    printf("%f\n", ceil(36.69) ); // ~37
    printf("%f\n", floor(36.69) ); // ~36
    int num = 10;
    num += 100; //adds 100
                // +=, -=, /=, *=
    printf("%d \n",num);
    num++;      //adds 1
    printf("%d \n", num);
    printf("%f \n", pow(2, 16)); //to The 'POW'er Off aka 2^16
    printf("%f \n", sqrt(144)); // 12
    printf("%f \n", round(2.7)); // 3 

    return 0;
}
/*
Printout: 
8.000000
6.000000
37.000000
36.000000
110
111
65536.000000
12.000000
3.000000
*/

-----------------------------------

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*int num = 5;
    printf("%d\n", num);
    num = 8;
    printf("%d\n", num);*/
	
    printf("Hey Guys\n"); // also a constant
    printf("%d\n", 69); // also a constant
	
    /*const int MY_NUM = 5; // constants are usually defined with 
							// CAPITAL LETTERS 
    printf("%d\n", num);
    num = 8; // Can't be changed
    printf("%d\n", num);*/

    return 0;
}

-----------------------------------
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("You are %d years old", age);
	//Enter your age: 12
	//You are 12 years old
	
	double gpa;
    printf("Enter your gpa: ");
    scanf("%lf", &gpa);
    printf("Your gpa is %f", gpa);
	//Enter your gpa: 12.34
	//Your gpa is 12.340000
	
	char grade;
    printf("Enter your grade: ");
    scanf("%c", &grade);
    printf("Your grade is %c", grade);
	//Enter your grade: B
	//Your grade is B
	
    char name[20];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Your name is %s", name);
	//Enter your name: Mark Proksch
	//Your name is Mark
	
	char name[20];
    printf("Enter your name: ");
    fgets(name, 20, stdin);
    printf("Your name is %s", name);
	//Enter your name: Mark Proksch
	//Your name is Mark Proksch
	
    return 0;
}

-----------------------------------

-----------------------------------

-----------------------------------

-----------------------------------