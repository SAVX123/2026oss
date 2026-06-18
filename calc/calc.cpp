// calc.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include "add.h"
#include "dive.h"
#include "mod.h"
#include "mul.h"
#include "sub.h"

#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	int x = 0;
	int y = 0;
	int i = 0;

	for (; i < 10; i++)
	{
		std::cout << "첫번째 수를 입력하세요 : ";
		std::cin >> x;
		if (-999 == x) {
			printf("프로그램 종료\n");
			break;
		}
		std::cout << "두번째 수를 입력하세요 : ";
		std::cin >> y;

		printf("입력된 수 x[ %d ] y[ %d ]\n", x, y);
		printf("add[ %d ] sub[ %d ] mul[ %d ] dive[ %d ] mod[ %d ]\n",
			add(x, y), sub(x, y), mul(x, y), dive(x, y), mod(x, y));
	}
}
