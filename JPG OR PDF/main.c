#include <stdio.h>
#include <stdlib.h>

char fileName;

int main()
{
    FILE * fPointer;
    fPointer = fopen("latihan 1.pdf", "rb");
    char singleLine[255];


  //  /*
    fgets(singleLine, 255, fPointer);
    puts(singleLine);
 //   */


   /*
    while(!feof(fPointer))
    {
        fgets(singleLine, 255, fPointer);
        puts(singleLine);
    }
   */

    fclose(fPointer);

    return 0;
}
