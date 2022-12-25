#include <stdio.h>
#include <stdlib.h>


int main()
{
    //x1 and x2 = current state(s0=00, s1=01, s2=10, s3=11)
    //x3=input(1,0)
    int x3[8] = {0,1,0,1,0,1,0,1};
    int x2[8] = {0,0,1,1,0,0,1,1};
    int x1[8] = {0,0,0,0,1,1,1,1};
    int i, next_state;
    char* face;

    for (i = 0; i < 8; i++)
    {
        for (i = 0; i < 8; i++)
        {
            if (x1[i] == 0 && x2[i] == 0 && x3[i]==0)
                next_state = 00,
                face = ("Normal face");

            else if (x1[i] == 0 && x2[i] == 0 && x3[i] == 1)
                next_state =01,
                face = ("Sad face");

            else if (x1[i] == 0 && x2[i] == 1 && x3[i] == 0)
                next_state = 00,
                face = ("Normal face");
            else if(x1[i] == 0 && x2[i] == 1 && x3[i] == 1)
                next_state = 10,
                face = ("Angry Face");

            else if (x1[i] == 1 && x2[i] == 0 && x3[i] == 0)
                next_state = 11,
                face = ("smiley face");
            else if (x1[i] == 1 && x2[i] == 0 && x3[i] == 1)
                next_state = 10,
                face = ("angry face");
            else if (x1[i] == 1 && x2[i] == 1 && x3[i] == 0)
                next_state = 00,
                face = ("normal face");
            else if (x1[i] == 1 && x2[i] == 1 && x3[i] == 1)
                next_state = 10,
                face = ("angry face");

            printf("next state: \n %d AND %d AND %d = %d %s\n",
                   x1[i], x2[i], x3[i], next_state, face);
        }
    }  
}