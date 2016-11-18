#pragma once


namespace EnTec_Group_Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for DegreeSelect
	/// </summary>
	public ref class DegreeSelect : public System::Windows::Forms::Form
	{
	public:
		DegreeSelect(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DegreeSelect()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  gbEngineering;
	private: System::Windows::Forms::GroupBox^  gbTechnology;
	protected:


	protected:

	private: System::Windows::Forms::GroupBox^  gbMAGIC;
	private: System::Windows::Forms::RadioButton^  rdTechnology;
	private: System::Windows::Forms::RadioButton^  rbEngineering;
	private: System::Windows::Forms::RadioButton^  rbMAGIC;

	private: System::Windows::Forms::Button^  btnNext;
	private: System::Windows::Forms::RadioButton^  radioButton8;
	private: System::Windows::Forms::RadioButton^  radioButton7;
	private: System::Windows::Forms::RadioButton^  radioButton6;
	private: System::Windows::Forms::RadioButton^  radioButton5;
	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  rbArchitecture;
	private: System::Windows::Forms::RadioButton^  radioButton9;
	private: System::Windows::Forms::RadioButton^  radioButton10;
	private: System::Windows::Forms::RadioButton^  radioButton13;
	private: System::Windows::Forms::RadioButton^  radioButton12;
	private: System::Windows::Forms::RadioButton^  radioButton11;
	private: System::Windows::Forms::TextBox^  tbEngineeringOther;
	private: System::Windows::Forms::RadioButton^  rdEngineeringOther;
	private: System::Windows::Forms::TextBox^  tbTechnologyOther;
	private: System::Windows::Forms::RadioButton^  rdTechnologyOther;
	private: System::Windows::Forms::RadioButton^  radioButton23;
	private: System::Windows::Forms::RadioButton^  radioButton22;
	private: System::Windows::Forms::RadioButton^  radioButton21;
	private: System::Windows::Forms::RadioButton^  radioButton20;
	private: System::Windows::Forms::RadioButton^  radioButton19;
	private: System::Windows::Forms::RadioButton^  radioButton18;
	private: System::Windows::Forms::RadioButton^  radioButton17;
	private: System::Windows::Forms::RadioButton^  radioButton16;
	private: System::Windows::Forms::RadioButton^  radioButton15;
	private: System::Windows::Forms::RadioButton^  radioButton14;
	private: System::Windows::Forms::RadioButton^  radioButton25;
	private: System::Windows::Forms::RadioButton^  radioButton24;
	private: System::Windows::Forms::Button^  btnBack;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(DegreeSelect::typeid));
			this->gbEngineering = (gcnew System::Windows::Forms::GroupBox());
			this->tbEngineeringOther = (gcnew System::Windows::Forms::TextBox());
			this->rdEngineeringOther = (gcnew System::Windows::Forms::RadioButton());
			this->rbArchitecture = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton13 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton12 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton11 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton10 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton9 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton8 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->gbTechnology = (gcnew System::Windows::Forms::GroupBox());
			this->tbTechnologyOther = (gcnew System::Windows::Forms::TextBox());
			this->rdTechnologyOther = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton23 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton22 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton21 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton20 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton19 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton18 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton17 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton16 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton15 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton14 = (gcnew System::Windows::Forms::RadioButton());
			this->gbMAGIC = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton25 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton24 = (gcnew System::Windows::Forms::RadioButton());
			this->rdTechnology = (gcnew System::Windows::Forms::RadioButton());
			this->rbEngineering = (gcnew System::Windows::Forms::RadioButton());
			this->rbMAGIC = (gcnew System::Windows::Forms::RadioButton());
			this->btnNext = (gcnew System::Windows::Forms::Button());
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->gbEngineering->SuspendLayout();
			this->gbTechnology->SuspendLayout();
			this->gbMAGIC->SuspendLayout();
			this->SuspendLayout();
			// 
			// gbEngineering
			// 
			this->gbEngineering->Controls->Add(this->tbEngineeringOther);
			this->gbEngineering->Controls->Add(this->rdEngineeringOther);
			this->gbEngineering->Controls->Add(this->rbArchitecture);
			this->gbEngineering->Controls->Add(this->radioButton13);
			this->gbEngineering->Controls->Add(this->radioButton12);
			this->gbEngineering->Controls->Add(this->radioButton11);
			this->gbEngineering->Controls->Add(this->radioButton10);
			this->gbEngineering->Controls->Add(this->radioButton9);
			this->gbEngineering->Controls->Add(this->radioButton8);
			this->gbEngineering->Controls->Add(this->radioButton7);
			this->gbEngineering->Controls->Add(this->radioButton6);
			this->gbEngineering->Controls->Add(this->radioButton5);
			this->gbEngineering->Controls->Add(this->radioButton4);
			this->gbEngineering->Controls->Add(this->radioButton3);
			this->gbEngineering->Controls->Add(this->radioButton2);
			this->gbEngineering->Controls->Add(this->radioButton1);
			this->gbEngineering->Enabled = false;
			this->gbEngineering->Location = System::Drawing::Point(258, 26);
			this->gbEngineering->Name = L"gbEngineering";
			this->gbEngineering->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->gbEngineering->Size = System::Drawing::Size(225, 355);
			this->gbEngineering->TabIndex = 0;
			this->gbEngineering->TabStop = false;
			// 
			// tbEngineeringOther
			// 
			this->tbEngineeringOther->Location = System::Drawing::Point(28, 329);
			this->tbEngineeringOther->Name = L"tbEngineeringOther";
			this->tbEngineeringOther->Size = System::Drawing::Size(191, 20);
			this->tbEngineeringOther->TabIndex = 15;
			// 
			// rdEngineeringOther
			// 
			this->rdEngineeringOther->AutoSize = true;
			this->rdEngineeringOther->Location = System::Drawing::Point(7, 333);
			this->rdEngineeringOther->Name = L"rdEngineeringOther";
			this->rdEngineeringOther->Size = System::Drawing::Size(14, 13);
			this->rdEngineeringOther->TabIndex = 14;
			this->rdEngineeringOther->TabStop = true;
			this->rdEngineeringOther->UseVisualStyleBackColor = true;
			// 
			// rbArchitecture
			// 
			this->rbArchitecture->AutoSize = true;
			this->rbArchitecture->Location = System::Drawing::Point(7, 11);
			this->rbArchitecture->Name = L"rbArchitecture";
			this->rbArchitecture->Size = System::Drawing::Size(138, 17);
			this->rbArchitecture->TabIndex = 0;
			this->rbArchitecture->TabStop = true;
			this->rbArchitecture->Text = L"A.A. Architecture 10905";
			this->rbArchitecture->UseVisualStyleBackColor = true;
			// 
			// radioButton13
			// 
			this->radioButton13->AutoSize = true;
			this->radioButton13->Location = System::Drawing::Point(7, 311);
			this->radioButton13->Name = L"radioButton13";
			this->radioButton13->Size = System::Drawing::Size(159, 17);
			this->radioButton13->TabIndex = 13;
			this->radioButton13->TabStop = true;
			this->radioButton13->Text = L"A.S. Electronics Engineering";
			this->radioButton13->UseVisualStyleBackColor = true;
			// 
			// radioButton12
			// 
			this->radioButton12->AutoSize = true;
			this->radioButton12->Location = System::Drawing::Point(7, 288);
			this->radioButton12->Name = L"radioButton12";
			this->radioButton12->Size = System::Drawing::Size(152, 17);
			this->radioButton12->TabIndex = 12;
			this->radioButton12->TabStop = true;
			this->radioButton12->Text = L"A.S. Computer Engineering";
			this->radioButton12->UseVisualStyleBackColor = true;
			// 
			// radioButton11
			// 
			this->radioButton11->AutoSize = true;
			this->radioButton11->Location = System::Drawing::Point(7, 265);
			this->radioButton11->Name = L"radioButton11";
			this->radioButton11->Size = System::Drawing::Size(168, 17);
			this->radioButton11->TabIndex = 11;
			this->radioButton11->TabStop = true;
			this->radioButton11->Text = L"A.S. Advanced Manufacturing";
			this->radioButton11->UseVisualStyleBackColor = true;
			// 
			// radioButton10
			// 
			this->radioButton10->AutoSize = true;
			this->radioButton10->Location = System::Drawing::Point(7, 241);
			this->radioButton10->Name = L"radioButton10";
			this->radioButton10->Size = System::Drawing::Size(159, 17);
			this->radioButton10->TabIndex = 10;
			this->radioButton10->TabStop = true;
			this->radioButton10->Text = L"B.S. Electronics Engineering";
			this->radioButton10->UseVisualStyleBackColor = true;
			// 
			// radioButton9
			// 
			this->radioButton9->AutoSize = true;
			this->radioButton9->Location = System::Drawing::Point(7, 218);
			this->radioButton9->Name = L"radioButton9";
			this->radioButton9->Size = System::Drawing::Size(120, 17);
			this->radioButton9->TabIndex = 9;
			this->radioButton9->TabStop = true;
			this->radioButton9->Text = L"A.A. Science 10904";
			this->radioButton9->UseVisualStyleBackColor = true;
			// 
			// radioButton8
			// 
			this->radioButton8->AutoSize = true;
			this->radioButton8->Location = System::Drawing::Point(7, 195);
			this->radioButton8->Name = L"radioButton8";
			this->radioButton8->Size = System::Drawing::Size(113, 17);
			this->radioButton8->TabIndex = 8;
			this->radioButton8->TabStop = true;
			this->radioButton8->Text = L"A.A. Ocean 10913";
			this->radioButton8->UseVisualStyleBackColor = true;
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->Location = System::Drawing::Point(7, 172);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(136, 17);
			this->radioButton7->TabIndex = 7;
			this->radioButton7->TabStop = true;
			this->radioButton7->Text = L"A.A. Mechanical 10911";
			this->radioButton7->UseVisualStyleBackColor = true;
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Location = System::Drawing::Point(7, 149);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(123, 17);
			this->radioButton6->TabIndex = 6;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"A.A. Industrial 10912";
			this->radioButton6->UseVisualStyleBackColor = true;
			this->radioButton6->CheckedChanged += gcnew System::EventHandler(this, &DegreeSelect::radioButton6_CheckedChanged);
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(7, 126);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(131, 17);
			this->radioButton5->TabIndex = 5;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"A.A. Geomatics 10909";
			this->radioButton5->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(7, 103);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(124, 17);
			this->radioButton4->TabIndex = 4;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"A.A. Electrical 10910";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(7, 80);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(126, 17);
			this->radioButton3->TabIndex = 3;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"A.A. Computer 10705";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(7, 57);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(100, 17);
			this->radioButton2->TabIndex = 2;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"A.A. Civil 10908";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(7, 34);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(124, 17);
			this->radioButton1->TabIndex = 1;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"A.A. Chemical 10906";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// gbTechnology
			// 
			this->gbTechnology->Controls->Add(this->tbTechnologyOther);
			this->gbTechnology->Controls->Add(this->rdTechnologyOther);
			this->gbTechnology->Controls->Add(this->radioButton23);
			this->gbTechnology->Controls->Add(this->radioButton22);
			this->gbTechnology->Controls->Add(this->radioButton21);
			this->gbTechnology->Controls->Add(this->radioButton20);
			this->gbTechnology->Controls->Add(this->radioButton19);
			this->gbTechnology->Controls->Add(this->radioButton18);
			this->gbTechnology->Controls->Add(this->radioButton17);
			this->gbTechnology->Controls->Add(this->radioButton16);
			this->gbTechnology->Controls->Add(this->radioButton15);
			this->gbTechnology->Controls->Add(this->radioButton14);
			this->gbTechnology->Enabled = false;
			this->gbTechnology->Location = System::Drawing::Point(12, 26);
			this->gbTechnology->Name = L"gbTechnology";
			this->gbTechnology->Size = System::Drawing::Size(225, 321);
			this->gbTechnology->TabIndex = 1;
			this->gbTechnology->TabStop = false;
			// 
			// tbTechnologyOther
			// 
			this->tbTechnologyOther->Location = System::Drawing::Point(27, 238);
			this->tbTechnologyOther->Name = L"tbTechnologyOther";
			this->tbTechnologyOther->Size = System::Drawing::Size(191, 20);
			this->tbTechnologyOther->TabIndex = 16;
			// 
			// rdTechnologyOther
			// 
			this->rdTechnologyOther->AutoSize = true;
			this->rdTechnologyOther->Location = System::Drawing::Point(7, 241);
			this->rdTechnologyOther->Name = L"rdTechnologyOther";
			this->rdTechnologyOther->Size = System::Drawing::Size(14, 13);
			this->rdTechnologyOther->TabIndex = 16;
			this->rdTechnologyOther->TabStop = true;
			this->rdTechnologyOther->UseVisualStyleBackColor = true;
			// 
			// radioButton23
			// 
			this->radioButton23->AutoSize = true;
			this->radioButton23->Location = System::Drawing::Point(7, 218);
			this->radioButton23->Name = L"radioButton23";
			this->radioButton23->Size = System::Drawing::Size(205, 17);
			this->radioButton23->TabIndex = 13;
			this->radioButton23->TabStop = true;
			this->radioButton23->Text = L"A.S. Networking Services Technology";
			this->radioButton23->UseVisualStyleBackColor = true;
			// 
			// radioButton22
			// 
			this->radioButton22->AutoSize = true;
			this->radioButton22->Location = System::Drawing::Point(7, 195);
			this->radioButton22->Name = L"radioButton22";
			this->radioButton22->Size = System::Drawing::Size(180, 17);
			this->radioButton22->TabIndex = 12;
			this->radioButton22->TabStop = true;
			this->radioButton22->Text = L"A.S. Oracle Database Developer";
			this->radioButton22->UseVisualStyleBackColor = true;
			// 
			// radioButton21
			// 
			this->radioButton21->AutoSize = true;
			this->radioButton21->Location = System::Drawing::Point(7, 172);
			this->radioButton21->Name = L"radioButton21";
			this->radioButton21->Size = System::Drawing::Size(191, 17);
			this->radioButton21->TabIndex = 11;
			this->radioButton21->TabStop = true;
			this->radioButton21->Text = L"A.S. Oracle Database Administrator";
			this->radioButton21->UseVisualStyleBackColor = true;
			// 
			// radioButton20
			// 
			this->radioButton20->AutoSize = true;
			this->radioButton20->Location = System::Drawing::Point(7, 149);
			this->radioButton20->Name = L"radioButton20";
			this->radioButton20->Size = System::Drawing::Size(193, 17);
			this->radioButton20->TabIndex = 10;
			this->radioButton20->TabStop = true;
			this->radioButton20->Text = L"A.S. Microsoft Business Intelligence";
			this->radioButton20->UseVisualStyleBackColor = true;
			// 
			// radioButton19
			// 
			this->radioButton19->AutoSize = true;
			this->radioButton19->Location = System::Drawing::Point(7, 126);
			this->radioButton19->Name = L"radioButton19";
			this->radioButton19->Size = System::Drawing::Size(203, 17);
			this->radioButton19->TabIndex = 9;
			this->radioButton19->TabStop = true;
			this->radioButton19->Text = L"A.S. Microsoft Database Administrator";
			this->radioButton19->UseVisualStyleBackColor = true;
			// 
			// radioButton18
			// 
			this->radioButton18->AutoSize = true;
			this->radioButton18->Location = System::Drawing::Point(6, 101);
			this->radioButton18->Name = L"radioButton18";
			this->radioButton18->Size = System::Drawing::Size(205, 17);
			this->radioButton18->TabIndex = 8;
			this->radioButton18->TabStop = true;
			this->radioButton18->Text = L"A.S. Mobile Applications Development";
			this->radioButton18->UseVisualStyleBackColor = true;
			// 
			// radioButton17
			// 
			this->radioButton17->AutoSize = true;
			this->radioButton17->Location = System::Drawing::Point(7, 78);
			this->radioButton17->Name = L"radioButton17";
			this->radioButton17->Size = System::Drawing::Size(185, 17);
			this->radioButton17->TabIndex = 7;
			this->radioButton17->TabStop = true;
			this->radioButton17->Text = L"A.S. Bus Application Programming";
			this->radioButton17->UseVisualStyleBackColor = true;
			// 
			// radioButton16
			// 
			this->radioButton16->AutoSize = true;
			this->radioButton16->Location = System::Drawing::Point(7, 55);
			this->radioButton16->Name = L"radioButton16";
			this->radioButton16->Size = System::Drawing::Size(138, 17);
			this->radioButton16->TabIndex = 2;
			this->radioButton16->TabStop = true;
			this->radioButton16->Text = L"A.A. Computer Science ";
			this->radioButton16->UseVisualStyleBackColor = true;
			// 
			// radioButton15
			// 
			this->radioButton15->AutoSize = true;
			this->radioButton15->Location = System::Drawing::Point(7, 32);
			this->radioButton15->Name = L"radioButton15";
			this->radioButton15->Size = System::Drawing::Size(204, 17);
			this->radioButton15->TabIndex = 1;
			this->radioButton15->TabStop = true;
			this->radioButton15->Text = L"A.S. Information Systems Technology ";
			this->radioButton15->UseVisualStyleBackColor = true;
			// 
			// radioButton14
			// 
			this->radioButton14->AutoSize = true;
			this->radioButton14->Location = System::Drawing::Point(7, 9);
			this->radioButton14->Name = L"radioButton14";
			this->radioButton14->Size = System::Drawing::Size(204, 17);
			this->radioButton14->TabIndex = 0;
			this->radioButton14->TabStop = true;
			this->radioButton14->Text = L"A.A. Information Systems Technology ";
			this->radioButton14->UseVisualStyleBackColor = true;
			// 
			// gbMAGIC
			// 
			this->gbMAGIC->Controls->Add(this->radioButton25);
			this->gbMAGIC->Controls->Add(this->radioButton24);
			this->gbMAGIC->Enabled = false;
			this->gbMAGIC->Location = System::Drawing::Point(515, 26);
			this->gbMAGIC->Name = L"gbMAGIC";
			this->gbMAGIC->Size = System::Drawing::Size(225, 321);
			this->gbMAGIC->TabIndex = 2;
			this->gbMAGIC->TabStop = false;
			// 
			// radioButton25
			// 
			this->radioButton25->AutoSize = true;
			this->radioButton25->Location = System::Drawing::Point(7, 34);
			this->radioButton25->Name = L"radioButton25";
			this->radioButton25->Size = System::Drawing::Size(119, 17);
			this->radioButton25->TabIndex = 1;
			this->radioButton25->TabStop = true;
			this->radioButton25->Text = L"Game Development";
			this->radioButton25->UseVisualStyleBackColor = true;
			// 
			// radioButton24
			// 
			this->radioButton24->AutoSize = true;
			this->radioButton24->Location = System::Drawing::Point(7, 11);
			this->radioButton24->Name = L"radioButton24";
			this->radioButton24->Size = System::Drawing::Size(142, 17);
			this->radioButton24->TabIndex = 0;
			this->radioButton24->TabStop = true;
			this->radioButton24->Text = L"Animation and Game Art ";
			this->radioButton24->UseVisualStyleBackColor = true;
			// 
			// rdTechnology
			// 
			this->rdTechnology->AutoSize = true;
			this->rdTechnology->Location = System::Drawing::Point(12, 11);
			this->rdTechnology->Name = L"rdTechnology";
			this->rdTechnology->Size = System::Drawing::Size(81, 17);
			this->rdTechnology->TabIndex = 3;
			this->rdTechnology->TabStop = true;
			this->rdTechnology->Text = L"Technology";
			this->rdTechnology->UseVisualStyleBackColor = true;
			this->rdTechnology->CheckedChanged += gcnew System::EventHandler(this, &DegreeSelect::rdTechnology_CheckedChanged);
			// 
			// rbEngineering
			// 
			this->rbEngineering->AutoSize = true;
			this->rbEngineering->Location = System::Drawing::Point(258, 11);
			this->rbEngineering->Name = L"rbEngineering";
			this->rbEngineering->Size = System::Drawing::Size(81, 17);
			this->rbEngineering->TabIndex = 4;
			this->rbEngineering->TabStop = true;
			this->rbEngineering->Text = L"Engineering";
			this->rbEngineering->UseVisualStyleBackColor = true;
			this->rbEngineering->CheckedChanged += gcnew System::EventHandler(this, &DegreeSelect::rbEngineering_CheckedChanged);
			// 
			// rbMAGIC
			// 
			this->rbMAGIC->AutoSize = true;
			this->rbMAGIC->Location = System::Drawing::Point(515, 11);
			this->rbMAGIC->Name = L"rbMAGIC";
			this->rbMAGIC->Size = System::Drawing::Size(59, 17);
			this->rbMAGIC->TabIndex = 5;
			this->rbMAGIC->TabStop = true;
			this->rbMAGIC->Text = L"MAGIC";
			this->rbMAGIC->UseVisualStyleBackColor = true;
			this->rbMAGIC->CheckedChanged += gcnew System::EventHandler(this, &DegreeSelect::rbMAGIC_CheckedChanged);
			// 
			// btnNext
			// 
			this->btnNext->Location = System::Drawing::Point(657, 358);
			this->btnNext->Name = L"btnNext";
			this->btnNext->Size = System::Drawing::Size(83, 23);
			this->btnNext->TabIndex = 6;
			this->btnNext->Text = L"Next";
			this->btnNext->UseVisualStyleBackColor = true;
			this->btnNext->Click += gcnew System::EventHandler(this, &DegreeSelect::btnNext_Click);
			// 
			// btnBack
			// 
			this->btnBack->Location = System::Drawing::Point(10, 359);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(83, 23);
			this->btnBack->TabIndex = 7;
			this->btnBack->Text = L"Back";
			this->btnBack->UseVisualStyleBackColor = true;
			// 
			// DegreeSelect
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(752, 393);
			this->Controls->Add(this->btnBack);
			this->Controls->Add(this->gbEngineering);
			this->Controls->Add(this->btnNext);
			this->Controls->Add(this->rbMAGIC);
			this->Controls->Add(this->rbEngineering);
			this->Controls->Add(this->rdTechnology);
			this->Controls->Add(this->gbMAGIC);
			this->Controls->Add(this->gbTechnology);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"DegreeSelect";
			this->Text = L"EnTec Advisor Apointments";
			this->gbEngineering->ResumeLayout(false);
			this->gbEngineering->PerformLayout();
			this->gbTechnology->ResumeLayout(false);
			this->gbTechnology->PerformLayout();
			this->gbMAGIC->ResumeLayout(false);
			this->gbMAGIC->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnNext_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void radioButton6_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}


//Degree Type Radial Button Behavior
private: System::Void rbEngineering_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (this->gbEngineering->Enabled)
		this->gbEngineering->Enabled = false;
	else
		this->gbEngineering->Enabled = true;
}
private: System::Void rdTechnology_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (this->gbTechnology->Enabled)
		this->gbTechnology->Enabled = false;
	else
		this->gbTechnology->Enabled = true;
}
private: System::Void rbMAGIC_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (this->gbMAGIC->Enabled)
		this->gbMAGIC->Enabled = false;
	else
		this->gbMAGIC->Enabled = true;
}
};
}
