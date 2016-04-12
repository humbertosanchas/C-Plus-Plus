#pragma once

#include "ClockType.h"

namespace ClockExample {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
  using namespace ClockClass;

	/// <summary>
	/// Summary for frmClockExample
	/// </summary>
	public ref class frmClockExample : public System::Windows::Forms::Form
	{

	public:
		frmClockExample(void)
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
		~frmClockExample()
		{
			if (components)
			{
				delete components;
			}
		}
  private: System::Windows::Forms::Label^  lblTime;
  private: System::Windows::Forms::GroupBox^  groupBox1;
  private: System::Windows::Forms::Button^  btnAddSecond;
  private: System::Windows::Forms::Button^  btnAddMinute;
  private: System::Windows::Forms::Button^  btnAddHour;
  private: System::Windows::Forms::GroupBox^  groupBox2;
  private: System::Windows::Forms::Label^  label3;
  private: System::Windows::Forms::TextBox^  txtSecond;
  private: System::Windows::Forms::Label^  label2;
  private: System::Windows::Forms::TextBox^  txtMinute;
  private: System::Windows::Forms::Label^  label1;
  private: System::Windows::Forms::TextBox^  txtHour;
  private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::ComponentModel::IContainer^  components;
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->lblTime = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->btnAddSecond = (gcnew System::Windows::Forms::Button());
			this->btnAddMinute = (gcnew System::Windows::Forms::Button());
			this->btnAddHour = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtSecond = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtMinute = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtHour = (gcnew System::Windows::Forms::TextBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// lblTime
			// 
			this->lblTime->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 40, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTime->Location = System::Drawing::Point(39, 9);
			this->lblTime->Name = L"lblTime";
			this->lblTime->Size = System::Drawing::Size(248, 63);
			this->lblTime->TabIndex = 0;
			this->lblTime->Text = L"00:00:00";
			this->lblTime->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->btnAddSecond);
			this->groupBox1->Controls->Add(this->btnAddMinute);
			this->groupBox1->Controls->Add(this->btnAddHour);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(12, 75);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(162, 183);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Increment Time";
			// 
			// btnAddSecond
			// 
			this->btnAddSecond->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAddSecond->Location = System::Drawing::Point(38, 100);
			this->btnAddSecond->Name = L"btnAddSecond";
			this->btnAddSecond->Size = System::Drawing::Size(81, 30);
			this->btnAddSecond->TabIndex = 4;
			this->btnAddSecond->Text = L"Second";
			this->btnAddSecond->UseVisualStyleBackColor = true;
			this->btnAddSecond->Click += gcnew System::EventHandler(this, &frmClockExample::btnAddSecond_Click);
			// 
			// btnAddMinute
			// 
			this->btnAddMinute->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAddMinute->Location = System::Drawing::Point(38, 64);
			this->btnAddMinute->Name = L"btnAddMinute";
			this->btnAddMinute->Size = System::Drawing::Size(81, 30);
			this->btnAddMinute->TabIndex = 3;
			this->btnAddMinute->Text = L"Minute";
			this->btnAddMinute->UseVisualStyleBackColor = true;
			this->btnAddMinute->Click += gcnew System::EventHandler(this, &frmClockExample::btnAddMinute_Click);
			// 
			// btnAddHour
			// 
			this->btnAddHour->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAddHour->Location = System::Drawing::Point(38, 27);
			this->btnAddHour->Name = L"btnAddHour";
			this->btnAddHour->Size = System::Drawing::Size(81, 31);
			this->btnAddHour->TabIndex = 2;
			this->btnAddHour->Text = L"Hour";
			this->btnAddHour->UseVisualStyleBackColor = true;
			this->btnAddHour->Click += gcnew System::EventHandler(this, &frmClockExample::btnAddHour_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->txtSecond);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->txtMinute);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->txtHour);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(180, 75);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(127, 183);
			this->groupBox2->TabIndex = 3;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Set Time";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(10, 147);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(97, 30);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Apply";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmClockExample::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(6, 107);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(64, 20);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Second";
			// 
			// txtSecond
			// 
			this->txtSecond->Location = System::Drawing::Point(72, 101);
			this->txtSecond->Name = L"txtSecond";
			this->txtSecond->Size = System::Drawing::Size(35, 26);
			this->txtSecond->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(6, 69);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 20);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Minute";
			// 
			// txtMinute
			// 
			this->txtMinute->Location = System::Drawing::Point(72, 66);
			this->txtMinute->Name = L"txtMinute";
			this->txtMinute->Size = System::Drawing::Size(35, 26);
			this->txtMinute->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(6, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Hour";
			// 
			// txtHour
			// 
			this->txtHour->Location = System::Drawing::Point(72, 29);
			this->txtHour->Name = L"txtHour";
			this->txtHour->Size = System::Drawing::Size(35, 26);
			this->txtHour->TabIndex = 0;
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 10;
			this->timer1->Tick += gcnew System::EventHandler(this, &frmClockExample::timer1_Tick);
			// 
			// frmClockExample
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(328, 270);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->lblTime);
			this->Name = L"frmClockExample";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Clock Example";
			this->groupBox1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	// Your Code Goes Here --------------
		private: clockType clock;
				 

		private: System::Void DisplayTime()
		{
			int hour, min, sec;
			String^ strH, ^strM, ^strS;

			clock.getTime(hour, min, sec);
			strH = hour.ToString();
			if (strH->Length == 1)
			{
				strH = "0" + strH;
			}

			strM = min.ToString();
			if (strM->Length == 1)
			{
				strM = "0" + strM;
			}

			strS = sec.ToString();
			if (strS->Length == 1)
			{
				strS = "0" + strS;
			}

			lblTime->Text = strH + ":" + strM + ":" + strS;
		}

  private: System::Void btnAddHour_Click(System::Object^  sender, System::EventArgs^  e)
  {
	  clock.incrementHours();
	  DisplayTime();
  }
private: System::Void btnAddMinute_Click(System::Object^  sender, System::EventArgs^  e)
{
	clock.incrementMinutes();
	DisplayTime();
}
private: System::Void btnAddSecond_Click(System::Object^  sender, System::EventArgs^  e) 
{
	clock.incrementSeconds();
	DisplayTime();
}


private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
{
	int hour, min, sec;

	if (txtHour->Text != "")
	{
		hour = Convert::ToInt32(txtHour->Text);
	}
	if (txtMinute->Text != "")
	{
		min = Convert::ToInt32(txtMinute->Text);
	}
	if (txtSecond->Text != "")
	{
		sec = Convert::ToInt32(txtSecond->Text);
	}
	clock.setTime(hour, min, sec);
	DisplayTime();
}
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) 
{
	clock.incrementSeconds();
	DisplayTime();
}
};
}

