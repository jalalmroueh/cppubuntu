#include<iostream>
using namespace std;

int main(){
	
	int number1, number2;
	char operation;
	cout << "Enter number: ";
	cin >> number1;
	cout << "Enter Operation: ";
	cin >> operation;
	cout << "Enter number 2: ";
	cin >> number2;
	system("clear");
	cout << number1 << " " <<operation << " " << number2 << " = " ;
	switch(operation){
	case '+': cout << number1 + number2 << endl;break;
	case '*': cout << number1 * number2 << endl;break;
	case '/': cout << number1 / number2 << endl;break;
	case '-': cout << number1 - number2 << endl;break;
	}

		
	return 0;
}
