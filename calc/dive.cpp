#include "sub.h"

int dive(int x, int y)
{
	int cnt = 0;
	while ( x > y )
	{
		cnt++;   // dev/c 브랜치에서 수정
		x = sub(x, y);
	}

	return cnt;
}
