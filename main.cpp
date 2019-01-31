#include <iostream>
using namespace std;

int main(){
    cout << "Week 2 Lab" << endl;
    int bob;
    int john;

    bob = 42;
	john = 32;
	int johnbob = bob+john;
	short rachel = 10;
	short luke = 7;
	float pie = 3.14;
	char middle = 'M';
	bool shouldWe = true;
	
	if (shouldWe){
		cout << "The result was true!" << endl;
	} else{
		cout << "False!!!" << endl;
	}
	
	if (johnbob > luke) {
		cout << "The result was true!" << endl;
	} else{
		cout << "False!!!" << endl;
	}
	
    cout << "Bob is " << bob << " years old." << endl;
	cout << "Bob and john together are " << johnbob << " years old." << endl;
	cout << middle << " is the middle initial for ";
	cout << pie << " users that are " << luke;
	cout << " years old.";
	
	cout << johnbob << " is bob and john added." << endl;
	cout << bob - john << " is bob and john susbtracted." << endl;
	cout << bob/john << " is bob and john divided." << endl;
	cout << bob*john << " is bob and john multiplied." << endl;
	cout << bob%john << " is bob modulus john." << endl;
	
	
	
    return 0;
}