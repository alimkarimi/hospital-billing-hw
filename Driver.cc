#include <iostream>
#include "Surgery.h"
#include "Medicene.h"
#include "patient.h"
using namespace std;

void displayMenu();

int main()
{
	PatientAccount patient;

	bool again = true;
	while (again == true)
	{
	
		displayMenu();

		const int SIZE = 40;
		char choice[SIZE];

		cin.getline(choice, SIZE);
		while (choice[0] < 48 || choice [0] > 61 || choice[1] != '\0')
		{
			cout << "Invalid input, please enter again" << endl;
			cin.getline(choice, SIZE);
		}

		if (choice[0] == '1')
		{
			Surgery heart_surgery;
			cout << heart_surgery.heart << endl;
			heart_surgery.updateCharges(patient, heart_surgery.heart);
			cout << patient.get_charges() << endl;
		}
		else if (choice[0] == '2')
		{
			Surgery knee_surgery;
			cout << knee_surgery.knee << endl;
			knee_surgery.updateCharges(patient, knee_surgery.knee);
			cout << patient.get_charges() << endl; 

		}
		else if (choice[0] == '3')
		{
			Surgery elbow_surgery;
			cout << "Elbow surgery is $" << elbow_surgery.elbow << endl;
			elbow_surgery.updateCharges(patient, elbow_surgery.elbow);
			cout << "Updating charges...\nThe total charge is $";
			cout << patient.get_charges() << endl;
		}
		else if (choice[0] == '4')
		{
			Surgery eye_surgery;
			cout << "Eye surgery is $" << eye_surgery.eye << endl;
			eye_surgery.updateCharges(patient, eye_surgery.eye);
			cout << "Updating charges...\nThe total charge is $";
			cout << patient.get_charges() << endl;
		}
		else if (choice[0] == '5')
		{
			Surgery shoulder_surgery;
			cout << "Shoulder surgery is $" << shoulder_surgery.shoulder << endl;
			shoulder_surgery.updateCharges(patient, shoulder_surgery.shoulder);
			cout << "Updating charges...\nThe total charge is $";
			cout << patient.get_charges() << endl;

		}
		else if (choice[0] == '6')
		{
			cout << "The current amount of days in the hospital is " << patient.get_days_in_hospital() << endl;
			cout << "How many days did the patient stay?" << endl;

			int num_days;
			cin >> num_days;
			patient.set_days_in_hospital(num_days);
			cout << "You entered " << patient.get_days_in_hospital() << " days." << endl;
			cout << "The total cost for those days is " << patient.get_days_in_hospital() * patient.daily_rate << endl;
			cout << "The updated total charge is " << patient.updateCharges(patient.daily_rate, patient.get_days_in_hospital(), patient.get_charges()) << endl;


		}
		else if (choice[0] == '7')
		{
			Medicene med1;
			cout << "Medicene 1 is $" << med1.med1 << endl;
			med1.updateCharges(patient, med1.med1);
			cout << "Updating charges...\nThe total charge is $";
			cout << patient.get_charges() << endl;
		}
		else if (choice[0] == '0')
		{
			cout << "Exiting..." << endl;
			again = false;
		}
	}

}

void displayMenu()
{
		cout << "Menu - please enter choice" << endl;
		cout << "0) Exit" << endl;
		cout << "1) Heart" << endl;
		cout << "2) Knee" << endl;
		cout << "3) Elbow" << endl;
		cout << "4) Eye" << endl;
		cout << "5) Shoulder" << endl;
		cout << "6) Update Days in hospital" << endl;
		cout << "7) Med 1" << endl;
		cout << "8) Med 2" << endl;
		cout << "9) Med 3" << endl;
		cout << "10) Med 4" << endl;
		cout << "11) Med 5" << endl;
}