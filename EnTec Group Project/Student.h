#pragma once
#include <iostream>
#include <string>

#include <msclr\marshal_cppstd.h>

using namespace System;
class Student
{
private:
	std::string name;
	std::string emailAddress;
	std::string iD;

	std::string degree;
	std::string degreeType;

	std::string advisor;
	std::string appReason;
	std::string appDate;
	std::string appTime;


public:
	//TODO: Determine if in need another Constructor for this class
	Student();
public:
	//setters
	void setName(String^ name);
	void setEmailAddress(String^ emailAddress);
	void setID(String^ iD);
	
	void setDegree(String^ degree);
	void setDegreeType(String^ degreeType);

	void setAdvisor(String^ advisor);
	void setAppReason(String^ appReason);
	void setAppDate(String^ appDate);
	void setAppTime(String^ appTime);

	//getters
	String^ getName();
	String^ getEmailAddress();
	String^ getID();

	String^ getDegree();
	String^ getDegreeType();

	String^ getAdvisor();
	String^ getAppReason();
	String^ getAppDate();
	String^ getAppTime();

};

