#pragma once
#include "dashboard.h"
namespace OOPFINALPROJECTSEMESTER2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	/// <summary>
	/// Summary for login
	/// </summary>
	public ref class login : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		login(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		login(Form^ obj1)
		{
			obj = obj1;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::Button^ button2;
	public:
		String^ conn = "Data Source=localhost\\sqlexpress;Initial Catalog=login;Integrated Security=True";
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~login()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(login::typeid));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(869, 240);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(173, 55);
			this->label2->TabIndex = 1;
			this->label2->Text = L"LOGIN";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(619, 433);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(83, 29);
			this->label3->TabIndex = 2;
			this->label3->Text = L"EMAIL";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(619, 529);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(151, 29);
			this->label4->TabIndex = 3;
			this->label4->Text = L"PASSWORD";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(807, 433);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(330, 26);
			this->textBox1->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(807, 529);
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '*';
			this->textBox2->Size = System::Drawing::Size(330, 26);
			this->textBox2->TabIndex = 5;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::WindowText;
			this->button1->Cursor = System::Windows::Forms::Cursors::PanNW;
			this->button1->ForeColor = System::Drawing::SystemColors::Control;
			this->button1->Location = System::Drawing::Point(906, 636);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(111, 38);
			this->button1->TabIndex = 6;
			this->button1->Text = L"LOGIN";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &login::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->ForeColor = System::Drawing::Color::RosyBrown;
			this->button2->Location = System::Drawing::Point(29, 54);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(72, 69);
			this->button2->TabIndex = 18;
			this->button2->TextAlign = System::Drawing::ContentAlignment::TopLeft;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &login::button2_Click);
			// 
			// login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1904, 1041);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"login";
			this->Text = L"FOOD ORDERING APP";
			this->Load += gcnew System::EventHandler(this, &login::login_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ email = textBox1->Text;
		String^ password = textBox2->Text;
		
		String^ phone;
		String^add;
		String^ use;
		if (email->Length == 0 || password->Length == 0) {
			MessageBox::Show("Please Enter all the fields", "One or more empty fields", MessageBoxButtons::OK);
			return;
		}
		SqlConnection^ connect = gcnew SqlConnection(conn);
		try {
			
			connect->Open();
			String^ query = "SELECT * FROM login_coins WHERE email = @username AND password = @password";
			// Execute SQL commands here
			SqlCommand^ command = gcnew SqlCommand(query, connect);
			command->Parameters->AddWithValue("@username", textBox1->Text);
			command->Parameters->AddWithValue("@password", textBox2->Text);

			// Execute SQL command
			SqlDataReader^ reader = command->ExecuteReader();

			// Check if any rows were returned
			if (reader->HasRows) {
				while (reader->Read()) {
					use = reader["username"]->ToString();
					add = reader["address"]->ToString();
					phone = reader["phonenumber"]->ToString();
				}
				
				// Login successful
				OOPFINALPROJECTSEMESTER2::dashboard^ ds = gcnew OOPFINALPROJECTSEMESTER2::dashboard(use,email,phone,add);
				ds->Show();
				this->Hide();

			}
			else {
				// Login failed
				MessageBox::Show("Invalid email or password", "Login failed", MessageBoxButtons::OK);
			}

			// Close the reader
			reader->Close();
			
		}
		catch (SqlException^ ex) {
			// Handle SQL exception
			MessageBox::Show(ex->Message, "SQL Error", MessageBoxButtons::OK);
		}
		finally
		{
			
		}
	}
private: System::Void login_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	obj->Show();
}
};
}
