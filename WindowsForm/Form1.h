#include "Form2.h"
#include "Form2.h"
#include "Form3.h"
#include "MyForm4.h"
#include "MyForm5.h"
#include "MyForm6.h"
#include "MyForm7.h"

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ autoriusToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ iseitiToolStripMenuItem;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->autoriusToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->iseitiToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->button1->Location = System::Drawing::Point(12, 37);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(260, 40);
			this->button1->TabIndex = 0;
			this->button1->Text = L"[1] INICIALAI";
			this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->autoriusToolStripMenuItem,
					this->iseitiToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(284, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &Form1::menuStrip1_ItemClicked);
			// 
			// autoriusToolStripMenuItem
			// 
			this->autoriusToolStripMenuItem->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->autoriusToolStripMenuItem->Name = L"autoriusToolStripMenuItem";
			this->autoriusToolStripMenuItem->Size = System::Drawing::Size(64, 20);
			this->autoriusToolStripMenuItem->Text = L"Autorius";
			this->autoriusToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::autoriusToolStripMenuItem_Click);
			// 
			// iseitiToolStripMenuItem
			// 
			this->iseitiToolStripMenuItem->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->iseitiToolStripMenuItem->Name = L"iseitiToolStripMenuItem";
			this->iseitiToolStripMenuItem->Size = System::Drawing::Size(43, 20);
			this->iseitiToolStripMenuItem->Text = L"Iseiti";
			this->iseitiToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::iseitiToolStripMenuItem_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->button2->Location = System::Drawing::Point(12, 83);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(260, 40);
			this->button2->TabIndex = 2;
			this->button2->Text = L"[2] GRAZA";
			this->button2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->button3->Location = System::Drawing::Point(12, 129);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(260, 40);
			this->button3->TabIndex = 3;
			this->button3->Text = L"[3] SKAICIUOTUVAS";
			this->button3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->button4->Location = System::Drawing::Point(12, 175);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(260, 40);
			this->button4->TabIndex = 4;
			this->button4->Text = L"[4] SLAPTAZODIS";
			this->button4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->button5->Location = System::Drawing::Point(12, 221);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(259, 39);
			this->button5->TabIndex = 5;
			this->button5->Text = L"[5] SARASAS";
			this->button5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 271);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"Meniu";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Form2^ forma = gcnew Form2();
		forma->Show();
	}
	private: System::Void iseitiToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
private: System::Void autoriusToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Form3^ forma = gcnew Form3();
		forma->Show();

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm4^ forma = gcnew MyForm4();
		forma->Show();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm5^ forma = gcnew MyForm5();
		forma->Show();
}
private: System::Void menuStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

		MyForm6^ forma = gcnew MyForm6();
		forma->Show();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

		MyForm7^ forma = gcnew MyForm7();
		forma->Show();

}
};
}
