#include <iostream>
using namespace std;
int main()
{
	struct informationUser
	{
		string name;
		string email;
		string password;
		int id;
	};
		informationUser doctor, student;
		int errors = 0;
		string signUp, signup, user;
		cout << "signIn \t signUp \n";
		cin >> signUp;
		if (signUp == "signUp")
		{
			cout << "User Kind Doctor Or Student \n";
			cin >> user;
			if (user == "doctor")
			{
				cout << "Enter The Password \n";
				cin >> doctor.password;
				cout << "Enter The Name \n";
				cin >> doctor.name;
				cout << "Enter An Email \n";
				cin >> doctor.email;
				if (doctor.email.size() < 10)
				{
					cout << "This Email Not valid Please Tray Agin \n";
					errors++;
				}
				cout << "Enter The Id \n";
				// // Check ID Valid Od doctor 
				while (true)
				{
					doctor.id = 100;
					cin >> doctor.id;
					if (doctor.id != 100)
						cout << "This Id Not valid \n";
					else
						break;
				}
			}
			else
			{
				cout << "Enter The Password \n";
				cin >> student.password;
				cout << "Enter The Name \n";
				cin >> student.name;
				cout << "Enter An Email \n";
				cin >> student.email;
				if (student.email.size() < 10)
				{
					cout << "This Email Not valid \n";
					errors++;
				}
				cout << "Enter The Id \n";
				while (true)
				{
					student.id = 200;
					cin >> student.id;
					if (student.id != 200)
						cout << "This Id Not valid \n";
					else
						break;
				}
			}
			// Errors Check
			if (errors != 0)
				cout << "An error occurred in the registration\n";
			else
				cout << "Successfully Registered \n";
		}
		else
		{
			cout << "User Kind Doctor Or Student \n";
			cin >> user;
			if (user == "doctor")
			{
				cout << "Enter The Password \n";
				cin >> doctor.password;
				cout << "Enter An Email \n";
				cin >> doctor.email;
				cout << "Enter The User Name \n";
				cin >> doctor.name;
				cout << "Enter The Id \n";
				while (true)
				{
					doctor.id = 100;
					cin >> doctor.id;
					if (doctor.id != 100)
						cout << "Error Please Tray Agin \n";
					else
						break;
				}
			}
			else
			{
				cout << "Enter The Email \n";
				cin >> student.email;
				cout << "Enter The Password \n";
				cin >> student.password;
				cout << "Enter An User \n";
				cin >> student.name;
				cout << "Enter The Id \n";
				while (true)
				{
					student.id = 200;
					cin >> student.id;
					if (student.id != 200)
						cout << "Error Please Tray Agin \n";
					else
						break;
				}
			}
		}
		if (errors == 0 && user == "doctor")
		{
			string  createCourse, doctorAnswer;
			cout << "---------------------------------------------------------- \n";
			cout << " Wlecome Yuor Profile Doctor" << " " << doctor.name << endl;
			cout << "Email : " << " " << doctor.email << endl;
			cout << "ID : " << " " << doctor.id << endl;
			cout << "Password : ";
			for (int i = 1; i <= doctor.password.size(); i++)
			{
				cout << "*";
			}
			int one;
			cout << " \n Create a Course Choose 1\n";
			cin >> one;
			cout << "Enter The Course Name \n";
			cin >> createCourse;
			cout << " Your Course :" << " " << createCourse << " " << "Is Created\n";
			cout << "Do Yuo Wont Create Assignment Enter ok \n";
			cin >> doctorAnswer;
			if (doctorAnswer == "ok")
			{
				string assignment;
				cout << "Enter The Assignment \n";
				cin >> assignment;
				cout << "Your Assignment : " << " " << assignment << endl;
			}
		}
		else
		{
			cout << "---------------------------------------------------------- \n";
			cout << " Wlecome Yuor Profile Student" << " " << student.name << endl;
			cout << "Email : " << " " << student.email << endl;
			cout << "ID : " << " " << student.id << endl;
			cout << "Password : ";
			for (int i = 1; i <= student.password.size(); i++)
			{
				cout << "*";
			}
			int studentAnswer;
			cout << "View My Courses Enter 1 \t View My Assignment Enter 2 \n";
			cin >> studentAnswer;
			if (studentAnswer == 1)
			{
				cout << "Programming \n";
				cout << "Design \n";
			}
			else
			{
				cout << "Solve Problem And Submit \n";
				cout << "(2+4*5) + 100 / 25 \n";
			}
		}
		return 0;
	}
