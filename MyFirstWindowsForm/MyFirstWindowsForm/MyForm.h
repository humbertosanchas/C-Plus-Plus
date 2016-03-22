#pragma once

namespace MyFirstWindowsForm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnAdd;
	private: System::Windows::Forms::Button^  btnClear;
	private: System::Windows::Forms::TextBox^  txtNum1;
	protected:

	protected:


	private: System::Windows::Forms::Label^  lblNum1;
	private: System::Windows::Forms::Label^  lblNum2;
	private: System::Windows::Forms::TextBox^  txtNum2;

	private: System::Windows::Forms::Label^  lblAnswer;
	private: System::Windows::Forms::Label^  lblAnswerResult;
	private: System::Windows::Forms::Label^  lblTitle;



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
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->txtNum1 = (gcnew System::Windows::Forms::TextBox());
			this->lblNum1 = (gcnew System::Windows::Forms::Label());
			this->lblNum2 = (gcnew System::Windows::Forms::Label());
			this->txtNum2 = (gcnew System::Windows::Forms::TextBox());
			this->lblAnswer = (gcnew System::Windows::Forms::Label());
			this->lblAnswerResult = (gcnew System::Windows::Forms::Label());
			this->lblTitle = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(31, 206);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(75, 23);
			this->btnAdd->TabIndex = 0;
			this->btnAdd->Text = L"Add";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &MyForm::btnAdd_Click);
			// 
			// btnClear
			// 
			this->btnClear->Location = System::Drawing::Point(127, 206);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(75, 23);
			this->btnClear->TabIndex = 1;
			this->btnClear->Text = L"Clear";
			this->btnClear->UseVisualStyleBackColor = true;
			this->btnClear->Click += gcnew System::EventHandler(this, &MyForm::btnClear_Click);
			// 
			// txtNum1
			// 
			this->txtNum1->Location = System::Drawing::Point(102, 81);
			this->txtNum1->Name = L"txtNum1";
			this->txtNum1->Size = System::Drawing::Size(100, 20);
			this->txtNum1->TabIndex = 2;
			// 
			// lblNum1
			// 
			this->lblNum1->AutoSize = true;
			this->lblNum1->Location = System::Drawing::Point(28, 87);
			this->lblNum1->Name = L"lblNum1";
			this->lblNum1->Size = System::Drawing::Size(53, 13);
			this->lblNum1->TabIndex = 3;
			this->lblNum1->Text = L"Number 1";
			// 
			// lblNum2
			// 
			this->lblNum2->AutoSize = true;
			this->lblNum2->Location = System::Drawing::Point(28, 122);
			this->lblNum2->Name = L"lblNum2";
			this->lblNum2->Size = System::Drawing::Size(53, 13);
			this->lblNum2->TabIndex = 4;
			this->lblNum2->Text = L"Number 2";
			// 
			// txtNum2
			// 
			this->txtNum2->Location = System::Drawing::Point(102, 115);
			this->txtNum2->Name = L"txtNum2";
			this->txtNum2->Size = System::Drawing::Size(100, 20);
			this->txtNum2->TabIndex = 5;
			// 
			// lblAnswer
			// 
			this->lblAnswer->AutoSize = true;
			this->lblAnswer->Location = System::Drawing::Point(28, 159);
			this->lblAnswer->Name = L"lblAnswer";
			this->lblAnswer->Size = System::Drawing::Size(42, 13);
			this->lblAnswer->TabIndex = 6;
			this->lblAnswer->Text = L"Answer";
			// 
			// lblAnswerResult
			// 
			this->lblAnswerResult->AutoSize = true;
			this->lblAnswerResult->Location = System::Drawing::Point(102, 159);
			this->lblAnswerResult->Name = L"lblAnswerResult";
			this->lblAnswerResult->Size = System::Drawing::Size(0, 13);
			this->lblAnswerResult->TabIndex = 7;
			// 
			// lblTitle
			// 
			this->lblTitle->AutoSize = true;
			this->lblTitle->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTitle->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lblTitle->Location = System::Drawing::Point(14, 9);
			this->lblTitle->Name = L"lblTitle";
			this->lblTitle->Size = System::Drawing::Size(225, 26);
			this->lblTitle->TabIndex = 8;
			this->lblTitle->Text = L"Simple Adding Form";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(251, 261);
			this->Controls->Add(this->lblTitle);
			this->Controls->Add(this->lblAnswerResult);
			this->Controls->Add(this->lblAnswer);
			this->Controls->Add(this->txtNum2);
			this->Controls->Add(this->lblNum2);
			this->Controls->Add(this->lblNum1);
			this->Controls->Add(this->txtNum1);
			this->Controls->Add(this->btnClear);
			this->Controls->Add(this->btnAdd);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


private: System::Void btnAdd_Click(System::Object^  sender, System::EventArgs^  e)
{
	int answer = (int::Parse(txtNum1->Text) + int::Parse(txtNum2->Text));
	lblAnswerResult->Text = answer.ToString();
}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) 
{
}
private: System::Void btnClear_Click(System::Object^  sender, System::EventArgs^  e) 
{
	txtNum1->Clear();
	txtNum2->Clear();
	lblAnswerResult->Text = "";
}
};
}
