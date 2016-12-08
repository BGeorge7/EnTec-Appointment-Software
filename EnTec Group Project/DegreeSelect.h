#pragma once
#include "TimeSelect.h"
#include "Student.h"
#include <stdlib.h> 


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
	private: Student *student;
	private: Form^ previous;
	private: TimeSelect^ timeForm;
	public:
		DegreeSelect(Form^ previous, Student *student)
		{
			this->student = student;
			this->previous = previous;

			InitializeComponent();
		}
		DegreeSelect(void)
		{
			InitializeComponent();
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

	private: bool isSelected()
	{
		if (rbTechnology->Checked)
		{
			student->setDegreeType(rbTechnology->Text);
			if (rbTechnology1->Checked)//1
			{
				student->setDegree(rbTechnology1->Text);
				return true;
			}
			else if (rbTechnology2->Checked)//2
			{
				student->setDegree(rbTechnology2->Text);
				return true;
			}
			else if (rbTechnology3->Checked)//3
			{
				student->setDegree(rbTechnology3->Text);
				return true;
			}
			else if (rbTechnology4->Checked)//4
			{
				student->setDegree(rbTechnology4->Text);
				return true;
			}
			else if (rbTechnology5->Checked)//5
			{
				student->setDegree(rbTechnology5->Text);
				return true;
			}
			else if (rbTechnology6->Checked)//6
			{
				student->setDegree(rbTechnology6->Text);
				return true;
			}
			else if (rbTechnology7->Checked)//7
			{
				student->setDegree(rbTechnology7->Text);
				return true;
			}
			else if (rbTechnology8->Checked)//8
			{
				student->setDegree(rbTechnology8->Text);
				return true;
			}
			else if (rbTechnology9->Checked)//9
			{
				student->setDegree(rbTechnology9->Text);
				return true;
			}
			else if (rbTechnology10->Checked)//10
			{
				student->setDegree(rbTechnology10->Text);
				return true;
			}
			else if (rbTechnologyOther->Checked)//other
			{
				if (!(tbTechnologyOther->Text->IsNullOrWhiteSpace(tbTechnologyOther->Text)))
				{
					student->setDegree(tbTechnologyOther->Text);
					return true;
				}
			}

		}
		else if (rbEngineering->Checked)
		{
			student->setDegreeType(rbEngineering->Text);
			if (rbEngineering1->Checked)//1
			{
				student->setDegree(rbEngineering1->Text);
				return true;
			}
			else if (rbEngineering2->Checked)//2
			{
				student->setDegree(rbEngineering2->Text);
				return true;
			}
			else if (rbEngineering3->Checked)//3
			{
				student->setDegree(rbEngineering3->Text);
				return true;
			}
			else if (rbEngineering4->Checked)//4
			{
				student->setDegree(rbEngineering4->Text);
				return true;
			}
			else if (rbEngineering5->Checked)//5
			{
				student->setDegree(rbEngineering5->Text);
				return true;
			}
			else if (rbEngineering6->Checked)//6
			{
				student->setDegree(rbEngineering6->Text);
				return true;
			}
			else if (rbEngineering7->Checked)//7
			{
				student->setDegree(rbEngineering7->Text);
				return true;
			}
			else if (rbEngineering8->Checked)//8
			{
				student->setDegree(rbEngineering8->Text);
				return true;
			}
			else if (rbEngineering9->Checked)//9
			{
				student->setDegree(rbEngineering9->Text);
				return true;
			}
			else if (rbEngineering10->Checked)//10
			{
				student->setDegree(rbEngineering10->Text);
				return true;
			}
			else if (rbEngineering11->Checked)//11
			{
				student->setDegree(rbEngineering11->Text);
				return true;
			}
			else if (rbEngineering12->Checked)//2
			{
				student->setDegree(rbEngineering12->Text);
				return true;
			}
			else if (rbEngineering13->Checked)//13
			{
				student->setDegree(rbEngineering13->Text);
				return true;
			}
			else if (rbEngineering14->Checked)//14
			{
				student->setDegree(rbEngineering2->Text);
				return true;
			}
			else if (rbEngineeringOther->Checked)//other
			{
				if (!(tbEngineeringOther->Text->IsNullOrWhiteSpace(tbEngineeringOther->Text)))
				{
					student->setDegree(tbEngineeringOther->Text);
					return true;
				}
			}

		}
		else if (rbMAGIC->Checked)
		{
			student->setDegreeType(rbMAGIC->Text);
			if (rbMAGIC1->Checked)//1
			{
				student->setDegree(rbMAGIC1->Text);
				return true;
			}
			else if (rbMAGIC2->Checked)//2
			{
				student->setDegree(rbMAGIC2->Text);
				return true;
			}
		}

		return false;
	}
	private: System::Windows::Forms::GroupBox^  gbEngineering;
	private: System::Windows::Forms::GroupBox^  gbTechnology;
	protected:


	protected:

	private: System::Windows::Forms::GroupBox^  gbMAGIC;
	private: System::Windows::Forms::RadioButton^  rbTechnology;

	private: System::Windows::Forms::RadioButton^  rbEngineering;
	private: System::Windows::Forms::RadioButton^  rbMAGIC;

	private: System::Windows::Forms::Button^  btnNext;
	private: System::Windows::Forms::RadioButton^  rbEngineering9;

	private: System::Windows::Forms::RadioButton^  rbEngineering8;

	private: System::Windows::Forms::RadioButton^  rbEngineering7;

	private: System::Windows::Forms::RadioButton^  rbEngineering6;

	private: System::Windows::Forms::RadioButton^  rbEngineering5;

	private: System::Windows::Forms::RadioButton^  rbEngineering4;

	private: System::Windows::Forms::RadioButton^  rbEngineering3;

	private: System::Windows::Forms::RadioButton^  rbEngineering2;

	private: System::Windows::Forms::RadioButton^  rbEngineering1;
	private: System::Windows::Forms::RadioButton^  rbEngineering10;
	private: System::Windows::Forms::RadioButton^  rbEngineering11;
	private: System::Windows::Forms::RadioButton^  rbEngineering14;


	private: System::Windows::Forms::RadioButton^  rbEngineering13;

	private: System::Windows::Forms::RadioButton^  rbEngineering12;

	private: System::Windows::Forms::TextBox^  tbEngineeringOther;
	private: System::Windows::Forms::RadioButton^  rbEngineeringOther;

	private: System::Windows::Forms::TextBox^  tbTechnologyOther;
	private: System::Windows::Forms::RadioButton^  rbTechnologyOther;

	private: System::Windows::Forms::RadioButton^  rbTechnology10;

	private: System::Windows::Forms::RadioButton^  rbTechnology9;


	private: System::Windows::Forms::RadioButton^  rbTechnology8;


	private: System::Windows::Forms::RadioButton^  rbTechnology7;


	private: System::Windows::Forms::RadioButton^  rbTechnology6;


	private: System::Windows::Forms::RadioButton^  rbTechnology5;


	private: System::Windows::Forms::RadioButton^  rbTechnology4;


private: System::Windows::Forms::RadioButton^  rbTechnology3;


private: System::Windows::Forms::RadioButton^  rbTechnology2;


private: System::Windows::Forms::RadioButton^  rbTechnology1;


	private: System::Windows::Forms::RadioButton^  rbMAGIC2;


	private: System::Windows::Forms::RadioButton^  rbMAGIC1;

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
			this->rbEngineeringOther = (gcnew System::Windows::Forms::RadioButton());
			this->rbEngineering1 = (gcnew System::Windows::Forms::RadioButton());
			this->rbEngineering14 = (gcnew System::Windows::Forms::RadioButton());
			this->rbEngineering13 = (gcnew System::Windows::Forms::RadioButton());
			this->rbEngineering12 = (gcnew System::Windows::Forms::RadioButton());
			this->rbEngineering11 = (gcnew System::Windows::Forms::RadioButton());
			this->rbEngineering10 = (gcnew System::Windows::Forms::RadioButton());
			this->rbEngineering9 = (gcnew System::Windows::Forms::RadioButton());
			this->rbEngineering8 = (gcnew System::Windows::Forms::RadioButton());
			this->rbEngineering7 = (gcnew System::Windows::Forms::RadioButton());
			this->rbEngineering6 = (gcnew System::Windows::Forms::RadioButton());
			this->rbEngineering5 = (gcnew System::Windows::Forms::RadioButton());
			this->rbEngineering4 = (gcnew System::Windows::Forms::RadioButton());
			this->rbEngineering3 = (gcnew System::Windows::Forms::RadioButton());
			this->rbEngineering2 = (gcnew System::Windows::Forms::RadioButton());
			this->gbTechnology = (gcnew System::Windows::Forms::GroupBox());
			this->tbTechnologyOther = (gcnew System::Windows::Forms::TextBox());
			this->rbTechnologyOther = (gcnew System::Windows::Forms::RadioButton());
			this->rbTechnology10 = (gcnew System::Windows::Forms::RadioButton());
			this->rbTechnology9 = (gcnew System::Windows::Forms::RadioButton());
			this->rbTechnology8 = (gcnew System::Windows::Forms::RadioButton());
			this->rbTechnology7 = (gcnew System::Windows::Forms::RadioButton());
			this->rbTechnology6 = (gcnew System::Windows::Forms::RadioButton());
			this->rbTechnology5 = (gcnew System::Windows::Forms::RadioButton());
			this->rbTechnology4 = (gcnew System::Windows::Forms::RadioButton());
			this->rbTechnology3 = (gcnew System::Windows::Forms::RadioButton());
			this->rbTechnology2 = (gcnew System::Windows::Forms::RadioButton());
			this->rbTechnology1 = (gcnew System::Windows::Forms::RadioButton());
			this->gbMAGIC = (gcnew System::Windows::Forms::GroupBox());
			this->rbMAGIC2 = (gcnew System::Windows::Forms::RadioButton());
			this->rbMAGIC1 = (gcnew System::Windows::Forms::RadioButton());
			this->rbTechnology = (gcnew System::Windows::Forms::RadioButton());
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
			this->gbEngineering->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)));
			this->gbEngineering->Controls->Add(this->tbEngineeringOther);
			this->gbEngineering->Controls->Add(this->rbEngineeringOther);
			this->gbEngineering->Controls->Add(this->rbEngineering1);
			this->gbEngineering->Controls->Add(this->rbEngineering14);
			this->gbEngineering->Controls->Add(this->rbEngineering13);
			this->gbEngineering->Controls->Add(this->rbEngineering12);
			this->gbEngineering->Controls->Add(this->rbEngineering11);
			this->gbEngineering->Controls->Add(this->rbEngineering10);
			this->gbEngineering->Controls->Add(this->rbEngineering9);
			this->gbEngineering->Controls->Add(this->rbEngineering8);
			this->gbEngineering->Controls->Add(this->rbEngineering7);
			this->gbEngineering->Controls->Add(this->rbEngineering6);
			this->gbEngineering->Controls->Add(this->rbEngineering5);
			this->gbEngineering->Controls->Add(this->rbEngineering4);
			this->gbEngineering->Controls->Add(this->rbEngineering3);
			this->gbEngineering->Controls->Add(this->rbEngineering2);
			this->gbEngineering->Enabled = false;
			this->gbEngineering->Location = System::Drawing::Point(345, 32);
			this->gbEngineering->Margin = System::Windows::Forms::Padding(4);
			this->gbEngineering->Name = L"gbEngineering";
			this->gbEngineering->Padding = System::Windows::Forms::Padding(4);
			this->gbEngineering->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->gbEngineering->Size = System::Drawing::Size(295, 442);
			this->gbEngineering->TabIndex = 0;
			this->gbEngineering->TabStop = false;
			// 
			// tbEngineeringOther
			// 
			this->tbEngineeringOther->Location = System::Drawing::Point(30, 414);
			this->tbEngineeringOther->Margin = System::Windows::Forms::Padding(4);
			this->tbEngineeringOther->MaxLength = 34;
			this->tbEngineeringOther->Name = L"tbEngineeringOther";
			this->tbEngineeringOther->Size = System::Drawing::Size(253, 22);
			this->tbEngineeringOther->TabIndex = 15;
			// 
			// rbEngineeringOther
			// 
			this->rdEngineeringOther->AutoSize = true;
			this->rdEngineeringOther->Location = System::Drawing::Point(8, 417);
			this->rdEngineeringOther->Margin = System::Windows::Forms::Padding(4);
			this->rdEngineeringOther->Name = L"rdEngineeringOther";
			this->rdEngineeringOther->Size = System::Drawing::Size(17, 16);
			this->rdEngineeringOther->TabIndex = 14;
			this->rdEngineeringOther->TabStop = true;
			this->rdEngineeringOther->UseVisualStyleBackColor = true;
			// 
			// rbEngineering1
			// 
			this->rbEngineering1->AutoSize = true;
			this->rbEngineering1->Location = System::Drawing::Point(8, 11);
			this->rbEngineering1->Margin = System::Windows::Forms::Padding(4);
			this->rbEngineering1->Name = L"rbEngineering1";
			this->rbEngineering1->Size = System::Drawing::Size(179, 21);
			this->rbEngineering1->TabIndex = 0;
			this->rbEngineering1->TabStop = true;
			this->rbEngineering1->Text = L"A.A. Architecture 10905";
			this->rbEngineering1->UseVisualStyleBackColor = true;
			// 
			// rbEngineering14
			// 
			this->rbEngineering14->AutoSize = true;
			this->rbEngineering14->Location = System::Drawing::Point(8, 388);
			this->rbEngineering14->Margin = System::Windows::Forms::Padding(4);
			this->rbEngineering14->Name = L"rbEngineering14";
			this->rbEngineering14->Size = System::Drawing::Size(208, 21);
			this->rbEngineering14->TabIndex = 13;
			this->rbEngineering14->TabStop = true;
			this->rbEngineering14->Text = L"A.S. Electronics Engineering";
			this->rbEngineering14->UseVisualStyleBackColor = true;
			// 
			// rbEngineering13
			// 
			this->rbEngineering13->AutoSize = true;
			this->rbEngineering13->Location = System::Drawing::Point(8, 359);
			this->rbEngineering13->Margin = System::Windows::Forms::Padding(4);
			this->rbEngineering13->Name = L"rbEngineering13";
			this->rbEngineering13->Size = System::Drawing::Size(200, 21);
			this->rbEngineering13->TabIndex = 12;
			this->rbEngineering13->TabStop = true;
			this->rbEngineering13->Text = L"A.S. Computer Engineering";
			this->rbEngineering13->UseVisualStyleBackColor = true;
			// 
			// rbEngineering12
			// 
			this->rbEngineering12->AutoSize = true;
			this->rbEngineering12->Location = System::Drawing::Point(8, 330);
			this->rbEngineering12->Margin = System::Windows::Forms::Padding(4);
			this->rbEngineering12->Name = L"rbEngineering12";
			this->rbEngineering12->Size = System::Drawing::Size(216, 21);
			this->rbEngineering12->TabIndex = 11;
			this->rbEngineering12->TabStop = true;
			this->rbEngineering12->Text = L"A.S. Advanced Manufacturing";
			this->rbEngineering12->UseVisualStyleBackColor = true;
			// 
			// rbEngineering11
			// 
			this->rbEngineering11->AutoSize = true;
			this->rbEngineering11->Location = System::Drawing::Point(8, 301);
			this->rbEngineering11->Margin = System::Windows::Forms::Padding(4);
			this->rbEngineering11->Name = L"rbEngineering11";
			this->rbEngineering11->Size = System::Drawing::Size(208, 21);
			this->rbEngineering11->TabIndex = 10;
			this->rbEngineering11->TabStop = true;
			this->rbEngineering11->Text = L"B.S. Electronics Engineering";
			this->rbEngineering11->UseVisualStyleBackColor = true;
			// 
			// rbEngineering10
			// 
			this->rbEngineering10->AutoSize = true;
			this->rbEngineering10->Location = System::Drawing::Point(8, 272);
			this->rbEngineering10->Margin = System::Windows::Forms::Padding(4);
			this->rbEngineering10->Name = L"rbEngineering10";
			this->rbEngineering10->Size = System::Drawing::Size(153, 21);
			this->rbEngineering10->TabIndex = 9;
			this->rbEngineering10->TabStop = true;
			this->rbEngineering10->Text = L"A.A. Science 10904";
			this->rbEngineering10->UseVisualStyleBackColor = true;
			// 
			// rbEngineering9
			// 
			this->rbEngineering9->AutoSize = true;
			this->rbEngineering9->Location = System::Drawing::Point(8, 243);
			this->rbEngineering9->Margin = System::Windows::Forms::Padding(4);
			this->rbEngineering9->Name = L"rbEngineering9";
			this->rbEngineering9->Size = System::Drawing::Size(145, 21);
			this->rbEngineering9->TabIndex = 8;
			this->rbEngineering9->TabStop = true;
			this->rbEngineering9->Text = L"A.A. Ocean 10913";
			this->rbEngineering9->UseVisualStyleBackColor = true;
			// 
			// rbEngineering8
			// 
			this->rbEngineering8->AutoSize = true;
			this->rbEngineering8->Location = System::Drawing::Point(8, 214);
			this->rbEngineering8->Margin = System::Windows::Forms::Padding(4);
			this->rbEngineering8->Name = L"rbEngineering8";
			this->rbEngineering8->Size = System::Drawing::Size(174, 21);
			this->rbEngineering8->TabIndex = 7;
			this->rbEngineering8->TabStop = true;
			this->rbEngineering8->Text = L"A.A. Mechanical 10911";
			this->rbEngineering8->UseVisualStyleBackColor = true;
			// 
			// rbEngineering7
			// 
			this->rbEngineering7->AutoSize = true;
			this->rbEngineering7->Location = System::Drawing::Point(8, 185);
			this->rbEngineering7->Margin = System::Windows::Forms::Padding(4);
			this->rbEngineering7->Name = L"rbEngineering7";
			this->rbEngineering7->Size = System::Drawing::Size(160, 21);
			this->rbEngineering7->TabIndex = 6;
			this->rbEngineering7->TabStop = true;
			this->rbEngineering7->Text = L"A.A. Industrial 10912";
			this->rbEngineering7->UseVisualStyleBackColor = true;
			this->rbEngineering7->CheckedChanged += gcnew System::EventHandler(this, &DegreeSelect::radioButton6_CheckedChanged);
			// 
			// rbEngineering6
			// 
			this->rbEngineering6->AutoSize = true;
			this->rbEngineering6->Location = System::Drawing::Point(8, 156);
			this->rbEngineering6->Margin = System::Windows::Forms::Padding(4);
			this->rbEngineering6->Name = L"rbEngineering6";
			this->rbEngineering6->Size = System::Drawing::Size(170, 21);
			this->rbEngineering6->TabIndex = 5;
			this->rbEngineering6->TabStop = true;
			this->rbEngineering6->Text = L"A.A. Geomatics 10909";
			this->rbEngineering6->UseVisualStyleBackColor = true;
			// 
			// rbEngineering5
			// 
			this->rbEngineering5->AutoSize = true;
			this->rbEngineering5->Location = System::Drawing::Point(8, 127);
			this->rbEngineering5->Margin = System::Windows::Forms::Padding(4);
			this->rbEngineering5->Name = L"rbEngineering5";
			this->rbEngineering5->Size = System::Drawing::Size(160, 21);
			this->rbEngineering5->TabIndex = 4;
			this->rbEngineering5->TabStop = true;
			this->rbEngineering5->Text = L"A.A. Electrical 10910";
			this->rbEngineering5->UseVisualStyleBackColor = true;
			// 
			// rbEngineering4
			// 
			this->rbEngineering4->AutoSize = true;
			this->rbEngineering4->Location = System::Drawing::Point(8, 98);
			this->rbEngineering4->Margin = System::Windows::Forms::Padding(4);
			this->rbEngineering4->Name = L"rbEngineering4";
			this->rbEngineering4->Size = System::Drawing::Size(164, 21);
			this->rbEngineering4->TabIndex = 3;
			this->rbEngineering4->TabStop = true;
			this->rbEngineering4->Text = L"A.A. Computer 10705";
			this->rbEngineering4->UseVisualStyleBackColor = true;
			// 
			// rbEngineering3
			// 
			this->rbEngineering3->AutoSize = true;
			this->rbEngineering3->Location = System::Drawing::Point(8, 69);
			this->rbEngineering3->Margin = System::Windows::Forms::Padding(4);
			this->rbEngineering3->Name = L"rbEngineering3";
			this->rbEngineering3->Size = System::Drawing::Size(128, 21);
			this->rbEngineering3->TabIndex = 2;
			this->rbEngineering3->TabStop = true;
			this->rbEngineering3->Text = L"A.A. Civil 10908";
			this->rbEngineering3->UseVisualStyleBackColor = true;
			// 
			// rbEngineering2
			// 
			this->rbEngineering2->AutoSize = true;
			this->rbEngineering2->Location = System::Drawing::Point(8, 40);
			this->rbEngineering2->Margin = System::Windows::Forms::Padding(4);
			this->rbEngineering2->Name = L"rbEngineering2";
			this->rbEngineering2->Size = System::Drawing::Size(160, 21);
			this->rbEngineering2->TabIndex = 1;
			this->rbEngineering2->TabStop = true;
			this->rbEngineering2->Text = L"A.A. Chemical 10906";
			this->rbEngineering2->UseVisualStyleBackColor = true;
			// 
			// gbTechnology
			// 
			this->gbTechnology->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)));
			this->gbTechnology->Controls->Add(this->tbTechnologyOther);
			this->gbTechnology->Controls->Add(this->rbTechnologyOther);
			this->gbTechnology->Controls->Add(this->rbTechnology10);
			this->gbTechnology->Controls->Add(this->rbTechnology9);
			this->gbTechnology->Controls->Add(this->rbTechnology8);
			this->gbTechnology->Controls->Add(this->rbTechnology7);
			this->gbTechnology->Controls->Add(this->rbTechnology6);
			this->gbTechnology->Controls->Add(this->rbTechnology5);
			this->gbTechnology->Controls->Add(this->rbTechnology4);
			this->gbTechnology->Controls->Add(this->rbTechnology3);
			this->gbTechnology->Controls->Add(this->rbTechnology2);
			this->gbTechnology->Controls->Add(this->rbTechnology1);
			this->gbTechnology->Enabled = false;
			this->gbTechnology->Location = System::Drawing::Point(17, 32);
			this->gbTechnology->Margin = System::Windows::Forms::Padding(4);
			this->gbTechnology->Name = L"gbTechnology";
			this->gbTechnology->Padding = System::Windows::Forms::Padding(4);
			this->gbTechnology->Size = System::Drawing::Size(295, 327);
			this->gbTechnology->TabIndex = 1;
			this->gbTechnology->TabStop = false;
			// 
			// tbTechnologyOther
			// 
			this->tbTechnologyOther->Location = System::Drawing::Point(31, 298);
			this->tbTechnologyOther->Margin = System::Windows::Forms::Padding(4);
			this->tbTechnologyOther->MaxLength = 34;
			this->tbTechnologyOther->Name = L"tbTechnologyOther";
			this->tbTechnologyOther->Size = System::Drawing::Size(253, 22);
			this->tbTechnologyOther->TabIndex = 16;
			// 
			// rbTechnologyOther
			// 
			this->rdTechnologyOther->AutoSize = true;
			this->rdTechnologyOther->Location = System::Drawing::Point(9, 301);
			this->rdTechnologyOther->Margin = System::Windows::Forms::Padding(4);
			this->rdTechnologyOther->Name = L"rdTechnologyOther";
			this->rdTechnologyOther->Size = System::Drawing::Size(17, 16);
			this->rdTechnologyOther->TabIndex = 16;
			this->rdTechnologyOther->TabStop = true;
			this->rdTechnologyOther->UseVisualStyleBackColor = true;
			// 
			// rbTechnology10
			// 
			this->rdTechnology10->AutoSize = true;
			this->rdTechnology10->Location = System::Drawing::Point(9, 272);
			this->rdTechnology10->Margin = System::Windows::Forms::Padding(4);
			this->rdTechnology10->Name = L"rdTechnology10";
			this->rdTechnology10->Size = System::Drawing::Size(265, 21);
			this->rdTechnology10->TabIndex = 13;
			this->rdTechnology10->TabStop = true;
			this->rdTechnology10->Text = L"A.S. Networking Services Technology";
			this->rdTechnology10->UseVisualStyleBackColor = true;
			// 
			// rbTechnology9
			// 
			this->rdTechnology9->AutoSize = true;
			this->rdTechnology9->Location = System::Drawing::Point(9, 243);
			this->rdTechnology9->Margin = System::Windows::Forms::Padding(4);
			this->rdTechnology9->Name = L"rdTechnology9";
			this->rdTechnology9->Size = System::Drawing::Size(235, 21);
			this->rdTechnology9->TabIndex = 12;
			this->rdTechnology9->TabStop = true;
			this->rdTechnology9->Text = L"A.S. Oracle Database Developer";
			this->rdTechnology9->UseVisualStyleBackColor = true;
			// 
			// rbTechnology8
			// 
			this->rdTechnology8->AutoSize = true;
			this->rdTechnology8->Location = System::Drawing::Point(9, 214);
			this->rdTechnology8->Margin = System::Windows::Forms::Padding(4);
			this->rdTechnology8->Name = L"rdTechnology8";
			this->rdTechnology8->Size = System::Drawing::Size(253, 21);
			this->rdTechnology8->TabIndex = 11;
			this->rdTechnology8->TabStop = true;
			this->rdTechnology8->Text = L"A.S. Oracle Database Administrator";
			this->rdTechnology8->UseVisualStyleBackColor = true;
			// 
			// rbTechnology7
			// 
			this->rdTechnology7->AutoSize = true;
			this->rdTechnology7->Location = System::Drawing::Point(9, 185);
			this->rdTechnology7->Margin = System::Windows::Forms::Padding(4);
			this->rdTechnology7->Name = L"rdTechnology7";
			this->rdTechnology7->Size = System::Drawing::Size(252, 21);
			this->rdTechnology7->TabIndex = 10;
			this->rdTechnology7->TabStop = true;
			this->rdTechnology7->Text = L"A.S. Microsoft Business Intelligence";
			this->rdTechnology7->UseVisualStyleBackColor = true;
			// 
			// rbTechnology6
			// 
			this->rdTechnology6->AutoSize = true;
			this->rdTechnology6->Location = System::Drawing::Point(9, 156);
			this->rdTechnology6->Margin = System::Windows::Forms::Padding(4);
			this->rdTechnology6->Name = L"rdTechnology6";
			this->rdTechnology6->Size = System::Drawing::Size(268, 21);
			this->rdTechnology6->TabIndex = 9;
			this->rdTechnology6->TabStop = true;
			this->rdTechnology6->Text = L"A.S. Microsoft Database Administrator";
			this->rdTechnology6->UseVisualStyleBackColor = true;
			// 
			// rbTechnology5
			// 
			this->rdTechnology5->AutoSize = true;
			this->rdTechnology5->Location = System::Drawing::Point(9, 127);
			this->rdTechnology5->Margin = System::Windows::Forms::Padding(4);
			this->rdTechnology5->Name = L"rdTechnology5";
			this->rdTechnology5->Size = System::Drawing::Size(267, 21);
			this->rdTechnology5->TabIndex = 8;
			this->rdTechnology5->TabStop = true;
			this->rdTechnology5->Text = L"A.S. Mobile Applications Development";
			this->rdTechnology5->UseVisualStyleBackColor = true;
			// 
			// rbTechnology4
			// 
			this->rdTechnology4->AutoSize = true;
			this->rdTechnology4->Location = System::Drawing::Point(9, 98);
			this->rdTechnology4->Margin = System::Windows::Forms::Padding(4);
			this->rdTechnology4->Name = L"rdTechnology4";
			this->rdTechnology4->Size = System::Drawing::Size(244, 21);
			this->rdTechnology4->TabIndex = 7;
			this->rdTechnology4->TabStop = true;
			this->rdTechnology4->Text = L"A.S. Bus Application Programming";
			this->rdTechnology4->UseVisualStyleBackColor = true;
			// 
			// rbTechnology3
			// 
			this->rdTechnology3->AutoSize = true;
			this->rdTechnology3->Location = System::Drawing::Point(9, 69);
			this->rdTechnology3->Margin = System::Windows::Forms::Padding(4);
			this->rdTechnology3->Name = L"rdTechnology3";
			this->rdTechnology3->Size = System::Drawing::Size(178, 21);
			this->rdTechnology3->TabIndex = 2;
			this->rdTechnology3->TabStop = true;
			this->rdTechnology3->Text = L"A.A. Computer Science ";
			this->rdTechnology3->UseVisualStyleBackColor = true;
			// 
			// rbTechnology2
			// 
			this->rdTechnology2->AutoSize = true;
			this->rdTechnology2->Location = System::Drawing::Point(9, 40);
			this->rdTechnology2->Margin = System::Windows::Forms::Padding(4);
			this->rdTechnology2->Name = L"rdTechnology2";
			this->rdTechnology2->Size = System::Drawing::Size(268, 21);
			this->rdTechnology2->TabIndex = 1;
			this->rdTechnology2->TabStop = true;
			this->rdTechnology2->Text = L"A.S. Information Systems Technology ";
			this->rdTechnology2->UseVisualStyleBackColor = true;
			// 
			// rbTechnology1
			// 
			this->rdTechnology1->AutoSize = true;
			this->rdTechnology1->Location = System::Drawing::Point(9, 11);
			this->rdTechnology1->Margin = System::Windows::Forms::Padding(4);
			this->rdTechnology1->Name = L"rdTechnology1";
			this->rdTechnology1->Size = System::Drawing::Size(268, 21);
			this->rdTechnology1->TabIndex = 0;
			this->rdTechnology1->TabStop = true;
			this->rdTechnology1->Text = L"A.A. Information Systems Technology ";
			this->rdTechnology1->UseVisualStyleBackColor = true;
			// 
			// gbMAGIC
			// 
			this->gbMAGIC->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)));
			this->gbMAGIC->Controls->Add(this->rbMAGIC2);
			this->gbMAGIC->Controls->Add(this->rbMAGIC1);
			this->gbMAGIC->Enabled = false;
			this->gbMAGIC->Location = System::Drawing::Point(688, 32);
			this->gbMAGIC->Margin = System::Windows::Forms::Padding(4);
			this->gbMAGIC->Name = L"gbMAGIC";
			this->gbMAGIC->Padding = System::Windows::Forms::Padding(4);
			this->gbMAGIC->Size = System::Drawing::Size(295, 68);
			this->gbMAGIC->TabIndex = 2;
			this->gbMAGIC->TabStop = false;
			// 
			// rbMAGIC2
			// 
			this->rbMAGIC2->AutoSize = true;
			this->rbMAGIC2->Location = System::Drawing::Point(8, 40);
			this->rbMAGIC2->Margin = System::Windows::Forms::Padding(4);
			this->rbMAGIC2->Name = L"rbMAGIC2";
			this->rbMAGIC2->Size = System::Drawing::Size(154, 21);
			this->rbMAGIC2->TabIndex = 1;
			this->rbMAGIC2->TabStop = true;
			this->rbMAGIC2->Text = L"Game Development";
			this->rbMAGIC2->UseVisualStyleBackColor = true;
			// 
			// rbMAGIC1
			// 
			this->rbMAGIC1->AutoSize = true;
			this->rbMAGIC1->Location = System::Drawing::Point(8, 11);
			this->rbMAGIC1->Margin = System::Windows::Forms::Padding(4);
			this->rbMAGIC1->Name = L"rbMAGIC1";
			this->rbMAGIC1->Size = System::Drawing::Size(187, 21);
			this->rbMAGIC1->TabIndex = 0;
			this->rbMAGIC1->TabStop = true;
			this->rbMAGIC1->Text = L"Animation and Game Art ";
			this->rbMAGIC1->UseVisualStyleBackColor = true;
			// 
			// rbTechnology
			// 
			this->rdTechnology->AutoSize = true;
			this->rdTechnology->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(116)), static_cast<System::Int32>(static_cast<System::Byte>(175)),
				static_cast<System::Int32>(static_cast<System::Byte>(173)));
			this->rdTechnology->Location = System::Drawing::Point(17, 11);
			this->rdTechnology->Margin = System::Windows::Forms::Padding(4);
			this->rdTechnology->Name = L"rdTechnology";
			this->rdTechnology->Size = System::Drawing::Size(103, 21);
			this->rdTechnology->TabIndex = 3;
			this->rdTechnology->TabStop = true;
			this->rdTechnology->Text = L"Technology";
			this->rdTechnology->UseVisualStyleBackColor = false;
			this->rdTechnology->CheckedChanged += gcnew System::EventHandler(this, &DegreeSelect::rdTechnology_CheckedChanged);
			// 
			// rbEngineering
			// 
			this->rbEngineering->AutoSize = true;
			this->rbEngineering->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(116)), static_cast<System::Int32>(static_cast<System::Byte>(175)),
				static_cast<System::Int32>(static_cast<System::Byte>(173)));
			this->rbEngineering->Location = System::Drawing::Point(345, 11);
			this->rbEngineering->Margin = System::Windows::Forms::Padding(4);
			this->rbEngineering->Name = L"rbEngineering";
			this->rbEngineering->Size = System::Drawing::Size(105, 21);
			this->rbEngineering->TabIndex = 4;
			this->rbEngineering->TabStop = true;
			this->rbEngineering->Text = L"Engineering";
			this->rbEngineering->UseVisualStyleBackColor = false;
			this->rbEngineering->CheckedChanged += gcnew System::EventHandler(this, &DegreeSelect::rbEngineering_CheckedChanged);
			// 
			// rbMAGIC
			// 
			this->rbMAGIC->AutoSize = true;
			this->rbMAGIC->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(116)), static_cast<System::Int32>(static_cast<System::Byte>(175)),
				static_cast<System::Int32>(static_cast<System::Byte>(173)));
			this->rbMAGIC->Location = System::Drawing::Point(688, 11);
			this->rbMAGIC->Margin = System::Windows::Forms::Padding(4);
			this->rbMAGIC->Name = L"rbMAGIC";
			this->rbMAGIC->Size = System::Drawing::Size(72, 21);
			this->rbMAGIC->TabIndex = 5;
			this->rbMAGIC->TabStop = true;
			this->rbMAGIC->Text = L"MAGIC";
			this->rbMAGIC->UseVisualStyleBackColor = false;
			this->rbMAGIC->CheckedChanged += gcnew System::EventHandler(this, &DegreeSelect::rbMAGIC_CheckedChanged);
			// 
			// btnNext
			// 
			this->btnNext->Location = System::Drawing::Point(879, 443);
			this->btnNext->Margin = System::Windows::Forms::Padding(4);
			this->btnNext->Name = L"btnNext";
			this->btnNext->Size = System::Drawing::Size(111, 28);
			this->btnNext->TabIndex = 6;
			this->btnNext->Text = L"Next";
			this->btnNext->UseVisualStyleBackColor = true;
			this->btnNext->Click += gcnew System::EventHandler(this, &DegreeSelect::btnNext_Click);
			// 
			// btnBack
			// 
			this->btnBack->Location = System::Drawing::Point(13, 443);
			this->btnBack->Margin = System::Windows::Forms::Padding(4);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(111, 28);
			this->btnBack->TabIndex = 7;
			this->btnBack->Text = L"Back";
			this->btnBack->UseVisualStyleBackColor = true;
			this->btnBack->Click += gcnew System::EventHandler(this, &DegreeSelect::btnBack_Click);
			// 
			// DegreeSelect
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(137)));
			this->ClientSize = System::Drawing::Size(1003, 484);
			this->Controls->Add(this->btnBack);
			this->Controls->Add(this->gbEngineering);
			this->Controls->Add(this->btnNext);
			this->Controls->Add(this->rbMAGIC);
			this->Controls->Add(this->rbEngineering);
			this->Controls->Add(this->rbTechnology);
			this->Controls->Add(this->gbMAGIC);
			this->Controls->Add(this->gbTechnology);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"DegreeSelect";
			this->Text = L"EnTec Advisor Apointments";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &DegreeSelect::DegreeSelect_FormClosed);
			this->Load += gcnew System::EventHandler(this, &DegreeSelect::DegreeSelect_Load);
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

//Back and Next buttons
private: System::Void btnNext_Click(System::Object^  sender, System::EventArgs^  e) {
	if (isSelected())
	{
		this->Hide();
		this->timeForm->ShowDialog();
	}
	else {
		MessageBox::Show("Looks like you left something Empty.\nPlease Select of a degree and try again", "Error",
			MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
}
private: System::Void btnBack_Click(System::Object^  sender, System::EventArgs^  e) {
	
	this->Hide();
	this->previous->Show();
}
private: System::Void DegreeSelect_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
	delete student;
	student = nullptr;
	exit(0);
}
private: System::Void DegreeSelect_Load(System::Object^  sender, System::EventArgs^  e) {
	timeForm = gcnew TimeSelect(this, student);
}
};
}
