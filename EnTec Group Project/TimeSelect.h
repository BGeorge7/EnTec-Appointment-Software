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
	private: System::Windows::Forms::RadioButton^  rb3018;
	private: System::Windows::Forms::RadioButton^  rb3017;
	private: System::Windows::Forms::RadioButton^  rb3016;
	private: System::Windows::Forms::RadioButton^  rb3015;
	private: System::Windows::Forms::RadioButton^  rb3014;
	private: System::Windows::Forms::RadioButton^  rb3013;
	private: System::Windows::Forms::RadioButton^  rb3012;
	private: System::Windows::Forms::RadioButton^  rb3011;
	private: System::Windows::Forms::RadioButton^  rb3010;
	private: System::Windows::Forms::RadioButton^  rb309;
	private: System::Windows::Forms::RadioButton^  rb308;
	private: System::Windows::Forms::RadioButton^  rb304;
	private: System::Windows::Forms::RadioButton^  rb306;
	private: System::Windows::Forms::RadioButton^  rb307;
	private: System::Windows::Forms::RadioButton^  rb303;
	private: System::Windows::Forms::RadioButton^  rb305;
	private: System::Windows::Forms::RadioButton^  rb302;
	private: System::Windows::Forms::RadioButton^  rb301;

	private: System::Windows::Forms::GroupBox^  gb15;
	private: System::Windows::Forms::RadioButton^  rb1535;
	private: System::Windows::Forms::RadioButton^  rb1534;
	private: System::Windows::Forms::RadioButton^  rb1533;
	private: System::Windows::Forms::RadioButton^  rb1532;
	private: System::Windows::Forms::RadioButton^  rb1531;
	private: System::Windows::Forms::RadioButton^  rb1530;
	private: System::Windows::Forms::RadioButton^  rb1529;
	private: System::Windows::Forms::RadioButton^  rb1528;
	private: System::Windows::Forms::RadioButton^  rb1527;
	private: System::Windows::Forms::RadioButton^  rb1526;
	private: System::Windows::Forms::RadioButton^  rb1525;
	private: System::Windows::Forms::RadioButton^  rb1524;
	private: System::Windows::Forms::RadioButton^  rb1523;
	private: System::Windows::Forms::RadioButton^  rb1522;
	private: System::Windows::Forms::RadioButton^  rb1521;
	private: System::Windows::Forms::RadioButton^  rb1520;
	private: System::Windows::Forms::RadioButton^  rb1519;
	private: System::Windows::Forms::RadioButton^  rb1518;
	private: System::Windows::Forms::RadioButton^  rb1517;
	private: System::Windows::Forms::RadioButton^  rb1516;
	private: System::Windows::Forms::RadioButton^  rb1515;
	private: System::Windows::Forms::RadioButton^  rb1514;
	private: System::Windows::Forms::RadioButton^  rb1513;
	private: System::Windows::Forms::RadioButton^  rb1512;
	private: System::Windows::Forms::RadioButton^  rb1511;
	private: System::Windows::Forms::RadioButton^  rb1510;
	private: System::Windows::Forms::RadioButton^  rb159;
	private: System::Windows::Forms::RadioButton^  rb158;
	private: System::Windows::Forms::RadioButton^  rb154;
	private: System::Windows::Forms::RadioButton^  rb156;
	private: System::Windows::Forms::RadioButton^  rb157;
	private: System::Windows::Forms::RadioButton^  rb153;
	private: System::Windows::Forms::RadioButton^  rb155;
	private: System::Windows::Forms::RadioButton^  rb152;
	private: System::Windows::Forms::RadioButton^  rb151;

	private: FinalizeScreen^ finalizeForm;

	private: bool isTimeSelected()
	{
		if (gb15->Enabled == false && gb30->Enabled == false)
			return false;
		else
		{
			if (gb15->Enabled)
			{
				if (rb151->Checked)
					student->setAppTime(rb151->Text);
				else if (rb152->Checked)
					student->setAppTime(rb152->Text);
				else if (rb153->Checked)
					student->setAppTime(rb153->Text);
				else if (rb154->Checked)
					student->setAppTime(rb154->Text);
				else if (rb155->Checked)
					student->setAppTime(rb155->Text);
				else if (rb156->Checked)
					student->setAppTime(rb156->Text);
				else if (rb157->Checked)
					student->setAppTime(rb157->Text);
				else if (rb158->Checked)
					student->setAppTime(rb158->Text);
				else if (rb159->Checked)
					student->setAppTime(rb159->Text);
				else if (rb1510->Checked)
					student->setAppTime(rb1510->Text);
				else if (rb1511->Checked)
					student->setAppTime(rb1511->Text);
				else if (rb1512->Checked)
					student->setAppTime(rb1512->Text);
				else if (rb1513->Checked)
					student->setAppTime(rb1513->Text);
				else if (rb1514->Checked)
					student->setAppTime(rb1514->Text);
				else if (rb1515->Checked)
					student->setAppTime(rb1515->Text);
				else if (rb1516->Checked)
					student->setAppTime(rb1516->Text);
				else if (rb1517->Checked)
					student->setAppTime(rb1517->Text);
				else if (rb1518->Checked)
					student->setAppTime(rb1518->Text);
				else if (rb1519->Checked)
					student->setAppTime(rb1519->Text);
				else if (rb1520->Checked)
					student->setAppTime(rb1520->Text);
				else if (rb1521->Checked)
					student->setAppTime(rb1521->Text);
				else if (rb1522->Checked)
					student->setAppTime(rb1522->Text);
				else if (rb1523->Checked)
					student->setAppTime(rb1523->Text);
				else if (rb1524->Checked)
					student->setAppTime(rb1524->Text);
				else if (rb1525->Checked)
					student->setAppTime(rb1525->Text);
				else if (rb1526->Checked)
					student->setAppTime(rb1526->Text);
				else if (rb1527->Checked)
					student->setAppTime(rb1527->Text);
				else if (rb1528->Checked)
					student->setAppTime(rb1528->Text);
				else if (rb1529->Checked)
					student->setAppTime(rb1529->Text);
				else if (rb1530->Checked)
					student->setAppTime(rb1530->Text);
				else if (rb1531->Checked)
					student->setAppTime(rb1531->Text);
				else if (rb1532->Checked)
					student->setAppTime(rb1532->Text);
				else if (rb1533->Checked)
					student->setAppTime(rb1533->Text);
				else if (rb1534->Checked)
					student->setAppTime(rb1534->Text);
				else if (rb1535->Checked)
					student->setAppTime(rb1535->Text);
			}
			else if (gb30->Enabled)
			{
				if (rb301->Checked)
					student->setAppTime(rb301->Text);
				else if (rb302->Checked)
					student->setAppTime(rb302->Text);
				else if (rb303->Checked)
					student->setAppTime(rb303->Text);
				else if (rb304->Checked)
					student->setAppTime(rb304->Text);
				else if (rb305->Checked)
					student->setAppTime(rb305->Text);
				else if (rb306->Checked)
					student->setAppTime(rb306->Text);
				else if (rb307->Checked)
					student->setAppTime(rb307->Text);
				else if (rb308->Checked)
					student->setAppTime(rb308->Text);
				else if (rb309->Checked)
					student->setAppTime(rb309->Text);
				else if (rb3010->Checked)
					student->setAppTime(rb3010->Text);
				else if (rb3011->Checked)
					student->setAppTime(rb3011->Text);
				else if (rb3012->Checked)
					student->setAppTime(rb3012->Text);
				else if (rb3013->Checked)
					student->setAppTime(rb3013->Text);
				else if (rb3014->Checked)
					student->setAppTime(rb3014->Text);
				else if (rb3015->Checked)
					student->setAppTime(rb3015->Text);
				else if (rb3016->Checked)
					student->setAppTime(rb3016->Text);
				else if (rb3017->Checked)
					student->setAppTime(rb3017->Text);
				else if (rb3018->Checked)
					student->setAppTime(rb3018->Text);
			}
			if (student->getAppTime() != "")
				return true;
			else
				return false;
		}
	}

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
			this->rb3018 = (gcnew System::Windows::Forms::RadioButton());
			this->rb3017 = (gcnew System::Windows::Forms::RadioButton());
			this->rb3016 = (gcnew System::Windows::Forms::RadioButton());
			this->rb3015 = (gcnew System::Windows::Forms::RadioButton());
			this->rb3014 = (gcnew System::Windows::Forms::RadioButton());
			this->rb3013 = (gcnew System::Windows::Forms::RadioButton());
			this->rb3012 = (gcnew System::Windows::Forms::RadioButton());
			this->rb3011 = (gcnew System::Windows::Forms::RadioButton());
			this->rb3010 = (gcnew System::Windows::Forms::RadioButton());
			this->rb309 = (gcnew System::Windows::Forms::RadioButton());
			this->rb308 = (gcnew System::Windows::Forms::RadioButton());
			this->rb304 = (gcnew System::Windows::Forms::RadioButton());
			this->rb306 = (gcnew System::Windows::Forms::RadioButton());
			this->rb307 = (gcnew System::Windows::Forms::RadioButton());
			this->rb303 = (gcnew System::Windows::Forms::RadioButton());
			this->rb305 = (gcnew System::Windows::Forms::RadioButton());
			this->rb302 = (gcnew System::Windows::Forms::RadioButton());
			this->rb301 = (gcnew System::Windows::Forms::RadioButton());
			this->gb15 = (gcnew System::Windows::Forms::GroupBox());
			this->rb1535 = (gcnew System::Windows::Forms::RadioButton());
			this->rb1534 = (gcnew System::Windows::Forms::RadioButton());
			this->rb1533 = (gcnew System::Windows::Forms::RadioButton());
			this->rb1532 = (gcnew System::Windows::Forms::RadioButton());
			this->rb1531 = (gcnew System::Windows::Forms::RadioButton());
			this->rb1530 = (gcnew System::Windows::Forms::RadioButton());
			this->rb1529 = (gcnew System::Windows::Forms::RadioButton());
			this->rb1528 = (gcnew System::Windows::Forms::RadioButton());
			this->rb1527 = (gcnew System::Windows::Forms::RadioButton());
			this->rb1526 = (gcnew System::Windows::Forms::RadioButton());
			this->rb1525 = (gcnew System::Windows::Forms::RadioButton());
			this->rb1524 = (gcnew System::Windows::Forms::RadioButton());
			this->rb1523 = (gcnew System::Windows::Forms::RadioButton());
			this->rb1522 = (gcnew System::Windows::Forms::RadioButton());
			this->rb1521 = (gcnew System::Windows::Forms::RadioButton());
			this->rb1520 = (gcnew System::Windows::Forms::RadioButton());
			this->rb1519 = (gcnew System::Windows::Forms::RadioButton());
			this->rb1518 = (gcnew System::Windows::Forms::RadioButton());
			this->rb1517 = (gcnew System::Windows::Forms::RadioButton());
			this->rb1516 = (gcnew System::Windows::Forms::RadioButton());
			this->rb1515 = (gcnew System::Windows::Forms::RadioButton());
			this->rb1514 = (gcnew System::Windows::Forms::RadioButton());
			this->rb1513 = (gcnew System::Windows::Forms::RadioButton());
			this->rb1512 = (gcnew System::Windows::Forms::RadioButton());
			this->rb1511 = (gcnew System::Windows::Forms::RadioButton());
			this->rb1510 = (gcnew System::Windows::Forms::RadioButton());
			this->rb159 = (gcnew System::Windows::Forms::RadioButton());
			this->rb158 = (gcnew System::Windows::Forms::RadioButton());
			this->rb154 = (gcnew System::Windows::Forms::RadioButton());
			this->rb156 = (gcnew System::Windows::Forms::RadioButton());
			this->rb157 = (gcnew System::Windows::Forms::RadioButton());
			this->rb153 = (gcnew System::Windows::Forms::RadioButton());
			this->rb155 = (gcnew System::Windows::Forms::RadioButton());
			this->rb152 = (gcnew System::Windows::Forms::RadioButton());
			this->rb151 = (gcnew System::Windows::Forms::RadioButton());
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
			this->dateTimePicker->CustomFormat = L"yyyy-MM-dd";
			this->dateTimePicker->Location = System::Drawing::Point(477, 116);
			this->dateTimePicker->MaxDate = System::DateTime(2050, 12, 31, 0, 0, 0, 0);
			this->dateTimePicker->MinDate = System::DateTime(1970, 1, 1, 0, 0, 0, 0);
			this->dateTimePicker->Name = L"dateTimePicker";
			this->dateTimePicker->Size = System::Drawing::Size(212, 20);
			this->dateTimePicker->TabIndex = 2;
			this->dateTimePicker->Value = System::DateTime(2017, 1, 24, 0, 0, 0, 0);
			this->dateTimePicker->ValueChanged += gcnew System::EventHandler(this, &TimeSelect::dateTimePicker1_ValueChanged);
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
			this->gb30->Controls->Add(this->rb3018);
			this->gb30->Controls->Add(this->rb3017);
			this->gb30->Controls->Add(this->rb3016);
			this->gb30->Controls->Add(this->rb3015);
			this->gb30->Controls->Add(this->rb3014);
			this->gb30->Controls->Add(this->rb3013);
			this->gb30->Controls->Add(this->rb3012);
			this->gb30->Controls->Add(this->rb3011);
			this->gb30->Controls->Add(this->rb3010);
			this->gb30->Controls->Add(this->rb309);
			this->gb30->Controls->Add(this->rb308);
			this->gb30->Controls->Add(this->rb304);
			this->gb30->Controls->Add(this->rb306);
			this->gb30->Controls->Add(this->rb307);
			this->gb30->Controls->Add(this->rb303);
			this->gb30->Controls->Add(this->rb305);
			this->gb30->Controls->Add(this->rb302);
			this->gb30->Controls->Add(this->rb301);
			this->gb30->Enabled = false;
			this->gb30->Location = System::Drawing::Point(261, 142);
			this->gb30->Name = L"gb30";
			this->gb30->Size = System::Drawing::Size(428, 198);
			this->gb30->TabIndex = 8;
			this->gb30->TabStop = false;
			this->gb30->Visible = false;
			// 
			// rb3018
			// 
			this->rb3018->AutoSize = true;
			this->rb3018->Location = System::Drawing::Point(151, 88);
			this->rb3018->Name = L"rb3018";
			this->rb3018->Size = System::Drawing::Size(63, 17);
			this->rb3018->TabIndex = 17;
			this->rb3018->TabStop = true;
			this->rb3018->Text = L"4:30 pm";
			this->rb3018->UseVisualStyleBackColor = true;
			// 
			// rb3017
			// 
			this->rb3017->AutoSize = true;
			this->rb3017->Location = System::Drawing::Point(82, 88);
			this->rb3017->Name = L"rb3017";
			this->rb3017->Size = System::Drawing::Size(63, 17);
			this->rb3017->TabIndex = 16;
			this->rb3017->TabStop = true;
			this->rb3017->Text = L"4:00 pm";
			this->rb3017->UseVisualStyleBackColor = true;
			// 
			// rb3016
			// 
			this->rb3016->AutoSize = true;
			this->rb3016->Location = System::Drawing::Point(13, 88);
			this->rb3016->Name = L"rb3016";
			this->rb3016->Size = System::Drawing::Size(63, 17);
			this->rb3016->TabIndex = 15;
			this->rb3016->TabStop = true;
			this->rb3016->Text = L"3:30 pm";
			this->rb3016->UseVisualStyleBackColor = true;
			// 
			// rb3015
			// 
			this->rb3015->AutoSize = true;
			this->rb3015->Location = System::Drawing::Point(289, 65);
			this->rb3015->Name = L"rb3015";
			this->rb3015->Size = System::Drawing::Size(63, 17);
			this->rb3015->TabIndex = 14;
			this->rb3015->TabStop = true;
			this->rb3015->Text = L"3:00 pm";
			this->rb3015->UseVisualStyleBackColor = true;
			// 
			// rb3014
			// 
			this->rb3014->AutoSize = true;
			this->rb3014->Location = System::Drawing::Point(220, 65);
			this->rb3014->Name = L"rb3014";
			this->rb3014->Size = System::Drawing::Size(63, 17);
			this->rb3014->TabIndex = 13;
			this->rb3014->TabStop = true;
			this->rb3014->Text = L"2:30 pm";
			this->rb3014->UseVisualStyleBackColor = true;
			// 
			// rb3013
			// 
			this->rb3013->AutoSize = true;
			this->rb3013->Location = System::Drawing::Point(151, 65);
			this->rb3013->Name = L"rb3013";
			this->rb3013->Size = System::Drawing::Size(63, 17);
			this->rb3013->TabIndex = 12;
			this->rb3013->TabStop = true;
			this->rb3013->Text = L"2:00 pm";
			this->rb3013->UseVisualStyleBackColor = true;
			// 
			// rb3012
			// 
			this->rb3012->AutoSize = true;
			this->rb3012->Location = System::Drawing::Point(82, 65);
			this->rb3012->Name = L"rb3012";
			this->rb3012->Size = System::Drawing::Size(63, 17);
			this->rb3012->TabIndex = 11;
			this->rb3012->TabStop = true;
			this->rb3012->Text = L"1:30 pm";
			this->rb3012->UseVisualStyleBackColor = true;
			// 
			// rb3011
			// 
			this->rb3011->AutoSize = true;
			this->rb3011->Location = System::Drawing::Point(13, 65);
			this->rb3011->Name = L"rb3011";
			this->rb3011->Size = System::Drawing::Size(63, 17);
			this->rb3011->TabIndex = 10;
			this->rb3011->TabStop = true;
			this->rb3011->Text = L"1:00 pm";
			this->rb3011->UseVisualStyleBackColor = true;
			// 
			// rb3010
			// 
			this->rb3010->AutoSize = true;
			this->rb3010->Location = System::Drawing::Point(289, 42);
			this->rb3010->Name = L"rb3010";
			this->rb3010->Size = System::Drawing::Size(69, 17);
			this->rb3010->TabIndex = 9;
			this->rb3010->TabStop = true;
			this->rb3010->Text = L"12:30 pm";
			this->rb3010->UseVisualStyleBackColor = true;
			// 
			// rb309
			// 
			this->rb309->AutoSize = true;
			this->rb309->Location = System::Drawing::Point(220, 42);
			this->rb309->Name = L"rb309";
			this->rb309->Size = System::Drawing::Size(69, 17);
			this->rb309->TabIndex = 8;
			this->rb309->TabStop = true;
			this->rb309->Text = L"12:00 pm";
			this->rb309->UseVisualStyleBackColor = true;
			// 
			// rb308
			// 
			this->rb308->AutoSize = true;
			this->rb308->Location = System::Drawing::Point(151, 42);
			this->rb308->Name = L"rb308";
			this->rb308->Size = System::Drawing::Size(69, 17);
			this->rb308->TabIndex = 7;
			this->rb308->TabStop = true;
			this->rb308->Text = L"11:30 am";
			this->rb308->UseVisualStyleBackColor = true;
			// 
			// rb304
			// 
			this->rb304->AutoSize = true;
			this->rb304->Location = System::Drawing::Point(220, 19);
			this->rb304->Name = L"rb304";
			this->rb304->Size = System::Drawing::Size(63, 17);
			this->rb304->TabIndex = 6;
			this->rb304->TabStop = true;
			this->rb304->Text = L"9:30 am";
			this->rb304->UseVisualStyleBackColor = true;
			// 
			// rb306
			// 
			this->rb306->AutoSize = true;
			this->rb306->Location = System::Drawing::Point(13, 42);
			this->rb306->Name = L"rb306";
			this->rb306->Size = System::Drawing::Size(69, 17);
			this->rb306->TabIndex = 5;
			this->rb306->TabStop = true;
			this->rb306->Text = L"10:30 am";
			this->rb306->UseVisualStyleBackColor = true;
			// 
			// rb307
			// 
			this->rb307->AutoSize = true;
			this->rb307->Location = System::Drawing::Point(82, 42);
			this->rb307->Name = L"rb307";
			this->rb307->Size = System::Drawing::Size(69, 17);
			this->rb307->TabIndex = 4;
			this->rb307->TabStop = true;
			this->rb307->Text = L"11:00 am";
			this->rb307->UseVisualStyleBackColor = true;
			// 
			// rb303
			// 
			this->rb303->AutoSize = true;
			this->rb303->Location = System::Drawing::Point(151, 19);
			this->rb303->Name = L"rb303";
			this->rb303->Size = System::Drawing::Size(63, 17);
			this->rb303->TabIndex = 3;
			this->rb303->TabStop = true;
			this->rb303->Text = L"9:00 am";
			this->rb303->UseVisualStyleBackColor = true;
			// 
			// rb305
			// 
			this->rb305->AutoSize = true;
			this->rb305->Location = System::Drawing::Point(289, 19);
			this->rb305->Name = L"rb305";
			this->rb305->Size = System::Drawing::Size(69, 17);
			this->rb305->TabIndex = 2;
			this->rb305->TabStop = true;
			this->rb305->Text = L"10:00 am";
			this->rb305->UseVisualStyleBackColor = true;
			// 
			// rb302
			// 
			this->rb302->AutoSize = true;
			this->rb302->Location = System::Drawing::Point(82, 19);
			this->rb302->Name = L"rb302";
			this->rb302->Size = System::Drawing::Size(63, 17);
			this->rb302->TabIndex = 1;
			this->rb302->TabStop = true;
			this->rb302->Text = L"8:30 am";
			this->rb302->UseVisualStyleBackColor = true;
			// 
			// rb301
			// 
			this->rb301->AutoSize = true;
			this->rb301->Location = System::Drawing::Point(13, 19);
			this->rb301->Name = L"rb301";
			this->rb301->Size = System::Drawing::Size(63, 17);
			this->rb301->TabIndex = 0;
			this->rb301->TabStop = true;
			this->rb301->Text = L"8:00 am";
			this->rb301->UseVisualStyleBackColor = true;
			// 
			// gb15
			// 
			this->gb15->Controls->Add(this->rb1535);
			this->gb15->Controls->Add(this->rb1534);
			this->gb15->Controls->Add(this->rb1533);
			this->gb15->Controls->Add(this->rb1532);
			this->gb15->Controls->Add(this->rb1531);
			this->gb15->Controls->Add(this->rb1530);
			this->gb15->Controls->Add(this->rb1529);
			this->gb15->Controls->Add(this->rb1528);
			this->gb15->Controls->Add(this->rb1527);
			this->gb15->Controls->Add(this->rb1526);
			this->gb15->Controls->Add(this->rb1525);
			this->gb15->Controls->Add(this->rb1524);
			this->gb15->Controls->Add(this->rb1523);
			this->gb15->Controls->Add(this->rb1522);
			this->gb15->Controls->Add(this->rb1521);
			this->gb15->Controls->Add(this->rb1520);
			this->gb15->Controls->Add(this->rb1519);
			this->gb15->Controls->Add(this->rb1518);
			this->gb15->Controls->Add(this->rb1517);
			this->gb15->Controls->Add(this->rb1516);
			this->gb15->Controls->Add(this->rb1515);
			this->gb15->Controls->Add(this->rb1514);
			this->gb15->Controls->Add(this->rb1513);
			this->gb15->Controls->Add(this->rb1512);
			this->gb15->Controls->Add(this->rb1511);
			this->gb15->Controls->Add(this->rb1510);
			this->gb15->Controls->Add(this->rb159);
			this->gb15->Controls->Add(this->rb158);
			this->gb15->Controls->Add(this->rb154);
			this->gb15->Controls->Add(this->rb156);
			this->gb15->Controls->Add(this->rb157);
			this->gb15->Controls->Add(this->rb153);
			this->gb15->Controls->Add(this->rb155);
			this->gb15->Controls->Add(this->rb152);
			this->gb15->Controls->Add(this->rb151);
			this->gb15->Enabled = false;
			this->gb15->Location = System::Drawing::Point(261, 142);
			this->gb15->Name = L"gb15";
			this->gb15->Size = System::Drawing::Size(428, 198);
			this->gb15->TabIndex = 9;
			this->gb15->TabStop = false;
			this->gb15->Visible = false;
			// 
			// rb1535
			// 
			this->rb1535->AutoSize = true;
			this->rb1535->Location = System::Drawing::Point(289, 157);
			this->rb1535->Name = L"rb1535";
			this->rb1535->Size = System::Drawing::Size(63, 17);
			this->rb1535->TabIndex = 34;
			this->rb1535->TabStop = true;
			this->rb1535->Text = L"4:30 pm";
			this->rb1535->UseVisualStyleBackColor = true;
			// 
			// rb1534
			// 
			this->rb1534->AutoSize = true;
			this->rb1534->Location = System::Drawing::Point(220, 157);
			this->rb1534->Name = L"rb1534";
			this->rb1534->Size = System::Drawing::Size(63, 17);
			this->rb1534->TabIndex = 33;
			this->rb1534->TabStop = true;
			this->rb1534->Text = L"4:15 pm";
			this->rb1534->UseVisualStyleBackColor = true;
			// 
			// rb1533
			// 
			this->rb1533->AutoSize = true;
			this->rb1533->Location = System::Drawing::Point(151, 157);
			this->rb1533->Name = L"rb1533";
			this->rb1533->Size = System::Drawing::Size(63, 17);
			this->rb1533->TabIndex = 32;
			this->rb1533->TabStop = true;
			this->rb1533->Text = L"4:00 pm";
			this->rb1533->UseVisualStyleBackColor = true;
			// 
			// rb1532
			// 
			this->rb1532->AutoSize = true;
			this->rb1532->Location = System::Drawing::Point(82, 157);
			this->rb1532->Name = L"rb1532";
			this->rb1532->Size = System::Drawing::Size(63, 17);
			this->rb1532->TabIndex = 31;
			this->rb1532->TabStop = true;
			this->rb1532->Text = L"3:45 pm";
			this->rb1532->UseVisualStyleBackColor = true;
			// 
			// rb1531
			// 
			this->rb1531->AutoSize = true;
			this->rb1531->Location = System::Drawing::Point(13, 157);
			this->rb1531->Name = L"rb1531";
			this->rb1531->Size = System::Drawing::Size(63, 17);
			this->rb1531->TabIndex = 30;
			this->rb1531->TabStop = true;
			this->rb1531->Text = L"3:30 pm";
			this->rb1531->UseVisualStyleBackColor = true;
			// 
			// rb1530
			// 
			this->rb1530->AutoSize = true;
			this->rb1530->Location = System::Drawing::Point(289, 134);
			this->rb1530->Name = L"rb1530";
			this->rb1530->Size = System::Drawing::Size(63, 17);
			this->rb1530->TabIndex = 29;
			this->rb1530->TabStop = true;
			this->rb1530->Text = L"3:15 pm";
			this->rb1530->UseVisualStyleBackColor = true;
			// 
			// rb1529
			// 
			this->rb1529->AutoSize = true;
			this->rb1529->Location = System::Drawing::Point(220, 134);
			this->rb1529->Name = L"rb1529";
			this->rb1529->Size = System::Drawing::Size(63, 17);
			this->rb1529->TabIndex = 28;
			this->rb1529->TabStop = true;
			this->rb1529->Text = L"3:00 pm";
			this->rb1529->UseVisualStyleBackColor = true;
			// 
			// rb1528
			// 
			this->rb1528->AutoSize = true;
			this->rb1528->Location = System::Drawing::Point(151, 134);
			this->rb1528->Name = L"rb1528";
			this->rb1528->Size = System::Drawing::Size(63, 17);
			this->rb1528->TabIndex = 27;
			this->rb1528->TabStop = true;
			this->rb1528->Text = L"2:45 pm";
			this->rb1528->UseVisualStyleBackColor = true;
			// 
			// rb1527
			// 
			this->rb1527->AutoSize = true;
			this->rb1527->Location = System::Drawing::Point(82, 134);
			this->rb1527->Name = L"rb1527";
			this->rb1527->Size = System::Drawing::Size(63, 17);
			this->rb1527->TabIndex = 26;
			this->rb1527->TabStop = true;
			this->rb1527->Text = L"2:30 pm";
			this->rb1527->UseVisualStyleBackColor = true;
			// 
			// rb1526
			// 
			this->rb1526->AutoSize = true;
			this->rb1526->Location = System::Drawing::Point(13, 134);
			this->rb1526->Name = L"rb1526";
			this->rb1526->Size = System::Drawing::Size(63, 17);
			this->rb1526->TabIndex = 25;
			this->rb1526->TabStop = true;
			this->rb1526->Text = L"2:15 pm";
			this->rb1526->UseVisualStyleBackColor = true;
			// 
			// rb1525
			// 
			this->rb1525->AutoSize = true;
			this->rb1525->Location = System::Drawing::Point(289, 111);
			this->rb1525->Name = L"rb1525";
			this->rb1525->Size = System::Drawing::Size(63, 17);
			this->rb1525->TabIndex = 24;
			this->rb1525->TabStop = true;
			this->rb1525->Text = L"2:00 pm";
			this->rb1525->UseVisualStyleBackColor = true;
			// 
			// rb1524
			// 
			this->rb1524->AutoSize = true;
			this->rb1524->Location = System::Drawing::Point(220, 111);
			this->rb1524->Name = L"rb1524";
			this->rb1524->Size = System::Drawing::Size(63, 17);
			this->rb1524->TabIndex = 23;
			this->rb1524->TabStop = true;
			this->rb1524->Text = L"1:45 pm";
			this->rb1524->UseVisualStyleBackColor = true;
			// 
			// rb1523
			// 
			this->rb1523->AutoSize = true;
			this->rb1523->Location = System::Drawing::Point(151, 111);
			this->rb1523->Name = L"rb1523";
			this->rb1523->Size = System::Drawing::Size(63, 17);
			this->rb1523->TabIndex = 22;
			this->rb1523->TabStop = true;
			this->rb1523->Text = L"1:30 pm";
			this->rb1523->UseVisualStyleBackColor = true;
			// 
			// rb1522
			// 
			this->rb1522->AutoSize = true;
			this->rb1522->Location = System::Drawing::Point(82, 111);
			this->rb1522->Name = L"rb1522";
			this->rb1522->Size = System::Drawing::Size(63, 17);
			this->rb1522->TabIndex = 21;
			this->rb1522->TabStop = true;
			this->rb1522->Text = L"1:15 pm";
			this->rb1522->UseVisualStyleBackColor = true;
			// 
			// rb1521
			// 
			this->rb1521->AutoSize = true;
			this->rb1521->Location = System::Drawing::Point(13, 111);
			this->rb1521->Name = L"rb1521";
			this->rb1521->Size = System::Drawing::Size(63, 17);
			this->rb1521->TabIndex = 20;
			this->rb1521->TabStop = true;
			this->rb1521->Text = L"1:00 pm";
			this->rb1521->UseVisualStyleBackColor = true;
			// 
			// rb1520
			// 
			this->rb1520->AutoSize = true;
			this->rb1520->Location = System::Drawing::Point(289, 88);
			this->rb1520->Name = L"rb1520";
			this->rb1520->Size = System::Drawing::Size(69, 17);
			this->rb1520->TabIndex = 19;
			this->rb1520->TabStop = true;
			this->rb1520->Text = L"12:45 pm";
			this->rb1520->UseVisualStyleBackColor = true;
			// 
			// rb1519
			// 
			this->rb1519->AutoSize = true;
			this->rb1519->Location = System::Drawing::Point(220, 88);
			this->rb1519->Name = L"rb1519";
			this->rb1519->Size = System::Drawing::Size(69, 17);
			this->rb1519->TabIndex = 18;
			this->rb1519->TabStop = true;
			this->rb1519->Text = L"12:30 pm";
			this->rb1519->UseVisualStyleBackColor = true;
			// 
			// rb1518
			// 
			this->rb1518->AutoSize = true;
			this->rb1518->Location = System::Drawing::Point(151, 88);
			this->rb1518->Name = L"rb1518";
			this->rb1518->Size = System::Drawing::Size(69, 17);
			this->rb1518->TabIndex = 17;
			this->rb1518->TabStop = true;
			this->rb1518->Text = L"12:15 pm";
			this->rb1518->UseVisualStyleBackColor = true;
			// 
			// rb1517
			// 
			this->rb1517->AutoSize = true;
			this->rb1517->Location = System::Drawing::Point(82, 88);
			this->rb1517->Name = L"rb1517";
			this->rb1517->Size = System::Drawing::Size(69, 17);
			this->rb1517->TabIndex = 16;
			this->rb1517->TabStop = true;
			this->rb1517->Text = L"12:00 pm";
			this->rb1517->UseVisualStyleBackColor = true;
			// 
			// rb1516
			// 
			this->rb1516->AutoSize = true;
			this->rb1516->Location = System::Drawing::Point(13, 88);
			this->rb1516->Name = L"rb1516";
			this->rb1516->Size = System::Drawing::Size(69, 17);
			this->rb1516->TabIndex = 15;
			this->rb1516->TabStop = true;
			this->rb1516->Text = L"11:45 am";
			this->rb1516->UseVisualStyleBackColor = true;
			// 
			// rb1515
			// 
			this->rb1515->AutoSize = true;
			this->rb1515->Location = System::Drawing::Point(289, 65);
			this->rb1515->Name = L"rb1515";
			this->rb1515->Size = System::Drawing::Size(69, 17);
			this->rb1515->TabIndex = 14;
			this->rb1515->TabStop = true;
			this->rb1515->Text = L"11:30 am";
			this->rb1515->UseVisualStyleBackColor = true;
			// 
			// rb1514
			// 
			this->rb1514->AutoSize = true;
			this->rb1514->Location = System::Drawing::Point(220, 65);
			this->rb1514->Name = L"rb1514";
			this->rb1514->Size = System::Drawing::Size(69, 17);
			this->rb1514->TabIndex = 13;
			this->rb1514->TabStop = true;
			this->rb1514->Text = L"11:15 am";
			this->rb1514->UseVisualStyleBackColor = true;
			// 
			// rb1513
			// 
			this->rb1513->AutoSize = true;
			this->rb1513->Location = System::Drawing::Point(151, 65);
			this->rb1513->Name = L"rb1513";
			this->rb1513->Size = System::Drawing::Size(69, 17);
			this->rb1513->TabIndex = 12;
			this->rb1513->TabStop = true;
			this->rb1513->Text = L"11:00 am";
			this->rb1513->UseVisualStyleBackColor = true;
			// 
			// rb1512
			// 
			this->rb1512->AutoSize = true;
			this->rb1512->Location = System::Drawing::Point(82, 65);
			this->rb1512->Name = L"rb1512";
			this->rb1512->Size = System::Drawing::Size(69, 17);
			this->rb1512->TabIndex = 11;
			this->rb1512->TabStop = true;
			this->rb1512->Text = L"10:45 am";
			this->rb1512->UseVisualStyleBackColor = true;
			// 
			// rb1511
			// 
			this->rb1511->AutoSize = true;
			this->rb1511->Location = System::Drawing::Point(13, 65);
			this->rb1511->Name = L"rb1511";
			this->rb1511->Size = System::Drawing::Size(69, 17);
			this->rb1511->TabIndex = 10;
			this->rb1511->TabStop = true;
			this->rb1511->Text = L"10:30 am";
			this->rb1511->UseVisualStyleBackColor = true;
			// 
			// rb1510
			// 
			this->rb1510->AutoSize = true;
			this->rb1510->Location = System::Drawing::Point(289, 42);
			this->rb1510->Name = L"rb1510";
			this->rb1510->Size = System::Drawing::Size(69, 17);
			this->rb1510->TabIndex = 9;
			this->rb1510->TabStop = true;
			this->rb1510->Text = L"10:15 am";
			this->rb1510->UseVisualStyleBackColor = true;
			// 
			// rb159
			// 
			this->rb159->AutoSize = true;
			this->rb159->Location = System::Drawing::Point(220, 42);
			this->rb159->Name = L"rb159";
			this->rb159->Size = System::Drawing::Size(69, 17);
			this->rb159->TabIndex = 8;
			this->rb159->TabStop = true;
			this->rb159->Text = L"10:00 am";
			this->rb159->UseVisualStyleBackColor = true;
			// 
			// rb158
			// 
			this->rb158->AutoSize = true;
			this->rb158->Location = System::Drawing::Point(151, 42);
			this->rb158->Name = L"rb158";
			this->rb158->Size = System::Drawing::Size(63, 17);
			this->rb158->TabIndex = 7;
			this->rb158->TabStop = true;
			this->rb158->Text = L"9:45 am";
			this->rb158->UseVisualStyleBackColor = true;
			// 
			// rb154
			// 
			this->rb154->AutoSize = true;
			this->rb154->Location = System::Drawing::Point(220, 19);
			this->rb154->Name = L"rb154";
			this->rb154->Size = System::Drawing::Size(63, 17);
			this->rb154->TabIndex = 6;
			this->rb154->TabStop = true;
			this->rb154->Text = L"8:45 am";
			this->rb154->UseVisualStyleBackColor = true;
			// 
			// rb156
			// 
			this->rb156->AutoSize = true;
			this->rb156->Location = System::Drawing::Point(13, 42);
			this->rb156->Name = L"rb156";
			this->rb156->Size = System::Drawing::Size(63, 17);
			this->rb156->TabIndex = 5;
			this->rb156->TabStop = true;
			this->rb156->Text = L"9:15 am";
			this->rb156->UseVisualStyleBackColor = true;
			// 
			// rb157
			// 
			this->rb157->AutoSize = true;
			this->rb157->Location = System::Drawing::Point(82, 42);
			this->rb157->Name = L"rb157";
			this->rb157->Size = System::Drawing::Size(63, 17);
			this->rb157->TabIndex = 4;
			this->rb157->TabStop = true;
			this->rb157->Text = L"9:30 am";
			this->rb157->UseVisualStyleBackColor = true;
			// 
			// rb153
			// 
			this->rb153->AutoSize = true;
			this->rb153->Location = System::Drawing::Point(151, 19);
			this->rb153->Name = L"rb153";
			this->rb153->Size = System::Drawing::Size(63, 17);
			this->rb153->TabIndex = 3;
			this->rb153->TabStop = true;
			this->rb153->Text = L"8:30 am";
			this->rb153->UseVisualStyleBackColor = true;
			// 
			// rb155
			// 
			this->rb155->AutoSize = true;
			this->rb155->Location = System::Drawing::Point(289, 19);
			this->rb155->Name = L"rb155";
			this->rb155->Size = System::Drawing::Size(63, 17);
			this->rb155->TabIndex = 2;
			this->rb155->TabStop = true;
			this->rb155->Text = L"9:00 am";
			this->rb155->UseVisualStyleBackColor = true;
			// 
			// rb152
			// 
			this->rb152->AutoSize = true;
			this->rb152->Location = System::Drawing::Point(82, 19);
			this->rb152->Name = L"rb152";
			this->rb152->Size = System::Drawing::Size(63, 17);
			this->rb152->TabIndex = 1;
			this->rb152->TabStop = true;
			this->rb152->Text = L"8:15 am";
			this->rb152->UseVisualStyleBackColor = true;
			// 
			// rb151
			// 
			this->rb151->AutoSize = true;
			this->rb151->Location = System::Drawing::Point(13, 19);
			this->rb151->Name = L"rb151";
			this->rb151->Size = System::Drawing::Size(63, 17);
			this->rb151->TabIndex = 0;
			this->rb151->TabStop = true;
			this->rb151->Text = L"8:00 am";
			this->rb151->UseVisualStyleBackColor = true;
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
			this->Controls->Add(this->gb15);
			this->Controls->Add(this->gb30);
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
	private: System::Void dateTimePicker1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void btnBack_Click(System::Object^  sender, System::EventArgs^  e) {

		this->Hide();
		this->previous->Show();

	}
	private: System::Void btnNext_Click(System::Object^  sender, System::EventArgs^  e) {
		if (lbAdvisorList->Text->IsNullOrWhiteSpace(lbAdvisorList->Text) || cbReason->Text->IsNullOrWhiteSpace(cbReason->Text)
			|| (gb15->Enabled == false && gb30->Enabled == false) || isTimeSelected() == false)
		{
			MessageBox::Show("Whoops looks like you left something empty!", "Error",
				MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
		else
		{
			student->setAdvisor(lbAdvisorList->Text);
			student->setAppReason(cbReason->Text);
			student->setAppDate(dateTimePicker->Value.Date.ToString("yyyy-MM-dd"));
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
			lbAdvisorList->Items->Add("Barake, Maria");
			lbAdvisorList->Items->Add("Telfort, Roseline");
		}
		else if (student->getDegreeType() == "Engineering")
		{
			lbAdvisorList->Items->Add("Moscoso, Federico");
			lbAdvisorList->Items->Add("Ramirez, Janet");
		}
		else if (student->getDegreeType() == "MAGIC")
		{
			lbAdvisorList->Items->Add("Auguste, Mylinda");
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
