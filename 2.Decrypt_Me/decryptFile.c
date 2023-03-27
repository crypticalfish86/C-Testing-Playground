#include <stdio.h>
#include <ctype.h>
#include <string.h>

void decoder(char* encodedString, char* returnedString)
{
  int charlimit = 580000;
  int outIndex = 1;
  char outBufferArr[charlimit];
  char finalMessage[charlimit];
  outBufferArr[0] = encodedString[0];
  //char wordBlackList[24][8] = {"ALFA", "BRAVO", "CHARLIE", "DELTA", "ECHO", "FOXTROT", "GOLF", "HOTEL", "INDIA", "KILO", "LIMA", "MIKE", "NOVEMBER", "OSCAR", "PAPA", "ROMEO", "SIERRA", "TANGO", "UNIFORM", "VICTOR", "WHISKEY", "X-RAY", "YANKEE", "ZULU"};

  for (int i = 0; i < strlen(encodedString); i++) 
  {
    if(encodedString[i] == ' ' && encodedString[i + 1] == ' ')
    {
      outBufferArr[outIndex] = encodedString[i];
      outIndex++;
    }
    else if(encodedString[i] == ' ' && encodedString[i + 1] != ' ')
    {
      outBufferArr[outIndex] = encodedString[i + 1];
      outIndex++;
    }else
    {
      continue;
    }
  }

  int decodedBool = 1;
  for(int i = 0; i < strlen(outBufferArr); i++)
  {
    if(outBufferArr[i] == ' ')
    {
      decodedBool--;
      decoder(outBufferArr, returnedString);
    }else
    {
      continue;
    }
  }

  if(decodedBool == 1)
  {
        printf("%s", outBufferArr);
        FILE *outFptr;
        outFptr = fopen("output.txt","w");
        fprintf(outFptr, outBufferArr);
        fclose(outFptr);
        *returnedString = outBufferArr;
  }

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

  return 0;
}