#include <stdio.h>
#include <string.h>


/*-------------------------------------------------------------------

COMMENTARY

Function gets() is not available anymore, so we craft a dummy here.

Run the code, just pretend someone typed 20 characters. 
If program still working, augment from 20 to 50, or something.

Read more here: ISBN  ‎ 979-8744162498.

--------------------------------------------------------------------*/


/*-----------------------------------------*/
int my_gets (char *p) {

   for (int i = 0; i < 20; i++)
      p[i] = i;

}



/*-----------------------------------------*/
void victim (void) {

   char s[10];

   my_gets (s);

}


/*-----------------------------------------*/
void main (void) {

   victim ();

   puts ("What Happened?");

   getchar ();
}

