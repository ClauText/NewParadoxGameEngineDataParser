
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

#include "new_paradox_parser.h"


int main(void)
{
	wiz::load_data::UserType global;

	wiz::load_data::LoadData::LoadDataFromFile("input.eu4", global, 0, 0); // DONE - support 0, 0

	wiz::load_data::LoadData::SaveWizDB(global, "ouput.eu4");

	return 0;
}

