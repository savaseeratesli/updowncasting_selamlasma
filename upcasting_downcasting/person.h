#include <iostream>

 using namespace std;

 class Person
 {
 private:
	 string perName;

 public:
	 Person(string name)//Ýsim atanýr
	 {
		 perName = name;
	 };

	 string getName()const//Ýsim alýnýr
	 {
		 return perName;
	 };

	 virtual string getNation() const
	 {
		 return " ";
	 };

	 virtual void sayHi(const Person& person)
	 {
		 cout << perName << " says Hi:)) " << person.perName << endl;
	 }

 };

 class GermanPerson :public Person
 {
 public:
	 GermanPerson(string name) :Person(name) {};

	 string getNation()const
	 {
		 return "German";
	 }

	 void sayHi(const Person& person)
	 {
		 if (getNation() == person.getNation())//Ayný millet
		 {
			 cout << getName() << " says Hallo " << person.getName() << endl;
		 }
		 else
		 {
			 Person::sayHi(person);//Ýngilizce
		 }
	 }

 };

 class TurkPerson :public Person
 {
 public:
	 TurkPerson(string name) :Person(name) {};

	 string getNation()const
	 {
		 return "Turk";
	 }

	 void sayHi(const Person& person)
	 {
		 if (getNation() == person.getNation())//Ayný millet
		 {
			 cout << getName() << " merhaba " << person.getName() << endl;
		 }
		 else
		 {
			 Person::sayHi(person);//Ýngilizce
		 }
	 }

 };















