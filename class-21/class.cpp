// class.cpp


#include <iostream>

using namespace std;

/////////////////BLUE PRINT/////////////////
class Car {
public:
	string name;
	int price;
	int milage;
	int *model;

	//default constructor
	Car() {
		cout << "calling default constructor" << endl;

	}

	// parameterized constructor
	Car(string n, int p, int m, int *mo) {
		cout << "calling parameterized constructor" << endl;
		name = n;
		price = p;
		milage = m;

		model = new int[4];
		for (int i = 0; i < 4; i++)
			model[i] = mo[i];
	}

	// Car(String n,int p){

	// }

	//copy constructor

	Car(Car &X) {
		name = X.name;
		milage = X.milage;
		price = X.price;
		model = new int[4];
		for (int i = 0; i < 4; i++) {
			model[i] = X.model[i];
		}
	}

	// default copy assignment operator
	void operator=(Car X) {
		cout << "calling operator" << endl;
		name = X.name;
		milage = X.milage;
		price = X.price;
		model = new int[4];
		for (int i = 0; i < 4; i++) {
			model[i] = X.model[i];
		}

	}

	~Car() {
		cout << name << " calling desructor" << endl;
		delete[] model;
		model = NULL;
	}

	void print() {
		cout << "Name: " << name << endl;
		cout << "Price: " << price << endl;
		cout << "Milage: " << milage << endl;
		cout << "Model: ";
		for (int i = 0; i < 4; i++) {
			cout << model[i];
		}
		cout << endl << endl;
	}
};
/////////////////!!BLUE PRINT/////////////////

int main() {

///////////////////////MAKING OBJ/////////////////////
	int arr[] = {1, 2, 3, 4};
	// Car A;
	Car A("BMW", 1000, 10, arr);
	Car B("BMW1", 1000, 10, arr);
	Car C("BMW2", 1000, 10, arr);

	// Car B("Maruti", 100, 20, arr);
	// Car C(B);   //copy
	// Car D; //object is made
	// D = A; //assignment
	// B.model[0] = 9;
	// Car C(B);
	// A.name = "BMW";
	// A.price = 1000;
	// A.milage = 10;

	// B.name = "Maruti";
	// B.price = 100;
	// B.milage = 20;
///////////////////////!!MAKING OBJ/////////////////////
	// D.model[3] = 9;
	// A.print();
	// B.print();
	// C.print();
	// D.print();
	// A.name = "BMW2";

	// A.print();
	// cout << "Name: " << A.name << endl;
	// cout << "Price: " << A.price << endl;
	// cout << "Milage: " << A.milage << endl << endl;



	// cout << "Name: " << B.name << endl;
	// cout << "Price: " << B.price << endl;
	// cout << "Milage: " << B.milage << endl;
}