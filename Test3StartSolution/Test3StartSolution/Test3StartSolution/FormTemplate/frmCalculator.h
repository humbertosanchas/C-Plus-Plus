#pragma once



namespace FormCalculator {

	#include "AboutForm.h"

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;	

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class frmCalculator : public System::Windows::Forms::Form
	{
	public:
		frmCalculator(void)
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
		~frmCalculator()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  mnuMain;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
	private: System::Windows::Forms::TextBox^  txtInput;






	private: System::Windows::Forms::Button^  btnFour;







	private: System::Windows::Forms::Button^  btnOne;


	private: System::Windows::Forms::Button^  btnClearAll;





	private: System::Windows::Forms::Button^  btnFive;
	private: System::Windows::Forms::Button^  btnSix;







	private: System::Windows::Forms::Button^  btnDivide;




	private: System::Windows::Forms::Button^  btnTwo;
	private: System::Windows::Forms::Button^  btnThree;


	private: System::Windows::Forms::Button^  btnMult;



	private: System::Windows::Forms::Button^  btnPlus;
	private: System::Windows::Forms::Button^  btnZero;
	private: System::Windows::Forms::Button^  btnEqual;
	private: System::Windows::Forms::Button^  btnSubtract;
	private: System::Windows::Forms::Button^  btnNine;
	private: System::Windows::Forms::Button^  btnEight;
	private: System::Windows::Forms::Button^  btnSeven;
	private: System::Windows::Forms::Button^  btnExit;





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
			this->mnuMain = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->txtInput = (gcnew System::Windows::Forms::TextBox());
			this->btnFour = (gcnew System::Windows::Forms::Button());
			this->btnOne = (gcnew System::Windows::Forms::Button());
			this->btnClearAll = (gcnew System::Windows::Forms::Button());
			this->btnFive = (gcnew System::Windows::Forms::Button());
			this->btnSix = (gcnew System::Windows::Forms::Button());
			this->btnDivide = (gcnew System::Windows::Forms::Button());
			this->btnTwo = (gcnew System::Windows::Forms::Button());
			this->btnThree = (gcnew System::Windows::Forms::Button());
			this->btnMult = (gcnew System::Windows::Forms::Button());
			this->btnPlus = (gcnew System::Windows::Forms::Button());
			this->btnZero = (gcnew System::Windows::Forms::Button());
			this->btnEqual = (gcnew System::Windows::Forms::Button());
			this->btnSubtract = (gcnew System::Windows::Forms::Button());
			this->btnNine = (gcnew System::Windows::Forms::Button());
			this->btnEight = (gcnew System::Windows::Forms::Button());
			this->btnSeven = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->mnuMain->SuspendLayout();
			this->SuspendLayout();
			// 
			// mnuMain
			// 
			this->mnuMain->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->fileToolStripMenuItem,
					this->aboutToolStripMenuItem
			});
			this->mnuMain->Location = System::Drawing::Point(0, 0);
			this->mnuMain->Name = L"mnuMain";
			this->mnuMain->Size = System::Drawing::Size(250, 24);
			this->mnuMain->TabIndex = 0;
			this->mnuMain->Text = L"mnuMain";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->exitToolStripMenuItem });
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(92, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmCalculator::exit_Click);
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(52, 20);
			this->aboutToolStripMenuItem->Text = L"About";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmCalculator::aboutToolStripMenuItem_Click);
			// 
			// txtInput
			// 
			this->txtInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtInput->Location = System::Drawing::Point(12, 31);
			this->txtInput->Name = L"txtInput";
			this->txtInput->Size = System::Drawing::Size(226, 29);
			this->txtInput->TabIndex = 1;
			this->txtInput->Text = L"0";
			this->txtInput->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// btnFour
			// 
			this->btnFour->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnFour->Location = System::Drawing::Point(12, 114);
			this->btnFour->Name = L"btnFour";
			this->btnFour->Size = System::Drawing::Size(38, 30);
			this->btnFour->TabIndex = 17;
			this->btnFour->Text = L"4";
			this->btnFour->UseVisualStyleBackColor = true;
			this->btnFour->Click += gcnew System::EventHandler(this, &frmCalculator::btnNumberClicked_Click);
			// 
			// btnOne
			// 
			this->btnOne->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnOne->Location = System::Drawing::Point(12, 150);
			this->btnOne->Name = L"btnOne";
			this->btnOne->Size = System::Drawing::Size(38, 30);
			this->btnOne->TabIndex = 22;
			this->btnOne->Text = L"1";
			this->btnOne->UseVisualStyleBackColor = true;
			this->btnOne->Click += gcnew System::EventHandler(this, &frmCalculator::btnNumberClicked_Click);
			// 
			// btnClearAll
			// 
			this->btnClearAll->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnClearAll->Location = System::Drawing::Point(188, 78);
			this->btnClearAll->Name = L"btnClearAll";
			this->btnClearAll->Size = System::Drawing::Size(50, 102);
			this->btnClearAll->TabIndex = 29;
			this->btnClearAll->Text = L"Clear";
			this->btnClearAll->UseVisualStyleBackColor = true;
			this->btnClearAll->Click += gcnew System::EventHandler(this, &frmCalculator::btnClearAll_Click);
			// 
			// btnFive
			// 
			this->btnFive->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnFive->Location = System::Drawing::Point(56, 114);
			this->btnFive->Name = L"btnFive";
			this->btnFive->Size = System::Drawing::Size(38, 30);
			this->btnFive->TabIndex = 18;
			this->btnFive->Text = L"5";
			this->btnFive->UseVisualStyleBackColor = true;
			this->btnFive->Click += gcnew System::EventHandler(this, &frmCalculator::btnNumberClicked_Click);
			// 
			// btnSix
			// 
			this->btnSix->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSix->Location = System::Drawing::Point(100, 114);
			this->btnSix->Name = L"btnSix";
			this->btnSix->Size = System::Drawing::Size(38, 30);
			this->btnSix->TabIndex = 19;
			this->btnSix->Text = L"6";
			this->btnSix->UseVisualStyleBackColor = true;
			this->btnSix->Click += gcnew System::EventHandler(this, &frmCalculator::btnNumberClicked_Click);
			// 
			// btnDivide
			// 
			this->btnDivide->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDivide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDivide->Location = System::Drawing::Point(144, 78);
			this->btnDivide->Name = L"btnDivide";
			this->btnDivide->Size = System::Drawing::Size(38, 30);
			this->btnDivide->TabIndex = 15;
			this->btnDivide->Text = L"/";
			this->btnDivide->UseVisualStyleBackColor = true;
			this->btnDivide->Click += gcnew System::EventHandler(this, &frmCalculator::OperationBtn_Click);
			// 
			// btnTwo
			// 
			this->btnTwo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnTwo->Location = System::Drawing::Point(56, 150);
			this->btnTwo->Name = L"btnTwo";
			this->btnTwo->Size = System::Drawing::Size(38, 30);
			this->btnTwo->TabIndex = 23;
			this->btnTwo->Text = L"2";
			this->btnTwo->UseVisualStyleBackColor = true;
			this->btnTwo->Click += gcnew System::EventHandler(this, &frmCalculator::btnNumberClicked_Click);
			// 
			// btnThree
			// 
			this->btnThree->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnThree->Location = System::Drawing::Point(100, 150);
			this->btnThree->Name = L"btnThree";
			this->btnThree->Size = System::Drawing::Size(38, 30);
			this->btnThree->TabIndex = 24;
			this->btnThree->Text = L"3";
			this->btnThree->UseVisualStyleBackColor = true;
			this->btnThree->Click += gcnew System::EventHandler(this, &frmCalculator::btnNumberClicked_Click);
			// 
			// btnMult
			// 
			this->btnMult->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMult->Location = System::Drawing::Point(144, 114);
			this->btnMult->Name = L"btnMult";
			this->btnMult->Size = System::Drawing::Size(38, 30);
			this->btnMult->TabIndex = 20;
			this->btnMult->Text = L"*";
			this->btnMult->UseVisualStyleBackColor = true;
			this->btnMult->Click += gcnew System::EventHandler(this, &frmCalculator::OperationBtn_Click);
			// 
			// btnPlus
			// 
			this->btnPlus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnPlus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPlus->Location = System::Drawing::Point(144, 186);
			this->btnPlus->Name = L"btnPlus";
			this->btnPlus->Size = System::Drawing::Size(38, 30);
			this->btnPlus->TabIndex = 28;
			this->btnPlus->Text = L"+";
			this->btnPlus->UseVisualStyleBackColor = true;
			this->btnPlus->Click += gcnew System::EventHandler(this, &frmCalculator::OperationBtn_Click);
			// 
			// btnZero
			// 
			this->btnZero->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnZero->Location = System::Drawing::Point(12, 186);
			this->btnZero->Name = L"btnZero";
			this->btnZero->Size = System::Drawing::Size(126, 30);
			this->btnZero->TabIndex = 26;
			this->btnZero->Text = L"0";
			this->btnZero->UseVisualStyleBackColor = true;
			this->btnZero->Click += gcnew System::EventHandler(this, &frmCalculator::btnNumberClicked_Click);
			// 
			// btnEqual
			// 
			this->btnEqual->Enabled = false;
			this->btnEqual->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnEqual->Location = System::Drawing::Point(188, 186);
			this->btnEqual->Name = L"btnEqual";
			this->btnEqual->Size = System::Drawing::Size(50, 66);
			this->btnEqual->TabIndex = 30;
			this->btnEqual->Text = L"=";
			this->btnEqual->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->btnEqual->UseVisualStyleBackColor = true;
			this->btnEqual->Click += gcnew System::EventHandler(this, &frmCalculator::btnEqual_Click);
			// 
			// btnSubtract
			// 
			this->btnSubtract->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSubtract->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSubtract->Location = System::Drawing::Point(144, 150);
			this->btnSubtract->Name = L"btnSubtract";
			this->btnSubtract->Size = System::Drawing::Size(38, 30);
			this->btnSubtract->TabIndex = 25;
			this->btnSubtract->Text = L"-";
			this->btnSubtract->TextImageRelation = System::Windows::Forms::TextImageRelation::TextAboveImage;
			this->btnSubtract->UseVisualStyleBackColor = true;
			this->btnSubtract->Click += gcnew System::EventHandler(this, &frmCalculator::OperationBtn_Click);
			// 
			// btnNine
			// 
			this->btnNine->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnNine->Location = System::Drawing::Point(100, 78);
			this->btnNine->Name = L"btnNine";
			this->btnNine->Size = System::Drawing::Size(38, 30);
			this->btnNine->TabIndex = 14;
			this->btnNine->Text = L"9";
			this->btnNine->UseVisualStyleBackColor = true;
			this->btnNine->Click += gcnew System::EventHandler(this, &frmCalculator::btnNumberClicked_Click);
			// 
			// btnEight
			// 
			this->btnEight->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnEight->Location = System::Drawing::Point(56, 78);
			this->btnEight->Name = L"btnEight";
			this->btnEight->Size = System::Drawing::Size(38, 30);
			this->btnEight->TabIndex = 13;
			this->btnEight->Text = L"8";
			this->btnEight->UseVisualStyleBackColor = true;
			this->btnEight->Click += gcnew System::EventHandler(this, &frmCalculator::btnNumberClicked_Click);
			// 
			// btnSeven
			// 
			this->btnSeven->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSeven->Location = System::Drawing::Point(12, 78);
			this->btnSeven->Name = L"btnSeven";
			this->btnSeven->Size = System::Drawing::Size(38, 30);
			this->btnSeven->TabIndex = 12;
			this->btnSeven->Text = L"7";
			this->btnSeven->UseVisualStyleBackColor = true;
			this->btnSeven->Click += gcnew System::EventHandler(this, &frmCalculator::btnNumberClicked_Click);
			// 
			// btnExit
			// 
			this->btnExit->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->btnExit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnExit->Location = System::Drawing::Point(13, 222);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(169, 30);
			this->btnExit->TabIndex = 31;
			this->btnExit->Text = L"Exit";
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &frmCalculator::exit_Click);
			// 
			// frmCalculator
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CancelButton = this->btnExit;
			this->ClientSize = System::Drawing::Size(250, 263);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->btnNine);
			this->Controls->Add(this->btnEight);
			this->Controls->Add(this->btnSeven);
			this->Controls->Add(this->btnSubtract);
			this->Controls->Add(this->btnEqual);
			this->Controls->Add(this->btnZero);
			this->Controls->Add(this->btnPlus);
			this->Controls->Add(this->btnMult);
			this->Controls->Add(this->btnThree);
			this->Controls->Add(this->btnTwo);
			this->Controls->Add(this->btnDivide);
			this->Controls->Add(this->btnSix);
			this->Controls->Add(this->btnFive);
			this->Controls->Add(this->btnClearAll);
			this->Controls->Add(this->btnOne);
			this->Controls->Add(this->btnFour);
			this->Controls->Add(this->txtInput);
			this->Controls->Add(this->mnuMain);
			this->MainMenuStrip = this->mnuMain;
			this->Name = L"frmCalculator";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Calculator";
			this->mnuMain->ResumeLayout(false);
			this->mnuMain->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//vars to store data to preform calculations
		bool calComplete = false;
		bool isOperationClicked = false;
		int firstNum;
		int secondNum;
		int result;
		String ^operationToPreform;
		//Your code goes here
	private: System::Void OperationBtn_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		//check if an operation has been selected already
		if (!isOperationClicked)
		{
			//determine if the button click was a operation or not 
			Button ^operation = safe_cast<Button^>(sender);
			//if it was store the txtbox value as a number and store the operation selected and disable opertation button and enable equals
			if (operation->Text == "/" || operation->Text == "*" || operation->Text == "-" || operation->Text == "+")
			{
				firstNum = System::Int32::Parse(txtInput->Text);
				operationToPreform = operation->Text;
				isOperationClicked = true;
				btnDivide->Enabled = false;
				btnMult->Enabled = false;
				btnSubtract->Enabled = false;
				btnPlus->Enabled = false;
				btnEqual->Enabled = true;
				txtInput->Text = "0";
			}
		}
		//this is else is just a fall back but should never be accessable since the operation btns are disabled but leaving it in just incase the unexpected happens
		else
		{
			MessageBox::Show("the program is restricted to 2 numbers per operation", "Operation limited");
		}
	}
