#include <stdio.h>
#define Q 30

int main(int argc, char const *argv[])
{
    int a = 7;
    float b = 3.555;
    
    printf("hello world\n");
    printf("The value of a is %d\nThe value of b is %f\n", a ,b);
    
    //To change the total number of digits before and after '.':
    printf("%.4f\n", b );
    printf("%0.4f\n", b );
    printf("%10.4f\n", b );
    printf("%2.4f\n", b );
    printf("%6.4f\n", b );
    printf("%8.4f\n", b );
    printf("%12.4f space\n", b );
    printf("%-12.4f space\n", b );

    const int p = 24;
    //p = 30;(This is wrong....."Because 'p' is Constant")

    //Q = 45;(This is also wrong..."Because here 'Q' is also constant")
     
    printf("Escape sequences \\ \n");
    printf("Escape sequences \\n \n");
    printf("Escape sequences \a \n");
    printf("Escape \t\t\t sequences ");
    
     




    return 0;
}
