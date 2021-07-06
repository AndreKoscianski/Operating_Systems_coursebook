#include <stdio.h>


/*----------------------------------------------------------

COMMENTARY

Compile, run; if program worked, increase N.

Read more on ISBN  ‎ 979-8744162498.

----------------------------------------------------------*/


#define N 1000

int to[10], from[N];

int main () {

   for (int i = 0; i < N; i++)
      to[-i] = from[i];

   puts ("done");

   return 0;
}
