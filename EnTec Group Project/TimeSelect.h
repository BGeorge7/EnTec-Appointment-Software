#pragma once
#include "FinalizeScreen.h"
#include "Student.h"
#include <stdlib.h> 
//TODO Fill the empty space or redesign this
namespace EnTec_Group_Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TimeSelect
	/// </summary>
	public ref class TimeSelect : public System::Windows::Forms::Form
	{
	private: Student *student;
	private: Form^ previous;
	private: System::Windows::Forms::GroupBox^  gb30;
	private: System::Windows::Forms::RadioButton^  radioButton18;
	private: System::Windows::Forms::RadioButton^  radioButton17;
	private: System::Windows::Forms::RadioButton^  radioButton16;
	private: System::Windows::Forms::RadioButton^  radioButton15;
	private: System::Windows::Forms::RadioButton^  radioButton14;
	private: System::Windows::Forms::RadioButton^  radioButton13;
	private: System::Windows::Forms::RadioButton^  radioButton12;
	private: System::Windows::Forms::RadioButton^  radioButton11;
	private: System::Windows::Forms::RadioButton^  radioButton10;
	private: System::Windows::Forms::RadioButton^  radioButton9;
	private: System::Windows::Forms::RadioButton^  radioButton8;
	private: System::Windows::Forms::RadioButton^  radioButton7;
	private: System::Windows::Forms::RadioButton^  radioButton6;
	private: System::Windows::Forms::RadioButton^  radioButton5;
	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::GroupBox^  gb15;
	private: System::Windows::Forms::RadioButton^  radioButton53;
	private: System::Windows::Forms::RadioButton^  radioButton52;
	private: System::Windows::Forms::RadioButton^  radioButton51;
	private: System::Windows::Forms::RadioButton^  radioButton50;
	private: System::Windows::Forms::RadioButton^  radioButton49;
	private: System::Windows::Forms::RadioButton^  radioButton48;
	private: System::Windows::Forms::RadioButton^  radioButton47;
	private: System::Windows::Forms::RadioButton^  radioButton46;
	private: System::Windows::Forms::RadioButton^  radioButton45;
	private: System::Windows::Forms::RadioButton^  radioButton44;
	private: System::Windows::Forms::RadioButton^  radioButton43;
	private: System::Windows::Forms::RadioButton^  radioButton42;
	private: System::Windows::Forms::RadioButton^  radioButton41;
	private: System::Windows::Forms::RadioButton^  radioButton40;
	private: System::Windows::Forms::RadioButton^  radioButton39;
	private: System::Windows::Forms::RadioButton^  radioButton38;
	private: System::Windows::Forms::RadioButton^  radioButton37;
	private: System::Windows::Forms::RadioButton^  radioButton19;
	private: System::Windows::Forms::RadioButton^  radioButton20;
	private: System::Windows::Forms::RadioButton^  radioButton21;
	private: System::Windows::Forms::RadioButton^  radioButton22;
	private: System::Windows::Forms::RadioButton^  radioButton23;
	private: System::Windows::Forms::RadioButton^  radioButton24;
	private: System::Windows::Forms::RadioButton^  radioButton25;
	private: System::Windows::Forms::RadioButton^  radioButton26;
	private: System::Windows::Forms::RadioButton^  radioButton27;
	private: System::Windows::Forms::RadioButton^  radioButton28;
	private: System::Windows::Forms::RadioButton^  radioButton29;
	private: System::Windows::Forms::RadioButton^  radioButton30;
	private: System::Windows::Forms::RadioButton^  radioButton31;
	private: System::Windows::Forms::RadioButton^  radioButton32;
	private: System::Windows::Forms::RadioButton^  radioButton33;
	private: System::Windows::Forms::RadioButton^  radioButton34;
	private: System::Windows::Forms::RadioButton^  radioButton35;
	private: System::Windows::Forms::RadioButton^  radioButton36;



	private: FinalizeScreen^ finalizeForm;
	public:
		TimeSelect(Form^ previous, Student *student)
		{
			this->student = student;
			this->previous = previous;

			InitializeComponent();
		}
		TimeSelect(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~TimeSelect()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^  lbAdvisorList;
	protected:
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker;
	private: System::Windows::Forms::Label^  lbTitle;


	private: System::Windows::Forms::Button^  btnNext;
	private: System::Windows::Forms::Button^  btnBack;
	private: System::Windows::Forms::ComboBox^  cbReason;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(TimeSelect::typeid));
			this->lbAdvisorList = (gcnew System::Windows::Forms::ListBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->dateTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->lbTitle = (gcnew System::Windows::Forms::Label());
			this->btnNext = (gcnew System::Windows::Forms::Button());
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->cbReason = (gcnew System::Windows::Forms::ComboBox());
			this->gb30 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton18 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton17 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton16 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton15 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton14 = (gcnew System::Windows::Forms::RadioButton());
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
			this->gb15 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton53 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton52 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton51 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton50 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton49 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton48 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton47 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton46 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton45 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton44 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton43 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton42 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton41 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton40 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton39 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton38 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton37 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton19 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton20 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton21 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton22 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton23 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton24 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton25 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton26 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton27 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton28 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton29 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton30 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton31 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton32 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton33 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton34 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton35 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton36 = (gcnew System::Windows::Forms::RadioButton());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->gb30->SuspendLayout();
			this->gb15->SuspendLayout();
			this->SuspendLayout();
			// 
			// lbAdvisorList
			// 
			this->lbAdvisorList->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)));
			this->lbAdvisorList->FormattingEnabled = true;
			this->lbAdvisorList->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"Advisor 1 -(305) - 555 - 5555", L"Advisor 2 -(305) - 555 - 5555",
					L"Advisor 3 -(305) - 555 - 5555"
			});
			this->lbAdvisorList->Location = System::Drawing::Point(64, 115);
			this->lbAdvisorList->Name = L"lbAdvisorList";
			this->lbAdvisorList->Size = System::Drawing::Size(191, 225);
			this->lbAdvisorList->TabIndex = 0;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(5, 5);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(598, 82);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// dateTimePicker
			// 
			this->dateTimePicker->Location = System::Drawing::Point(477, 116);
			this->dateTimePicker->MaxDate = System::DateTime(2100, 12, 31, 0, 0, 0, 0);
			this->dateTimePicker->MinDate = System::DateTime(1970, 12, 31, 0, 0, 0, 0);
			this->dateTimePicker->Name = L"dateTimePicker";
			this->dateTimePicker->Size = System::Drawing::Size(212, 20);
			this->dateTimePicker->TabIndex = 2;
			this->dateTimePicker->Value = System::DateTime(2016, 12, 8, 19, 14, 45, 0);
			// 
			// lbTitle
			// 
			this->lbTitle->AutoSize = true;
			this->lbTitle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(116)), static_cast<System::Int32>(static_cast<System::Byte>(175)),
				static_cast<System::Int32>(static_cast<System::Byte>(173)));
			this->lbTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbTitle->Location = System::Drawing::Point(110, 88);
			this->lbTitle->Name = L"lbTitle";
			this->lbTitle->Size = System::Drawing::Size(536, 16);
			this->lbTitle->TabIndex = 3;
			this->lbTitle->Text = L"Please Select an Advisor, Then Select a Date and Time. When You Are Done Press Ne"
				L"xt";
			// 
			// btnNext
			// 
			this->btnNext->Location = System::Drawing::Point(659, 360);
			this->btnNext->Name = L"btnNext";
			this->btnNext->Size = System::Drawing::Size(83, 23);
			this->btnNext->TabIndex = 4;
			this->btnNext->Text = L"Next";
			this->btnNext->UseVisualStyleBackColor = true;
			this->btnNext->Click += gcnew System::EventHandler(this, &TimeSelect::btnNext_Click);
			// 
			// btnBack
			// 
			this->btnBack->Location = System::Drawing::Point(10, 360);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(83, 23);
			this->btnBack->TabIndex = 5;
			this->btnBack->Text = L"Back";
			this->btnBack->UseVisualStyleBackColor = true;
			this->btnBack->Click += gcnew System::EventHandler(this, &TimeSelect::btnBack_Click);
			// 
			// cbReason
			// 
			this->cbReason->FormattingEnabled = true;
			this->cbReason->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Registration", L"MAP", L"IEP", L"Career Planning",
					L"SAP"
			});
			this->cbReason->Location = System::Drawing::Point(260, 115);
			this->cbReason->Name = L"cbReason";
			this->cbReason->Size = System::Drawing::Size(212, 21);
			this->cbReason->TabIndex = 6;
			this->cbReason->SelectedIndexChanged += gcnew System::EventHandler(this, &TimeSelect::comboBox1_SelectedIndexChanged);
			this->cbReason->TextChanged += gcnew System::EventHandler(this, &TimeSelect::cbReason_TextChanged);
			this->cbReason->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &TimeSelect::cbReason_KeyPress);
			// 
			// gb30
			// 
			this->gb30->Controls->Add(this->radioButton18);
			this->gb30->Controls->Add(this->radioButton17);
			this->gb30->Controls->Add(this->radioButton16);
			this->gb30->Controls->Add(this->radioButton15);
			this->gb30->Controls->Add(this->radioButton14);
			this->gb30->Controls->Add(this->radioButton13);
			this->gb30->Controls->Add(this->radioButton12);
			this->gb30->Controls->Add(this->radioButton11);
			this->gb30->Controls->Add(this->radioButton10);
			this->gb30->Controls->Add(this->radioButton9);
			this->gb30->Controls->Add(this->radioButton8);
			this->gb30->Controls->Add(this->radioButton7);
			this->gb30->Controls->Add(this->radioButton6);
			this->gb30->Controls->Add(this->radioButton5);
			this->gb30->Controls->Add(this->radioButton4);
			this->gb30->Controls->Add(this->radioButton3);
			this->gb30->Controls->Add(this->radioButton2);
			this->gb30->Controls->Add(this->radioButton1);
			this->gb30->Enabled = false;
			this->gb30->Location = System::Drawing::Point(261, 142);
			this->gb30->Name = L"gb30";
			this->gb30->Size = System::Drawing::Size(428, 198);
			this->gb30->TabIndex = 8;
			this->gb30->TabStop = false;
			this->gb30->Visible = false;
			// 
			// radioButton18
			// 
			this->radioButton18->AutoSize = true;
			this->radioButton18->Location = System::Drawing::Point(151, 88);
			this->radioButton18->Name = L"radioButton18";
			this->radioButton18->Size = System::Drawing::Size(63, 17);
			this->radioButton18->TabIndex = 17;
			this->radioButton18->TabStop = true;
			this->radioButton18->Text = L"4:30 pm";
			this->radioButton18->UseVisualStyleBackColor = true;
			// 
			// radioButton17
			// 
			this->radioButton17->AutoSize = true;
			this->radioButton17->Location = System::Drawing::Point(82, 88);
			this->radioButton17->Name = L"radioButton17";
			this->radioButton17->Size = System::Drawing::Size(63, 17);
			this->radioButton17->TabIndex = 16;
			this->radioButton17->TabStop = true;
			this->radioButton17->Text = L"4:00 pm";
			this->radioButton17->UseVisualStyleBackColor = true;
			// 
			// radioButton16
			// 
			this->radioButton16->AutoSize = true;
			this->radioButton16->Location = System::Drawing::Point(13, 88);
			this->radioButton16->Name = L"radioButton16";
			this->radioButton16->Size = System::Drawing::Size(63, 17);
			this->radioButton16->TabIndex = 15;
			this->radioButton16->TabStop = true;
			this->radioButton16->Text = L"3:30 pm";
			this->radioButton16->UseVisualStyleBackColor = true;
			// 
			// radioButton15
			// 
			this->radioButton15->AutoSize = true;
			this->radioButton15->Location = System::Drawing::Point(289, 65);
			this->radioButton15->Name = L"radioButton15";
			this->radioButton15->Size = System::Drawing::Size(63, 17);
			this->radioButton15->TabIndex = 14;
			this->radioButton15->TabStop = true;
			this->radioButton15->Text = L"3:00 pm";
			this->radioButton15->UseVisualStyleBackColor = true;
			// 
			// radioButton14
			// 
			this->radioButton14->AutoSize = true;
			this->radioButton14->Location = System::Drawing::Point(220, 65);
			this->radioButton14->Name = L"radioButton14";
			this->radioButton14->Size = System::Drawing::Size(63, 17);
			this->radioButton14->TabIndex = 13;
			this->radioButton14->TabStop = true;
			this->radioButton14->Text = L"2:30 pm";
			this->radioButton14->UseVisualStyleBackColor = true;
			// 
			// radioButton13
			// 
			this->radioButton13->AutoSize = true;
			this->radioButton13->Location = System::Drawing::Point(151, 65);
			this->radioButton13->Name = L"radioButton13";
			this->radioButton13->Size = System::Drawing::Size(63, 17);
			this->radioButton13->TabIndex = 12;
			this->radioButton13->TabStop = true;
			this->radioButton13->Text = L"2:00 pm";
			this->radioButton13->UseVisualStyleBackColor = true;
			// 
			// radioButton12
			// 
			this->radioButton12->AutoSize = true;
			this->radioButton12->Location = System::Drawing::Point(82, 65);
			this->radioButton12->Name = L"radioButton12";
			this->radioButton12->Size = System::Drawing::Size(63, 17);
			this->radioButton12->TabIndex = 11;
			this->radioButton12->TabStop = true;
			this->radioButton12->Text = L"1:30 pm";
			this->radioButton12->UseVisualStyleBackColor = true;
			// 
			// radioButton11
			// 
			this->radioButton11->AutoSize = true;
			this->radioButton11->Location = System::Drawing::Point(13, 65);
			this->radioButton11->Name = L"radioButton11";
			this->radioButton11->Size = System::Drawing::Size(63, 17);
			this->radioButton11->TabIndex = 10;
			this->radioButton11->TabStop = true;
			this->radioButton11->Text = L"1:00 pm";
			this->radioButton11->UseVisualStyleBackColor = true;
			// 
			// radioButton10
			// 
			this->radioButton10->AutoSize = true;
			this->radioButton10->Location = System::Drawing::Point(289, 42);
			this->radioButton10->Name = L"radioButton10";
			this->radioButton10->Size = System::Drawing::Size(69, 17);
			this->radioButton10->TabIndex = 9;
			this->radioButton10->TabStop = true;
			this->radioButton10->Text = L"12:30 pm";
			this->radioButton10->UseVisualStyleBackColor = true;
			// 
			// radioButton9
			// 
			this->radioButton9->AutoSize = true;
			this->radioButton9->Location = System::Drawing::Point(220, 42);
			this->radioButton9->Name = L"radioButton9";
			this->radioButton9->Size = System::Drawing::Size(69, 17);
			this->radioButton9->TabIndex = 8;
			this->radioButton9->TabStop = true;
			this->radioButton9->Text = L"12:00 pm";
			this->radioButton9->UseVisualStyleBackColor = true;
			// 
			// radioButton8
			// 
			this->radioButton8->AutoSize = true;
			this->radioButton8->Location = System::Drawing::Point(151, 42);
			this->radioButton8->Name = L"radioButton8";
			this->radioButton8->Size = System::Drawing::Size(69, 17);
			this->radioButton8->TabIndex = 7;
			this->radioButton8->TabStop = true;
			this->radioButton8->Text = L"11:30 am";
			this->radioButton8->UseVisualStyleBackColor = true;
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->Location = System::Drawing::Point(220, 19);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(63, 17);
			this->radioButton7->TabIndex = 6;
			this->radioButton7->TabStop = true;
			this->radioButton7->Text = L"9:30 am";
			this->radioButton7->UseVisualStyleBackColor = true;
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Location = System::Drawing::Point(13, 42);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(69, 17);
			this->radioButton6->TabIndex = 5;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"10:30 am";
			this->radioButton6->UseVisualStyleBackColor = true;
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(82, 42);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(69, 17);
			this->radioButton5->TabIndex = 4;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"11:00 am";
			this->radioButton5->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(151, 19);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(63, 17);
			this->radioButton4->TabIndex = 3;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"9:00 am";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(289, 19);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(69, 17);
			this->radioButton3->TabIndex = 2;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"10:00 am";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(82, 19);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(63, 17);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"8:30 am";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(13, 19);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(63, 17);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"8:00 am";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// gb15
			// 
			this->gb15->Controls->Add(this->radioButton53);
			this->gb15->Controls->Add(this->radioButton52);
			this->gb15->Controls->Add(this->radioButton51);
			this->gb15->Controls->Add(this->radioButton50);
			this->gb15->Controls->Add(this->radioButton49);
			this->gb15->Controls->Add(this->radioButton48);
			this->gb15->Controls->Add(this->radioButton47);
			this->gb15->Controls->Add(this->radioButton46);
			this->gb15->Controls->Add(this->radioButton45);
			this->gb15->Controls->Add(this->radioButton44);
			this->gb15->Controls->Add(this->radioButton43);
			this->gb15->Controls->Add(this->radioButton42);
			this->gb15->Controls->Add(this->radioButton41);
			this->gb15->Controls->Add(this->radioButton40);
			this->gb15->Controls->Add(this->radioButton39);
			this->gb15->Controls->Add(this->radioButton38);
			this->gb15->Controls->Add(this->radioButton37);
			this->gb15->Controls->Add(this->radioButton19);
			this->gb15->Controls->Add(this->radioButton20);
			this->gb15->Controls->Add(this->radioButton21);
			this->gb15->Controls->Add(this->radioButton22);
			this->gb15->Controls->Add(this->radioButton23);
			this->gb15->Controls->Add(this->radioButton24);
			this->gb15->Controls->Add(this->radioButton25);
			this->gb15->Controls->Add(this->radioButton26);
			this->gb15->Controls->Add(this->radioButton27);
			this->gb15->Controls->Add(this->radioButton28);
			this->gb15->Controls->Add(this->radioButton29);
			this->gb15->Controls->Add(this->radioButton30);
			this->gb15->Controls->Add(this->radioButton31);
			this->gb15->Controls->Add(this->radioButton32);
			this->gb15->Controls->Add(this->radioButton33);
			this->gb15->Controls->Add(this->radioButton34);
			this->gb15->Controls->Add(this->radioButton35);
			this->gb15->Controls->Add(this->radioButton36);
			this->gb15->Enabled = false;
			this->gb15->Location = System::Drawing::Point(261, 142);
			this->gb15->Name = L"gb15";
			this->gb15->Size = System::Drawing::Size(428, 198);
			this->gb15->TabIndex = 9;
			this->gb15->TabStop = false;
			this->gb15->Visible = false;
			// 
			// radioButton53
			// 
			this->radioButton53->AutoSize = true;
			this->radioButton53->Location = System::Drawing::Point(289, 157);
			this->radioButton53->Name = L"radioButton53";
			this->radioButton53->Size = System::Drawing::Size(63, 17);
			this->radioButton53->TabIndex = 34;
			this->radioButton53->TabStop = true;
			this->radioButton53->Text = L"4:30 pm";
			this->radioButton53->UseVisualStyleBackColor = true;
			// 
			// radioButton52
			// 
			this->radioButton52->AutoSize = true;
			this->radioButton52->Location = System::Drawing::Point(220, 157);
			this->radioButton52->Name = L"radioButton52";
			this->radioButton52->Size = System::Drawing::Size(63, 17);
			this->radioButton52->TabIndex = 33;
			this->radioButton52->TabStop = true;
			this->radioButton52->Text = L"4:15 pm";
			this->radioButton52->UseVisualStyleBackColor = true;
			// 
			// radioButton51
			// 
			this->radioButton51->AutoSize = true;
			this->radioButton51->Location = System::Drawing::Point(151, 157);
			this->radioButton51->Name = L"radioButton51";
			this->radioButton51->Size = System::Drawing::Size(63, 17);
			this->radioButton51->TabIndex = 32;
			this->radioButton51->TabStop = true;
			this->radioButton51->Text = L"4:00 pm";
			this->radioButton51->UseVisualStyleBackColor = true;
			// 
			// radioButton50
			// 
			this->radioButton50->AutoSize = true;
			this->radioButton50->Location = System::Drawing::Point(82, 157);
			this->radioButton50->Name = L"radioButton50";
			this->radioButton50->Size = System::Drawing::Size(63, 17);
			this->radioButton50->TabIndex = 31;
			this->radioButton50->TabStop = true;
			this->radioButton50->Text = L"3:45 pm";
			this->radioButton50->UseVisualStyleBackColor = true;
			// 
			// radioButton49
			// 
			this->radioButton49->AutoSize = true;
			this->radioButton49->Location = System::Drawing::Point(13, 157);
			this->radioButton49->Name = L"radioButton49";
			this->radioButton49->Size = System::Drawing::Size(63, 17);
			this->radioButton49->TabIndex = 30;
			this->radioButton49->TabStop = true;
			this->radioButton49->Text = L"3:30 pm";
			this->radioButton49->UseVisualStyleBackColor = true;
			// 
			// radioButton48
			// 
			this->radioButton48->AutoSize = true;
			this->radioButton48->Location = System::Drawing::Point(289, 134);
			this->radioButton48->Name = L"radioButton48";
			this->radioButton48->Size = System::Drawing::Size(63, 17);
			this->radioButton48->TabIndex = 29;
			this->radioButton48->TabStop = true;
			this->radioButton48->Text = L"3:15 pm";
			this->radioButton48->UseVisualStyleBackColor = true;
			// 
			// radioButton47
			// 
			this->radioButton47->AutoSize = true;
			this->radioButton47->Location = System::Drawing::Point(220, 134);
			this->radioButton47->Name = L"radioButton47";
			this->radioButton47->Size = System::Drawing::Size(63, 17);
			this->radioButton47->TabIndex = 28;
			this->radioButton47->TabStop = true;
			this->radioButton47->Text = L"3:00 pm";
			this->radioButton47->UseVisualStyleBackColor = true;
			// 
			// radioButton46
			// 
			this->radioButton46->AutoSize = true;
			this->radioButton46->Location = System::Drawing::Point(151, 134);
			this->radioButton46->Name = L"radioButton46";
			this->radioButton46->Size = System::Drawing::Size(63, 17);
			this->radioButton46->TabIndex = 27;
			this->radioButton46->TabStop = true;
			this->radioButton46->Text = L"2:45 pm";
			this->radioButton46->UseVisualStyleBackColor = true;
			// 
			// radioButton45
			// 
			this->radioButton45->AutoSize = true;
			this->radioButton45->Location = System::Drawing::Point(82, 134);
			this->radioButton45->Name = L"radioButton45";
			this->radioButton45->Size = System::Drawing::Size(63, 17);
			this->radioButton45->TabIndex = 26;
			this->radioButton45->TabStop = true;
			this->radioButton45->Text = L"2:30 pm";
			this->radioButton45->UseVisualStyleBackColor = true;
			// 
			// radioButton44
			// 
			this->radioButton44->AutoSize = true;
			this->radioButton44->Location = System::Drawing::Point(13, 134);
			this->radioButton44->Name = L"radioButton44";
			this->radioButton44->Size = System::Drawing::Size(63, 17);
			this->radioButton44->TabIndex = 25;
			this->radioButton44->TabStop = true;
			this->radioButton44->Text = L"2:15 pm";
			this->radioButton44->UseVisualStyleBackColor = true;
			// 
			// radioButton43
			// 
			this->radioButton43->AutoSize = true;
			this->radioButton43->Location = System::Drawing::Point(289, 111);
			this->radioButton43->Name = L"radioButton43";
			this->radioButton43->Size = System::Drawing::Size(63, 17);
			this->radioButton43->TabIndex = 24;
			this->radioButton43->TabStop = true;
			this->radioButton43->Text = L"2:00 pm";
			this->radioButton43->UseVisualStyleBackColor = true;
			// 
			// radioButton42
			// 
			this->radioButton42->AutoSize = true;
			this->radioButton42->Location = System::Drawing::Point(220, 111);
			this->radioButton42->Name = L"radioButton42";
			this->radioButton42->Size = System::Drawing::Size(63, 17);
			this->radioButton42->TabIndex = 23;
			this->radioButton42->TabStop = true;
			this->radioButton42->Text = L"1:45 pm";
			this->radioButton42->UseVisualStyleBackColor = true;
			// 
			// radioButton41
			// 
			this->radioButton41->AutoSize = true;
			this->radioButton41->Location = System::Drawing::Point(151, 111);
			this->radioButton41->Name = L"radioButton41";
			this->radioButton41->Size = System::Drawing::Size(63, 17);
			this->radioButton41->TabIndex = 22;
			this->radioButton41->TabStop = true;
			this->radioButton41->Text = L"1:30 pm";
			this->radioButton41->UseVisualStyleBackColor = true;
			// 
			// radioButton40
			// 
			this->radioButton40->AutoSize = true;
			this->radioButton40->Location = System::Drawing::Point(82, 111);
			this->radioButton40->Name = L"radioButton40";
			this->radioButton40->Size = System::Drawing::Size(63, 17);
			this->radioButton40->TabIndex = 21;
			this->radioButton40->TabStop = true;
			this->radioButton40->Text = L"1:15 pm";
			this->radioButton40->UseVisualStyleBackColor = true;
			// 
			// radioButton39
			// 
			this->radioButton39->AutoSize = true;
			this->radioButton39->Location = System::Drawing::Point(13, 111);
			this->radioButton39->Name = L"radioButton39";
			this->radioButton39->Size = System::Drawing::Size(63, 17);
			this->radioButton39->TabIndex = 20;
			this->radioButton39->TabStop = true;
			this->radioButton39->Text = L"1:00 pm";
			this->radioButton39->UseVisualStyleBackColor = true;
			// 
			// radioButton38
			// 
			this->radioButton38->AutoSize = true;
			this->radioButton38->Location = System::Drawing::Point(289, 88);
			this->radioButton38->Name = L"radioButton38";
			this->radioButton38->Size = System::Drawing::Size(69, 17);
			this->radioButton38->TabIndex = 19;
			this->radioButton38->TabStop = true;
			this->radioButton38->Text = L"12:45 pm";
			this->radioButton38->UseVisualStyleBackColor = true;
			// 
			// radioButton37
			// 
			this->radioButton37->AutoSize = true;
			this->radioButton37->Location = System::Drawing::Point(220, 88);
			this->radioButton37->Name = L"radioButton37";
			this->radioButton37->Size = System::Drawing::Size(69, 17);
			this->radioButton37->TabIndex = 18;
			this->radioButton37->TabStop = true;
			this->radioButton37->Text = L"12:30 pm";
			this->radioButton37->UseVisualStyleBackColor = true;
			// 
			// radioButton19
			// 
			this->radioButton19->AutoSize = true;
			this->radioButton19->Location = System::Drawing::Point(151, 88);
			this->radioButton19->Name = L"radioButton19";
			this->radioButton19->Size = System::Drawing::Size(69, 17);
			this->radioButton19->TabIndex = 17;
			this->radioButton19->TabStop = true;
			this->radioButton19->Text = L"12:15 pm";
			this->radioButton19->UseVisualStyleBackColor = true;
			// 
			// radioButton20
			// 
			this->radioButton20->AutoSize = true;
			this->radioButton20->Location = System::Drawing::Point(82, 88);
			this->radioButton20->Name = L"radioButton20";
			this->radioButton20->Size = System::Drawing::Size(69, 17);
			this->radioButton20->TabIndex = 16;
			this->radioButton20->TabStop = true;
			this->radioButton20->Text = L"12:00 pm";
			this->radioButton20->UseVisualStyleBackColor = true;
			// 
			// radioButton21
			// 
			this->radioButton21->AutoSize = true;
			this->radioButton21->Location = System::Drawing::Point(13, 88);
			this->radioButton21->Name = L"radioButton21";
			this->radioButton21->Size = System::Drawing::Size(69, 17);
			this->radioButton21->TabIndex = 15;
			this->radioButton21->TabStop = true;
			this->radioButton21->Text = L"11:45 am";
			this->radioButton21->UseVisualStyleBackColor = true;
			// 
			// radioButton22
			// 
			this->radioButton22->AutoSize = true;
			this->radioButton22->Location = System::Drawing::Point(289, 65);
			this->radioButton22->Name = L"radioButton22";
			this->radioButton22->Size = System::Drawing::Size(69, 17);
			this->radioButton22->TabIndex = 14;
			this->radioButton22->TabStop = true;
			this->radioButton22->Text = L"11:30 am";
			this->radioButton22->UseVisualStyleBackColor = true;
			// 
			// radioButton23
			// 
			this->radioButton23->AutoSize = true;
			this->radioButton23->Location = System::Drawing::Point(220, 65);
			this->radioButton23->Name = L"radioButton23";
			this->radioButton23->Size = System::Drawing::Size(69, 17);
			this->radioButton23->TabIndex = 13;
			this->radioButton23->TabStop = true;
			this->radioButton23->Text = L"11:15 am";
			this->radioButton23->UseVisualStyleBackColor = true;
			// 
			// radioButton24
			// 
			this->radioButton24->AutoSize = true;
			this->radioButton24->Location = System::Drawing::Point(151, 65);
			this->radioButton24->Name = L"radioButton24";
			this->radioButton24->Size = System::Drawing::Size(69, 17);
			this->radioButton24->TabIndex = 12;
			this->radioButton24->TabStop = true;
			this->radioButton24->Text = L"11:00 am";
			this->radioButton24->UseVisualStyleBackColor = true;
			// 
			// radioButton25
			// 
			this->radioButton25->AutoSize = true;
			this->radioButton25->Location = System::Drawing::Point(82, 65);
			this->radioButton25->Name = L"radioButton25";
			this->radioButton25->Size = System::Drawing::Size(69, 17);
			this->radioButton25->TabIndex = 11;
			this->radioButton25->TabStop = true;
			this->radioButton25->Text = L"10:45 am";
			this->radioButton25->UseVisualStyleBackColor = true;
			// 
			// radioButton26
			// 
			this->radioButton26->AutoSize = true;
			this->radioButton26->Location = System::Drawing::Point(13, 65);
			this->radioButton26->Name = L"radioButton26";
			this->radioButton26->Size = System::Drawing::Size(69, 17);
			this->radioButton26->TabIndex = 10;
			this->radioButton26->TabStop = true;
			this->radioButton26->Text = L"10:30 am";
			this->radioButton26->UseVisualStyleBackColor = true;
			// 
			// radioButton27
			// 
			this->radioButton27->AutoSize = true;
			this->radioButton27->Location = System::Drawing::Point(289, 42);
			this->radioButton27->Name = L"radioButton27";
			this->radioButton27->Size = System::Drawing::Size(69, 17);
			this->radioButton27->TabIndex = 9;
			this->radioButton27->TabStop = true;
			this->radioButton27->Text = L"10:15 am";
			this->radioButton27->UseVisualStyleBackColor = true;
			// 
			// radioButton28
			// 
			this->radioButton28->AutoSize = true;
			this->radioButton28->Location = System::Drawing::Point(220, 42);
			this->radioButton28->Name = L"radioButton28";
			this->radioButton28->Size = System::Drawing::Size(69, 17);
			this->radioButton28->TabIndex = 8;
			this->radioButton28->TabStop = true;
			this->radioButton28->Text = L"10:00 am";
			this->radioButton28->UseVisualStyleBackColor = true;
			// 
			// radioButton29
			// 
			this->radioButton29->AutoSize = true;
			this->radioButton29->Location = System::Drawing::Point(151, 42);
			this->radioButton29->Name = L"radioButton29";
			this->radioButton29->Size = System::Drawing::Size(63, 17);
			this->radioButton29->TabIndex = 7;
			this->radioButton29->TabStop = true;
			this->radioButton29->Text = L"9:45 am";
			this->radioButton29->UseVisualStyleBackColor = true;
			// 
			// radioButton30
			// 
			this->radioButton30->AutoSize = true;
			this->radioButton30->Location = System::Drawing::Point(220, 19);
			this->radioButton30->Name = L"radioButton30";
			this->radioButton30->Size = System::Drawing::Size(63, 17);
			this->radioButton30->TabIndex = 6;
			this->radioButton30->TabStop = true;
			this->radioButton30->Text = L"8:45 am";
			this->radioButton30->UseVisualStyleBackColor = true;
			// 
			// radioButton31
			// 
			this->radioButton31->AutoSize = true;
			this->radioButton31->Location = System::Drawing::Point(13, 42);
			this->radioButton31->Name = L"radioButton31";
			this->radioButton31->Size = System::Drawing::Size(63, 17);
			this->radioButton31->TabIndex = 5;
			this->radioButton31->TabStop = true;
			this->radioButton31->Text = L"9:15 am";
			this->radioButton31->UseVisualStyleBackColor = true;
			// 
			// radioButton32
			// 
			this->radioButton32->AutoSize = true;
			this->radioButton32->Location = System::Drawing::Point(82, 42);
			this->radioButton32->Name = L"radioButton32";
			this->radioButton32->Size = System::Drawing::Size(63, 17);
			this->radioButton32->TabIndex = 4;
			this->radioButton32->TabStop = true;
			this->radioButton32->Text = L"9:30 am";
			this->radioButton32->UseVisualStyleBackColor = true;
			// 
			// radioButton33
			// 
			this->radioButton33->AutoSize = true;
			this->radioButton33->Location = System::Drawing::Point(151, 19);
			this->radioButton33->Name = L"radioButton33";
			this->radioButton33->Size = System::Drawing::Size(63, 17);
			this->radioButton33->TabIndex = 3;
			this->radioButton33->TabStop = true;
			this->radioButton33->Text = L"8:30 am";
			this->radioButton33->UseVisualStyleBackColor = true;
			// 
			// radioButton34
			// 
			this->radioButton34->AutoSize = true;
			this->radioButton34->Location = System::Drawing::Point(289, 19);
			this->radioButton34->Name = L"radioButton34";
			this->radioButton34->Size = System::Drawing::Size(63, 17);
			this->radioButton34->TabIndex = 2;
			this->radioButton34->TabStop = true;
			this->radioButton34->Text = L"9:00 am";
			this->radioButton34->UseVisualStyleBackColor = true;
			// 
			// radioButton35
			// 
			this->radioButton35->AutoSize = true;
			this->radioButton35->Location = System::Drawing::Point(82, 19);
			this->radioButton35->Name = L"radioButton35";
			this->radioButton35->Size = System::Drawing::Size(63, 17);
			this->radioButton35->TabIndex = 1;
			this->radioButton35->TabStop = true;
			this->radioButton35->Text = L"8:15 am";
			this->radioButton35->UseVisualStyleBackColor = true;
			// 
			// radioButton36
			// 
			this->radioButton36->AutoSize = true;
			this->radioButton36->Location = System::Drawing::Point(13, 19);
			this->radioButton36->Name = L"radioButton36";
			this->radioButton36->Size = System::Drawing::Size(63, 17);
			this->radioButton36->TabIndex = 0;
			this->radioButton36->TabStop = true;
			this->radioButton36->Text = L"8:00 am";
			this->radioButton36->UseVisualStyleBackColor = true;
			// 
			// TimeSelect
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(137)));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(752, 393);
			this->Controls->Add(this->cbReason);
			this->Controls->Add(this->btnBack);
			this->Controls->Add(this->btnNext);
			this->Controls->Add(this->lbTitle);
			this->Controls->Add(this->dateTimePicker);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->lbAdvisorList);
			this->Controls->Add(this->gb30);
			this->Controls->Add(this->gb15);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"TimeSelect";
			this->Text = L"EnTec Advisor Apointments";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &TimeSelect::TimeSelect_FormClosed);
			this->Load += gcnew System::EventHandler(this, &TimeSelect::TimeSelect_Load);
			this->VisibleChanged += gcnew System::EventHandler(this, &TimeSelect::TimeSelect_VisibleChanged);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->gb30->ResumeLayout(false);
			this->gb30->PerformLayout();
			this->gb15->ResumeLayout(false);
			this->gb15->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void btnBack_Click(System::Object^  sender, System::EventArgs^  e) {

	this->Hide();
	this->previous->Show();

}
private: System::Void btnNext_Click(System::Object^  sender, System::EventArgs^  e) {
	if (lbAdvisorList->Text->IsNullOrWhiteSpace(lbAdvisorList->Text) || cbReason->Text->IsNullOrWhiteSpace(cbReason->Text))
	{
		MessageBox::Show("Whoops Looks like You left something empty!", "Error",
			MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
	else
	{
		student->setAdvisor(lbAdvisorList->Text);
		student->setAppReason(cbReason->Text);
		student->setAppDate(dateTimePicker->Text);
		//TODO: Time Selector
		//student->setAppTime(Something);
		this->Hide();
		this->finalizeForm->ShowDialog();
	}

}
private: System::Void TimeSelect_Load(System::Object^  sender, System::EventArgs^  e) {
	finalizeForm = gcnew FinalizeScreen(this, student);
}
private: System::Void TimeSelect_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
	delete student;
	student = nullptr;
	exit(0);
}
private: System::Void TimeSelect_VisibleChanged(System::Object^  sender, System::EventArgs^  e) {
	lbAdvisorList->Items->Clear();
	if (student->getDegreeType() == "Technology")
	{
		lbAdvisorList->Items->Add("Barake, Maria, mrodrig4@mdc.edu");
		lbAdvisorList->Items->Add("Telfort, Roseline, rtelfort@mdc.edu");
	}
	else if (student->getDegreeType() == "Engineering")
	{
		lbAdvisorList->Items->Add("Moscoso, Federico, fmoscoso@mdc.edu");
		lbAdvisorList->Items->Add("Ramirez, Janet, jramir1@mdc.edu");
	}
	else if (student->getDegreeType() == "MAGIC")
	{
		lbAdvisorList->Items->Add("Auguste, Mylinda, mauguste@mdc.edu");
	}
}
private: System::Void cbReason_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	e->KeyChar = (char)0;
}
private: System::Void cbReason_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if (cbReason->Text == "IEP" || cbReason->Text == "Registration" || cbReason->Text == "Career Planning")
	{
		gb15->Enabled = false;
		gb15->Visible = false;
		gb30->Enabled = true;
		gb30->Visible = true;
	}
	else
	{
		gb30->Enabled = false;
		gb30->Visible = false;
		gb15->Enabled = true;
		gb15->Visible = true;
	}

}
};
}
