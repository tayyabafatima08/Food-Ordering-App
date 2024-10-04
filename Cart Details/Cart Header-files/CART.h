#pragma once
#include "PayOnline.h"
#include "cashondelivery.h"
namespace OOPFINALPROJECTSEMESTER2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for CART
	/// </summary>
	public ref class CART : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		CART(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		int val1, val2, val3;

		CART(int x,int y,int z, Form^ obj1)
		{
			obj = obj1;
			InitializeComponent();
			if (label1 != nullptr)
			{
				val1 = x;
				val2 = y;
				val3 = z;
				textBox1->Text = x.ToString();
				textBox2->Text = y.ToString();
				textBox4->Text = z.ToString();
				SqlConnection^ connection = gcnew SqlConnection("Data Source=localhost\\sqlexpress;Initial Catalog=login;Integrated Security=True");

				try
				{
					// Open the connection
					connection->Open();

					// Create the SQL command
					String^ query = "INSERT INTO orders (totalpayment, totalitems,totalpay) VALUES (@totalpayment, @totalitems,@totalpay)";
					SqlCommand^ command = gcnew SqlCommand(query, connection);

					// Add parameters
					command->Parameters->AddWithValue("@totalpay",0);
					command->Parameters->AddWithValue("@totalitems", val2);
					command->Parameters->AddWithValue("@totalpayment", val3);

					// Execute the command
					command->ExecuteNonQuery();
				}
				catch (Exception^ ex)
				{
					// Log the error
					System::Diagnostics::Debug::WriteLine("Error: " + ex->Message);

					// Display an error message to the user
					MessageBox::Show("An error occurred while saving data to the database.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				finally
				{
					// Close the connection
					connection->Close();
				}
			}
			else
			{
				// Log an error message
				System::Diagnostics::Debug::WriteLine("Error: label1 is null in CART constructor.");

				// Display a message box to the user
				MessageBox::Show("An error occurred while displaying the total amount.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	public:
		String^ conn = "Data Source=localhost\\sqlexpress;Initial Catalog=login;Integrated Security=True";
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CART()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CART::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(396, 400);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(159, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"TOTAL BILL:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(384, 256);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(180, 29);
			this->label2->TabIndex = 1;
			this->label2->Text = L"TOTAL ITEMS:";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(618, 400);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(181, 29);
			this->textBox1->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(623, 256);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(181, 29);
			this->textBox2->TabIndex = 3;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(1368, 256);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(181, 29);
			this->textBox3->TabIndex = 5;
			this->textBox3->Text = L"150";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(1056, 256);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(264, 29);
			this->label3->TabIndex = 4;
			this->label3->Text = L"DELIVERY CHARGES:";
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(1364, 399);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(181, 29);
			this->textBox4->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(1100, 398);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(153, 29);
			this->label4->TabIndex = 6;
			this->label4->Text = L"NET TOTAL:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(792, 732);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(346, 29);
			this->label5->TabIndex = 8;
			this->label5->Text = L"SELECT PAYMENT METHOD:";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LightSalmon;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(881, 797);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(192, 43);
			this->button1->TabIndex = 9;
			this->button1->Text = L"CASH ON DELIVERY";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &CART::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::LightSalmon;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(881, 882);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(192, 43);
			this->button2->TabIndex = 10;
			this->button2->Text = L"PAY ONLINE";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &CART::button2_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Transparent;
			this->button8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.BackgroundImage")));
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->ForeColor = System::Drawing::Color::RosyBrown;
			this->button8->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->button8->Location = System::Drawing::Point(36, 61);
			this->button8->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(84, 70);
			this->button8->TabIndex = 43;
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &CART::button8_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Location = System::Drawing::Point(181, 493);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(152, 136);
			this->pictureBox1->TabIndex = 44;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->Location = System::Drawing::Point(417, 493);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(152, 136);
			this->pictureBox2->TabIndex = 45;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->Location = System::Drawing::Point(647, 493);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(152, 136);
			this->pictureBox3->TabIndex = 46;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->Location = System::Drawing::Point(881, 493);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(152, 136);
			this->pictureBox4->TabIndex = 47;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->Location = System::Drawing::Point(1109, 493);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(152, 136);
			this->pictureBox5->TabIndex = 48;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.BackgroundImage")));
			this->pictureBox6->Location = System::Drawing::Point(1337, 493);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(152, 136);
			this->pictureBox6->TabIndex = 49;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.BackgroundImage")));
			this->pictureBox7->Location = System::Drawing::Point(1566, 493);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(152, 136);
			this->pictureBox7->TabIndex = 50;
			this->pictureBox7->TabStop = false;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(181, 635);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(152, 23);
			this->button3->TabIndex = 51;
			this->button3->Text = L"WELCOME TOKEN";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &CART::button3_Click_1);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(417, 635);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(152, 23);
			this->button4->TabIndex = 52;
			this->button4->Text = L"HOME DELIVERY";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &CART::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(647, 635);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(152, 23);
			this->button5->TabIndex = 53;
			this->button5->Text = L"REWARD TOKEN";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &CART::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(881, 635);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(152, 23);
			this->button6->TabIndex = 54;
			this->button6->Text = L"SNACK N FUN";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &CART::button6_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(1109, 635);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(152, 23);
			this->button7->TabIndex = 55;
			this->button7->Text = L"BEVERAGES";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &CART::button7_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(1337, 635);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(152, 23);
			this->button9->TabIndex = 56;
			this->button9->Text = L"LIMITED OFFER";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &CART::button9_Click);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(1566, 635);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(152, 23);
			this->button10->TabIndex = 57;
			this->button10->Text = L"SUPER OFFER";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &CART::button10_Click);
			// 
			// CART
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1904, 1041);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"CART";
			this->Text = L"CART";
			this->Load += gcnew System::EventHandler(this, &CART::CART_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void CART_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	OOPFINALPROJECTSEMESTER2::PayOnline^ payo = gcnew OOPFINALPROJECTSEMESTER2::PayOnline(this);
	payo->Show();
	this->Hide();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	try 
	{
		// Create a SqlConnection object using the connection string
		SqlConnection^ connection = gcnew SqlConnection(conn);

		// Open the database connection
		connection->Open();
		SqlCommand^ command = gcnew SqlCommand("UPDATE login_coins SET totalorders = totalorders + 1",connection);
		// Perform database operations here
		command->ExecuteNonQuery();
		SqlCommand^ checkCommand = gcnew SqlCommand("SELECT totalorders FROM login_coins", connection);
		int totalOrders = Convert::ToInt32(checkCommand->ExecuteScalar());

		if (totalOrders == 100)
		{
			// Execute a command to update the column when totalorders reach 100
			SqlCommand^ updateCommand = gcnew SqlCommand("UPDATE login_coins SET rewardtoken = 1", connection);
			updateCommand->ExecuteNonQuery();
		}
		if (totalOrders == 130)
		{
			SqlCommand^ updateCommand = gcnew SqlCommand("UPDATE login_coins SET homedeliverytoken = 1", connection);
			updateCommand->ExecuteNonQuery();
		}
		if (totalOrders == 600)
		{
			SqlCommand^ updateCommand = gcnew SqlCommand("UPDATE login_coins SET snacknfuntoken = 1", connection);
			updateCommand->ExecuteNonQuery();
		}
		if (totalOrders == 300)
		{
			SqlCommand^ updateCommand = gcnew SqlCommand("UPDATE login_coins SET beveragestoken = 1", connection);
			updateCommand->ExecuteNonQuery();
		}
		if (totalOrders == 250)
		{
			SqlCommand^ updateCommand = gcnew SqlCommand("UPDATE login_coins SET superoffertoken = 1", connection);
			updateCommand->ExecuteNonQuery();
		}
		if (totalOrders == 3)
		{
			SqlCommand^ updateCommand = gcnew SqlCommand("UPDATE login_coins SET limitedoffertoken = 1", connection);
			updateCommand->ExecuteNonQuery();
		}
		if (totalOrders == 500)
		{
			SqlCommand^ updateCommand = gcnew SqlCommand("UPDATE login_coins SET eidtoken = 1", connection);
			updateCommand->ExecuteNonQuery();
		}
		if (totalOrders == 10)
		{
			SqlCommand^ updateCommand = gcnew SqlCommand("UPDATE login_coins SET ramadantoken = 1", connection);
			updateCommand->ExecuteNonQuery();
		}
		// Close the database connection
		connection->Close();
	}
	catch (Exception^ ex)
	{
		// Handle any exceptions that occur during the connection process
		MessageBox::Show("Error opening database connection: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	OOPFINALPROJECTSEMESTER2::cashondelivery^ caso = gcnew OOPFINALPROJECTSEMESTER2::cashondelivery();
	caso->Show();
	this->Hide();
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) 
{

	this->Hide();
	obj->Show();

}
private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {


	try {
		// Connect to the database
		SqlConnection^ connection = gcnew SqlConnection(conn);
		connection->Open();

		// Retrieve the value of the column
		SqlCommand^ command = gcnew SqlCommand("SELECT welcometoken FROM login_coins", connection);
		int welcomeToken = Convert::ToInt32(command->ExecuteScalar());

		// Check if the reward token is available
		if (welcomeToken > 0) {
			// Update the column to decrease the reward token count
			SqlCommand^ updateCommand = gcnew SqlCommand("UPDATE login_coins SET welcometoken = welcometoken - 1", connection);
			updateCommand->ExecuteNonQuery();
			int discount = val3 * (15.0 / 100);
			val3 = val3 - discount;
			OOPFINALPROJECTSEMESTER2::CART^ cart = gcnew OOPFINALPROJECTSEMESTER2::CART(val1,val2,val3,this);
			cart->Show();
			this->Hide();
			// Proceed with your logic here
		}
		else {
			// Show a message box indicating insufficient coins
			MessageBox::Show("Insufficient coins", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

		// Close the connection
		connection->Close();
	}
	catch (Exception^ ex) {
		// Handle any exceptions
		MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

	try {
		// Connect to the database
		SqlConnection^ connection = gcnew SqlConnection(conn);
		connection->Open();

		// Retrieve the value of the column
		SqlCommand^ command = gcnew SqlCommand("SELECT homedeliverytoken FROM login_coins", connection);
		int homedeliverytokenToken = Convert::ToInt32(command->ExecuteScalar());

		// Check if the reward token is available
		if (homedeliverytokenToken > 0) {
			// Update the column to decrease the reward token count
			SqlCommand^ updateCommand = gcnew SqlCommand("UPDATE login_coins SET homedeliverytoken = homedeliverytoken - 1", connection);
			updateCommand->ExecuteNonQuery();
			int discount = val3 * (100.0 / 100);
			val3 = val3 - discount;
			OOPFINALPROJECTSEMESTER2::CART^ cart = gcnew OOPFINALPROJECTSEMESTER2::CART(val1, val2, val3, this);
			cart->Show();
			this->Hide();
			// Proceed with your logic here
		}
		else 
		{
			// Show a message box indicating insufficient coins
			MessageBox::Show("Insufficient coins", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

		// Close the connection
		connection->Close();
	}
	catch (Exception^ ex) {
		// Handle any exceptions
		MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}







}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {


	try {
		// Connect to the database
		SqlConnection^ connection = gcnew SqlConnection(conn);
		connection->Open();

		// Retrieve the value of the column
		SqlCommand^ command = gcnew SqlCommand("SELECT rewardtoken FROM login_coins", connection);
		int rewardToken = Convert::ToInt32(command->ExecuteScalar());

		// Check if the reward token is available
		if (rewardToken > 0) {
			// Update the column to decrease the reward token count
			SqlCommand^ updateCommand = gcnew SqlCommand("UPDATE login_coins SET rewardtoken = rewardtoken - 1", connection);
			updateCommand->ExecuteNonQuery();
			int discount = val3 * (20.0 / 100);
			val3 = val3 - discount;
			OOPFINALPROJECTSEMESTER2::CART^ cart = gcnew OOPFINALPROJECTSEMESTER2::CART(val1, val2, val3, this);
			cart->Show();
			this->Hide();
			// Proceed with your logic here
		}
		else
		{
			// Show a message box indicating insufficient coins
			MessageBox::Show("Insufficient coins", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

		// Close the connection
		connection->Close();
	}
	catch (Exception^ ex) {
		// Handle any exceptions
		MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {

	try {
		// Connect to the database
		SqlConnection^ connection = gcnew SqlConnection(conn);
		connection->Open();

		// Retrieve the value of the column
		SqlCommand^ command = gcnew SqlCommand("SELECT snacknfuntoken FROM login_coins", connection);
		int snacknfunToken = Convert::ToInt32(command->ExecuteScalar());

		// Check if the reward token is available
		if (snacknfunToken > 0) {
			// Update the column to decrease the reward token count
			SqlCommand^ updateCommand = gcnew SqlCommand("UPDATE login_coins SET snacknfuntoken = snacknfuntoken - 1", connection);
			updateCommand->ExecuteNonQuery();
			int discount = val3 * (40.0 / 100);
			val3 = val3 - discount;
			OOPFINALPROJECTSEMESTER2::CART^ cart = gcnew OOPFINALPROJECTSEMESTER2::CART(val1, val2, val3, this);
			cart->Show();
			this->Hide();
			// Proceed with your logic here
		}
		else {
			// Show a message box indicating insufficient coins
			MessageBox::Show("Insufficient coins", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

		// Close the connection
		connection->Close();
	}
	catch (Exception^ ex) {
		// Handle any exceptions
		MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {

	try {
		// Connect to the database
		SqlConnection^ connection = gcnew SqlConnection(conn);
		connection->Open();

		// Retrieve the value of the column
		SqlCommand^ command = gcnew SqlCommand("SELECT beveragestoken FROM login_coins", connection);
		int beveragestoken = Convert::ToInt32(command->ExecuteScalar());

		// Check if the reward token is available
		if (beveragestoken > 0) {
			// Update the column to decrease the reward token count
			SqlCommand^ updateCommand = gcnew SqlCommand("UPDATE login_coins SET beveragestoken = beveragestoken - 1", connection);
			updateCommand->ExecuteNonQuery();
			int discount = val3 * (30.0 / 100);
			val3 = val3 - discount;
			OOPFINALPROJECTSEMESTER2::CART^ cart = gcnew OOPFINALPROJECTSEMESTER2::CART(val1, val2, val3, this);
			cart->Show();
			this->Hide();
			// Proceed with your logic here
		}
		else {
			// Show a message box indicating insufficient coins
			MessageBox::Show("Insufficient coins", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

		// Close the connection
		connection->Close();
	}
	catch (Exception^ ex) {
		// Handle any exceptions
		MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}



}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		// Connect to the database
		SqlConnection^ connection = gcnew SqlConnection(conn);
		connection->Open();

		// Retrieve the value of the column
		SqlCommand^ command = gcnew SqlCommand("SELECT limitedoffertoken FROM login_coins", connection);
		int limitedoffertoken = Convert::ToInt32(command->ExecuteScalar());

		// Check if the reward token is available
		if (limitedoffertoken > 0) {
			// Update the column to decrease the reward token count
			SqlCommand^ updateCommand = gcnew SqlCommand("UPDATE login_coins SET limitedoffertoken = limitedoffertoken - 1", connection);
			updateCommand->ExecuteNonQuery();
			int discount = val3 * (20.0 / 100);
			val3 = val3 - discount;
			OOPFINALPROJECTSEMESTER2::CART^ cart = gcnew OOPFINALPROJECTSEMESTER2::CART(val1, val2, val3, this);
			cart->Show();
			this->Hide();
			// Proceed with your logic here
		}
		else {
			// Show a message box indicating insufficient coins
			MessageBox::Show("Insufficient coins", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

		// Close the connection
		connection->Close();
	}
	catch (Exception^ ex) {
		// Handle any exceptions
		MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		// Connect to the database
		SqlConnection^ connection = gcnew SqlConnection(conn);
		connection->Open();

		// Retrieve the value of the column
		SqlCommand^ command = gcnew SqlCommand("SELECT superoffertoken FROM login_coins", connection);
		int superoffertoken = Convert::ToInt32(command->ExecuteScalar());

		// Check if the reward token is available
		if (superoffertoken > 0) {
			// Update the column to decrease the reward token count
			SqlCommand^ updateCommand = gcnew SqlCommand("UPDATE login_coins SET superoffertoken = superoffertoken - 1", connection);
			updateCommand->ExecuteNonQuery();
			int discount = val3 * (30.0 / 100);
			val3 = val3 - discount;
			OOPFINALPROJECTSEMESTER2::CART^ cart = gcnew OOPFINALPROJECTSEMESTER2::CART(val1, val2, val3, this);
			cart->Show();
			this->Hide();
			// Proceed with your logic here
		}
		else {
			// Show a message box indicating insufficient coins
			MessageBox::Show("Insufficient coins", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

		// Close the connection
		connection->Close();
	}
	catch (Exception^ ex) {
		// Handle any exceptions
		MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
};
}
