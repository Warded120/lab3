/*За допомогою функції pow(base, exponent) з бібліотеки <cmath> напишіть
програму для будь-якого степеня числа 2. З клавіатури треба буде вводити
ціле значення степеня, до якого треба піднести двійку. Приклад виконання
відкомпільованої програми:
Введіть степінь, до якого треба піднести число 2: 4
Відповідь: 2 у степені 4 = 16.
Пояснення 2*2*2*2=16.*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int power;
	cout << "enter the power of number 2 : ";
	cin >> power;

	cout << pow(2, power);
}
