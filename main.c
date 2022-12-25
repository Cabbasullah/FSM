#include <stdio.h>
#include <stdlib.h>

int main()
{
    // x1 and x2 = current state(s0=00, s1=01, s2=10, s3=11)
    // x3=input(1,0)
    int x3[1]; //= {0, 1, 0, 1, 0, 1, 0, 1};
    int x2[1]; //= {0, 0, 1, 1, 0, 0, 1, 1};
    int x1[1]; //= {0, 0, 0, 0, 1, 1, 1, 1};
    int i; //next_state, Initial_State;
    char* face;
    printf("Please enter your current state(x1,x2) and input value(x3).   \n ");
    printf("Enter x1: ");
    scanf(" %d, %s\n", &x1[i], face);
    printf("Enter x2: ");
    scanf(" %d,%s\n", &x2[i], face);
    printf("Enter x3: ");
    scanf(" %d, %s\n", &x3[i],face);

    //for (i = 0; i < 8; i++)
        
    {
        //for (i = 0; i < 8; i++)
            
            {
                if (x1[i] == 0 && x2[i] == 0 && x3[i] == 0)
                    //Initial_State = 00,
                    face = ("\U0001F610"); //normal face

                else if (x1[i] == 0 && x2[i] == 0 && x3[i] == 1)
                    //next_state = 01,
                    face = ("\U0001F625");//sad face

                else if (x1[i] == 0 && x2[i] == 1 && x3[i] == 0)
                    //next_state = 00,
                    face = ("\U0001F610");//normal face
                else if (x1[i] == 0 && x2[i] == 1 && x3[i] == 1)
                    //next_state = 10,
                    face = ("\U0001F620"); //angry face

                else if (x1[i] == 1 && x2[i] == 0 && x3[i] == 0)
                    //next_state = 11,
                    face = ("\U0001F604"); // smile face
                else if (x1[i] == 1 && x2[i] == 0 && x3[i] == 1)
                    //next_state = 10,
                    face = ("\U0001F620"); //angry face
                else if (x1[i] == 1 && x2[i] == 1 && x3[i] == 0)
                    //next_state = 00,
                    face = ("\U0001F610");
                else if (x1[i] == 1 && x2[i] == 1 && x3[i] == 1)
                    //next_state = 10,
                    face = ("\U0001F620");

                printf("%s\n", face);
        }
    }
}