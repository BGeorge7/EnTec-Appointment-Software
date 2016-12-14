#include "LoadDB.h"



LoadDB::LoadDB()
{
}
LoadDB::LoadDB(String^ constring)
{
	this->constring = constring;
	this->conDatabase = gcnew MySqlConnection(constring);
}

BindingSource^ LoadDB::BindingQuery()
{
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("SELECT * FROM sys.students", conDatabase);
	try {
		MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
		sda->SelectCommand = cmdDataBase;
		DataTable^ dbdataset = gcnew DataTable();
		sda->Fill(dbdataset);
		BindingSource^ bSource = gcnew BindingSource();

		bSource->DataSource = dbdataset;
		conDatabase->Close();
		return bSource;
	}
	catch (Exception^ ex) {
		MessageBox::Show("COULD NOT CONNECT TO THE DATABASE, PLEASE TRY AGAIN LATER\nPLEASE TRY AGAIN LATER.", "ERROR",
			MessageBoxButtons::OK, MessageBoxIcon::Error);
		return nullptr;
	}
}

BindingSource^ LoadDB::BindingQuery(String^ query) //query is the user entered query;
{
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand(query, conDatabase);
	try {
		MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
		sda->SelectCommand = cmdDataBase;
		DataTable^ dbdataset = gcnew DataTable();
		sda->Fill(dbdataset);
		BindingSource^ bSource = gcnew BindingSource();

		bSource->DataSource = dbdataset;
		conDatabase->Close();
		return bSource;
	}
	catch (Exception^ ex) {
		MessageBox::Show("COULD NOT CONNECT TO THE DATABASE, PLEASE TRY AGAIN LATER\nPLEASE TRY AGAIN LATER.", "ERROR",
			MessageBoxButtons::OK, MessageBoxIcon::Error);
		return nullptr;
	}
}

bool LoadDB::ExecuteQuery(String^ query)
{
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand(query, conDatabase);
	try {
		conDatabase->Open();
		cmdDataBase->ExecuteReader();
		conDatabase->Close();
		return true;
	}
	catch (Exception^ ex) {
		return false;
	}
}