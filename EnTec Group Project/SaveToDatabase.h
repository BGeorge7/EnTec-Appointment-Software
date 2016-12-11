#pragma once
#include "sqlite3.h"
#include "Student.h"
#include <iostream>

#include <msclr\marshal_cppstd.h>

class SaveToDatabase
{
private:
	char *name;
	char *emailAddress;
	char *iD;

	char *degree;
	char *degreeType;

	char *advisor;
	char *appReason;
	char *appDate;
	char *appTime;

	sqlite3 *db;
	int openStatus;
public:
	SaveToDatabase();
	~SaveToDatabase();

	bool openDB();
	bool isOpen();
	bool write(Student *student);

private:
	void studentToString(Student *student);
};

