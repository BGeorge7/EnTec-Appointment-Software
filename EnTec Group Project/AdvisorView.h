#pragma once
#include <stdlib.h>
#include "LoadDB.h"

namespace EnTec_Group_Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for AdvisorView
	/// </summary>
	public ref class AdvisorView : public System::Windows::Forms::Form
	{
	private: 
		String^ constring;
	public:
		AdvisorView(void)
		{
			InitializeComponent();
			constring = L"datasource=50.154.251.128;port=3306;username=root;password=toti2084";
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AdvisorView()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridAppointments;
	protected:

	protected:

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  tbSearch;
	private: System::Windows::Forms::RadioButton^  rbName;
	private: System::Windows::Forms::RadioButton^  rbID;
	private: System::Windows::Forms::RadioButton^  rdTime;
	private: System::Windows::Forms::Button^  btnSearch;


	private: System::Windows::Forms::Button^  btnRefresh;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  gb1lb2;

	private: System::Windows::Forms::Label^  gb1lb1;

	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  gb2lb2;

	private: System::Windows::Forms::Label^  gb2lb1;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::DataGridViewCheckBoxColumn^  doneCheck;
	private: System::Windows::Forms::Button^  btnStartFinish;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(AdvisorView::typeid));
			this->dataGridAppointments = (gcnew System::Windows::Forms::DataGridView());
			this->doneCheck = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tbSearch = (gcnew System::Windows::Forms::TextBox());
			this->rbName = (gcnew System::Windows::Forms::RadioButton());
			this->rbID = (gcnew System::Windows::Forms::RadioButton());
			this->rdTime = (gcnew System::Windows::Forms::RadioButton());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->btnRefresh = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->gb1lb2 = (gcnew System::Windows::Forms::Label());
			this->gb1lb1 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->gb2lb2 = (gcnew System::Windows::Forms::Label());
			this->gb2lb1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnStartFinish = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridAppointments))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridAppointments
			// 
			this->dataGridAppointments->AllowUserToAddRows = false;
			this->dataGridAppointments->AllowUserToDeleteRows = false;
			this->dataGridAppointments->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridAppointments->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->doneCheck });
			this->dataGridAppointments->Location = System::Drawing::Point(12, 12);
			this->dataGridAppointments->Name = L"dataGridAppointments";
			this->dataGridAppointments->Size = System::Drawing::Size(762, 510);
			this->dataGridAppointments->TabIndex = 0;
			this->dataGridAppointments->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &AdvisorView::dataGridAppointments_CellClick);
			this->dataGridAppointments->CellValueChanged += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &AdvisorView::dataGridAppointments_CellValueChanged);
			this->dataGridAppointments->CurrentCellDirtyStateChanged += gcnew System::EventHandler(this, &AdvisorView::dataGridAppointments_CurrentCellDirtyStateChanged);
			// 
			// doneCheck
			// 
			this->doneCheck->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::ColumnHeader;
			this->doneCheck->HeaderText = L"*";
			this->doneCheck->Name = L"doneCheck";
			this->doneCheck->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->doneCheck->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			this->doneCheck->Width = 36;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(116)), static_cast<System::Int32>(static_cast<System::Byte>(175)),
				static_cast<System::Int32>(static_cast<System::Byte>(173)));
			this->label1->Location = System::Drawing::Point(787, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(41, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Search";
			// 
			// tbSearch
			// 
			this->tbSearch->Location = System::Drawing::Point(781, 22);
			this->tbSearch->Name = L"tbSearch";
			this->tbSearch->Size = System::Drawing::Size(164, 20);
			this->tbSearch->TabIndex = 2;
			// 
			// rbName
			// 
			this->rbName->AutoSize = true;
			this->rbName->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->rbName->FlatAppearance->BorderSize = 4;
			this->rbName->Location = System::Drawing::Point(8, 4);
			this->rbName->Name = L"rbName";
			this->rbName->Size = System::Drawing::Size(53, 17);
			this->rbName->TabIndex = 3;
			this->rbName->TabStop = true;
			this->rbName->Text = L"Name";
			this->rbName->UseVisualStyleBackColor = true;
			// 
			// rbID
			// 
			this->rbID->AutoSize = true;
			this->rbID->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->rbID->Location = System::Drawing::Point(66, 4);
			this->rbID->Name = L"rbID";
			this->rbID->Size = System::Drawing::Size(36, 17);
			this->rbID->TabIndex = 4;
			this->rbID->TabStop = true;
			this->rbID->Text = L"ID";
			this->rbID->UseVisualStyleBackColor = true;
			// 
			// rdTime
			// 
			this->rdTime->AutoSize = true;
			this->rdTime->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->rdTime->Location = System::Drawing::Point(108, 4);
			this->rdTime->Name = L"rdTime";
			this->rdTime->Size = System::Drawing::Size(48, 17);
			this->rdTime->TabIndex = 5;
			this->rdTime->TabStop = true;
			this->rdTime->Text = L"Date";
			this->rdTime->UseMnemonic = false;
			this->rdTime->UseVisualStyleBackColor = true;
			// 
			// btnSearch
			// 
			this->btnSearch->Location = System::Drawing::Point(780, 76);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(163, 23);
			this->btnSearch->TabIndex = 6;
			this->btnSearch->Text = L"Search";
			this->btnSearch->UseVisualStyleBackColor = true;
			this->btnSearch->Click += gcnew System::EventHandler(this, &AdvisorView::btnSearch_Click);
			// 
			// btnRefresh
			// 
			this->btnRefresh->Location = System::Drawing::Point(781, 499);
			this->btnRefresh->Name = L"btnRefresh";
			this->btnRefresh->Size = System::Drawing::Size(161, 23);
			this->btnRefresh->TabIndex = 7;
			this->btnRefresh->Text = L"Refresh";
			this->btnRefresh->UseVisualStyleBackColor = true;
			this->btnRefresh->Click += gcnew System::EventHandler(this, &AdvisorView::btnRefresh_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)));
			this->groupBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->groupBox1->Controls->Add(this->gb1lb2);
			this->groupBox1->Controls->Add(this->gb1lb1);
			this->groupBox1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->groupBox1->Location = System::Drawing::Point(790, 127);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(146, 124);
			this->groupBox1->TabIndex = 8;
			this->groupBox1->TabStop = false;
			// 
			// gb1lb2
			// 
			this->gb1lb2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->gb1lb2->Location = System::Drawing::Point(2, 22);
			this->gb1lb2->Name = L"gb1lb2";
			this->gb1lb2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->gb1lb2->Size = System::Drawing::Size(144, 13);
			this->gb1lb2->TabIndex = 1;
			this->gb1lb2->Text = L"NONE";
			this->gb1lb2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// gb1lb1
			// 
			this->gb1lb1->AutoSize = true;
			this->gb1lb1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->gb1lb1->Location = System::Drawing::Point(49, 9);
			this->gb1lb1->Name = L"gb1lb1";
			this->gb1lb1->Size = System::Drawing::Size(52, 13);
			this->gb1lb1->TabIndex = 0;
			this->gb1lb1->Text = L"Attending";
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)));
			this->groupBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->groupBox2->Controls->Add(this->gb2lb2);
			this->groupBox2->Controls->Add(this->gb2lb1);
			this->groupBox2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->groupBox2->Location = System::Drawing::Point(790, 286);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(146, 197);
			this->groupBox2->TabIndex = 9;
			this->groupBox2->TabStop = false;
			// 
			// gb2lb2
			// 
			this->gb2lb2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->gb2lb2->Location = System::Drawing::Point(1, 24);
			this->gb2lb2->Name = L"gb2lb2";
			this->gb2lb2->Size = System::Drawing::Size(144, 13);
			this->gb2lb2->TabIndex = 1;
			this->gb2lb2->Text = L"NONE";
			this->gb2lb2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// gb2lb1
			// 
			this->gb2lb1->AutoSize = true;
			this->gb2lb1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->gb2lb1->Location = System::Drawing::Point(6, 9);
			this->gb2lb1->Name = L"gb2lb1";
			this->gb2lb1->Size = System::Drawing::Size(132, 13);
			this->gb2lb1->TabIndex = 0;
			this->gb2lb1->Text = L"Students Currently Waiting";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(116)), static_cast<System::Int32>(static_cast<System::Byte>(175)),
				static_cast<System::Int32>(static_cast<System::Byte>(173)));
			this->panel1->Controls->Add(this->rbName);
			this->panel1->Controls->Add(this->rbID);
			this->panel1->Controls->Add(this->rdTime);
			this->panel1->Location = System::Drawing::Point(782, 47);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(161, 24);
			this->panel1->TabIndex = 10;
			// 
			// btnStartFinish
			// 
			this->btnStartFinish->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnStartFinish->Location = System::Drawing::Point(790, 257);
			this->btnStartFinish->Name = L"btnStartFinish";
			this->btnStartFinish->Size = System::Drawing::Size(146, 23);
			this->btnStartFinish->TabIndex = 2;
			this->btnStartFinish->Text = L"Start/Finish";
			this->btnStartFinish->UseVisualStyleBackColor = true;
			this->btnStartFinish->Click += gcnew System::EventHandler(this, &AdvisorView::button1_Click);
			// 
			// AdvisorView
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(137)));
			this->ClientSize = System::Drawing::Size(957, 534);
			this->Controls->Add(this->btnStartFinish);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->btnRefresh);
			this->Controls->Add(this->btnSearch);
			this->Controls->Add(this->tbSearch);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridAppointments);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"AdvisorView";
			this->Text = L"EnTec Advisor Apointments";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &AdvisorView::AdvisorView_FormClosed);
			this->VisibleChanged += gcnew System::EventHandler(this, &AdvisorView::AdvisorView_VisibleChanged);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridAppointments))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	
	int isInProgress() // checks if there is an appointment already in progress.
	{
		for (int i = 0; i < dataGridAppointments->RowCount; i++)
		{
			if (dataGridAppointments->Rows[i]->Cells[11]->Value->ToString() == "INPROGRESS")
			{
				return i;
			}
		}
		return -1;
	}
