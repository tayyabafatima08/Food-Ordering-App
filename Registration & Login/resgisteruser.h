#pragma once

#include "MyForm1.h"
#include "MyForm.h"
#include "dashboard.h"
#include "PROFILE.h"
//#include <iostream>
namespace OOPFINALPROJECTSEMESTER2
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for resgisteruser
	/// </summary>
	public ref class resgisteruser : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		resgisteruser(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		resgisteruser(Form^ obj1)
		{
			obj = obj1;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		String^ conn = "Data Source=localhost\\sqlexpress;Initial Catalog=login;Integrated Security=True";
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~resgisteruser()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	public:
		String^ nameofuser; String^ emailofuser; String^ address;
		String^ mobilenoofuser;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(resgisteruser::typeid));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(830, 240);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(277, 55);
			this->label2->TabIndex = 1;
			this->label2->Text = L"REGISTER";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(512, 358);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(82, 29);
			this->label4->TabIndex = 3;
			this->label4->Text = L"NAME";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(512, 431);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(83, 29);
			this->label5->TabIndex = 4;
			this->label5->Text = L"EMAIL";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(512, 512);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(142, 29);
			this->label6->TabIndex = 5;
			this->label6->Text = L"PHONE NO";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(512, 591);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(127, 29);
			this->label7->TabIndex = 6;
			this->label7->Text = L"ADDRESS";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(512, 671);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(151, 29);
			this->label8->TabIndex = 7;
			this->label8->Text = L"PASSWORD";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(797, 358);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(405, 26);
			this->textBox1->TabIndex = 8;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &resgisteruser::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(797, 431);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(405, 26);
			this->textBox2->TabIndex = 9;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(797, 512);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(405, 26);
			this->textBox3->TabIndex = 10;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(797, 591);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(405, 26);
			this->textBox4->TabIndex = 11;
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(797, 680);
			this->textBox5->Name = L"textBox5";
			this->textBox5->PasswordChar = '*';
			this->textBox5->Size = System::Drawing::Size(405, 26);
			this->textBox5->TabIndex = 12;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(512, 747);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(269, 29);
			this->label9->TabIndex = 13;
			this->label9->Text = L"CONFIRM PASSWORD";
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(797, 747);
			this->textBox6->Name = L"textBox6";
			this->textBox6->PasswordChar = '*';
			this->textBox6->Size = System::Drawing::Size(405, 26);
			this->textBox6->TabIndex = 14;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::WindowText;
			this->button1->Cursor = System::Windows::Forms::Cursors::PanNW;
			this->button1->ForeColor = System::Drawing::SystemColors::Control;
			this->button1->Location = System::Drawing::Point(922, 843);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(145, 39);
			this->button1->TabIndex = 15;
			this->button1->Text = L"SIGN UP";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &resgisteruser::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->ForeColor = System::Drawing::Color::RosyBrown;
			this->button2->Location = System::Drawing::Point(29, 56);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(72, 69);
			this->button2->TabIndex = 16;
			this->button2->TextAlign = System::Drawing::ContentAlignment::TopLeft;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &resgisteruser::button2_Click);
			// 
			// resgisteruser
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1904, 1041);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Cursor = System::Windows::Forms::Cursors::PanNW;
			this->Name = L"resgisteruser";
			this->Text = L"TASTY TRIALS";
			this->Load += gcnew System::EventHandler(this, &resgisteruser::resgisteruser_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Hide();
		obj->Show();
		
	}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ name = textBox1->Text;
	String^ email = textBox2->Text;
	String^ phoneno = textBox3->Text;
	String^ address = textBox4->Text;
	String^ password = textBox5->Text;
	String^ confirmpassword = textBox6->Text;
	int totalorders = 0;
	int welcome_token = 1;
	int homedelivery_token = 0;
	int reward_token = 0;
	int snacknfun_token = 0;
	int beverages_token = 0;
	int super_offer_token = 0;
	int limited_offer_token = 0;
	int ramadan_offer = 0;
	int eid_offer = 0;
	if (name->Length==0 || email->Length==0 || phoneno->Length==0 || address->Length==0 || password->Length==0 || confirmpassword->Length==0)
	{
		MessageBox::Show("Please enter all the fields", "One or more empty fields", MessageBoxButtons::OK);
		return;
	}
	if (String::Compare(password, confirmpassword) != 0)
	{
		MessageBox::Show("Password and Confirm Password does not match", "Password Error", MessageBoxButtons::OK);
		return;
	}
	SqlConnection^ connect = gcnew SqlConnection(conn); // assuming 'conn' is your connection string
	try {
		connect->Open();
		String^ query = "INSERT INTO login_coins (username, email, password,address,phonenumber,totalorders,welcometoken,homedeliverytoken,rewardtoken,snacknfuntoken,beveragestoken,superoffertoken,limitedoffertoken,eidtoken,ramadantoken) VALUES (@name, @email, @password,@address,@phoneno,@totalorders,@welcometoken,@homedelivery,@reward,@fun,@bev,@super,@limited,@eid,@ramadan)";
		SqlCommand^ command = gcnew SqlCommand(query, connect);
		command->Parameters->AddWithValue("@name", name);
		command->Parameters->AddWithValue("@email", email);
		command->Parameters->AddWithValue("@password", password);
		command->Parameters->AddWithValue("@address", address);
		command->Parameters->AddWithValue("@phoneno", phoneno);
		command->Parameters->AddWithValue("@totalorders", totalorders);
		command->Parameters->AddWithValue("@welcometoken",welcome_token);
		command->Parameters->AddWithValue("@homedelivery", homedelivery_token);
		command->Parameters->AddWithValue("@reward", reward_token);
		command->Parameters->AddWithValue("@fun", snacknfun_token);
		command->Parameters->AddWithValue("@bev", beverages_token);
		command->Parameters->AddWithValue("@super",super_offer_token);
		command->Parameters->AddWithValue("@limited", limited_offer_token);
		command->Parameters->AddWithValue("@eid",eid_offer);
		command->Parameters->AddWithValue("@ramadan", ramadan_offer);
		command->ExecuteNonQuery();

		// Registration successful
		MessageBox::Show("Registration successful!", "Success", MessageBoxButtons::OK);
		OOPFINALPROJECTSEMESTER2::dashboard^ dash1 = gcnew OOPFINALPROJECTSEMESTER2::dashboard(textBox1->Text,textBox2->Text,textBox3->Text,textBox4->Text);
	dash1->Show(); // Show MyForm1
	this->Hide();
		
	}
	catch (SqlException^ ex) {
		// Handle SQL exception
		MessageBox::Show(ex->Message, "SQL Error", MessageBoxButtons::OK);
	}
	finally {
		connect->Close();
	}
	
	
}
private: System::Void resgisteruser_Load(System::Object^ sender, System::EventArgs^ e) {
}
	
	   

private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	

}
};
}
