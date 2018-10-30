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
		void updateCharges(PatientAccount& ,double price);

};

double PatientAccount::get_charges()
{
	return charges;
}

Surgery::Surgery()
{
	heart = 50;
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



	cout << "Menu - please enter choice\n 1) Heart" << endl;
	int choice;



	cin >> choice;

	if (choice == 1)
	{
		Surgery heart_surgery;
		cout << heart_surgery.heart << endl;
		heart_surgery.updateCharges(patient, heart_surgery.heart);
		cout << patient.get_charges() << endl;
	}
	
}

