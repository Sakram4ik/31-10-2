#include <iostream>
#include <cstdlib>//бібліотека для random
using namespace std;

int main(void) {
	const int lenght = 12;//задана довжина масиву(незмінна)
	int arr[lenght];
	for (int  i = 0; i < lenght; i++){
		arr[i] = int(rand() % 100) + -(rand() % 100);//генеруємо число (100;-100)
	}
	cout << "Arr random :\n";//Масив, наповнений довільними(від -100 до 100) числами
	for (int i = 0; i < lenght; i++){
		cout << arr[i] << " ";//виводимо масив
	}

	for (int i = 0; i < lenght; i++){
		if (arr[i] < 0) {
			arr[i] = 0;
    }//якщо і-тий елемент менший нуля, замінюємо його на 0
	}
	cout << "\nArr after change : \n";//Від'ємні числа замінені на 0
	for (int i = 0; i < lenght; i++){
		cout << arr[i] << " ";
	}
	return 0;
}
