#ifndef MEDICENE_H
#define MEDICENE_H
#include "patient.h"

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

#endif