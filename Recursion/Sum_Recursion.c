#include <stdio.h>

//Recursive function
int Rec_M(int n)
{
  if(n==1)	//base case
	  return 1;
  else		//recursive case
	  return n * Rec_M(n-1);
}


int main()
{
    printf("\nREC: %d", Rec_M(5)); //Initial call
    return 0;
}

