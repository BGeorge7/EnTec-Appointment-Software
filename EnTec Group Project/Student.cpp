#include "Student.h"

Student::Student()
{
}
void Student::clearStudent()
{
	this->name = "";
	this->emailAddress = "";
	this->iD = "";

	this->degree = "";
	this->degreeType = "";

	this->advisor = "";
	this->appReason = "";
	this->appDate = "";
	this->appTime = "";
}
//setters
void Student::setName(String^ name)
{
	msclr::interop::marshal_context context;
	this->name = context.marshal_as<std::string>(name);
}
void Student::setEmailAddress(String^ emailAddress)
{
	msclr::interop::marshal_context context;
	this->emailAddress = context.marshal_as<std::string>(emailAddress);
}
void Student::setID(String^ iD)
{
	msclr::interop::marshal_context context;
	this->iD = context.marshal_as<std::string>(iD);
}

void Student::setDegree(String^ degree)
{
	msclr::interop::marshal_context context;
	this->degree = context.marshal_as<std::string>(degree);
}
void Student::setDegreeType(String^ degreeType)
{
	msclr::interop::marshal_context context;
	this->degreeType = context.marshal_as<std::string>(degreeType);
}

void Student::setAdvisor(String^ advisor)
{
	msclr::interop::marshal_context context;
	this->advisor = context.marshal_as<std::string>(advisor);
}
void Student::setAppReason(String^ appReason)
{
	msclr::interop::marshal_context context;
	this->appReason = context.marshal_as<std::string>(appReason);
}
void Student::setAppDate(String^ appDate)
{
	msclr::interop::marshal_context context;
	this->appDate = context.marshal_as<std::string>(appDate);
}
void Student::setAppTime(String^ appTime)
{
	msclr::interop::marshal_context context;
	this->appTime = context.marshal_as<std::string>(appTime);
}


//getters
String^ Student::getName()
{
	return  msclr::interop::marshal_as<String^>(this->name);
}
String^ Student::getEmailAddress()
{
	return msclr::interop::marshal_as<String^>(this->emailAddress);
}
String^ Student::getID()
{
	return msclr::interop::marshal_as<String^>(this->iD);
}

String^ Student::getDegree()
{
	return msclr::interop::marshal_as<String^>(this->degree);
}
String^ Student::getDegreeType()
{
	return msclr::interop::marshal_as<String^>(this->degreeType);
}

String^ Student::getAdvisor()
{
	return msclr::interop::marshal_as<String^>(this->advisor);
}
String^ Student::getAppReason()
{
	return msclr::interop::marshal_as<String^>(this->appReason);
}
String^ Student::getAppDate()
{
	return msclr::interop::marshal_as<String^>(this->appDate);
}
String^ Student::getAppTime()
{
	return msclr::interop::marshal_as<String^>(this->appTime);
}
