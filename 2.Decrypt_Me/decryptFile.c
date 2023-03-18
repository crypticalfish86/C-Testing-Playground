#include <stdio.h>
#include <ctype.h>
#include <string.h>

void decoder(char* encodedString, char* returnedString)
{
  int spaceCounter = 0;
  int recurseBool = 0;
  int charlimit = 580000;
  int outIndex = 0;
  char outBufferArr[charlimit];
  
  for (int i = 0; i < strlen(encodedString); i++) 
  {
    if(isupper(encodedString[i]))
    {
      outBufferArr[outIndex] = encodedString[i];
      outIndex++;
    }
    
    if(encodedString[i] == ' ')
    {
      spaceCounter++;
      if(spaceCounter >= 2)
      {
        recurseBool++;
        outBufferArr[outIndex] = encodedString[i];
        outIndex++;
      }
    }else
    {
      spaceCounter = 0;
    }
    
  }

    // if(recurseBool)
    // {

    // }
    // else
    // {
        // printf("final buffer is:\n%s", outBufferArr);
        FILE *outFptr;
        outFptr = fopen("output.txt","w");
        fprintf(outFptr, outBufferArr);
        fclose(outFptr);
        *returnedString = outBufferArr;
    // }
  
};

int main(){

  FILE *fptr;
  fptr = fopen("decryptMe.txt", "r");
  if(fptr == NULL)
  {
    return 1;
  }

int charLimit = 580000;
  char stringBuffer[charLimit];
  char stringBuffer2[charLimit];
  fgets(stringBuffer, charLimit, fptr);
  fclose(fptr); 
  decoder(stringBuffer, stringBuffer2);
  // printf("final buffer is:\n%s", stringBuffer2);

    // FILE *outFptr;
    // outFptr = fopen("output.txt","w");
    // fprintf(outFptr, stringBuffer2);
    // fclose(outFptr);

  return 0;
}