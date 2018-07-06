#include <iostream>
#include <cstdlib>
using std::cout;
using std::endl;


int main(){

	int i, n;

	for(i=0;i<1000;i++){
		n = rand() % 100 + 1;
		//cout << i << " " << n << endl;
    
	if (n%2==0 && n<89 && i<25){
		int x = n;
		cout << "Los primeros numeros son: " << x << endl;
    		}	 	 
	}	

  return 0;
}
