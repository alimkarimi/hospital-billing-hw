#include <iostream>
#include "Medicene.h"
#include "patient.h"
using namespace std;

Medicene::Medicene()
{
	med1 = 20;
	med2 = 40;
	med3 = 60;
	med4 = 80;
	med5 = 100;
}

void Medicene::updateCharges(PatientAccount& obj, double med_price)
{
	obj.setCharges(med_price);
}

