#include <stdio.h>


/*---------------------------------------------------------------

COMMENTARY

Compile (Linux), run, examine the contents of file "test.txt".

You'll should discover that function fputs() did not put anything
(not in the file)!

See more in ISBN  ‎ 979-8744162498.

---------------------------------------------------------------*/


FILE *arq;

int main () {

   arq = fopen ("test.txt", "wt");

   fputs ("abc", arq);

   (arq->_IO_write_base)[0] = 'X';
   (arq->_IO_write_base)[1] = 'Y';
   (arq->_IO_write_base)[2] = 'Z';

   fclose (arq);
   return 0;
}
