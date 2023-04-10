#include <time.h>
#include <stdlib.h>
#include <stdio.h>

#define COLS 30
#define ROWS 60

void printRow()
{
    for(int i = 0; i < ROWS; i++)
       {
            if(i == (ROWS -1))
            {
                printf("=\n");
            }else
            {
                printf("=");
            }
       }
}

int main()
{
        srand(time(NULL));

        int rCOL = rand() % 30;
        if(rCOL == 0)
        {
            rCOL = 1;
        }
        else if(rCOL == 29)
        {
            rCOL = 28;
        }

        int rROW = rand() % 60;
        if(rROW == 0)
        {
            rROW = 1;
        }
        else if(rROW == 59)
        {
            rROW = 58;
        }

       for(int y = 0; y < COLS; y++)
       {    if(y == 0 || y == (COLS - 1))
            {
                printRow();
            }
            else
            {
                for(int x = 0; x <ROWS; x++)
                {
                    if(x == 0)
                    {
                        printf("||");
                    }else if(x == (ROWS - 1))
                    {
                        printf("||\n");
                    }
                    else if(x == rROW && y == rCOL)
                    {
                        printf("X");
                    }else
                    {
                        printf(" ");
                    }
                }
            }
       }
    return 0;
}