/* -----------------------------------------------------

1) Compile (gcc), execute.
2) Do it again, with the second version (read the code).
3) Explain what happened.

 ----------------------------------------------------- */
#include <stdio.h>

char s1[] = "ABC";
char s2[] = "XYZ";

int main () {

   int k = 0;

   while (k-- > -5) putchar (s2[k]);

   getchar ();

   while (1) putchar (s2[k--]);          // VERSION 1
//   char x; while (1) x = (s2[k--]);     // VERSION 2

   return 0;
}
