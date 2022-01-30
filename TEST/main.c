#include<stdio.h>

#define FILELEN 15

int ascii_to_hex(char c)
{
        int num = (int) c;
        if(num < 58 && num > 47)
        {
                return num - 48;
        }
        if(num < 103 && num > 96)
        {
                return num - 87;
        }
        return num;
}

int main()
{
        FILE *fp = fopen("latihan 1.jpg","r");
        unsigned char c1,c2;
        int i=0;
        unsigned char sum,final_hex[FILELEN/2];
        for(i=0;i<FILELEN/2;i++)
        {
                c1 = ascii_to_hex(fgetc(fp));
                c2 = ascii_to_hex(fgetc(fp));
                sum = c1<<4 | c2;
                final_hex[i] = sum;
                printf("%02x ",sum);
        }
        printf("\n");
}
