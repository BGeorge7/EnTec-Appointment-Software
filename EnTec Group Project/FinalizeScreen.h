#pragma once

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
	public:
		FinalizeScreen(void)
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
		~FinalizeScreen()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::GroupBox^  groupBox6;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::GroupBox^  groupBox7;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::GroupBox^  groupBox8;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::GroupBox^  groupBox9;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Button^  btnBack;
	private: System::Windows::Forms::Button^  btnFinish;




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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->groupBox9 = (gcnew System::Windows::Forms::GroupBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->btnFinish = (gcnew System::Windows::Forms::Button());
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
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(281, 38);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(38, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Name:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(50, 16);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(71, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Jimmy Bob Jr.";
			this->label2->Click += gcnew System::EventHandler(this, &FinalizeScreen::label2_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Location = System::Drawing::Point(12, 56);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(281, 38);
			this->groupBox2->TabIndex = 3;
			this->groupBox2->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(85, 16);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(111, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"TestEmail@gmail.com";
			this->label3->Click += gcnew System::EventHandler(this, &FinalizeScreen::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 16);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(76, 13);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Email Address:";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label5);
			this->groupBox3->Controls->Add(this->label6);
			this->groupBox3->Location = System::Drawing::Point(12, 100);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(281, 38);
			this->groupBox3->TabIndex = 4;
			this->groupBox3->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(70, 16);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(67, 13);
			this->label5->TabIndex = 2;
			this->label5->Text = L"1000458973";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(6, 16);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(61, 13);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Student ID:";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->label7);
			this->groupBox4->Controls->Add(this->label8);
			this->groupBox4->Location = System::Drawing::Point(12, 144);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(281, 38);
			this->groupBox4->TabIndex = 5;
			this->groupBox4->TabStop = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(79, 16);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(63, 13);
			this->label7->TabIndex = 2;
			this->label7->Text = L"Technology";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(6, 16);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(70, 13);
			this->label8->TabIndex = 1;
			this->label8->Text = L"Degree Field:";
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->label9);
			this->groupBox5->Controls->Add(this->label10);
			this->groupBox5->Location = System::Drawing::Point(12, 188);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(281, 38);
			this->groupBox5->TabIndex = 6;
			this->groupBox5->TabStop = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(54, 16);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(94, 13);
			this->label9->TabIndex = 2;
			this->label9->Text = L"Computer Science";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(6, 16);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(45, 13);
			this->label10->TabIndex = 1;
			this->label10->Text = L"Degree:";
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->label11);
			this->groupBox6->Controls->Add(this->label12);
			this->groupBox6->Location = System::Drawing::Point(299, 12);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(281, 38);
			this->groupBox6->TabIndex = 7;
			this->groupBox6->TabStop = false;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(54, 16);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(33, 13);
			this->label11->TabIndex = 2;
			this->label11->Text = L"Maria";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(6, 16);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(45, 13);
			this->label12->TabIndex = 1;
			this->label12->Text = L"Advisor:";
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->label13);
			this->groupBox7->Controls->Add(this->label14);
			this->groupBox7->Location = System::Drawing::Point(299, 56);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(281, 38);
			this->groupBox7->TabIndex = 8;
			this->groupBox7->TabStop = false;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(104, 16);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(59, 13);
			this->label13->TabIndex = 2;
			this->label13->Text = L"1/10/2017";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(6, 16);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(95, 13);
			this->label14->TabIndex = 1;
			this->label14->Text = L"Appointment Date:";
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->label15);
			this->groupBox8->Controls->Add(this->label16);
			this->groupBox8->Location = System::Drawing::Point(299, 100);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(281, 38);
			this->groupBox8->TabIndex = 9;
			this->groupBox8->TabStop = false;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(104, 16);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(47, 13);
			this->label15->TabIndex = 2;
			this->label15->Text = L"8:45 AM";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(6, 16);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(95, 13);
			this->label16->TabIndex = 1;
			this->label16->Text = L"Appointment Time:";
			// 
			// groupBox9
			// 
			this->groupBox9->Controls->Add(this->label17);
			this->groupBox9->Controls->Add(this->label18);
			this->groupBox9->Location = System::Drawing::Point(299, 144);
			this->groupBox9->Name = L"groupBox9";
			this->groupBox9->Size = System::Drawing::Size(281, 38);
			this->groupBox9->TabIndex = 10;
			this->groupBox9->TabStop = false;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(121, 16);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(24, 13);
			this->label17->TabIndex = 2;
			this->label17->Text = L"IEP";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(6, 16);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(109, 13);
			this->label18->TabIndex = 1;
			this->label18->Text = L"Appointment Reason:";
			// 
			// btnBack
			// 
			this->btnBack->Location = System::Drawing::Point(21, 358);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(83, 23);
			this->btnBack->TabIndex = 11;
			this->btnBack->Text = L"Back";
			this->btnBack->UseVisualStyleBackColor = true;
			this->btnBack->Click += gcnew System::EventHandler(this, &FinalizeScreen::button1_Click);
			// 
			// btnFinish
			// 
			this->btnFinish->Location = System::Drawing::Point(657, 358);
			this->btnFinish->Name = L"btnFinish";
			this->btnFinish->Size = System::Drawing::Size(83, 23);
			this->btnFinish->TabIndex = 12;
			this->btnFinish->Text = L"Finish";
			this->btnFinish->UseVisualStyleBackColor = true;
			this->btnFinish->Click += gcnew System::EventHandler(this, &FinalizeScreen::btnFinish_Click);
			// 
			// FinalizeScreen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(752, 393);
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
			this->Name = L"FinalizeScreen";
			this->Text = L"EnTec Advisor Apointments";
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

		}
#pragma endregion

	private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	}
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void btnFinish_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("Apointment has been set!", "Done",
	MessageBoxButtons::OK, MessageBoxIcon::Information);
	this->Hide();
	//TODO: Go Back to Start
	//Refer to this: https://stackoverflow.com/questions/5768613/c-cli-how-to-open-a-new-form-and-back
	//and this: http://www.functionx.com/vcnet/Lesson07.htm

}
};
}
