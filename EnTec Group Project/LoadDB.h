#pragma once

using namespace System;
using namespace System::Data;
using namespace System::Windows::Forms;
using namespace MySql::Data::MySqlClient;
ref class LoadDB
{
private:
	String^ constring;
	MySqlConnection^ conDatabase;

public:
	LoadDB(String^ constring);
	LoadDB();

	BindingSource^ BindingQuery(); //Default Version returns the entire database
	BindingSource^ BindingQuery(String^ query); //Returns the query
	bool ExecuteQuery(String^ query); //executes a simple query that does not return anything
	
};

