#include <iostream>
using namespace std;
//Home Work #18_Shumilin
//Task 1.
inline int middleN(int n1, int n2) {
	return (n1 + n2) / 2;
}
//Task 2.
int maxN(int n1, int n2, int n3) {
	if (n1 > n2 && n1 > n3)
		return n1;
	if (n2 > n1 && n2 > n3)
		return n2;
	if (n3 > n1 && n3 > n2)
		return n3;
}
float maxN(float n1, float n2, float n3) {
	if (n1 > n2 && n1 > n3)
		return n1;
	if (n2 > n1 && n2 > n3)
		return n2;
	if (n3 > n1 && n3 > n2)
		return n3;
}
double maxN(double n1, double n2, double n3) {
	if (n1 > n2 && n1 > n3)
		return n1;
	if (n2 > n1 && n2 > n3)
		return n2;
	if (n3 > n1 && n3 > n2)
		return n3;
}
//Task 3.
template <typename T> T maxEl(T arr[], int length) {
	T max = 0;
	for (int i = 0; i < length; i++)
		if (arr[i] > max)
			max = arr[i];
	return max;
}
template <typename T> void showArr(T array[], int length);

int main() {
	setlocale(LC_ALL, "ru");
	int n, m;

	//Task 1.
	cout << "Task 1.\nEnter two numbers: ";
	cin >> n >> m;
	cout << "Arithmetic mean = " << middleN(n, m) << endl;

	//Task 2.
	cout << "\nTask 2.\n";
	cout << "int " << maxN(1, 10, 15) << endl;
	cout << "float " << maxN(7.8, 3.2, 5.1) << endl;
	cout << "double " << maxN(2.115, 4.222, 5.128) << endl;

	//Task 3.
	cout << "\nTask 3.\n";
	int arr[4] = { 2, 8, 4, 11 };
	showArr(arr, 4);
	cout << "Maksimum array element : " << maxEl(arr, 4) << endl;
	float arr2[4] = { 5.7, 4.2, 15.3, 3.9 };
	showArr(arr2, 4);
	cout << "Maksimum array element : " << maxEl(arr2, 4) << endl;

	return 0;
}
template <typename T> void showArr(T array[], int length) {
	cout << "Original array:\n[";
	for (int i = 0; i < length; i++)
		cout << array[i] << ", ";
	cout << "\b\b]\n";
}