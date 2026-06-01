 #include <iostream> 
 #include <cmath> 
 using namespace std; 
  
 int customFunction(int a, int b) { 
 	if (b == 0) { 
		return a; 
	} 
	return a + customFunction(a , b - 1); 
 } 
int main() { 
	int x, y; 
	cin >> x >> y; 
	int result = customFunction(x, y); 
	cout << pow(result, 2) << endl; 
	return 0; 
} 
