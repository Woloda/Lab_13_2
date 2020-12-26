#include <iostream>
#include <Windows.h>
#include <math.h>

#include "zmina.h"

using namespace std;
using namespace n_s_zmina;

#define z 3

#define p_do_kvadr(x) (x) * (x)

#define modul(x) abs(x)

#define korin_kvadr(x) sqrt(x)

#define MAX(x,y,z) (p_do_kvadr(x - z) > (x - y)) ? p_do_kvadr(x - z) : (x - y)
#define MIN(x,y,z) ((x - y) > (y - z)) ? (y - z) : (x - y)

#define cout_str(str) cout << str << endl << endl;  
#define cout_zmina(str) cout << str;
#define cout_rezult(str, w) cout << str << w << endl;

int main(void)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	do
	{
		cout_str("Введіть значення змінних: ");
		cout_zmina("Чи бажаєте використовувати модуль до всіх змінних?(ввдедіть Y(якщо так), введіть N(якщо ні)): ");
		cin >> answer;

		cout_zmina("x = ");
		cin >> x;

		cout_zmina("y = ");
		cin >> y;

		if (answer == 'Y'
			|| answer == 'y') {
			x = modul(x);
			y = modul(y);
		}

#if(z > 1)
		w = MAX(x, y, z);
		if (answer == 'Y'
			|| answer == 'y')
			w = modul(w);
#else
		w = MIN(x, y, z);
		if (answer == 'Y'
			|| answer == 'y')
			w  = modul(w);
#endif
		cout_rezult("w = ", w);

		cout_zmina("Ви хочете добути корінь рузультата?(ввдедіть Y(якщо так), введіть N(якщо ні)): "); 
		cin >> answer;

		if (answer == 'Y'
			|| answer == 'y')
			w = korin_kvadr(w);
		cout_rezult("w = ", w);

		cout_zmina("Ви хочете продовжити?(ввдедіть Y(якщо так), введіть N(якщо ні)): ");
		cin >> answer;
	} while (answer == 'Y'
		|| answer == 'y');
	return 0;
}