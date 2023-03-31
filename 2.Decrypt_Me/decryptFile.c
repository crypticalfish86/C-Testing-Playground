#include <stdio.h>
#include <ctype.h>
#include <string.h>

int decoder(char *encodedString)
{
  int charlimit = 580000;
  int outIndex = 1;
  char outBufferArr[charlimit];
  char finalMessage[charlimit];
  outBufferArr[0] = encodedString[0];

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
  printf("final buffer is:\n%s", outBufferArr);
  FILE *outFptr;
  outFptr = fopen("output1.txt","w"); //increment the output'num'.txt to decrypt file fully (should take 6 iterations)
  fprintf(outFptr, outBufferArr);
  fclose(outFptr);
  return 1;
}

int main(){

  FILE *fptr;
  fptr = fopen("decryptMe.txt", "r"); //change to output'num'.txt to decrypt file fully (should be always one less than on line 31 and should take 6 iterations)
  if(fptr == NULL)
  {
    printf("file not found");
  }

int charLimit = 580000;
  char stringBuffer[charLimit];
  fgets(stringBuffer, charLimit, fptr);
  fclose(fptr); 
  decoder(stringBuffer);

  return 0;
}