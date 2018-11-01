#include <iostream>
#include "Surgery.h"
#include "patient.h"
using namespace std;

Surgery::Surgery()
{
	heart = 50;
	knee = 100;
	elbow = 150;
	eye = 200;
	shoulder = 250;
}

void Surgery::updateCharges(PatientAccount& obj, double new_charges)
{
	obj.setCharges(new_charges);
}