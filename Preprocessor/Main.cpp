#include <iostream>
//константа препроцессора. Препроцессор заменяет наименование PI в каждом месте кода, где оно встречается на 3.14
#define PI 3.14

//Конструкция процессора заменяет forever на цикл во всем коде
#define forever for(unsigned long long iterator = 0; ;iterator++)

//макросы препроцессора. Препроцессор заменяет их наименования на их тела\
подставляя на место параметров те программные элементы,\
которые были переданы в макрос в момент его вызова
#define sum(a, b) (a + b)
#define forel(el, num)for(int el = 0; el<num; el++)
#define print_arr(arr, length)\
std::cout << "{ ";\
for(int i = 0; i<length; i++)\
std::cout<<arr[i]<<", ";\
std::cout<<"\b\b }"<<std::endl


//Это одностроччный коментарий разделенный на \
несколько строк с помощью обратного слеша.


#define TEST 2

#if TEST == 1
void func() {
	std::cout << "Hello world!\n";
}
#elif TEST == 2
void func() {
	std::cout << "No comments!\n";
}
#else
void func() {
	std::cout << "Bue world!\n";
}
#endif


#define FLAG
#ifdef FLAG
void foo() {
	std::cout << "!!!\n";
}
#endif










int main() {
	system("chcp 1251>nul");
	int n, m;


	//Константы и конструкции препроцессора
	/*
	std::cout << "PI = " << PI << std::endl;
	//PI = 3; - ошибка
	
	forever{
		std::cout << '.';
	if (iterator >= 5)
		break; 
	}*/

	//МАКРОСЫ ПРЕПРОЦЕССОРА
	/*
	n = 7; m = 15;
	std::cout << sum(n, m) << std::endl;

	forel (i, 5)
		std::cout << i << std::endl;

	const int len = 5;
	int arr[len]{ 5,10,15,20,25 };
	print_arr(arr, len);

	std::cout << sum(2, 3) * sum(4, 5) << std::endl;

	std::cout << "PI = " << PI << std::endl;

#undef PI//остановка замены имени удаляет объект препроцессора с этой строчки кода
	//std::cout << "PI = " << PI << std::endl; ошибка
#define PI 3
	std::cout << "PI = " << PI << std::endl;*/

	func();



	return 0;
}