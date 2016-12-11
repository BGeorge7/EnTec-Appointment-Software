#include "SaveToDatabase.h"

SaveToDatabase::SaveToDatabase()
{
	openStatus = -1;
}
SaveToDatabase::~SaveToDatabase()
{
	sqlite3_close(db);
}

bool SaveToDatabase::openDB()
{
	openStatus = sqlite3_open("Appointments.sqlite", &db);
	return isOpen();
}

bool SaveToDatabase::isOpen()
{
	if (openStatus != SQLITE_OK)
	{
		System::Console::WriteLine("ERROR: FAILED TO OPEN DB, Error Code: 33758");
		return false;
	}
	else
	{
		System::Console::WriteLine("Success! Database Has been opened");
		return true;
	}

}

bool SaveToDatabase::write(Student *student)
{
	studentToString(student);

	int rc;
	char *err_msg = 0;

	char sqlStr[4096];
	if (openStatus == SQLITE_OK)
	{
		sprintf(sqlStr, "INSERT INTO Students (name, id, email, degree, degree_type, advisor, Reason, Date, Time, Status)" 
			"VALUES(\"%s\", \"%s\", \"%s\", \"%s\", \"%s\", \"%s\", \"%s\", \"%s\", \"%s\", \"SET\");",
			name, iD, emailAddress, degree, degreeType, advisor, appReason, appDate, appTime);

		rc = sqlite3_exec(db, sqlStr, 0, 0, &err_msg);

		if (rc != SQLITE_OK) 
		{
			System::Console::WriteLine("Failed to execute.");
			return false;
		}
		else 
			return true;
	}
	else
		return false;
}

void SaveToDatabase::studentToString(Student *student)
{
	msclr::interop::marshal_context context;

	this->name = new char[context.marshal_as<std::string>(student->getName()).length()];
	strcpy(name, context.marshal_as<std::string>(student->getName()).c_str());

	this->iD = new char[context.marshal_as<std::string>(student->getID()).length()];
	strcpy(iD, context.marshal_as<std::string>(student->getID()).c_str());

	this->emailAddress = new char[context.marshal_as<std::string>(student->getEmailAddress()).length()];
	strcpy(emailAddress, context.marshal_as<std::string>(student->getEmailAddress()).c_str());


	this->degree = new char[context.marshal_as<std::string>(student->getDegree()).length()];
	strcpy(degree, context.marshal_as<std::string>(student->getDegree()).c_str());

	this->degreeType = new char[context.marshal_as<std::string>(student->getDegreeType()).length()];
	strcpy(degreeType, context.marshal_as<std::string>(student->getDegreeType()).c_str());


	this->advisor = new char[context.marshal_as<std::string>(student->getAdvisor()).length()];
	strcpy(advisor, context.marshal_as<std::string>(student->getAdvisor()).c_str());

	this->appReason = new char[context.marshal_as<std::string>(student->getAppReason()).length()];
	strcpy(appReason, context.marshal_as<std::string>(student->getAppReason()).c_str());

	this->appDate = new char[context.marshal_as<std::string>(student->getAppDate()).length()];
	strcpy(appDate, context.marshal_as<std::string>(student->getAppDate()).c_str());

	this->appTime = new char[context.marshal_as<std::string>(student->getAppTime()).length()];
	strcpy(appTime, context.marshal_as<std::string>(student->getAppTime()).c_str());

}
	