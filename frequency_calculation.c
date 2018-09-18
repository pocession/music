#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>

//The program is a practice of transforming notes to its corresponding frequency

//transform the first character into an integer and calculate frequency
float frequency(int);

int main()
{
    string s = get_string("Enter your note: \n");
    int first = (int) (char) s[0];
    int second = (int) (char) s[1];
    int third = (int) (char) s[2];
    
    float f = frequency(first);

    //if there is no accidental in the entered note, calculate the frequency
    if (second >= 48 && second <= 56)
    {
        int octave = 0;
        if (first == 65 || first == 66)
          octave = second - 48 - 4;
        if (first >= 67 && first <= 71)
          octave = second - 48 - 1 - 4;
        float result = f * pow (2, octave);
        printf("%f\n", result);
    }

    //if there is an accidental in the entered note, increase or decrease one semitone, then calculate the frequency
    if (second == 35 || second == 98)
    {
        float y = 0;

        //increase one semitone
        if (second == 35)
           y = pow (2, (float) 1 / (float) 12);

        //decrease one semitone
        else
           y = pow (2, - (float) 1 / (float) 12);
        int octave = 0;
        if (first == 65 || first == 66)
          octave = third - 48 - 4;
        if (first >= 67 && first <= 71)
          octave = third - 48 - 1 - 4;
        float result = y * f * pow (2, octave);
        printf("%f\n", result);
    }
    else
    printf("It is not a correct note!\n");
    return 1;

}

//a function of calculating frequency
float frequency(first)
{
    int y = 0;
    if (first == 65) // A = 1
      y = 1;
    if (first == 66) // B = 3
      y = 3;
    if (first == 67) // C = 4
      y = 4;
    if (first == 68) // D = 6
      y = 6;
    if (first == 69) // E = 8
      y = 8;
    if (first == 70) // F = 9
      y = 9;
    if (first == 71) // G = 11
      y = 11;
    float result = 440 * pow(2, (float) (y - 1) / (float) 12);
    return result;
}
