#include "primenumber.h"
#include <stdio.h>

int primenumber(int n)
{
	if (n>1)
	{
		if (n==2 || n==3)
			return 1;
		else if (n%2==0)
			return -1;
		else
		{
			for(int i=3;i<n;i+2)
			{
				if(n%i!=0)
					return 1;
				else
					return -1;
			}
		}		
	}
	else
		return 0;
}
