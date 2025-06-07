#pragma once
#include <string>

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm4
	/// </summary>
	public ref class MyForm4 : public System::Windows::Forms::Form
	{
	public:
		MyForm4(void)
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
		~MyForm4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		
		int g;
		int k500 = 500, k200=200, k100, k50, k20, k10, k5, k2, k1;
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::SpringGreen;
			this->button1->Location = System::Drawing::Point(12, 139);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(260, 53);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Skaiciuoti";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm4::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->textBox1->Location = System::Drawing::Point(12, 36);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(260, 20);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm4::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->textBox2->Location = System::Drawing::Point(12, 85);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(260, 20);
			this->textBox2->TabIndex = 2;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm4::textBox2_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(15, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(73, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Iveskite graza";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm4::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(15, 69);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(58, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Atsakymas";
			// 
			// MyForm4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 207);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm4";
			this->Text = L"Graza";
			this->Load += gcnew System::EventHandler(this, &MyForm4::MyForm4_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm4_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		int g;
		g = int::Parse(textBox1->Text);
		textBox2->Text = "";

		int k500, k200, k100, k50, k20, k10, k5, k2, k1;

		k500 = g / 500;
		g = g % 500;

		k200 = g / 200;
		g = g % 200;

		k100 = g / 100;
		g = g % 100;

		k50 = g / 50;
		g = g % 50;

		k20 = g / 20;
		g = g % 20;

		k10 = g / 10;
		g = g % 10;

		k5 = g / 5;
		g = g % 5;

		k2 = g / 2;
		g = g % 2;

		k1 = g / 1;
		g = g % 1;

		if (k500 > 0)
		{
			textBox2->Text += " " + k500.ToString() + " x 500 | ";
		}

		if (k200 > 0)
		{
			textBox2->Text += " " + k200.ToString() + " x 200 | ";
		}

		if (k100 > 0)
		{
			textBox2->Text += " " + k100.ToString() + " x 100 | ";
		}

		if (k50 > 0)
		{
			textBox2->Text += " " + k50.ToString() + " x 50 | ";
		}

		if (k20 > 0)
		{
			textBox2->Text += " " + k20.ToString() + " x 20 | ";
		}

		if (k10 > 0)
		{
			textBox2->Text += " " + k10.ToString() + " x 10 | ";
		}

		if (k5 > 0)
		{
			textBox2->Text += " " + k5.ToString() + " x 5 | ";
		}

		if (k2 > 0)
		{
			textBox2->Text += " " + k2.ToString() + " x 2 | ";
		}

		if (k1 > 0)
		{
			textBox2->Text += " " + k1.ToString() + " x 1 | ";
		}
		

	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
