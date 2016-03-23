#pragma once

namespace FormTemplate {

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
	private: System::Windows::Forms::TextBox^  txtBill;
	private: System::Windows::Forms::TextBox^  txtDiscountAmout;
	private: System::Windows::Forms::TextBox^  txtFinalBill;
	protected:


	private: System::Windows::Forms::TextBox^  txtSavings;
	private: System::Windows::Forms::Label^  lblBill;
	private: System::Windows::Forms::Label^  lblDiscountAmount;
	private: System::Windows::Forms::Label^  lblSavings;
	private: System::Windows::Forms::Label^  lblFinalBill;
	private: System::Windows::Forms::Button^  btnCalculate;
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
			this->txtBill = (gcnew System::Windows::Forms::TextBox());
			this->txtDiscountAmout = (gcnew System::Windows::Forms::TextBox());
			this->txtFinalBill = (gcnew System::Windows::Forms::TextBox());
			this->txtSavings = (gcnew System::Windows::Forms::TextBox());
			this->lblBill = (gcnew System::Windows::Forms::Label());
			this->lblDiscountAmount = (gcnew System::Windows::Forms::Label());
			this->lblSavings = (gcnew System::Windows::Forms::Label());
			this->lblFinalBill = (gcnew System::Windows::Forms::Label());
			this->btnCalculate = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txtBill
			// 
			this->txtBill->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtBill->Location = System::Drawing::Point(234, 58);
			this->txtBill->Name = L"txtBill";
			this->txtBill->Size = System::Drawing::Size(198, 26);
			this->txtBill->TabIndex = 1;
			this->txtBill->Text = L"0";
			this->txtBill->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// txtDiscountAmout
			// 
			this->txtDiscountAmout->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDiscountAmout->Location = System::Drawing::Point(234, 108);
			this->txtDiscountAmout->Name = L"txtDiscountAmout";
			this->txtDiscountAmout->Size = System::Drawing::Size(198, 26);
			this->txtDiscountAmout->TabIndex = 3;
			this->txtDiscountAmout->Text = L"0";
			this->txtDiscountAmout->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// txtFinalBill
			// 
			this->txtFinalBill->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtFinalBill->Location = System::Drawing::Point(234, 208);
			this->txtFinalBill->Name = L"txtFinalBill";
			this->txtFinalBill->ReadOnly = true;
			this->txtFinalBill->ShortcutsEnabled = false;
			this->txtFinalBill->Size = System::Drawing::Size(198, 26);
			this->txtFinalBill->TabIndex = 7;
			this->txtFinalBill->TabStop = false;
			this->txtFinalBill->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// txtSavings
			// 
			this->txtSavings->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtSavings->Location = System::Drawing::Point(234, 158);
			this->txtSavings->Name = L"txtSavings";
			this->txtSavings->ReadOnly = true;
			this->txtSavings->Size = System::Drawing::Size(198, 26);
			this->txtSavings->TabIndex = 5;
			this->txtSavings->TabStop = false;
			this->txtSavings->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// lblBill
			// 
			this->lblBill->AutoSize = true;
			this->lblBill->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblBill->Location = System::Drawing::Point(134, 64);
			this->lblBill->Name = L"lblBill";
			this->lblBill->Size = System::Drawing::Size(43, 20);
			this->lblBill->TabIndex = 0;
			this->lblBill->Text = L"Bill :";
			// 
			// lblDiscountAmount
			// 
			this->lblDiscountAmount->AutoSize = true;
			this->lblDiscountAmount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDiscountAmount->Location = System::Drawing::Point(20, 114);
			this->lblDiscountAmount->Name = L"lblDiscountAmount";
			this->lblDiscountAmount->Size = System::Drawing::Size(157, 20);
			this->lblDiscountAmount->TabIndex = 2;
			this->lblDiscountAmount->Text = L"Discount Amount :";
			// 
			// lblSavings
			// 
			this->lblSavings->AutoSize = true;
			this->lblSavings->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblSavings->Location = System::Drawing::Point(95, 164);
			this->lblSavings->Name = L"lblSavings";
			this->lblSavings->Size = System::Drawing::Size(82, 20);
			this->lblSavings->TabIndex = 4;
			this->lblSavings->Text = L"Savings :";
			// 
			// lblFinalBill
			// 
			this->lblFinalBill->AutoSize = true;
			this->lblFinalBill->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblFinalBill->Location = System::Drawing::Point(90, 214);
			this->lblFinalBill->Name = L"lblFinalBill";
			this->lblFinalBill->Size = System::Drawing::Size(87, 20);
			this->lblFinalBill->TabIndex = 6;
			this->lblFinalBill->Text = L"Final Bill :";
			// 
			// btnCalculate
			// 
			this->btnCalculate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCalculate->Location = System::Drawing::Point(24, 273);
			this->btnCalculate->Name = L"btnCalculate";
			this->btnCalculate->Size = System::Drawing::Size(153, 33);
			this->btnCalculate->TabIndex = 8;
			this->btnCalculate->Text = L"Calculate";
			this->btnCalculate->UseVisualStyleBackColor = true;
			this->btnCalculate->Click += gcnew System::EventHandler(this, &MyForm::btnCalculate_Click);
			// 
			// btnExit
			// 
			this->btnExit->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->btnExit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnExit->Location = System::Drawing::Point(257, 273);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(153, 33);
			this->btnExit->TabIndex = 9;
			this->btnExit->Text = L"EXIT";
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &MyForm::btnExit_Click);
			// 
			// MyForm
			// 
			this->AcceptButton = this->btnCalculate;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CancelButton = this->btnExit;
			this->ClientSize = System::Drawing::Size(467, 328);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->btnCalculate);
			this->Controls->Add(this->lblFinalBill);
			this->Controls->Add(this->lblSavings);
			this->Controls->Add(this->lblDiscountAmount);
			this->Controls->Add(this->lblBill);
			this->Controls->Add(this->txtSavings);
			this->Controls->Add(this->txtFinalBill);
			this->Controls->Add(this->txtDiscountAmout);
			this->Controls->Add(this->txtBill);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Discount Calculator";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void btnCalculate_Click(System::Object^  sender, System::EventArgs^  e)
{
	float subtotal = float::Parse(txtBill->Text);
	float discount = float::Parse(txtDiscountAmout->Text);
	double savings = (subtotal * (discount / 100));
	txtSavings->Text = savings.ToString();
	txtFinalBill->Text = (subtotal - savings).ToString();

}

private: System::Void btnExit_Click(System::Object^  sender, System::EventArgs^  e)
{
	this->Close();
}
};
}