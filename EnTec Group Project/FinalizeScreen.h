#pragma once
#include <stdlib.h> 

namespace EnTec_Group_Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FinalizeScreen
	/// </summary>
	public ref class FinalizeScreen : public System::Windows::Forms::Form
	{
	private: Form^ previous;
	public:
		FinalizeScreen(Form^ previous)
		{
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
			this->groupBox1->Location = System::Drawing::Point(117, 93);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(344, 34);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			// 
			// lbNameText
			// 
			this->lbNameText->AutoSize = true;
			this->lbNameText->Location = System::Drawing::Point(106, 8);
			this->lbNameText->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbNameText->Name = L"lbNameText";
			this->lbNameText->Size = System::Drawing::Size(96, 17);
			this->lbNameText->TabIndex = 2;
			this->lbNameText->Text = L"Jimmy Bob Jr.";
			this->lbNameText->Click += gcnew System::EventHandler(this, &FinalizeScreen::label2_Click);
			// 
			// lbNameTitle
			// 
			this->lbNameTitle->AutoSize = true;
			this->lbNameTitle->Location = System::Drawing::Point(8, 8);
			this->lbNameTitle->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbNameTitle->Name = L"lbNameTitle";
			this->lbNameTitle->Size = System::Drawing::Size(49, 17);
			this->lbNameTitle->TabIndex = 1;
			this->lbNameTitle->Text = L"Name:";
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)));
			this->groupBox2->Controls->Add(this->lbEmailText);
			this->groupBox2->Controls->Add(this->lbEmailTitle);
			this->groupBox2->Location = System::Drawing::Point(117, 135);
			this->groupBox2->Margin = System::Windows::Forms::Padding(4);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(4);
			this->groupBox2->Size = System::Drawing::Size(344, 34);
			this->groupBox2->TabIndex = 3;
			this->groupBox2->TabStop = false;
			// 
			// lbEmailText
			// 
			this->lbEmailText->AutoSize = true;
			this->lbEmailText->Location = System::Drawing::Point(106, 8);
			this->lbEmailText->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbEmailText->Name = L"lbEmailText";
			this->lbEmailText->Size = System::Drawing::Size(147, 17);
			this->lbEmailText->TabIndex = 2;
			this->lbEmailText->Text = L"TestEmail@gmail.com";
			this->lbEmailText->Click += gcnew System::EventHandler(this, &FinalizeScreen::label3_Click);
			// 
			// lbEmailTitle
			// 
			this->lbEmailTitle->AutoSize = true;
			this->lbEmailTitle->Location = System::Drawing::Point(8, 8);
			this->lbEmailTitle->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbEmailTitle->Name = L"lbEmailTitle";
			this->lbEmailTitle->Size = System::Drawing::Size(102, 17);
			this->lbEmailTitle->TabIndex = 1;
			this->lbEmailTitle->Text = L"Email Address:";
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)));
			this->groupBox3->Controls->Add(this->lbIDText);
			this->groupBox3->Controls->Add(this->lbIDTitle);
			this->groupBox3->Location = System::Drawing::Point(117, 177);
			this->groupBox3->Margin = System::Windows::Forms::Padding(4);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(4);
			this->groupBox3->Size = System::Drawing::Size(344, 34);
			this->groupBox3->TabIndex = 4;
			this->groupBox3->TabStop = false;
			// 
			// lbIDText
			// 
			this->lbIDText->AutoSize = true;
			this->lbIDText->Location = System::Drawing::Point(141, 8);
			this->lbIDText->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbIDText->Name = L"lbIDText";
			this->lbIDText->Size = System::Drawing::Size(88, 17);
			this->lbIDText->TabIndex = 2;
			this->lbIDText->Text = L"1000458973";
			// 
			// lbIDTitle
			// 
			this->lbIDTitle->AutoSize = true;
			this->lbIDTitle->Location = System::Drawing::Point(8, 8);
			this->lbIDTitle->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbIDTitle->Name = L"lbIDTitle";
			this->lbIDTitle->Size = System::Drawing::Size(78, 17);
			this->lbIDTitle->TabIndex = 1;
			this->lbIDTitle->Text = L"Student ID:";
			// 
			// groupBox4
			// 
			this->groupBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)));
			this->groupBox4->Controls->Add(this->lbDegreeFText);
			this->groupBox4->Controls->Add(this->lbDegreeFTitle);
			this->groupBox4->Location = System::Drawing::Point(117, 219);
			this->groupBox4->Margin = System::Windows::Forms::Padding(4);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Padding = System::Windows::Forms::Padding(4);
			this->groupBox4->Size = System::Drawing::Size(344, 34);
			this->groupBox4->TabIndex = 5;
			this->groupBox4->TabStop = false;
			// 
			// lbDegreeFText
			// 
			this->lbDegreeFText->AutoSize = true;
			this->lbDegreeFText->Location = System::Drawing::Point(106, 8);
			this->lbDegreeFText->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbDegreeFText->Name = L"lbDegreeFText";
			this->lbDegreeFText->Size = System::Drawing::Size(82, 17);
			this->lbDegreeFText->TabIndex = 2;
			this->lbDegreeFText->Text = L"Technology";
			// 
			// lbDegreeFTitle
			// 
			this->lbDegreeFTitle->AutoSize = true;
			this->lbDegreeFTitle->Location = System::Drawing::Point(8, 8);
			this->lbDegreeFTitle->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbDegreeFTitle->Name = L"lbDegreeFTitle";
			this->lbDegreeFTitle->Size = System::Drawing::Size(93, 17);
			this->lbDegreeFTitle->TabIndex = 1;
			this->lbDegreeFTitle->Text = L"Degree Field:";
			// 
			// groupBox5
			// 
			this->groupBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)));
			this->groupBox5->Controls->Add(this->lbDegreeText);
			this->groupBox5->Controls->Add(this->lbDegreeTitle);
			this->groupBox5->Location = System::Drawing::Point(117, 261);
			this->groupBox5->Margin = System::Windows::Forms::Padding(4);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Padding = System::Windows::Forms::Padding(4);
			this->groupBox5->Size = System::Drawing::Size(344, 34);
			this->groupBox5->TabIndex = 6;
			this->groupBox5->TabStop = false;
			// 
			// lbDegreeText
			// 
			this->lbDegreeText->AutoSize = true;
			this->lbDegreeText->Location = System::Drawing::Point(106, 8);
			this->lbDegreeText->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbDegreeText->Name = L"lbDegreeText";
			this->lbDegreeText->Size = System::Drawing::Size(123, 17);
			this->lbDegreeText->TabIndex = 2;
			this->lbDegreeText->Text = L"Computer Science";
			// 
			// lbDegreeTitle
			// 
			this->lbDegreeTitle->AutoSize = true;
			this->lbDegreeTitle->Location = System::Drawing::Point(8, 8);
			this->lbDegreeTitle->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbDegreeTitle->Name = L"lbDegreeTitle";
			this->lbDegreeTitle->Size = System::Drawing::Size(59, 17);
			this->lbDegreeTitle->TabIndex = 1;
			this->lbDegreeTitle->Text = L"Degree:";
			// 
			// groupBox6
			// 
			this->groupBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)));
			this->groupBox6->Controls->Add(this->lbAdvisorText);
			this->groupBox6->Controls->Add(this->lbAdvisorTitle);
			this->groupBox6->Location = System::Drawing::Point(500, 93);
			this->groupBox6->Margin = System::Windows::Forms::Padding(4);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Padding = System::Windows::Forms::Padding(4);
			this->groupBox6->Size = System::Drawing::Size(344, 34);
			this->groupBox6->TabIndex = 7;
			this->groupBox6->TabStop = false;
			// 
			// lbAdvisorText
			// 
			this->lbAdvisorText->AutoSize = true;
			this->lbAdvisorText->Location = System::Drawing::Point(151, 8);
			this->lbAdvisorText->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbAdvisorText->Name = L"lbAdvisorText";
			this->lbAdvisorText->Size = System::Drawing::Size(43, 17);
			this->lbAdvisorText->TabIndex = 2;
			this->lbAdvisorText->Text = L"Maria";
			// 
			// lbAdvisorTitle
			// 
			this->lbAdvisorTitle->AutoSize = true;
			this->lbAdvisorTitle->Location = System::Drawing::Point(8, 8);
			this->lbAdvisorTitle->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbAdvisorTitle->Name = L"lbAdvisorTitle";
			this->lbAdvisorTitle->Size = System::Drawing::Size(59, 17);
			this->lbAdvisorTitle->TabIndex = 1;
			this->lbAdvisorTitle->Text = L"Advisor:";
			// 
			// groupBox7
			// 
			this->groupBox7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)));
			this->groupBox7->Controls->Add(this->lbAppDText);
			this->groupBox7->Controls->Add(this->lbAppDTitle);
			this->groupBox7->Location = System::Drawing::Point(500, 135);
			this->groupBox7->Margin = System::Windows::Forms::Padding(4);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Padding = System::Windows::Forms::Padding(4);
			this->groupBox7->Size = System::Drawing::Size(344, 34);
			this->groupBox7->TabIndex = 8;
			this->groupBox7->TabStop = false;
			// 
			// lbAppDText
			// 
			this->lbAppDText->AutoSize = true;
			this->lbAppDText->Location = System::Drawing::Point(151, 8);
			this->lbAppDText->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbAppDText->Name = L"lbAppDText";
			this->lbAppDText->Size = System::Drawing::Size(72, 17);
			this->lbAppDText->TabIndex = 2;
			this->lbAppDText->Text = L"1/10/2017";
			// 
			// lbAppDTitle
			// 
			this->lbAppDTitle->AutoSize = true;
			this->lbAppDTitle->Location = System::Drawing::Point(8, 8);
			this->lbAppDTitle->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbAppDTitle->Name = L"lbAppDTitle";
			this->lbAppDTitle->Size = System::Drawing::Size(125, 17);
			this->lbAppDTitle->TabIndex = 1;
			this->lbAppDTitle->Text = L"Appointment Date:";
			// 
			// groupBox8
			// 
			this->groupBox8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)));
			this->groupBox8->Controls->Add(this->lbAppTText);
			this->groupBox8->Controls->Add(this->lbAppTTitle);
			this->groupBox8->Location = System::Drawing::Point(500, 177);
			this->groupBox8->Margin = System::Windows::Forms::Padding(4);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Padding = System::Windows::Forms::Padding(4);
			this->groupBox8->Size = System::Drawing::Size(344, 34);
			this->groupBox8->TabIndex = 9;
			this->groupBox8->TabStop = false;
			// 
			// lbAppTText
			// 
			this->lbAppTText->AutoSize = true;
			this->lbAppTText->Location = System::Drawing::Point(151, 8);
			this->lbAppTText->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbAppTText->Name = L"lbAppTText";
			this->lbAppTText->Size = System::Drawing::Size(60, 17);
			this->lbAppTText->TabIndex = 2;
			this->lbAppTText->Text = L"8:45 AM";
			// 
			// lbAppTTitle
			// 
			this->lbAppTTitle->AutoSize = true;
			this->lbAppTTitle->Location = System::Drawing::Point(8, 8);
			this->lbAppTTitle->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbAppTTitle->Name = L"lbAppTTitle";
			this->lbAppTTitle->Size = System::Drawing::Size(126, 17);
			this->lbAppTTitle->TabIndex = 1;
			this->lbAppTTitle->Text = L"Appointment Time:";
			// 
			// groupBox9
			// 
			this->groupBox9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)));
			this->groupBox9->Controls->Add(this->lbAppRText);
			this->groupBox9->Controls->Add(this->lbAppRTitle);
			this->groupBox9->Location = System::Drawing::Point(500, 219);
			this->groupBox9->Margin = System::Windows::Forms::Padding(4);
			this->groupBox9->Name = L"groupBox9";
			this->groupBox9->Padding = System::Windows::Forms::Padding(4);
			this->groupBox9->Size = System::Drawing::Size(344, 34);
			this->groupBox9->TabIndex = 10;
			this->groupBox9->TabStop = false;
			// 
			// lbAppRText
			// 
			this->lbAppRText->AutoSize = true;
			this->lbAppRText->Location = System::Drawing::Point(151, 8);
			this->lbAppRText->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbAppRText->Name = L"lbAppRText";
			this->lbAppRText->Size = System::Drawing::Size(29, 17);
			this->lbAppRText->TabIndex = 2;
			this->lbAppRText->Text = L"IEP";
			// 
			// lbAppRTitle
			// 
			this->lbAppRTitle->AutoSize = true;
			this->lbAppRTitle->Location = System::Drawing::Point(8, 8);
			this->lbAppRTitle->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbAppRTitle->Name = L"lbAppRTitle";
			this->lbAppRTitle->Size = System::Drawing::Size(144, 17);
			this->lbAppRTitle->TabIndex = 1;
			this->lbAppRTitle->Text = L"Appointment Reason:";
			// 
			// btnBack
			// 
			this->btnBack->Location = System::Drawing::Point(13, 443);
			this->btnBack->Margin = System::Windows::Forms::Padding(4);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(111, 28);
			this->btnBack->TabIndex = 11;
			this->btnBack->Text = L"Back";
			this->btnBack->UseVisualStyleBackColor = true;
			this->btnBack->Click += gcnew System::EventHandler(this, &FinalizeScreen::button1_Click);
			// 
			// btnFinish
			// 
			this->btnFinish->Location = System::Drawing::Point(879, 443);
			this->btnFinish->Margin = System::Windows::Forms::Padding(4);
			this->btnFinish->Name = L"btnFinish";
			this->btnFinish->Size = System::Drawing::Size(111, 28);
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
			this->label1->Location = System::Drawing::Point(116, 64);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(193, 29);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Appointment Info";
			// 
			// FinalizeScreen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(137)));
			this->ClientSize = System::Drawing::Size(1003, 484);
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
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"FinalizeScreen";
			this->Text = L"EnTec Advisor Apointments";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &FinalizeScreen::FinalizeScreen_FormClosed);
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
	MessageBox::Show("Apointment has been set!", "Done",
	MessageBoxButtons::OK, MessageBoxIcon::Information);
	this->Hide();
}
private: System::Void FinalizeScreen_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
	exit(0);
}
};
}
