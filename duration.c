#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>

//The program is a practice of transforming notes to its corresponding duration

int main()
{
    string s = get_string("Enter your note: \n");
    int first = (int) (char) s[0] - 48;
    int third = (int) (char) s[2] - 48;

    //transform the first character of the entered note into an integer
    float duration = (float) first / (float) third;
    printf("%f\n", duration);
}
