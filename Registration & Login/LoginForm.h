//#pragma once
//
//namespace OOPFINALPROJECTSEMESTER2 {
//
//	using namespace System;
//	using namespace System::ComponentModel;
//	using namespace System::Collections;
//	using namespace System::Windows::Forms;
//	using namespace System::Data;
//	using namespace System::Drawing;
//
//	/// <summary>
//	/// Summary for LoginForm
//	/// </summary>
//	public ref class LoginForm : public System::Windows::Forms::Form
//	{
//	public:
//		LoginForm(void)
//		{
//			InitializeComponent();
//			//
//			//TODO: Add the constructor code here
//			//
//		}
//
//	protected:
//		/// <summary>
//		/// Clean up any resources being used.
//		/// </summary>
//		~LoginForm()
//		{
//			if (components)
//			{
//				delete components;
//			}
//		}
//	private: System::Windows::Forms::Label^ label1;
//	protected:
//	private: System::Windows::Forms::Label^ label2;
//	private: System::Windows::Forms::TextBox^ tbemail;
//	private: System::Windows::Forms::TextBox^ tbpassword;
//
//
//	private: System::Windows::Forms::Label^ label3;
//	private: System::Windows::Forms::Button^ btlogin;
//
//
//	private:
//		/// <summary>
//		/// Required designer variable.
//		/// </summary>
//		System::ComponentModel::Container ^components;
//
//#pragma region Windows Form Designer generated code
//		/// <summary>
//		/// Required method for Designer support - do not modify
//		/// the contents of this method with the code editor.
//		/// </summary>
//		void InitializeComponent(void)
//		{
//			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
//			this->label1 = (gcnew System::Windows::Forms::Label());
//			this->label2 = (gcnew System::Windows::Forms::Label());
//			this->tbemail = (gcnew System::Windows::Forms::TextBox());
//			this->tbpassword = (gcnew System::Windows::Forms::TextBox());
//			this->label3 = (gcnew System::Windows::Forms::Label());
//			this->btlogin = (gcnew System::Windows::Forms::Button());
//			this->SuspendLayout();
//			// 
//			// label1
//			// 
//			this->label1->AutoSize = true;
//			this->label1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
//			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
//				static_cast<System::Byte>(0)));
//			this->label1->Location = System::Drawing::Point(908, 269);
//			this->label1->Name = L"label1";
//			this->label1->Size = System::Drawing::Size(122, 37);
//			this->label1->TabIndex = 0;
//			this->label1->Text = L"LOGIN";
//			// 
//			// label2
//			// 
//			this->label2->AutoSize = true;
//			this->label2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
//			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
//				static_cast<System::Byte>(0)));
//			this->label2->Location = System::Drawing::Point(621, 361);
//			this->label2->Name = L"label2";
//			this->label2->Size = System::Drawing::Size(75, 25);
//			this->label2->TabIndex = 1;
//			this->label2->Text = L"EMAIL";
//			// 
//			// tbemail
//			// 
//			this->tbemail->Location = System::Drawing::Point(808, 361);
//			this->tbemail->Name = L"tbemail";
//			this->tbemail->Size = System::Drawing::Size(379, 20);
//			this->tbemail->TabIndex = 2;
//			this->tbemail->TextChanged += gcnew System::EventHandler(this, &LoginForm::textBox1_TextChanged);
//			// 
//			// tbpassword
//			// 
//			this->tbpassword->Location = System::Drawing::Point(808, 419);
//			this->tbpassword->Name = L"tbpassword";
//			this->tbpassword->Size = System::Drawing::Size(379, 20);
//			this->tbpassword->TabIndex = 3;
//			// 
//			// label3
//			// 
//			this->label3->AutoSize = true;
//			this->label3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
//			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
//				static_cast<System::Byte>(0)));
//			this->label3->Location = System::Drawing::Point(621, 414);
//			this->label3->Name = L"label3";
//			this->label3->Size = System::Drawing::Size(134, 25);
//			this->label3->TabIndex = 4;
//			this->label3->Text = L"PASSWORD";
//			// 
//			// btlogin
//			// 
//			this->btlogin->BackColor = System::Drawing::SystemColors::WindowText;
//			this->btlogin->ForeColor = System::Drawing::SystemColors::Control;
//			this->btlogin->Location = System::Drawing::Point(884, 510);
//			this->btlogin->Name = L"btlogin";
//			this->btlogin->Size = System::Drawing::Size(181, 24);
//			this->btlogin->TabIndex = 5;
//			this->btlogin->Text = L"login";
//			this->btlogin->UseVisualStyleBackColor = false;
//			this->btlogin->Click += gcnew System::EventHandler(this, &LoginForm::btlogin_Click);
//			// 
//			// LoginForm
//			// 
//			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
//			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
//			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
//			this->ClientSize = System::Drawing::Size(1904, 1041);
//			this->Controls->Add(this->btlogin);
//			this->Controls->Add(this->label3);
//			this->Controls->Add(this->tbpassword);
//			this->Controls->Add(this->tbemail);
//			this->Controls->Add(this->label2);
//			this->Controls->Add(this->label1);
//			this->Name = L"LoginForm";
//			this->Text = L"LoginForm";
//			this->ResumeLayout(false);
//			this->PerformLayout();
//
//		}
//#pragma endregion
//	private: System::Void btlogin_Click(System::Object^ sender, System::EventArgs^ e) {
//		
//	}
//private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
//}
//};
//}
