#include <iostream>
using namespace std;
int main() {
	/*int n;
	cin >> n;
	for (int i = 1; i <= n; i += 1) {
		cout << "@";
	}*/
	/*int a, b, i;
	cin >> a >> b;
	i = b;
	while (i >= a) {
		cout << i << " ";
		i--;
	}*/
	/*int a, b, sum = 0;
	cin >> a >> b;
	for (int i = a; i <= b; i++) {
		if (i % 2 == 0) {
			sum += i;
		}
	}
	cout << sum << endl;*/
	/*int i, n, p = 1;
	cin >> i;
	while (i <= n) {
		if (i % 5 != 0) {
			p *= i;// p = p * i;
		}
		i++;
	}
	cout << p << endl;*/
	//10. Даны натуральные числа от 1 до 50. Найти сумму тех из них, которые делятся на 5 или на 7.
	/*int i, sum = 0;
	while (i <= 50) {
		if (i % 5 == 0 || i % 7 == 0) {
			cout << i;
		}
		i++;
	}
	cout << sum << " ";*/
	/*//11. Напечатать те из двузначных чисел которые делятся на 4, но не делятся на 6.
	int i;
	for (i = 10; i <= 99; i++) {
		if (i % 4 == 0 && i & 6 != 0) {
		}
	}
	cout << i << " ";*/
	//12. Найти произведение двузначных нечетных чисел кратных 13.
	/*int i = 10, p = 1;
	while (i <= 99) {
		if (i % 2 == 0 && i & 13 == 0) {
			p *= i;
		}
		i++;
	}*/
}