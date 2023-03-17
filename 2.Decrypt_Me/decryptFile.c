#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){

  FILE *fptr;
  fptr = fopen("decryptMe.txt", "r");
  if(fptr == NULL)
  {
    return 1;
  }

int charLimit = 100000;
  char stringBuffer[charLimit];

  fgets(stringBuffer, charLimit, fptr);
  fclose(fptr); 


      printf("%s", stringBuffer);
  char stringBuffer2[charLimit];
  int sBI = 0;


  for (int i = 0; i < strlen(stringBuffer); i++) 
  {
    if( isupper(stringBuffer[i]) )
    {
      stringBuffer2[sBI] = stringBuffer[i];
      sBI++;
    }
  }
    printf("final buffer is:\n%s", stringBuffer2);

    FILE *outFptr;
    outFptr = fopen("output.txt","w");
    fprintf(outFptr, stringBuffer2);
    fclose(outFptr);

  return 0;
}