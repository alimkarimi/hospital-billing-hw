#ifndef SURGERY_H
#define SURGERY_H
#include "patient.h"

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

#endif