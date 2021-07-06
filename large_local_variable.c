#include <stdio.h>


/*--------------------------------------------------------------------------------

COMMENTARY

Compiler optimizations may detect non-used variables and disregard them.

That's why there's an assignment below (to ensure the variable was used),
  and positioned *after* the message (it doesn't need to execute).

See ISBN  ‎ 979-8744162498.

--------------------------------------------------------------------------------*/



#define N 10000


int main () {

   char variable_in_stack_frame [N][N];

   puts ("maybe you won\'t see me.");

   variable_in_stack_frame[0][0] = 1;

   return 0;

}
