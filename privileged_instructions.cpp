#include <stdio.h>

#define _asm(x) asm(".intel_syntax noprefix \n " x "\n.att_syntax ");

/*--------------------------------------------------------------------

COMMENTARY

Compile (g++ Linux), run, read more on  ISBN  ‎ 979-8744162498.

obs.: the macro defined above is just sintax sugar.
The compiler uses att syntax, the examples preferred intel syntax.


--------------------------------------------------------------------*/



int main () {

   _asm ("add ax, 1");

   puts ("Ok so far.");

   _asm ("in ax, 1");

   puts ("Doh.");

   return 0;
}
