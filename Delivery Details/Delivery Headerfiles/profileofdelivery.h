#pragma once
#include "cartofdelivery.h"
#include "totalpayofdelivery.h"
namespace OOPFINALPROJECTSEMESTER2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for profileofdelivery
	/// </summary>
	public ref class profileofdelivery : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		profileofdelivery(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		profileofdelivery(String^ names, String^ em, String^ ph, String^ ad,String^vehicle,String^box,Form^ obj1)
		{
			obj = obj1;
			InitializeComponent();
			 lbnameofdeli->Text=names;
			lbemailofdeliv->Text=em;
			 lbphonenumberofdeliv->Text=ph;
			lbaddressofdeliv->Text=ad;
			lbvehicle->Text = vehicle;
			lbbox->Text = box;

			//textBox1->Text = names;
			//profileInstance = this;

			//
			//TODO: Add the constructor code here
			//
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~profileofdelivery()
		{
			if (components)
			{
				delete components;
			}
		}
	public:
		String^ totalit;
		String^ totalpay;
		String^ sal;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ lbemailofdeliv;

	private: System::Windows::Forms::Label^ lbphonenumberofdeliv;

	private: System::Windows::Forms::Label^ lbaddressofdeliv;

	private: System::Windows::Forms::Label^ lbnameofdeli;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ lbvehicle;
	private: System::Windows::Forms::Label^ lbbox;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button8;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(profileofdelivery::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->lbemailofdeliv = (gcnew System::Windows::Forms::Label());
			this->lbphonenumberofdeliv = (gcnew System::Windows::Forms::Label());
			this->lbaddressofdeliv = (gcnew System::Windows::Forms::Label());
			this->lbnameofdeli = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->lbvehicle = (gcnew System::Windows::Forms::Label());
			this->lbbox = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Location = System::Drawing::Point(1316, 326);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(512, 466);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// lbemailofdeliv
			// 
			this->lbemailofdeliv->AutoSize = true;
			this->lbemailofdeliv->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbemailofdeliv->Location = System::Drawing::Point(480, 648);
			this->lbemailofdeliv->Name = L"lbemailofdeliv";
			this->lbemailofdeliv->Size = System::Drawing::Size(93, 33);
			this->lbemailofdeliv->TabIndex = 27;
			this->lbemailofdeliv->Text = L"label9";
			// 
			// lbphonenumberofdeliv
			// 
			this->lbphonenumberofdeliv->AutoSize = true;
			this->lbphonenumberofdeliv->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbphonenumberofdeliv->Location = System::Drawing::Point(480, 545);
			this->lbphonenumberofdeliv->Name = L"lbphonenumberofdeliv";
			this->lbphonenumberofdeliv->Size = System::Drawing::Size(93, 33);
			this->lbphonenumberofdeliv->TabIndex = 26;
			this->lbphonenumberofdeliv->Text = L"label8";
			// 
			// lbaddressofdeliv
			// 
			this->lbaddressofdeliv->AutoSize = true;
			this->lbaddressofdeliv->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbaddressofdeliv->Location = System::Drawing::Point(480, 435);
			this->lbaddressofdeliv->Name = L"lbaddressofdeliv";
			this->lbaddressofdeliv->Size = System::Drawing::Size(93, 33);
			this->lbaddressofdeliv->TabIndex = 25;
			this->lbaddressofdeliv->Text = L"label7";
			// 
			// lbnameofdeli
			// 
			this->lbnameofdeli->AutoSize = true;
			this->lbnameofdeli->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbnameofdeli->Location = System::Drawing::Point(480, 338);
			this->lbnameofdeli->Name = L"lbnameofdeli";
			this->lbnameofdeli->Size = System::Drawing::Size(93, 33);
			this->lbnameofdeli->TabIndex = 24;
			this->lbnameofdeli->Text = L"label6";
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(32, 648);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(227, 72);
			this->label5->TabIndex = 23;
			this->label5->Text = L"EMAIL:";
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(32, 518);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(227, 72);
			this->label4->TabIndex = 22;
			this->label4->Text = L"PHONE NUMBER:";
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(32, 435);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(227, 72);
			this->label3->TabIndex = 21;
			this->label3->Text = L"ADDRESS:";
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(42, 338);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(227, 72);
			this->label2->TabIndex = 20;
			this->label2->Text = L"NAME:";
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 36, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(39, 192);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(256, 72);
			this->label1->TabIndex = 19;
			this->label1->Text = L"PROFILE";
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(32, 755);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(295, 72);
			this->label6->TabIndex = 28;
			this->label6->Text = L"VEHICLE TYPE:";
			// 
			// label7
			// 
			this->label7->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(32, 838);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(227, 72);
			this->label7->TabIndex = 29;
			this->label7->Text = L"BOX SIZE:";
			// 
			// lbvehicle
			// 
			this->lbvehicle->AutoSize = true;
			this->lbvehicle->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbvehicle->Location = System::Drawing::Point(480, 755);
			this->lbvehicle->Name = L"lbvehicle";
			this->lbvehicle->Size = System::Drawing::Size(93, 33);
			this->lbvehicle->TabIndex = 30;
			this->lbvehicle->Text = L"label9";
			// 
			// lbbox
			// 
			this->lbbox->AutoSize = true;
			this->lbbox->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbbox->Location = System::Drawing::Point(480, 852);
			this->lbbox->Name = L"lbbox";
			this->lbbox->Size = System::Drawing::Size(93, 33);
			this->lbbox->TabIndex = 31;
			this->lbbox->Text = L"label9";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->ForeColor = System::Drawing::Color::RosyBrown;
			this->button2->Location = System::Drawing::Point(1791, 57);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(81, 61);
			this->button2->TabIndex = 32;
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->ForeColor = System::Drawing::Color::RosyBrown;
			this->button3->Location = System::Drawing::Point(1673, 57);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(81, 61);
			this->button3->TabIndex = 33;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &profileofdelivery::button3_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::Color::RosyBrown;
			this->button1->Location = System::Drawing::Point(1552, 57);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(81, 61);
			this->button1->TabIndex = 34;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &profileofdelivery::button1_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Transparent;
			this->button8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.BackgroundImage")));
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->ForeColor = System::Drawing::Color::RosyBrown;
			this->button8->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->button8->Location = System::Drawing::Point(11, 77);
			this->button8->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(84, 70);
			this->button8->TabIndex = 56;
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &profileofdelivery::button8_Click);
			// 
			// profileofdelivery
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1904, 1041);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->lbbox);
			this->Controls->Add(this->lbvehicle);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->lbemailofdeliv);
			this->Controls->Add(this->lbphonenumberofdeliv);
			this->Controls->Add(this->lbaddressofdeliv);
			this->Controls->Add(this->lbnameofdeli);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"profileofdelivery";
			this->Text = L"profileofdelivery";
			this->Load += gcnew System::EventHandler(this, &profileofdelivery::profileofdelivery_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void profileofdelivery_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	obj->Show();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		String^ connectionString = "Data Source=localhost\\sqlexpress;Initial Catalog=login;Integrated Security=True";
		SqlConnection^ connection = gcnew SqlConnection(connectionString);

		SqlCommand^ command = gcnew SqlCommand("SELECT totalitems,totalpayment FROM orders", connection);
		connection->Open();
		SqlDataReader^ reader = command->ExecuteReader();

		

		if (reader->HasRows) // Assuming only one row is returned
		{
			while (reader->Read())
			{
				totalit = reader["totalitems"]->ToString();
				totalpay = reader["totalpayment"]->ToString();
			}
		}

		reader->Close(); // Close the first DataReader here

		SqlCommand^ com = gcnew SqlCommand("UPDATE orders SET totalpay=totalpay+500", connection);
		com->ExecuteNonQuery(); // Execute the second query directly without using DataReader

		connection->Close();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	OOPFINALPROJECTSEMESTER2::cartofdelivery^ c1 = gcnew OOPFINALPROJECTSEMESTER2::cartofdelivery(this,totalit,totalpay);
	c1->Show();
	this->Hide();


}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	try
	{
		String^ connectionString = "Data Source=localhost\\sqlexpress;Initial Catalog=login;Integrated Security=True";
		SqlConnection^ connection = gcnew SqlConnection(connectionString);

		SqlCommand^ command = gcnew SqlCommand("SELECT totalpay FROM orders", connection);
		
		connection->Open();
		SqlDataReader^ reader = command->ExecuteReader();
		
		
		if (reader->HasRows) // Assuming only one row is returned
		{
			while (reader->Read())
			{
				sal = reader["totalpay"]->ToString();
			}
		}

		reader->Close();
		connection->Close();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	OOPFINALPROJECTSEMESTER2::totalpayofdelivery^ t1 = gcnew OOPFINALPROJECTSEMESTER2::totalpayofdelivery(this,sal);
	t1->Show();
	this->Hide();




}
};
}
