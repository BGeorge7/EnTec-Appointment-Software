#pragma once
#include <iostream>
#include <string>

using namespace System;
ref class Student
{
private:
	String^ name;
	String^ emailAddress;
	String^ iD;

	String^ degree;
	String^ degreeType;

	String^ advisor;
	String^ appReason;
	String^ appDate;
	String^ appTime;

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

