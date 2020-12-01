#include "pch.h"
#include "Alu.h"


int Alu::Add(char * numbers)
{
	int result = 0;
	int q = strlen(numbers);//длина принятой строки
	const int max_q_r = 10; //максимальное количество разрядов
	char str_num[max_q_r] = {0};

	if (q) {
		int i = 0;
		char s[] = "0";

		while (i < q) {
			s[0] = numbers[i];

			if (!strcmp(",", s)) {
				result = result + atoi(str_num);
				memset(str_num, '\0', max_q_r);
			} else {
				s[0] = numbers[i];
				strncat(str_num, s, 1);
			}
			i++;
		}

		if (strlen(str_num)) 
			result = result + atoi(str_num);

	}

	return result;
}