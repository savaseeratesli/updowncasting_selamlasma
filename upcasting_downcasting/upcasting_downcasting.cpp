#include <iostream>
#include"person.h"

using namespace std;

int main()
{
	Person* pArr[] = { new TurkPerson("savas"),new TurkPerson("nazli"),new GermanPerson("hans"),new GermanPerson("haaland") };

	int numberOfPerson = sizeof(pArr) / sizeof(pArr[0]);//Eleman sayısı bulma tüm array boyutu/bir eleman

	for (int i = 0; i < numberOfPerson; i++)
	{
		for (int j = 0; j < numberOfPerson; j++)
		{
			if (i != j)//Kendisine merhaba dememesi için
			{
				pArr[i]->sayHi(*pArr[j]);
			}
		}
		cout << endl;
	}




}


