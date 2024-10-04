#pragma once
#include "login.h"
#include "resgisteruser.h"
#include "registerasdelivery.h"
#include "Loginasdelivery.h"


namespace OOPFINALPROJECTSEMESTER2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button2;




	protected:

	protected:



	protected:


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->AutoSize = true;
			this->button1->BackColor = System::Drawing::Color::LightGray;
			this->button1->Cursor = System::Windows::Forms::Cursors::PanNW;
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(841, 340);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(246, 58);
			this->button1->TabIndex = 19;
			this->button1->Text = L"LOGIN";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click_1);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::LightGray;
			this->button3->Font = (gcnew System::Drawing::Font(L"Arial", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button3->Location = System::Drawing::Point(841, 472);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(246, 58);
			this->button3->TabIndex = 21;
			this->button3->Text = L"SIGN UP";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::LightGray;
			this->button4->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button4->Location = System::Drawing::Point(841, 606);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(246, 58);
			this->button4->TabIndex = 22;
			this->button4->Text = L"SIGN UP AS DELIVERY PERSON";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm1::button4_Click);
			// 
			// button2
			// 
			this->button2->AutoSize = true;
			this->button2->BackColor = System::Drawing::Color::LightGray;
			this->button2->Cursor = System::Windows::Forms::Cursors::PanNW;
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button2->Location = System::Drawing::Point(841, 734);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(252, 58);
			this->button2->TabIndex = 23;
			this->button2->Text = L"LOGIN AS DELIVERY PERSON\r\n";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1904, 1041);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Cursor = System::Windows::Forms::Cursors::PanNW;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm1";
			this->Text = L"TASTY TRIALS";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	public:bool switchtologin = false;
	private: System::Void llLogin_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	}
	
	
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		OOPFINALPROJECTSEMESTER2::login^ login1 = gcnew OOPFINALPROJECTSEMESTER2::login(this);
		login1->Show(); // Show MyForm1
		this->Hide(); // Hide the current form  

	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	OOPFINALPROJECTSEMESTER2::resgisteruser^ reg1 = gcnew OOPFINALPROJECTSEMESTER2::resgisteruser(this);
	reg1->Show(); // Show MyForm1
	this->Hide(); // Hide the current form

}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	OOPFINALPROJECTSEMESTER2::registerasdelivery^ reg2 = gcnew OOPFINALPROJECTSEMESTER2::registerasdelivery(this);
	reg2->Show(); // Show MyForm1
	this->Hide();


}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	OOPFINALPROJECTSEMESTER2::Loginasdelivery^ log2 = gcnew OOPFINALPROJECTSEMESTER2::Loginasdelivery(this);
	log2->Show(); // Show MyForm1
	this->Hide();


}
};
}
