#include<bits/stdc++.h>

using namespace std;

class AbstractEmployee {
	virtual void AskForPromotion() = 0;
};

class Employee: AbstractEmployee {
private:

	string Company;
	int Age;
protected:
	string Name;

public:

	Employee(string name, string company, int age) {
		Name = name;
		Company = company;
		Age = age;
	}

	void setName(string name) {
		Name = name;
	}
	string getName() {
		return Name;
	}
	void setCompany(string company) {
		Company = company;
	}
	string getCompany() {
		return Company;
	}
	void setAge(int age) {
		if (age >= 18)
			Age = age;
	}
	int getAge() {
		return Age;
	}

	void IntroductYourself() {
		cout << "Name: " << Name << "\n";
		cout << "Company: " << Company << "\n";
		cout << "Age: " << Age << "\n";
	}


	void AskForPromotion() {
		if (Age > 30) {
			cout << Name << " got promoted.\n";
		}
		else {
			cout << Name << " no promotion for you.\n";
		}
	}

	virtual void Work() {
		cout << Name << " is checking email and performing tasks..\n";
	}

};

class Developer: public Employee
{
public:
	string favProgrammingLanguage;

	Developer(string name, string company, int age, string language)
		: Employee(name, company, age)
	{

		favProgrammingLanguage = language;
	}

	void fixBug() {
		cout << getName() << " fixed Bug using " << favProgrammingLanguage << "\n";
		cout << Name << " fixed Bug using " << favProgrammingLanguage << "\n";
	}
	void Work() {
		cout << Name << " is writing " << favProgrammingLanguage << " code.\n";
	}
};

class Teacher: public Employee
{
public:
	string Subject;
	void PrepareLesson() {
		cout << Name << " is preparing " << Subject << " lesson\n";
	}
	Teacher(string name, string company, int age, string subject)
		: Employee(name, company, age)
	{

		Subject = subject;
	}
	void Work() {
		cout << Name << " is teaching " << Subject << " in the school.\n";
	}

};


int main() {

	Employee employee1 = Employee("Ronak", "Zerocool", 22);
	// employee1.Name = "Ronak";
	// employee1.Company = "Zerocool";
	// employee1.Age = 22;
	// employee1.IntroductYourself();

	Employee employee2 = Employee("Rony", "Youtube", 33);
	// employee2.Name = "Rony";
	// employee2.Company = "Youtube";
	// employee2.Age = 18;
	// employee2.IntroductYourself();

	// employee1.setAge(23);
	// cout << employee1.getName() << " is " << employee1.getAge() << " years old." << "\n";

	// employee1.AskForPromotion();
	// employee2.AskForPromotion();

	Developer d = Developer("Zerocool", "Chessbase", 25, "Python");
	// d.fixBug();
	// d.AskForPromotion();

	Teacher t = Teacher("Dhoni", "India", 39, "Cricket");
	// t.PrepareLesson();
	// t.AskForPromotion();

	d.Work();
	t.Work();

	Employee* e1 = &d;
	Employee* e2 = &t;

	e1->Work();
	e2->Work();



	return 0;

}