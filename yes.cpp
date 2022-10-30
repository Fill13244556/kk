# include <iostream>
int main() {
	setlocale(LC_ALL, "rus"); 
	// задача 1. 
	int i = 1; 
	do {
		std::cout << i << " "; 
		i++;
    }
	while (i <= 100);
	
// задача 2.
	int a, b; 
	int i1 = b;
	int sum = 0;
	std::cout << "a:"; 
	std::cin >> a; 
	std::cout << "b:"; 
	std::cin >> b; 
	do {
		if (i1 % 2 != 0) {
			sum = sum + i1; 
			std::cout << sum << std::endl;
		}
		i1--;
	} 
	while (i1 >= a); 


// задача 3.
	int n;
	std::cout << "n:"; 
	std::cin >> n;
	int c; 
	int i2 = 1;
	do {
		std::cout << i2 << std::endl;
		i2++; 
	} while (i2 * i2 <= n);

// задача № 29. 
	int i3 = 2; 
	do {
		std::cout << i3 << std::endl;
		i3++;
	} while (i3 <= 100); 

// задача № 30. 
	int i4 = 1;
	int summ = 0; 
	do {
		if (i4 % 2 != 0) {
			summ = summ + 1; 
			std::cout << summ << std::endl; 
		}
		i4++;
	} while (i4 <= 99);

// задача № 17. 
	int N; 
	int x; // рост ученика
	std::cout << "N:"; 
	std::cin >> N;
	int summm = 0; 
	int i5 = 1; 
	do {
	std::cout << "Введите рост ученика:"; 
	std::cin >> x; 
		i5++;
		summm = summm + x; 
		std::cout << summm / x << std::endl; 
	

	}while (i5 <= N); 

// задача № 18.
	int n; 
    std::cout << "n:"; 
	std::cin >> n; 
	int i6 = 0; 
	do {
		if (i6 % 2 == 0 && i6 % 3 == 0 && i6 % 5 == 0) {
			std::cout << i6 << std::endl; 
		}
		 
     i6++;
	} while (i6 <= n);
	
}