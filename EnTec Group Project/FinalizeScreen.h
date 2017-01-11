#pragma once
#include "Student.h"
#include <stdlib.h> 

namespace EnTec_Group_Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for FinalizeScreen
	/// </summary>
	public ref class FinalizeScreen : public System::Windows::Forms::Form
	{
	private: Student *student;
	private: Form^ previous;
	public:
		FinalizeScreen(Form^ previous, Student *student)
		{
			this->student = student;
			this->previous = previous;

			InitializeComponent();
		}
		FinalizeScreen(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FinalizeScreen()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  lbNameText;

	private: System::Windows::Forms::Label^  lbNameTitle;
	protected:



	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  lbEmailText;

	private: System::Windows::Forms::Label^  lbEmailTitle;

	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Label^  lbIDText;

	private: System::Windows::Forms::Label^  lbIDTitle;

	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::Label^  lbDegreeFText;

	private: System::Windows::Forms::Label^  lbDegreeFTitle;

	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::Label^  lbDegreeText;

	private: System::Windows::Forms::Label^  lbDegreeTitle;

	private: System::Windows::Forms::GroupBox^  groupBox6;
	private: System::Windows::Forms::Label^  lbAdvisorText;

	private: System::Windows::Forms::Label^  lbAdvisorTitle;

	private: System::Windows::Forms::GroupBox^  groupBox7;
	private: System::Windows::Forms::Label^  lbAppDText;

	private: System::Windows::Forms::Label^  lbAppDTitle;



	private: System::Windows::Forms::GroupBox^  groupBox8;
	private: System::Windows::Forms::Label^  lbAppTText;

	private: System::Windows::Forms::Label^  lbAppTTitle;

	private: System::Windows::Forms::GroupBox^  groupBox9;
	private: System::Windows::Forms::Label^  lbAppRText;

	private: System::Windows::Forms::Label^  lbAppRTitle;

	private: System::Windows::Forms::Button^  btnBack;
	private: System::Windows::Forms::Button^  btnFinish;
	private: System::Windows::Forms::Label^  label1;




	protected:



	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FinalizeScreen::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->lbNameText = (gcnew System::Windows::Forms::Label());
			this->lbNameTitle = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->lbEmailText = (gcnew System::Windows::Forms::Label());
			this->lbEmailTitle = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->lbIDText = (gcnew System::Windows::Forms::Label());
			this->lbIDTitle = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->lbDegreeFText = (gcnew System::Windows::Forms::Label());
			this->lbDegreeFTitle = (gcnew System::Windows::Forms::Label());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->lbDegreeText = (gcnew System::Windows::Forms::Label());
			this->lbDegreeTitle = (gcnew System::Windows::Forms::Label());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->lbAdvisorText = (gcnew System::Windows::Forms::Label());
			this->lbAdvisorTitle = (gcnew System::Windows::Forms::Label());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->lbAppDText = (gcnew System::Windows::Forms::Label());
			this->lbAppDTitle = (gcnew System::Windows::Forms::Label());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->lbAppTText = (gcnew System::Windows::Forms::Label());
			this->lbAppTTitle = (gcnew System::Windows::Forms::Label());
			this->groupBox9 = (gcnew System::Windows::Forms::GroupBox());
			this->lbAppRText = (gcnew System::Windows::Forms::Label());
			this->lbAppRTitle = (gcnew System::Windows::Forms::Label());
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->btnFinish = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->groupBox8->SuspendLayout();
			this->groupBox9->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)));
			this->groupBox1->Controls->Add(this->lbNameText);
			this->groupBox1->Controls->Add(this->lbNameTitle);
			this->groupBox1->Location = System::Drawing::Point(88, 76);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(258, 28);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			// 
			// lbNameText
			// 
			this->lbNameText->AutoSize = true;
			this->lbNameText->Location = System::Drawing::Point(50, 6);
			this->lbNameText->Name = L"lbNameText";
			this->lbNameText->Size = System::Drawing::Size(71, 13);
			this->lbNameText->TabIndex = 2;
			this->lbNameText->Text = L"Jimmy Bob Jr.";
			this->lbNameText->Click += gcnew System::EventHandler(this, &FinalizeScreen::label2_Click);
			// 
			// lbNameTitle
			// 
			this->lbNameTitle->AutoSize = true;
			this->lbNameTitle->Location = System::Drawing::Point(6, 6);
			this->lbNameTitle->Name = L"lbNameTitle";
			this->lbNameTitle->Size = System::Drawing::Size(38, 13);
			this->lbNameTitle->TabIndex = 1;
			this->lbNameTitle->Text = L"Name:";
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)));
			this->groupBox2->Controls->Add(this->lbEmailText);
			this->groupBox2->Controls->Add(this->lbEmailTitle);
			this->groupBox2->Location = System::Drawing::Point(88, 110);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(258, 28);
			this->groupBox2->TabIndex = 3;
			this->groupBox2->TabStop = false;
			// 
			// lbEmailText
			// 
			this->lbEmailText->AutoSize = true;
			this->lbEmailText->Location = System::Drawing::Point(88, 6);
			this->lbEmailText->Name = L"lbEmailText";
			this->lbEmailText->Size = System::Drawing::Size(111, 13);
			this->lbEmailText->TabIndex = 2;
			this->lbEmailText->Text = L"TestEmail@gmail.com";
			this->lbEmailText->Click += gcnew System::EventHandler(this, &FinalizeScreen::label3_Click);
			// 
			// lbEmailTitle
			// 
			this->lbEmailTitle->AutoSize = true;
			this->lbEmailTitle->Location = System::Drawing::Point(6, 6);
			this->lbEmailTitle->Name = L"lbEmailTitle";
			this->lbEmailTitle->Size = System::Drawing::Size(76, 13);
			this->lbEmailTitle->TabIndex = 1;
			this->lbEmailTitle->Text = L"Email Address:";
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)));
			this->groupBox3->Controls->Add(this->lbIDText);
			this->groupBox3->Controls->Add(this->lbIDTitle);
			this->groupBox3->Location = System::Drawing::Point(88, 144);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(258, 28);
			this->groupBox3->TabIndex = 4;
			this->groupBox3->TabStop = false;
			// 
			// lbIDText
			// 
			this->lbIDText->AutoSize = true;
			this->lbIDText->Location = System::Drawing::Point(73, 6);
			this->lbIDText->Name = L"lbIDText";
			this->lbIDText->Size = System::Drawing::Size(67, 13);
			this->lbIDText->TabIndex = 2;
			this->lbIDText->Text = L"1000458973";
			// 
			// lbIDTitle
			// 
			this->lbIDTitle->AutoSize = true;
			this->lbIDTitle->Location = System::Drawing::Point(6, 6);
			this->lbIDTitle->Name = L"lbIDTitle";
			this->lbIDTitle->Size = System::Drawing::Size(61, 13);
			this->lbIDTitle->TabIndex = 1;
			this->lbIDTitle->Text = L"Student ID:";
			// 
			// groupBox4
			// 
			this->groupBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)));
			this->groupBox4->Controls->Add(this->lbDegreeFText);
			this->groupBox4->Controls->Add(this->lbDegreeFTitle);
			this->groupBox4->Location = System::Drawing::Point(88, 178);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(258, 28);
			this->groupBox4->TabIndex = 5;
			this->groupBox4->TabStop = false;
			// 
			// lbDegreeFText
			// 
			this->lbDegreeFText->AutoSize = true;
			this->lbDegreeFText->Location = System::Drawing::Point(82, 6);
			this->lbDegreeFText->Name = L"lbDegreeFText";
			this->lbDegreeFText->Size = System::Drawing::Size(63, 13);
			this->lbDegreeFText->TabIndex = 2;
			this->lbDegreeFText->Text = L"Technology";
			// 
			// lbDegreeFTitle
			// 
			this->lbDegreeFTitle->AutoSize = true;
			this->lbDegreeFTitle->Location = System::Drawing::Point(6, 6);
			this->lbDegreeFTitle->Name = L"lbDegreeFTitle";
			this->lbDegreeFTitle->Size = System::Drawing::Size(70, 13);
			this->lbDegreeFTitle->TabIndex = 1;
			this->lbDegreeFTitle->Text = L"Degree Field:";
			// 
			// groupBox5
			// 
			this->groupBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)));
			this->groupBox5->Controls->Add(this->lbDegreeText);
			this->groupBox5->Controls->Add(this->lbDegreeTitle);
			this->groupBox5->Location = System::Drawing::Point(88, 212);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(258, 28);
			this->groupBox5->TabIndex = 6;
			this->groupBox5->TabStop = false;
			// 
			// lbDegreeText
			// 
			this->lbDegreeText->AutoSize = true;
			this->lbDegreeText->Location = System::Drawing::Point(57, 6);
			this->lbDegreeText->Name = L"lbDegreeText";
			this->lbDegreeText->Size = System::Drawing::Size(94, 13);
			this->lbDegreeText->TabIndex = 2;
			this->lbDegreeText->Text = L"Computer Science";
			// 
			// lbDegreeTitle
			// 
			this->lbDegreeTitle->AutoSize = true;
			this->lbDegreeTitle->Location = System::Drawing::Point(6, 6);
			this->lbDegreeTitle->Name = L"lbDegreeTitle";
			this->lbDegreeTitle->Size = System::Drawing::Size(45, 13);
			this->lbDegreeTitle->TabIndex = 1;
			this->lbDegreeTitle->Text = L"Degree:";
			// 
			// groupBox6
			// 
			this->groupBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)));
			this->groupBox6->Controls->Add(this->lbAdvisorText);
			this->groupBox6->Controls->Add(this->lbAdvisorTitle);
			this->groupBox6->Location = System::Drawing::Point(375, 76);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(258, 28);
			this->groupBox6->TabIndex = 7;
			this->groupBox6->TabStop = false;
			// 
			// lbAdvisorText
			// 
			this->lbAdvisorText->AutoSize = true;
			this->lbAdvisorText->Location = System::Drawing::Point(57, 6);
			this->lbAdvisorText->Name = L"lbAdvisorText";
			this->lbAdvisorText->Size = System::Drawing::Size(33, 13);
			this->lbAdvisorText->TabIndex = 2;
			this->lbAdvisorText->Text = L"Maria";
			// 
			// lbAdvisorTitle
			// 
			this->lbAdvisorTitle->AutoSize = true;
			this->lbAdvisorTitle->Location = System::Drawing::Point(6, 6);
			this->lbAdvisorTitle->Name = L"lbAdvisorTitle";
			this->lbAdvisorTitle->Size = System::Drawing::Size(45, 13);
			this->lbAdvisorTitle->TabIndex = 1;
			this->lbAdvisorTitle->Text = L"Advisor:";
			// 
			// groupBox7
			// 
			this->groupBox7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)));
			this->groupBox7->Controls->Add(this->lbAppDText);
			this->groupBox7->Controls->Add(this->lbAppDTitle);
			this->groupBox7->Location = System::Drawing::Point(375, 110);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(258, 28);
			this->groupBox7->TabIndex = 8;
			this->groupBox7->TabStop = false;
			// 
			// lbAppDText
			// 
			this->lbAppDText->AutoSize = true;
			this->lbAppDText->Location = System::Drawing::Point(107, 6);
			this->lbAppDText->Name = L"lbAppDText";
			this->lbAppDText->Size = System::Drawing::Size(59, 13);
			this->lbAppDText->TabIndex = 2;
			this->lbAppDText->Text = L"1/10/2017";
			// 
			// lbAppDTitle
			// 
			this->lbAppDTitle->AutoSize = true;
			this->lbAppDTitle->Location = System::Drawing::Point(6, 6);
			this->lbAppDTitle->Name = L"lbAppDTitle";
			this->lbAppDTitle->Size = System::Drawing::Size(95, 13);
			this->lbAppDTitle->TabIndex = 1;
			this->lbAppDTitle->Text = L"Appointment Date:";
			// 
			// groupBox8
			// 
			this->groupBox8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)));
			this->groupBox8->Controls->Add(this->lbAppTText);
			this->groupBox8->Controls->Add(this->lbAppTTitle);
			this->groupBox8->Location = System::Drawing::Point(375, 144);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(258, 28);
			this->groupBox8->TabIndex = 9;
			this->groupBox8->TabStop = false;
			// 
			// lbAppTText
			// 
			this->lbAppTText->AutoSize = true;
			this->lbAppTText->Location = System::Drawing::Point(107, 6);
			this->lbAppTText->Name = L"lbAppTText";
			this->lbAppTText->Size = System::Drawing::Size(47, 13);
			this->lbAppTText->TabIndex = 2;
			this->lbAppTText->Text = L"8:45 AM";
			// 
			// lbAppTTitle
			// 
			this->lbAppTTitle->AutoSize = true;
			this->lbAppTTitle->Location = System::Drawing::Point(6, 6);
			this->lbAppTTitle->Name = L"lbAppTTitle";
			this->lbAppTTitle->Size = System::Drawing::Size(95, 13);
			this->lbAppTTitle->TabIndex = 1;
			this->lbAppTTitle->Text = L"Appointment Time:";
			// 
			// groupBox9
			// 
			this->groupBox9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)));
			this->groupBox9->Controls->Add(this->lbAppRText);
			this->groupBox9->Controls->Add(this->lbAppRTitle);
			this->groupBox9->Location = System::Drawing::Point(375, 178);
			this->groupBox9->Name = L"groupBox9";
			this->groupBox9->Size = System::Drawing::Size(258, 28);
			this->groupBox9->TabIndex = 10;
			this->groupBox9->TabStop = false;
			// 
			// lbAppRText
			// 
			this->lbAppRText->AutoSize = true;
			this->lbAppRText->Location = System::Drawing::Point(121, 6);
			this->lbAppRText->Name = L"lbAppRText";
			this->lbAppRText->Size = System::Drawing::Size(24, 13);
			this->lbAppRText->TabIndex = 2;
			this->lbAppRText->Text = L"IEP";
			// 
			// lbAppRTitle
			// 
			this->lbAppRTitle->AutoSize = true;
			this->lbAppRTitle->Location = System::Drawing::Point(6, 6);
			this->lbAppRTitle->Name = L"lbAppRTitle";
			this->lbAppRTitle->Size = System::Drawing::Size(109, 13);
			this->lbAppRTitle->TabIndex = 1;
			this->lbAppRTitle->Text = L"Appointment Reason:";
			// 
			// btnBack
			// 
			this->btnBack->Location = System::Drawing::Point(10, 360);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(83, 23);
			this->btnBack->TabIndex = 11;
			this->btnBack->Text = L"Back";
			this->btnBack->UseVisualStyleBackColor = true;
			this->btnBack->Click += gcnew System::EventHandler(this, &FinalizeScreen::button1_Click);
			// 
			// btnFinish
			// 
			this->btnFinish->Location = System::Drawing::Point(659, 360);
			this->btnFinish->Name = L"btnFinish";
			this->btnFinish->Size = System::Drawing::Size(83, 23);
			this->btnFinish->TabIndex = 12;
			this->btnFinish->Text = L"Finish";
			this->btnFinish->UseVisualStyleBackColor = true;
			this->btnFinish->Click += gcnew System::EventHandler(this, &FinalizeScreen::btnFinish_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(116)), static_cast<System::Int32>(static_cast<System::Byte>(175)),
				static_cast<System::Int32>(static_cast<System::Byte>(173)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(87, 52);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(152, 24);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Appointment Info";
			// 
			// FinalizeScreen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(137)));
			this->ClientSize = System::Drawing::Size(752, 393);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnFinish);
			this->Controls->Add(this->btnBack);
			this->Controls->Add(this->groupBox9);
			this->Controls->Add(this->groupBox8);
			this->Controls->Add(this->groupBox7);
			this->Controls->Add(this->groupBox6);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"FinalizeScreen";
			this->Text = L"EnTec Advisor Apointments";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &FinalizeScreen::FinalizeScreen_FormClosed);
			this->VisibleChanged += gcnew System::EventHandler(this, &FinalizeScreen::FinalizeScreen_VisibleChanged);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			this->groupBox9->ResumeLayout(false);
			this->groupBox9->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	}
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	this->previous->Show();
}
private: System::Void btnFinish_Click(System::Object^  sender, System::EventArgs^  e) {
	
	String^ constring = L"datasource=50.154.251.128;port=3306;username=root;password=toti2084";
	MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("INSERT INTO sys.students (Name, ID, Email, Degree, Degree_Type, Advisor, Reason, Date, Time, Status)"
		"VALUES('"+student->getName()+"', '" +student->getID()+ "', '" +student->getEmailAddress()+ "', '" +student->getDegree()+ "', '" 
		+student->getDegreeType()+ "', '" +student->getAdvisor()+ "', '" +student->getAppReason()+ "', '" +student->getAppDate()+ "','" 
		+student->getAppTime()+ "', \"SET\");", conDatabase);
	MySqlDataReader^ myReader;
	try{
		conDatabase->Open();
		myReader = cmdDataBase->ExecuteReader();
		MessageBox::Show("Apointment has been set!", "Done",
		MessageBoxButtons::OK, MessageBoxIcon::Information);

		student->clearStudent(); //  clears the student class of any pervious data that was stored
		this->Hide();
	
	}catch(Exception^ ex){
		MessageBox::Show("AN ERROR OCCURED WHILE TRYING TO SAVE YOUR APPOINTMENT!\nPLEASE TRY AGAIN LATER.", "ERROR",
		MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

	
}
private: System::Void FinalizeScreen_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
	delete student;
	student = nullptr;
	exit(0);
}
private: System::Void FinalizeScreen_VisibleChanged(System::Object^  sender, System::EventArgs^  e) {
	lbNameText->Text = student->getName();
	lbEmailText->Text = student->getEmailAddress();
	lbIDText->Text = student->getID();
	lbDegreeFText->Text = student->getDegreeType();
	lbDegreeText->Text = student->getDegree();
	lbAdvisorText->Text = student->getAdvisor();
	lbAppDText->Text = student->getAppDate();
	lbAppTText->Text = student->getAppTime();
	lbAppRText->Text = student->getAppReason();
}
};
}
