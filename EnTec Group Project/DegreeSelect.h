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
	private: System::Windows::Forms::GroupBox^  gbTechnology;
	protected:
	private: System::Windows::Forms::GroupBox^  gbEngineering;
	private: System::Windows::Forms::GroupBox^  gbMAGIC;
	private: System::Windows::Forms::RadioButton^  rdTechnology;
	private: System::Windows::Forms::RadioButton^  rbEngineering;
	private: System::Windows::Forms::RadioButton^  rdMAGIC;
	private: System::Windows::Forms::Button^  btnNext;



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
			this->gbTechnology = (gcnew System::Windows::Forms::GroupBox());
			this->gbEngineering = (gcnew System::Windows::Forms::GroupBox());
			this->gbMAGIC = (gcnew System::Windows::Forms::GroupBox());
			this->rdTechnology = (gcnew System::Windows::Forms::RadioButton());
			this->rbEngineering = (gcnew System::Windows::Forms::RadioButton());
			this->rdMAGIC = (gcnew System::Windows::Forms::RadioButton());
			this->btnNext = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// gbTechnology
			// 
			this->gbTechnology->Location = System::Drawing::Point(12, 26);
			this->gbTechnology->Name = L"gbTechnology";
			this->gbTechnology->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->gbTechnology->Size = System::Drawing::Size(200, 355);
			this->gbTechnology->TabIndex = 0;
			this->gbTechnology->TabStop = false;
			// 
			// gbEngineering
			// 
			this->gbEngineering->Location = System::Drawing::Point(277, 26);
			this->gbEngineering->Name = L"gbEngineering";
			this->gbEngineering->Size = System::Drawing::Size(200, 355);
			this->gbEngineering->TabIndex = 1;
			this->gbEngineering->TabStop = false;
			// 
			// gbMAGIC
			// 
			this->gbMAGIC->Location = System::Drawing::Point(540, 26);
			this->gbMAGIC->Name = L"gbMAGIC";
			this->gbMAGIC->Size = System::Drawing::Size(200, 321);
			this->gbMAGIC->TabIndex = 2;
			this->gbMAGIC->TabStop = false;
			// 
			// rdTechnology
			// 
			this->rdTechnology->AutoSize = true;
			this->rdTechnology->Location = System::Drawing::Point(12, 12);
			this->rdTechnology->Name = L"rdTechnology";
			this->rdTechnology->Size = System::Drawing::Size(81, 17);
			this->rdTechnology->TabIndex = 3;
			this->rdTechnology->TabStop = true;
			this->rdTechnology->Text = L"Technology";
			this->rdTechnology->UseVisualStyleBackColor = true;
			// 
			// rbEngineering
			// 
			this->rbEngineering->AutoSize = true;
			this->rbEngineering->Location = System::Drawing::Point(277, 12);
			this->rbEngineering->Name = L"rbEngineering";
			this->rbEngineering->Size = System::Drawing::Size(81, 17);
			this->rbEngineering->TabIndex = 4;
			this->rbEngineering->TabStop = true;
			this->rbEngineering->Text = L"Engineering";
			this->rbEngineering->UseVisualStyleBackColor = true;
			// 
			// rdMAGIC
			// 
			this->rdMAGIC->AutoSize = true;
			this->rdMAGIC->Location = System::Drawing::Point(540, 12);
			this->rdMAGIC->Name = L"rdMAGIC";
			this->rdMAGIC->Size = System::Drawing::Size(74, 17);
			this->rdMAGIC->TabIndex = 5;
			this->rdMAGIC->TabStop = true;
			this->rdMAGIC->Text = L"MAGIC 25";
			this->rdMAGIC->UseVisualStyleBackColor = true;
			// 
			// btnNext
			// 
			this->btnNext->Location = System::Drawing::Point(657, 358);
			this->btnNext->Name = L"btnNext";
			this->btnNext->Size = System::Drawing::Size(83, 23);
			this->btnNext->TabIndex = 6;
			this->btnNext->Text = L"Next";
			this->btnNext->UseVisualStyleBackColor = true;
			// 
			// DegreeSelect
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(752, 393);
			this->Controls->Add(this->btnNext);
			this->Controls->Add(this->rdMAGIC);
			this->Controls->Add(this->rbEngineering);
			this->Controls->Add(this->rdTechnology);
			this->Controls->Add(this->gbMAGIC);
			this->Controls->Add(this->gbEngineering);
			this->Controls->Add(this->gbTechnology);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"DegreeSelect";
			this->Text = L"EnTec Advisor Apointments";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
