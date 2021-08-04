

/*-------------------------------------------------------------------
COMMENTARY

To compile, use
 g++ -std=c++11 -pthread selling_tickets.cpp


This small program illustrates the "selling tickets problem".

Run the code, you should obtain different values each time.

Pay attention to constants A and B. 

Read more here: ISBN  ‎ 979-8744162498.
--------------------------------------------------------------------*/

#include <string>
#include <iostream>
#include <thread>


/*---------------------------------------------------------------------------
These constants may need to be increased, as faster CPUs are built.

For relatively small values of A and B, all the A*B loops are
executed by the microprocessor without context switching.

In other words, A*B must be such that interleaved execution will occur.

As a reference, 
in the computer I used for the tests execution took less than 0.2 seconds,
and this was enough to trigger the problem.
---------------------------------------------------------------------------*/
#define A 10
#define B 1000000

int Gk = 0;


void test (int n) {

   for (int i = 0; i < 10; i++)
      for (int j = 0; j < 1000000; j++)
         Gk += n;
}

int main () {

   puts ("Illustration of the selling tickets problem.");
   puts ("The final value of Gk should be 0.");


   std::thread t1 (test,  1);   // Add 1
   std::thread t2 (test, -1);   // Subtract 1

   t1.join();
   t2.join();

   printf ("Gk = %d\n", Gk);

   return 0;
}
