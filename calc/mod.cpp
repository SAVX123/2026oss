#include "sub.h"

int mod(int x, int y)
{
	while (x > y)
	{
		x = sub(x, y);
	}
	return x;
}
