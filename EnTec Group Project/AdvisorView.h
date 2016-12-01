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
	/// Summary for AdvisorView
	/// </summary>
	public ref class AdvisorView : public System::Windows::Forms::Form
	{
	public:
		AdvisorView(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AdvisorView()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridAppointments;
	protected:

	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Time;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Date;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  StudentName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  ID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Status;
	private: System::Windows::Forms::DataGridViewButtonColumn^  Done;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  tbSearch;
	private: System::Windows::Forms::RadioButton^  rbName;
	private: System::Windows::Forms::RadioButton^  rbID;
	private: System::Windows::Forms::RadioButton^  rdTime;
	private: System::Windows::Forms::Button^  btnSearch;





	private: System::Windows::Forms::Button^  btnRefresh;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  gb1lb2;

	private: System::Windows::Forms::Label^  gb1lb1;

	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  gb2lb2;

	private: System::Windows::Forms::Label^  gb2lb1;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(AdvisorView::typeid));
			this->dataGridAppointments = (gcnew System::Windows::Forms::DataGridView());
			this->Time = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Date = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->StudentName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Status = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Done = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tbSearch = (gcnew System::Windows::Forms::TextBox());
			this->rbName = (gcnew System::Windows::Forms::RadioButton());
			this->rbID = (gcnew System::Windows::Forms::RadioButton());
			this->rdTime = (gcnew System::Windows::Forms::RadioButton());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->btnRefresh = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->gb1lb2 = (gcnew System::Windows::Forms::Label());
			this->gb1lb1 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->gb2lb2 = (gcnew System::Windows::Forms::Label());
			this->gb2lb1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridAppointments))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridAppointments
			// 
			this->dataGridAppointments->AllowUserToAddRows = false;
			this->dataGridAppointments->AllowUserToDeleteRows = false;
			this->dataGridAppointments->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridAppointments->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Time,
					this->Date, this->StudentName, this->ID, this->Status, this->Done
			});
			this->dataGridAppointments->Location = System::Drawing::Point(12, 12);
			this->dataGridAppointments->Name = L"dataGridAppointments";
			this->dataGridAppointments->ReadOnly = true;
			this->dataGridAppointments->Size = System::Drawing::Size(419, 510);
			this->dataGridAppointments->TabIndex = 0;
			// 
			// Time
			// 
			this->Time->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::ColumnHeader;
			this->Time->HeaderText = L"Time";
			this->Time->Name = L"Time";
			this->Time->ReadOnly = true;
			this->Time->Width = 55;
			// 
			// Date
			// 
			this->Date->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::ColumnHeader;
			this->Date->HeaderText = L"Date";
			this->Date->Name = L"Date";
			this->Date->ReadOnly = true;
			this->Date->Width = 55;
			// 
			// StudentName
			// 
			this->StudentName->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::ColumnHeader;
			this->StudentName->HeaderText = L"Name";
			this->StudentName->Name = L"StudentName";
			this->StudentName->ReadOnly = true;
			this->StudentName->Width = 60;
			// 
			// ID
			// 
			this->ID->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::ColumnHeader;
			this->ID->HeaderText = L"ID";
			this->ID->MaxInputLength = 10;
			this->ID->Name = L"ID";
			this->ID->ReadOnly = true;
			this->ID->Width = 43;
			// 
			// Status
			// 
			this->Status->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::ColumnHeader;
			this->Status->HeaderText = L"Status";
			this->Status->Name = L"Status";
			this->Status->ReadOnly = true;
			this->Status->Width = 62;
			// 
			// Done
			// 
			this->Done->HeaderText = L"Done";
			this->Done->Name = L"Done";
			this->Done->ReadOnly = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(437, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(41, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Search";
			// 
			// tbSearch
			// 
			this->tbSearch->Location = System::Drawing::Point(437, 25);
			this->tbSearch->Name = L"tbSearch";
			this->tbSearch->Size = System::Drawing::Size(164, 20);
			this->tbSearch->TabIndex = 2;
			// 
			// rbName
			// 
			this->rbName->AutoSize = true;
			this->rbName->Location = System::Drawing::Point(440, 52);
			this->rbName->Name = L"rbName";
			this->rbName->Size = System::Drawing::Size(53, 17);
			this->rbName->TabIndex = 3;
			this->rbName->TabStop = true;
			this->rbName->Text = L"Name";
			this->rbName->UseVisualStyleBackColor = true;
			// 
			// rbID
			// 
			this->rbID->AutoSize = true;
			this->rbID->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->rbID->Location = System::Drawing::Point(499, 52);
			this->rbID->Name = L"rbID";
			this->rbID->Size = System::Drawing::Size(36, 17);
			this->rbID->TabIndex = 4;
			this->rbID->TabStop = true;
			this->rbID->Text = L"ID";
			this->rbID->UseVisualStyleBackColor = true;
			// 
			// rdTime
			// 
			this->rdTime->AutoSize = true;
			this->rdTime->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->rdTime->Location = System::Drawing::Point(541, 52);
			this->rdTime->Name = L"rdTime";
			this->rdTime->Size = System::Drawing::Size(48, 17);
			this->rdTime->TabIndex = 5;
			this->rdTime->TabStop = true;
			this->rdTime->Text = L"Time";
			this->rdTime->UseVisualStyleBackColor = true;
			// 
			// btnSearch
			// 
			this->btnSearch->Location = System::Drawing::Point(440, 75);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(161, 23);
			this->btnSearch->TabIndex = 6;
			this->btnSearch->Text = L"Search";
			this->btnSearch->UseVisualStyleBackColor = true;
			// 
			// btnRefresh
			// 
			this->btnRefresh->Location = System::Drawing::Point(440, 499);
			this->btnRefresh->Name = L"btnRefresh";
			this->btnRefresh->Size = System::Drawing::Size(161, 23);
			this->btnRefresh->TabIndex = 7;
			this->btnRefresh->Text = L"Refresh";
			this->btnRefresh->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->groupBox1->Controls->Add(this->gb1lb2);
			this->groupBox1->Controls->Add(this->gb1lb1);
			this->groupBox1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->groupBox1->Location = System::Drawing::Point(440, 169);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(161, 100);
			this->groupBox1->TabIndex = 8;
			this->groupBox1->TabStop = false;
			// 
			// gb1lb2
			// 
			this->gb1lb2->AutoSize = true;
			this->gb1lb2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->gb1lb2->Location = System::Drawing::Point(43, 43);
			this->gb1lb2->Name = L"gb1lb2";
			this->gb1lb2->Size = System::Drawing::Size(81, 13);
			this->gb1lb2->TabIndex = 1;
			this->gb1lb2->Text = L"George Barroso";
			// 
			// gb1lb1
			// 
			this->gb1lb1->AutoSize = true;
			this->gb1lb1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->gb1lb1->Location = System::Drawing::Point(34, 16);
			this->gb1lb1->Name = L"gb1lb1";
			this->gb1lb1->Size = System::Drawing::Size(52, 13);
			this->gb1lb1->TabIndex = 0;
			this->gb1lb1->Text = L"Attending";
			// 
			// groupBox2
			// 
			this->groupBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->groupBox2->Controls->Add(this->gb2lb2);
			this->groupBox2->Controls->Add(this->gb2lb1);
			this->groupBox2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->groupBox2->Location = System::Drawing::Point(440, 295);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(161, 100);
			this->groupBox2->TabIndex = 9;
			this->groupBox2->TabStop = false;
			// 
			// gb2lb2
			// 
			this->gb2lb2->AutoSize = true;
			this->gb2lb2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->gb2lb2->Location = System::Drawing::Point(53, 40);
			this->gb2lb2->Name = L"gb2lb2";
			this->gb2lb2->Size = System::Drawing::Size(46, 13);
			this->gb2lb2->TabIndex = 1;
			this->gb2lb2->Text = L"Tim Bob";
			// 
			// gb2lb1
			// 
			this->gb2lb1->AutoSize = true;
			this->gb2lb1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->gb2lb1->Location = System::Drawing::Point(17, 16);
			this->gb2lb1->Name = L"gb2lb1";
			this->gb2lb1->Size = System::Drawing::Size(127, 13);
			this->gb2lb1->TabIndex = 0;
			this->gb2lb1->Text = L"Student Currently Waiting";
			// 
			// AdvisorView
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(613, 534);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->btnRefresh);
			this->Controls->Add(this->btnSearch);
			this->Controls->Add(this->rdTime);
			this->Controls->Add(this->rbID);
			this->Controls->Add(this->rbName);
			this->Controls->Add(this->tbSearch);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridAppointments);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"AdvisorView";
			this->Text = L"EnTec Advisor Apointments";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &AdvisorView::AdvisorView_FormClosed);
			this->Load += gcnew System::EventHandler(this, &AdvisorView::AdvisorView_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridAppointments))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void AdvisorView_Load(System::Object^  sender, System::EventArgs^  e) {
	}


private: System::Void AdvisorView_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
	exit(0);
}
};
}
