#include <stdio.h>

int main(int argc, char** argv)
{
FILE *fp = fopen("leer_archivo.c", "r");
int ch = getc(fp);
while (ch != EOF)
{
    /* display contents of file on screen */
    putchar(ch);

    ch = getc(fp);
}
    
if (feof(fp))
    printf("\n End of file reached.");
else
    printf("\n Something went wrong.");
fclose(fp);
    
getchar();
return 0;
}

