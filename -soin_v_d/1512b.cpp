#include<iostream>
#include<vector>
#include<string>

int main(){
	int t=0;
	std::cin >> t;
	while(t--){
		int n=0;
		std::cin >> n;
		std::vector <int> x, y;
		std::string s[n];
		for(int i = 0; i < n; i++)
			std::cin >> s[i];
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				if(s[i][j] == '*'){
					x.push_back(i);
					y.push_back(j);
				}
			}
		}
		if(x[0] == x[1])
			x[1] = x[0] == 0;
		if(y[0] == y[1])
			y[1] = y[0] == 0;
		for(int i = 0; i < 2; i++)
			for(int j = 0; j < 2; j++)
				s[x[i]][y[j]] = '*';
		for(int i = 0; i < n; i++)
			std::cout << s[i] << std::endl;
	}
}
