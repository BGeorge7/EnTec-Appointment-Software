#pragma once

namespace EnTec_Group_Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for StudentSplash
	/// </summary>
	public ref class StudentSplash : public System::Windows::Forms::Form
	{
	public:
		StudentSplash(void)
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
		~StudentSplash()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  lblStudent1;
	private: System::Windows::Forms::Label^  lblName;
	private: System::Windows::Forms::Label^  lblID;
	private: System::Windows::Forms::Label^  lblEmail;
	private: System::Windows::Forms::TextBox^  txtbName;
	private: System::Windows::Forms::TextBox^  txtbID;

	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  btnNext;
	private: System::Windows::Forms::Button^  btnBack;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(StudentSplash::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->lblStudent1 = (gcnew System::Windows::Forms::Label());
			this->lblName = (gcnew System::Windows::Forms::Label());
			this->lblID = (gcnew System::Windows::Forms::Label());
			this->lblEmail = (gcnew System::Windows::Forms::Label());
			this->txtbName = (gcnew System::Windows::Forms::TextBox());
			this->txtbID = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->btnNext = (gcnew System::Windows::Forms::Button());
			this->btnBack = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::White;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, -4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(178, 82);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// lblStudent1
			// 
			this->lblStudent1->AutoSize = true;
			this->lblStudent1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblStudent1->Location = System::Drawing::Point(267, 60);
			this->lblStudent1->Name = L"lblStudent1";
			this->lblStudent1->Size = System::Drawing::Size(290, 18);
			this->lblStudent1->TabIndex = 1;
			this->lblStudent1->Text = L"Please Enter Your Information To Continue";
			// 
			// lblName
			// 
			this->lblName->AutoSize = true;
			this->lblName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblName->Location = System::Drawing::Point(267, 106);
			this->lblName->Name = L"lblName";
			this->lblName->Size = System::Drawing::Size(41, 15);
			this->lblName->TabIndex = 2;
			this->lblName->Text = L"Name";
			// 
			// lblID
			// 
			this->lblID->AutoSize = true;
			this->lblID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblID->Location = System::Drawing::Point(267, 175);
			this->lblID->Name = L"lblID";
			this->lblID->Size = System::Drawing::Size(64, 15);
			this->lblID->TabIndex = 3;
			this->lblID->Text = L"Student ID";
			// 
			// lblEmail
			// 
			this->lblEmail->AutoSize = true;
			this->lblEmail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblEmail->Location = System::Drawing::Point(267, 248);
			this->lblEmail->Name = L"lblEmail";
			this->lblEmail->Size = System::Drawing::Size(86, 15);
			this->lblEmail->TabIndex = 4;
			this->lblEmail->Text = L"Email Address";
			// 
			// txtbName
			// 
			this->txtbName->Location = System::Drawing::Point(270, 124);
			this->txtbName->MaxLength = 35;
			this->txtbName->Name = L"txtbName";
			this->txtbName->Size = System::Drawing::Size(174, 20);
			this->txtbName->TabIndex = 5;
			// 
			// txtbID
			// 
			this->txtbID->Location = System::Drawing::Point(270, 193);
			this->txtbID->Name = L"txtbID";
			this->txtbID->Size = System::Drawing::Size(174, 20);
			this->txtbID->TabIndex = 6;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(270, 266);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(174, 20);
			this->textBox2->TabIndex = 7;
			// 
			// btnNext
			// 
			this->btnNext->Location = System::Drawing::Point(657, 358);
			this->btnNext->Name = L"btnNext";
			this->btnNext->Size = System::Drawing::Size(83, 23);
			this->btnNext->TabIndex = 8;
			this->btnNext->Text = L"Next";
			this->btnNext->UseVisualStyleBackColor = true;
			// 
			// btnBack
			// 
			this->btnBack->Location = System::Drawing::Point(12, 358);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(83, 23);
			this->btnBack->TabIndex = 9;
			this->btnBack->Text = L"Back";
			this->btnBack->UseVisualStyleBackColor = true;
			// 
			// StudentSplash
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(752, 393);
			this->Controls->Add(this->btnBack);
			this->Controls->Add(this->btnNext);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->txtbID);
			this->Controls->Add(this->txtbName);
			this->Controls->Add(this->lblEmail);
			this->Controls->Add(this->lblID);
			this->Controls->Add(this->lblName);
			this->Controls->Add(this->lblStudent1);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"StudentSplash";
			this->Text = L"EnTec Advisor Apointments";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


};
}
