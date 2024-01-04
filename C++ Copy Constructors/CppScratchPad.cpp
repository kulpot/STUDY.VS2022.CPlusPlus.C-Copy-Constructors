#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

// ----------------------------------- C++ Copy Constructors ------------------------------------------------
//ref link:https://www.youtube.com/watch?v=-_uSj6lrmZ0&list=PLRwVmtr-pp05LyV3bYHwrFacNSNjbUqS6&index=10

// constructing in C++ creates by default a parameterless constructors 

struct Cow
{
	int numSteaks;	// 4bits
	int numLegs;	// 4bits
};

void main()
{
	Cow betsy;
	betsy.numSteaks = 100;
	betsy.numLegs = 4;
	cout << "betsy " << betsy.numSteaks << " " << betsy.numLegs << endl;
	Cow georgy(betsy);	// bitwisecopy betsy instance(8bitsdata) to georgy instance
	cout << "georygy " << georgy.numSteaks << " " << georgy.numLegs << endl;
}
































// ------------------------------------- C++ Destructors and Stack Unwinding -----------------------------------
//ref link:https://www.youtube.com/watch?v=ljbXUQzaJBM&list=PLRwVmtr-pp05LyV3bYHwrFacNSNjbUqS6&index=10

//struct Car
//{	// ----Track number of instances you have of a certain type-----
//	static int count;	// count - static variable			    //output://Car(1)
//	int id;		// id - instance variable								 //Car(2)
//	Car() { id = count++; cout << "Car(" << id << ")" << endl; }		 //~Car(2)
//	~Car() { cout << "~Car(" << id << ")" << endl; }					 //Car(3)
//																		 //~Car(3)
//																		 //~Car(1)
//	// ----Track number of instances you have of a certain type-----END
//
//	//static int count;													 
//	//Car() { cout << "Car()" << endl; }		// constructor
//	//~Car() { cout << "~Car()" << endl; }	// deconstructor
//
//
//
//
//};
//
//int Car::count = 1;
//
//void main()
//{
//	//Car car;		//output://Car()
//							 //~Car()
//
//	Car car1;	//Car(), ~ Car()						//output://Car() car1
//	{															 //Car() car2
//		Car car2;	//Car()	, //~Car()							 //~Car() car2 scope{}
//	}															 //Car() car3
//	Car car3;	//Car()	, //~Car()								 //~Car() car3 scope{}
//}																 //~Car() car1 scope{}































// ---------------------------- C++ Initializing Larger Data Members -------------------------------
//ref link:https://www.youtube.com/watch?v=8_4s67wbMdc&list=PLRwVmtr-pp05LyV3bYHwrFacNSNjbUqS6&index=8

//class Heart
//{
//	int numBeatsLeft;
//public:
//	//Heart()		// parameterless constructor with no arg
//	//{
//	//	cout << "Heart()" << endl;
//	//	numBeatsLeft = 0;
//	//}
//	//Heart(int numBeats)		// parameterize constructor with arg
//	//{
//	//	cout << "Heart(" << numBeats << ")" << endl;
//	//	numBeatsLeft = numBeats;
//	//}
//
//	Heart(int numBeats = 0)		// combined constructor of Heart() and Heart(int numBeats)
//	{
//		cout << "Heart(" << numBeats << ")" << endl;
//		numBeatsLeft = numBeats;
//	}
//};
//
//class Cat
//{
//	Heart heart;		// datamember
//	string name;
//public:
//	//Cat()
//	//Cat() : heart(12345)	//Initializing list datamember(heart)	//output: Heart(12345) Cat()
//	Cat() : heart(12345), name("Bruff") // avoids double initializing issues
//	{
//		cout << "Cat()" << endl;
//		//heart = Heart(12345);			//output: Heart() Cat() Heart(12345) 
//		name = "Bruff";	// double initialize issue
//	}
//};
//
//int main()
//{
//	Cat bruff;
//}




























// ---------------------------------------- C++ const Initializer Lists ----------------------------------------
//ref link:https://www.youtube.com/watch?v=sruGkv3dQZQ&list=PLRwVmtr-pp05LyV3bYHwrFacNSNjbUqS6&index=7

//struct Cat
//{
//	//int numLives;
//	const int NUM_LIVES;			// constant initialize
//	Cat(int lives) : NUM_LIVES(lives)
//	{
//	};
//	//Cat(int lives)
//	//{
//	//	numLives = lives;
//	//}		// output: 5
//	//Cat(int lives) : 
//	//	numLives(lives), safsafsaf(afafa), 
//	//	afsdfaf(adsfaf), asdfafasf(afasdfsaf)
//	//{
//	//	//numLives = lives;
//	//}		// output: 5
//};
//
//int main()
//{
//	Cat bruff(5);
//	cout << bruff.NUM_LIVES << endl;
//}































