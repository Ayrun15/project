#include<iostream>
using namespace std;

int main(){
	int numbers[10];
	int countX = 0;
	int x;
	cout << "Enter 10 numbers: ";
	
	for (int i = 0; i < 10; i++){
		cin >> numbers[i];
	}	
	
	
	cout << "Enter a number: ";
	cin >> x;
	
	
	
	for (int k=0; k < 10; k++){
		if (numbers[k] == x){
		
			countX++;
		}
	}
	
	
	
	cout << "The number " << x << " appeared " << countX << " times.";
	
	return 0;
}
