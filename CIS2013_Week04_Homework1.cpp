#include <iostream>
#include <cmath>
using namespace std;

	float num1 = 0;
	float num2 = 0;
	char math_sign = 0;
	float solution = 0;
	bool run_again = true;
	char yes_or_no = 'n';
	bool invalid_response = true; 
	
int main (){
	
	float add (float, float);
	float subtract (float, float);
	float multiply (float, float);
	float divide (float, float);
	float square (float);
	int modulus (int, int);
	
	while(run_again==true){
	//prompt user to enter 2 numbers and operator.
	cout << "Please enter your first number: "; 
	cin >> num1;
	cout << "Please enter your second number: "; 
	cin >> num2;
	cout << "Would you like to add, subtract, multiply or divide the two numbers? \n";
	cout << "For subtraction, the second number will be taken away from the first, \n";
	cout << "and for the division and modulus, the first number will be divided by the second. \n";
	cout << "For square root, your first number will be calculated." << endl;
	while(invalid_response==true){
	cout << "Enter +,-,*, /, s ( for square root), or % : "; 
	cin >> math_sign;
	//if condition for appropriate sign entered OR tell user the input is invalid.
	if (math_sign == '+'){solution = add (num1, num2);}
	else if (math_sign == '-'){solution = subtract (num1, num2);}
	else if (math_sign == '*'){solution = multiply (num1, num2);}
	else if (math_sign == '/'){solution = divide (num1, num2);}
	else if (math_sign == 's'){solution = square (num1);}
	else if (math_sign == '%'){solution = modulus (num1, num2);}
	else{cout << "Invalid response - \n";}
	}
	if ((invalid_response==false)&&(!(math_sign=='s')||(math_sign=='S'))){cout << num1 << math_sign << num2 << "=" << solution;}
	else if (invalid_response==false){cout << "the square root of " << num1 <<" is " << solution << endl;}
	cout << "\n" << "Would you like to perform another calculation? Y/N: ";
	cin >> yes_or_no;
	if((yes_or_no!='Y')&&(yes_or_no!='y')){run_again=false;}
	else{invalid_response=true;}}
	
	return 0;
}

float add (float first, float second){
	invalid_response=false;
	return (num1+num2);
}
float subtract (float first, float second){
	invalid_response=false;
	return (num1-num2);
}
float multiply (float first, float second){
	invalid_response=false;
	return (num1*num2);
}
float divide (float first, float second){
	if (num2==0){cout << "cannot divide by 0.  Please an operator other than divide or modulus." << endl;}
	else {
	invalid_response=false;
	return (num1/num2);
}
}
float square (float first){
	invalid_response=false;
	return sqrt(num1);
}
int modulus (int first, int second){
	if (num2==0){cout << "cannot divide by 0.  Please an operator other than divide or modulus." << endl;}
	else {
	invalid_response=false;
	return int(num1) % int(num2);
	}
}
	