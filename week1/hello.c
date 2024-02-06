// it's like importing a library to make it so that certian things are available.
//printf is not available automatially. 
//header files.
//standard input output library!
#include <stdio.h>
#include "cs50.h"


//\n is used to create a new line. (escape sequence.)
int main(void) {
    //%s is a placeholder for a variable
    string answer = get_string("What's your name? ");
    printf("Hello, %s\n" , answer);
}