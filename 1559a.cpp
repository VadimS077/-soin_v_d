#include<iostream>

int main(){
	int t = 0;


	std::cin >> t;
	while (t--){
		int n = 0;
		std::cin >> n;
		int a1 = 0;
		std::cin >> a1;
		for (int i = 0; i < n - 1; i++)
		{
			int x = 0;
			std::cin >> x;
			a1 = a1 & x;
		}
		std::cout << a1 << std::endl;
	}
}