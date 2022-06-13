#include<iostream>
#include<cmath>

using namespace std;

// make arthmetic fuction for all arthemetic option

void arithmetic(){
	int operation;
	float firstnumber;
	float secondnumber;
	
	cout<<"Enter the opeartion from the below mentain\n";
    cout<<"================================\n";
	cout<<"Press 1 for Addition\n";
	cout<<"Press 2 for Substraction\n";
	cout<<"Press 3 for Product\n";
	cout<<"Press 4 for Division\n";
	
	cin>>operation;
	cout<<"Enter the first number:";
	cin>>firstnumber;
	
	cout<<"Enter the second number:";
	cin>>secondnumber;
	
	cout<<"Result is: ";
	
	switch(operation){
		case 1:
			cout<<(firstnumber+secondnumber);
			break;
		case 2:
			cout<<(firstnumber-secondnumber);
			break;
		case 3:
			cout<<(firstnumber*secondnumber);
			break;
		case 4:
			cout<<(firstnumber/secondnumber);
			break;
		default:
			cout<<"Please select the valid operation";
			break;
	}
	cout<< endl;
}
// make exponential fuction 

void exponential(){
	float base;
	float expnent;
	
	cout<<"Enter base number:";
	cin>>base;
	cout<<"Enter the expnent: ";
	cin>>expnent;
	cout<<pow(base, expnent)<<endl;
}
// make logarithm fuction 

void logarithm(){
	float value;
	cout<<"Enter the value to calculate the log(e): ";
	cin>>value;
	cout<<log(value)<<endl;
}

// main method basically entry point in the program

int main(){
	int option;
	char choice = 'y';
    cout<<"\n";

	cout<<"Assignment on Calculator\n";
 cout<<"===============================\n";
	cout<<"Press 1 for Arithmetic\n";
	cout<<"Press 2 for Exponential\n";
	cout<<"Press 3 for Logarithm\n";
    cout<<"===============================\n";
	cout<<"Your choice:";
	
	while(choice == 'y'){
		cout<<"Enter the type of operation you want to calculate\n";
		cin>>option;
		
// calling All the functions in the program related to calculator with switch case

		switch(option){
			case 1:
				arithmetic();
				break;
			case 2:
				exponential();
				break;
			case 3:
				logarithm();
				break;
			default:
				cout<<"Please input the valid Operation";
		}
		
		cout<<"Are You Done !! or Do you want to continue? y/n"<<endl;
		cin>>choice;
		if(choice == 'n'){
			break;
		}
	}		
	return 0;
}
