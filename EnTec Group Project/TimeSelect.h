#pragma once
#include "FinalizeScreen.h"
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
	private: Form^ previous;
	private: FinalizeScreen^ finalizeForm = gcnew FinalizeScreen(this);
	public:
		TimeSelect(Form^ previous)
		{
			this->previous = previous;
			InitializeComponent();
		}
		TimeSelect(void)
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
			this->lbAdvisorList->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)));
			this->lbAdvisorList->FormattingEnabled = true;
			this->lbAdvisorList->ItemHeight = 16;
			this->lbAdvisorList->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"Advisor 1 -(305) - 555 - 5555", L"Advisor 2 -(305) - 555 - 5555",
					L"Advisor 3 -(305) - 555 - 5555"
			});
			this->lbAdvisorList->Location = System::Drawing::Point(86, 141);
			this->lbAdvisorList->Margin = System::Windows::Forms::Padding(4);
			this->lbAdvisorList->Name = L"lbAdvisorList";
			this->lbAdvisorList->Size = System::Drawing::Size(253, 276);
			this->lbAdvisorList->TabIndex = 0;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(16, 13);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(598, 82);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// dateTimePicker
			// 
			this->dateTimePicker->Location = System::Drawing::Point(636, 143);
			this->dateTimePicker->Margin = System::Windows::Forms::Padding(4);
			this->dateTimePicker->Name = L"dateTimePicker";
			this->dateTimePicker->Size = System::Drawing::Size(281, 22);
			this->dateTimePicker->TabIndex = 2;
			this->dateTimePicker->ValueChanged += gcnew System::EventHandler(this, &TimeSelect::dateTimePicker1_ValueChanged);
			// 
			// lbTitle
			// 
			this->lbTitle->AutoSize = true;
			this->lbTitle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(116)), static_cast<System::Int32>(static_cast<System::Byte>(175)),
				static_cast<System::Int32>(static_cast<System::Byte>(173)));
			this->lbTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbTitle->Location = System::Drawing::Point(146, 108);
			this->lbTitle->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbTitle->Name = L"lbTitle";
			this->lbTitle->Size = System::Drawing::Size(672, 20);
			this->lbTitle->TabIndex = 3;
			this->lbTitle->Text = L"Please Select an Advisor, Then Select a Date and Time. When You Are Done Press Ne"
				L"xt";
			// 
			// btnNext
			// 
			this->btnNext->Location = System::Drawing::Point(879, 443);
			this->btnNext->Margin = System::Windows::Forms::Padding(4);
			this->btnNext->Name = L"btnNext";
			this->btnNext->Size = System::Drawing::Size(111, 28);
			this->btnNext->TabIndex = 4;
			this->btnNext->Text = L"Next";
			this->btnNext->UseVisualStyleBackColor = true;
			this->btnNext->Click += gcnew System::EventHandler(this, &TimeSelect::btnNext_Click);
			// 
			// btnBack
			// 
			this->btnBack->Location = System::Drawing::Point(13, 443);
			this->btnBack->Margin = System::Windows::Forms::Padding(4);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(111, 28);
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
			this->cbReason->Location = System::Drawing::Point(347, 141);
			this->cbReason->Margin = System::Windows::Forms::Padding(4);
			this->cbReason->Name = L"cbReason";
			this->cbReason->Size = System::Drawing::Size(281, 24);
			this->cbReason->TabIndex = 6;
			this->cbReason->SelectedIndexChanged += gcnew System::EventHandler(this, &TimeSelect::comboBox1_SelectedIndexChanged);
			// 
			// TimeSelect
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(137)));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(1003, 484);
			this->Controls->Add(this->cbReason);
			this->Controls->Add(this->btnBack);
			this->Controls->Add(this->btnNext);
			this->Controls->Add(this->lbTitle);
			this->Controls->Add(this->dateTimePicker);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->lbAdvisorList);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"TimeSelect";
			this->Text = L"EnTec Advisor Apointments";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &TimeSelect::TimeSelect_FormClosed);
			this->Load += gcnew System::EventHandler(this, &TimeSelect::TimeSelect_Load);
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

	this->Hide();
	this->finalizeForm->ShowDialog();

}
private: System::Void TimeSelect_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void TimeSelect_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
	exit(0);
}
};
}
