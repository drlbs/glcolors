#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main(){


    int i, j, k;
    double dbl;
    char color[30];
    char hex[10];
    int red, green, blue;
    int trash;
    const int SIZE = 554;


    FILE* fp;

    fp = fopen("colors","r");

    // Read the file
    for (i=0; i<SIZE; i++) {
        fscanf(fp, "%s", &color); 
        fscanf(fp, "%s", &hex); 
        fscanf(fp, "%i", &red); 
        fscanf(fp, "%i", &green); 
        fscanf(fp, "%i", &blue); 
        fscanf(fp, "%i", &trash); 
     
     //printf("static struct %s {\n\tconst int red;\n\tconst int green;\n\tconst int blue;\n\tconst char *hex;\n\t};\n\n", color);
     printf("extern color_vector %s;\n", color);
    }

    rewind(fp);

    // Read the file
    for (i=0; i<SIZE; i++) {
        fscanf(fp, "%s", &color); 
        fscanf(fp, "%s", &hex); 
        fscanf(fp, "%i", &red); 
        fscanf(fp, "%i", &green); 
        fscanf(fp, "%i", &blue); 
        fscanf(fp, "%i", &trash); 
     
     printf("%s[0] = %i; %s[1] = %i; %s[2] = %i;\n",
               color, red, color, green, color, blue);
    }
}
