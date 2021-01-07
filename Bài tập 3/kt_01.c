#include <stdio.h>

int main() 
{
  int i, a;
  
  printf("\nBang 2\n");
  for( i = 1; i < 11; i++)
  {
  	for(a = 1; a < 11; a++)
	{
		printf("%dx%d=%d\t",a, i, a * i);
	}
	printf("\n");
	}
  return 0;
}