#pragma endregion

private: System::Void AdvisorView_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
	exit(0);
}

private: System::Void btnRefresh_Click(System::Object^  sender, System::EventArgs^  e) {
	LoadDB^ db = gcnew LoadDB(constring);

	dataGridAppointments->DataSource = db->BindingQuery();

	for (int i = 1; i < dataGridAppointments->ColumnCount; i++) //sets all columns to read only except the first checkboc column
		dataGridAppointments->Columns[i]->ReadOnly = true;
}
private: System::Void AdvisorView_VisibleChanged(System::Object^  sender, System::EventArgs^  e) {
	LoadDB^ db = gcnew LoadDB(constring);

	dataGridAppointments->DataSource = db->BindingQuery();
	dataGridAppointments->Columns["key"]->Visible = false;

	for (int i = 1; i < dataGridAppointments->ColumnCount; i++) //sets all columns to read only except the first checkboc column
		dataGridAppointments->Columns[i]->ReadOnly = true;
}
private: System::Void dataGridAppointments_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	
}
private: System::Void dataGridAppointments_CellValueChanged(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	//checks if there are any cells other than the current cell that are checked, then if it finds any it unchecks them
		if (e->ColumnIndex == doneCheck->Index && e->RowIndex != -1)
		{
			bool isChecked;
			isChecked = Convert::ToBoolean(dataGridAppointments->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value);
			if (isChecked)
			{
				for (int i = 0; i < dataGridAppointments->RowCount; i++)
				{
					if (i != e->RowIndex) {

						dataGridAppointments->Rows[i]->Cells[0]->Value = false;
					}
				}
			}
		}
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

	String^ str;
	LoadDB^ db = gcnew LoadDB(constring);

	for (int i = 0; i < dataGridAppointments->RowCount; i++)
	{
		if ((bool)dataGridAppointments->Rows[i]->Cells[0]->Value)
		{
			if (dataGridAppointments->Rows[i]->Cells[11]->Value->ToString() == "DONE") //CHECK IF CHECKED APPOINTMENT IS ALREADY DONE
			{
				MessageBox::Show("This appointment was already finished.", "!",
					MessageBoxButtons::OK, MessageBoxIcon::Information);
				break;
			}
			else if (isInProgress() >= 0 && isInProgress() != i) //CHECK IF ANY APPOINTMENTS ARE IN PROGGRESS
			{
				MessageBox::Show("An appointment for the student \""+ dataGridAppointments->Rows[isInProgress()]->Cells[2]->Value->ToString()+"\" is already in progress\n"
					+"Please finish this appointment first.", "!",
					MessageBoxButtons::OK, MessageBoxIcon::Information);
				break;
			}
			else if (dataGridAppointments->Rows[i]->Cells[11]->Value->ToString() == "SET") //TAKE THE APPOINTMENT
			{
				int result = (int)MessageBox::Show("Are you sure you would like to START the appointment.", "!",
					MessageBoxButtons::YesNo, MessageBoxIcon::Question);
				if (result == 7) // for some reason 7 is the integer value of No, O.o
					break;

				str = dataGridAppointments->Rows[i]->Cells[1]->Value->ToString();
				if (db->ExecuteQuery("UPDATE sys.students SET `Status`=\"INPROGRESS\" WHERE `key`='" + str + "'"))
				{
					MessageBox::Show("Appointment now in progress.", "Success",
						MessageBoxButtons::OK, MessageBoxIcon::Information);

					dataGridAppointments->DataSource = db->BindingQuery();
					gb1lb2->Text = dataGridAppointments->Rows[i]->Cells[2]->Value->ToString();
				}
				else {
					MessageBox::Show("AN ERROR OCCURED CONNECTING TO THE DATABASE", "ERROR",
						MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				break;
			}
			else if (dataGridAppointments->Rows[i]->Cells[11]->Value->ToString() == "INPROGRESS") //FINISH AN APPOINTMENT
			{
				int result = (int)MessageBox::Show("Are you sure you would like to FINISH the appointment.", "!",
					MessageBoxButtons::YesNo, MessageBoxIcon::Question);
				if (result == 7) // for some reason 7 is the integer value of No, O.o
					break;

				str = dataGridAppointments->Rows[i]->Cells[1]->Value->ToString();
				if (db->ExecuteQuery("UPDATE sys.students SET `Status`=\"DONE\" WHERE `key`='" + str + "'"))
				{
					MessageBox::Show("Appointment now complete", "Success",
						MessageBoxButtons::OK, MessageBoxIcon::Information);

					dataGridAppointments->DataSource = db->BindingQuery();
					gb1lb2->Text = "NONE";
				}
				else {
					MessageBox::Show("AN ERROR OCCURED CONNECTING TO THE DATABASE", "ERROR",
						MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				break;
			}
		}
	}
}
private: System::Void dataGridAppointments_CurrentCellDirtyStateChanged(System::Object^  sender, System::EventArgs^  e) {
	//comits edits to any cells in the dirty state
	if (dataGridAppointments->IsCurrentCellDirty)
	{
		dataGridAppointments->CommitEdit(DataGridViewDataErrorContexts::Commit);
	}
}
private: System::Void btnSearch_Click(System::Object^  sender, System::EventArgs^  e) { //TODO: Time search

	LoadDB^ db = gcnew LoadDB(constring);
	String^ query;
	BindingSource^ dbQuery;

	if (rbName->Checked)
	{
		query = "SELECT * FROM sys.students WHERE name LIKE '%" + tbSearch->Text + "%';";

		dbQuery = db->BindingQuery(query);
		if(dbQuery->Count == 0)
			MessageBox::Show("Search Returned No Results!", "INFORMATION",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
		else
			dataGridAppointments->DataSource = db->BindingQuery(query);
	}
	else if (rbID->Checked)
	{
		query = "SELECT * FROM sys.students WHERE id LIKE '%" + tbSearch->Text + "%';";
		dbQuery = db->BindingQuery(query);
		if (dbQuery->Count == 0)
			MessageBox::Show("Search Returned No Results!", "INFORMATION",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
		else
			dataGridAppointments->DataSource = db->BindingQuery(query);
	}
	else if (rdTime->Checked) //TODO: Date Time search sucks. need to figure out a better way later
	{
		query = "SELECT * FROM sys.students WHERE date LIKE '%" + tbSearch->Text + "%';";
		dbQuery = db->BindingQuery(query);
		if (dbQuery->Count == 0)
			MessageBox::Show("Search Returned No Results!", "INFORMATION",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
		else
			dataGridAppointments->DataSource = db->BindingQuery(query);
	}
	else
		MessageBox::Show("Please select a catagory before searching.", "INFORMATION",
			MessageBoxButtons::OK, MessageBoxIcon::Information);
}
};
}
