#include <stdio.h>

long cube[101];
FILE* fout;
void main()
{
         int i,a,b,c,d, rest, rest2;
         fout = fopen("cubes.out", "w");
         for(i=0; i<=100;i++)
              cube[i] = i*i*i;
         for(a=6; a<100; a++)
         for(b=2; b<a; b++)
         {
             rest = cube[a] - cube[b];
             for(d=c; cube[d]<=rest2; d++)
             if(cube[d]==rest2)
                  fprintf(fout, "Cube=%d, Triple = (%d,%d,%d)\n",a,b,c,d);
         }
         fclose(fout);
}
