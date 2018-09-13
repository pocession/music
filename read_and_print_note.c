#include <stdio.h>
#include <cs50.h>
#include <string.h>

//This program is a practice of reading and printing out notes
//Only one note can be entered at each entry
int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Please enter only one note!\n");
        return 1;
    }

    if (argc == 2)
    {
        //The maximum string length of note is 7
        string s = argv[1];
        char first = s[0];
        char second = s[1];
        char third = s[2];
        char fourth = s[3];
        char fifth = s[4];
        char sixth = s[5];
        char seventh = s[6];
        if (first < 'A' || first > 'Z')
        {
            printf("Wrong notes!\n");
            return 1;
        }
        char key = first;
        {
            printf("%c", key);
        }

        //Determine whether the second character is octave
        if (second >= '0' && second <= '8')
        {
            char octave = second;
            char at = third;
            char f1 = fourth;
            char f2 = fifth;
            char f3 = sixth;
            printf("%c%c%c%c%c", octave, at, f1, f2, f3);
        }

        //If the second character is a semitone, shift one character
        else
        {
            char semitone = second;
            char octave = third;
            char at = fourth;
            char f1 = fifth;
            char f2 = sixth;
            char f3 = seventh;
            printf("%c%c%c%c%c%c", semitone, octave, at, f1, f2, f3);
        }
        printf("\n");
        return 0;
    }
}
