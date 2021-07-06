#include <stdio.h>


/*------------------------------------------------------

COMMENTARY

Compile (Linux), run, read more on  ISBN  ‎ 979-8744162498.

------------------------------------------------------*/


int main () {

  fputs ("Hi!\n",stdout);

  printf ("stdout->_fileno = %d\n", stdout->_fileno);

  return 0;
}
