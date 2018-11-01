#ifndef PATIENT_H
#define PATIENT_H



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
		void setCharges(double);
		double get_charges();
		PatientAccount(); //constructor
		double updateCharges(double daily_rate, int days_in_hospital, double charges);

};

#endif