// --------------------------------- C++ Static Class Data Members ----------------------------------
//ref link:https://www.youtube.com/watch?v=k2LeEbcVazE&list=PLRwVmtr-pp05LyV3bYHwrFacNSNjbUqS6&index=6

//static->one variable shared among all instance of a class.
//private->only the class can access that variable.
//You can have static variables that are public or private.The two terms are different concepts.


//#include "MyClass.h"		// .h files

//class MyClass		// declaration -> give me ram
//{
////private:
//public:
//	static int myStaticInt;	// static declaration
//public:
//	void someFunction()
//	{
//		myStaticInt++;
//	}
//};

//int MyClass::myStaticInt = 5;	//static definition	// scopes in MyClass

//int anotherInt = 50;
//void foo(){}
//void goo(){}

//int myStaticInt = 5;
////int SomeOtherClass::anotherStaticInt = 10;		// restrict visibility
//
//void main()
//{
//	MyClass::myStaticInt = 10;
//}

































// ------------------------------ C++ Compiler-Generated Default Constructors -----------------------------------------
//ref link:https://www.youtube.com/watch?v=NxPPSegdilc&list=PLRwVmtr-pp05LyV3bYHwrFacNSNjbUqS6&index=5

// parameter list constructor - takes no argument, a default constructor, constructor that takes no constructor

//class Cow {
//public:
//	int mooCount;
//	//Cow(){}			// initialize none parameter constructor:output:-858993460
//	Cow(int value) {}		// initialize parameterConstructor with argument:
//};
//
//void main()
//{
//	//Cow cow;
//	Cow cow(5);
//	cout << cow.mooCount << endl; //error: cebug check, not error: in release
//}

































// ------------------------------- C++ Structs vs Classes -------------------------------
//ref link:https://www.youtube.com/watch?v=3LHmBMdKkyI&list=PLRwVmtr-pp05LyV3bYHwrFacNSNjbUqS6&index=4

// C++ default accessability 

//struct Mytype		// defaults to public
//class Mytype
////class Person	// defaults to private
//{
//public:		// required for class Mytype which is private
//	void foo() {}
//	//Person()		// Constructor 
//	//{
//	//	cout << "Person()" << endl;
//	//}
//	//~Person()				// Destructor
//	//{
//	//	cout << "~Person()" << endl;
//	//}
//};
//
//void main()
//{
//	Mytype instance;
//	instance.foo();		// error in class Mytype which is a private
//	//cout << "Before the scoped block" << endl;
//	//Person person;
//	//cout << "After the scoped block" << endl;
//}



























// ------------------------------------ C++ Why The Semicolon After a Class Declaration ----------------------------------
//ref linK:https://www.youtube.com/watch?v=E-309a2ngsY&list=PLRwVmtr-pp05LyV3bYHwrFacNSNjbUqS6&index=3

// for C++	just use a semicolon at the end of a class because its required
// At the end of a declaration of a data type you put a semicolon.
// A class is a data type.

//struct MyType
//{
//	void foo() {}
//};		// semicolon here -> means its required
//
//int myInt;				// int 4 bytes
//float anotherDataElement;
//
//class MyClass		// Declaring a class called MyClass
//{
//};
////} instance;		// for C++	just use a semicolon at the end of a class
//
//MyClass anotherClass;		// anotehrClass is an instance of MyClass
//
////int main()
////{
////	return 0;
////}
//
//void main()
//{
//	myInt = 5;
//	//MyType instance;
//	//instance.foo();
//}































// --------------------------------------- C++ Constructors and Destructors ------------------------------------
//ref link:https://www.youtube.com/watch?v=eeooGDIyQpM&list=PLRwVmtr-pp05LyV3bYHwrFacNSNjbUqS6&index=4

// Destructor - is for cleaning up classes

//class Person
//{
//public:
//	Person()		// Constructor 
//	{
//		cout << "Person()" << endl;
//	}
//	~Person()				// Destructor
//	{
//		cout << "~Person()" << endl;
//	}
//};
//
//void main()
//{
//	cout << "Before the scoped block" << endl;
//	//{
//	//	Person person;	// person stack scope
//	//}				// C++ cleanup for Destructor ~Person()
//	Person person;
//	cout << "After the scoped block" << endl;
//	//Person person;
//}// C++ cleanup for Destructor ~Person()	-- Person person not inside a {}































// -------------------------------- C++ Classes --------------------------------
// ref link:https://www.youtube.com/watch?v=a9R9mP3oJBY&list=PLRwVmtr-pp05LyV3bYHwrFacNSNjbUqS6

// C++ Classes - 

//class Person
//{
//public:
//	string firstName;
//	string lastName;
////private:
//};
//
//void main()
//{	
//	//Person person = new Person();		// C# or Java
//	Person person;		// "person" object is in stack instead on the heap
//	person.firstName = "Kulpot";
//	person.lastName = "King";
//	cout << person.firstName << " " << person.lastName;
//}