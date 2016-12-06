#include "Student.h"

Student::Student()
{
}

//setters
void Student::setName(String^ name)
{
	this->name = name;
}
void Student::setEmailAddress(String^ emailAddress)
{
	this->emailAddress = emailAddress;
}
void Student::setID(String^ iD)
{
	this->iD = iD;
}

void Student::setDegree(String^ degree)
{
	this->degree = degree;
}
void Student::setDegreeType(String^ degreeType)
{
	this->degreeType = degreeType;
}

void Student::setAdvisor(String^ advisor)
{
	this->advisor = advisor;
}
void Student::setAppReason(String^ appReason)
{
	this->appReason = appReason;
}
void Student::setAppDate(String^ appDate)
{
	this->appDate = appDate;
}
void Student::setAppTime(String^ appTime)
{
	this->appTime = appTime;
}


//getters
String^ Student::getName()
{
	return this->name;
}
String^ Student::getEmailAddress()
{
	return this->emailAddress;
}
String^ Student::getID()
{
	return this->iD;
}

String^ Student::getDegree()
{
	return this->degree;
}
String^ Student::getDegreeType()
{
	return this->degreeType;
}

String^ Student::getAdvisor()
{
	return this->advisor;
}
String^ Student::getAppReason()
{
	return this->appReason;
}
String^ Student::getAppDate()
{
	return this->appDate;
}
String^ Student::getAppTime()
{
	return this->appTime;
}