private: System::Void btnEqual_Click(System::Object^  sender, System::EventArgs^  e)
{
	//if an operation has been selected store txtbox value at the second number and then preform the proper calculation unless deviding by 0 also mark calculation as complete to prevent spamming the = button result in preform the select operation on the sum with the second number
	if (!calComplete)
	{ 
		if (isOperationClicked)
		{
			secondNum = System::Int32::Parse(txtInput->Text);
			if (operationToPreform == "/")
			{
				//prevent devide by 0
				if (secondNum != 0)
				{
					result = firstNum / secondNum;
					calComplete = true;
				}
				//error message if devide by zero is atempted
				else
				{
					MessageBox::Show("you can not devide a number by zero", "Operation not allowed");
				}
			}
			else if (operationToPreform == "*")
			{
				result = firstNum * secondNum;
				calComplete = true;
			}
			else if (operationToPreform == "-")
			{
				result = firstNum - secondNum;
				calComplete = true;
			}
			else if (operationToPreform == "+")
			{
				result = firstNum + secondNum;
				calComplete = true;
			}
			txtInput->Text = result.ToString();
			if (calComplete)
			{
				txtInput->ReadOnly = true;
			}
		}
	}

}
private: System::Void exit_Click(System::Object^  sender, System::EventArgs^  e) 
{
	//warning about closing the window
	if (MessageBox::Show("Do you wish to Exit?", "Are you sure?", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes)
	{
		this->Close();
	}
}
private: System::Void btnClearAll_Click(System::Object^  sender, System::EventArgs^  e) 
{
	//call the initForm to reset form to staring values
	initForm();
}
private: System::Void initForm()
{
	txtInput->Text = "0";
	firstNum = 0;
	secondNum = 0;
	result = 0;
	operationToPreform = "";
	isOperationClicked = false;
	btnDivide->Enabled = true;
	btnMult->Enabled = true;
	btnSubtract->Enabled = true;
	btnPlus->Enabled = true;
	btnEqual->Enabled = false;
	calComplete = false;
	txtInput->ReadOnly = false;
}



private: System::Void btnNumberClicked_Click(System::Object^  sender, System::EventArgs^  e) 
{
	//get the values of the number buttons selected
	Button ^numbers = safe_cast<Button^>(sender);
	txtInput->Text = numbers->Text;
}
private: System::Void aboutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
{
	//create an instance of the AboutForm and launch call the show method on it.
	FormTemplate::AboutForm ^aboutForm = gcnew FormTemplate::AboutForm();
	aboutForm->Show();
}
};
}
