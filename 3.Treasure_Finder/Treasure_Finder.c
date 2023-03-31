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
    int quit = 0;
    //while(!quit)
    //{
       //printf("r");
       for(int i = 0; i < COLS; i++)
       {    if(i == 0 || i == (COLS - 1))
            {
                printRow();
            }else
            {
                for(int i = 0; i <ROWS; i++)
                {
                    if(i == 0)
                    {
                        printf("||");
                    }else if(i == (ROWS - 1))
                    {
                        printf("||\n");
                    }else
                    {
                        printf(" ");
                    }
                }
            }
       }
    //}
    return 0;
}