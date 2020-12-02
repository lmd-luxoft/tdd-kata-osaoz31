#include "pch.h"
#include "Calculator.h"
/*
int Calculator::Add(std::string expression)
{
    return 0;
}
*/

int Calculator::Add(char* expression)
{
	int result = 0;
	int q = strlen(expression);//длина принятой строки
	const int max_q_r = 9; //максимальное количество разрядов
	char str_num[max_q_r] = { 0 };

	if (q) {
		int i = 0;
		char s[] = "0";

		while (i < q) {
			s[0] = expression[i];

			if (!(strcmp(",", s) && (strcmp("\n", s)))) {
				result = result + atoi(str_num);
				memset(str_num, '\0', max_q_r);
			}
			else
				strncat(str_num, s, 1);

			i++;
		}

		if (strlen(str_num))
			result = result + atoi(str_num);

	}

	return result;
}
