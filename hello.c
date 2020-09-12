#include <cs50.h> //add to detect string
#include <stdio.h>

int main(void)
{
    string name = get_string("What's your name?\n"); //Take input from user
    printf("Hello, %s\n", name); //generate output from variable
}
