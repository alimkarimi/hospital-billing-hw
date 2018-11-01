#include <iostream>
#include <string>
using namespace std;

class PatientAccount
{
	
	private:
		double charges; //to hold total charge
		int days_in_hospital;

	public:
		int id; //patient id
		double daily_rate;
		int get_days_in_hospital();
		void set_days_in_hospital(int);
		// PatientAccount();
		void setCharges(double);
		double get_charges();

};

class Surgery
{
	private:
		//
	public:
		Surgery();
		double heart;
		double knee;
		double elbow;
		double eye;
		double shoulder;
		void updateCharges(PatientAccount& ,double surgery_price);

};

class Medicene
{
	private:
		//
	public:
		double med1;
		double med2;
		double med3;
		double med4;
		double med5;
		Medicene(); //constructor
		void updateCharges(PatientAccount& obj, double med_price);

};

void Medicene::updateCharges(PatientAccount& obj, double med_price)
{
	obj.setCharges(med_price);
}

Medicene::Medicene()
{
	med1 = 20;
	med2 = 40;
	med3 = 60;
	med4 = 80;
	med5 = 100;
}

double PatientAccount::get_charges()
{
	return charges;
}

Surgery::Surgery()
{
	heart = 50;
	knee = 100;
	elbow = 150;
	eye = 200;
	shoulder = 250;
}

int PatientAccount::get_days_in_hospital()
{
	return days_in_hospital;
}

void PatientAccount::set_days_in_hospital(int days)
{
	days_in_hospital = days;
}

void Surgery::updateCharges(PatientAccount& obj, double new_charges)
{
	obj.setCharges(new_charges);
}


void PatientAccount::setCharges(double new_charges)
{
	charges += new_charges; 
}

int main()
{
	PatientAccount patient;
	patient.id = 0;
	patient.set_days_in_hospital(0);
	cout << "days in hospital: ";
	cout << patient.get_days_in_hospital() << endl;

	bool again = true;
	while (again == true)
	{
	
	
		cout << "Menu - please enter choice\n1) Heart \n2) Knee \n3) Elbow \n4) Eye \n5) Shoulder\n0) Exit" << endl;
		cout << "6) Update Days in hospital" << endl;
		cout << "7) Med 1" << endl;
		cout << "8) Med 2" << endl;
		cout << "9) Med 3" << endl;
		cout << "10) Med 4" << endl;

		int choice;

		cin >> choice;

		if (choice == 1)
		{
			Surgery heart_surgery;
			cout << heart_surgery.heart << endl;
			heart_surgery.updateCharges(patient, heart_surgery.heart);
			cout << patient.get_charges() << endl;
		}
		else if (choice == 2)
		{
			Surgery knee_surgery;
			cout << knee_surgery.knee << endl;
			knee_surgery.updateCharges(patient, knee_surgery.knee);
			cout << patient.get_charges() << endl; 

		}
		else if (choice == 3)
		{
			Surgery elbow_surgery;
			cout << "Elbow surgery is $" << elbow_surgery.elbow << endl;
			elbow_surgery.updateCharges(patient, elbow_surgery.elbow);
			cout << "Updating charges...\nThe total charge is $";
			cout << patient.get_charges() << endl;
		}
		else if (choice == 4)
		{
			Surgery eye_surgery;
			cout << "Eye surgery is $" << eye_surgery.eye << endl;
			eye_surgery.updateCharges(patient, eye_surgery.eye);
			cout << "Updating charges...\nThe total charge is $";
			cout << patient.get_charges() << endl;
		}
		else if (choice == 5)
		{
			Surgery shoulder_surgery;
			cout << "Shoulder surgery is $" << shoulder_surgery.shoulder << endl;
			shoulder_surgery.updateCharges(patient, shoulder_surgery.shoulder);
			cout << "Updating charges...\nThe total charge is $";
			cout << patient.get_charges() << endl;

		}
		else if (choice == 6)
		{
			Medicene med1;
			cout << "Medicene 1 is $" << med1.med1 << endl;
			med1.updateCharges(patient, med1.med1);
			cout << "Updating charges...\nThe total charge is $";
			cout << patient.get_charges() << endl;
		}
		else if (choice == 0)
		{
			cout << "Exiting..." << endl;
			again = false;
		}
	}

}

