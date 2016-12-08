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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// lbAdvisorList
			// 
			this->lbAdvisorList->FormattingEnabled = true;
			this->lbAdvisorList->Location = System::Drawing::Point(12, 119);
			this->lbAdvisorList->Name = L"lbAdvisorList";
			this->lbAdvisorList->Size = System::Drawing::Size(191, 225);
			this->lbAdvisorList->TabIndex = 0;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(604, 75);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// dateTimePicker
			// 
			this->dateTimePicker->Location = System::Drawing::Point(471, 119);
			this->dateTimePicker->Name = L"dateTimePicker";
			this->dateTimePicker->Size = System::Drawing::Size(269, 20);
			this->dateTimePicker->TabIndex = 2;
			this->dateTimePicker->ValueChanged += gcnew System::EventHandler(this, &TimeSelect::dateTimePicker1_ValueChanged);
			// 
			// lbTitle
			// 
			this->lbTitle->AutoSize = true;
			this->lbTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbTitle->Location = System::Drawing::Point(103, 95);
			this->lbTitle->Name = L"lbTitle";
			this->lbTitle->Size = System::Drawing::Size(536, 16);
			this->lbTitle->TabIndex = 3;
			this->lbTitle->Text = L"Please Select an Advisor, Then Select a Date and Time. When You Are Done Press Ne"
				L"xt";
			// 
			// btnNext
			// 
			this->btnNext->Location = System::Drawing::Point(657, 358);
			this->btnNext->Name = L"btnNext";
			this->btnNext->Size = System::Drawing::Size(83, 23);
			this->btnNext->TabIndex = 4;
			this->btnNext->Text = L"Next";
			this->btnNext->UseVisualStyleBackColor = true;
			this->btnNext->Click += gcnew System::EventHandler(this, &TimeSelect::btnNext_Click);
			// 
			// btnBack
			// 
			this->btnBack->Location = System::Drawing::Point(12, 358);
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
			this->cbReason->Location = System::Drawing::Point(227, 119);
			this->cbReason->Name = L"cbReason";
			this->cbReason->Size = System::Drawing::Size(212, 21);
			this->cbReason->TabIndex = 6;
			this->cbReason->SelectedIndexChanged += gcnew System::EventHandler(this, &TimeSelect::comboBox1_SelectedIndexChanged);
			this->cbReason->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &TimeSelect::cbReason_KeyPress);
			// 
			// TimeSelect
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(752, 393);
			this->Controls->Add(this->cbReason);
			this->Controls->Add(this->btnBack);
			this->Controls->Add(this->btnNext);
			this->Controls->Add(this->lbTitle);
			this->Controls->Add(this->dateTimePicker);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->lbAdvisorList);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"TimeSelect";
			this->Text = L"EnTec Advisor Apointments";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &TimeSelect::TimeSelect_FormClosed);
			this->Load += gcnew System::EventHandler(this, &TimeSelect::TimeSelect_Load);
			this->VisibleChanged += gcnew System::EventHandler(this, &TimeSelect::TimeSelect_VisibleChanged);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
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
};
}
