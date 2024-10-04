#pragma once
#include "search.h"
#include "PROFILE.h"
#include "FASTFOODS.h"
#include "DESIFOODS.h"
#include "SWEETDISHES.h"
#include "DRINKS.h"
#include "IceCurl.h"
#include "Subway.h"
#include"BroadwayPizza.h"
#include"CHICKINOW.h"
#include "FRI CHICKS.h"
#include"Saltnpaper.h"
#include "HennBun.h"
#include "Coins.h"
namespace OOPFINALPROJECTSEMESTER2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for dashboard
	/// </summary>

	public ref class dashboard : public System::Windows::Forms::Form
	{
	public:
		String^ name;
		String^ email;
		String^ phone_no;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button13;

	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button14;

	public:
		
	public:
		String^ address;
		
		dashboard(String^ addr)
		{
			InitializeComponent();
			label1->Text = addr;
			//
			//TODO: Add the constructor code here
			//
		}

		dashboard()
		{
			InitializeComponent();
			
			//
			//TODO: Add the constructor code here
			//
		}
		dashboard(String^ n,String^e,String^p,String^add)
		{
			
			InitializeComponent();
			name = n;
			email = e;
			phone_no = p;
			address = add;
			label1->Text = add;
			//
			//TODO: Add the constructor code here
			//
		}


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~dashboard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;

	private: System::Windows::Forms::Button^ mainpic;

	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker2;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker3;
	private: System::Windows::Forms::Button^ secondimage;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(dashboard::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->mainpic = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->backgroundWorker2 = (gcnew System::ComponentModel::BackgroundWorker());
			this->backgroundWorker3 = (gcnew System::ComponentModel::BackgroundWorker());
			this->secondimage = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::Color::RosyBrown;
			this->button1->Location = System::Drawing::Point(1811, 56);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(81, 61);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &dashboard::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->ForeColor = System::Drawing::Color::RosyBrown;
			this->button2->Location = System::Drawing::Point(1694, 56);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(81, 61);
			this->button2->TabIndex = 1;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &dashboard::button2_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->ForeColor = System::Drawing::Color::RosyBrown;
			this->button4->Location = System::Drawing::Point(1560, 56);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(81, 61);
			this->button4->TabIndex = 3;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &dashboard::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Transparent;
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->ForeColor = System::Drawing::Color::RosyBrown;
			this->button5->Location = System::Drawing::Point(30, 56);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(81, 61);
			this->button5->TabIndex = 4;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &dashboard::button5_Click);
			// 
			// mainpic
			// 
			this->mainpic->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"mainpic.BackgroundImage")));
			this->mainpic->Location = System::Drawing::Point(198, 187);
			this->mainpic->Name = L"mainpic";
			this->mainpic->Size = System::Drawing::Size(1515, 285);
			this->mainpic->TabIndex = 6;
			this->mainpic->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.BackgroundImage")));
			this->button8->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->button8->Location = System::Drawing::Point(45, 299);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(81, 61);
			this->button8->TabIndex = 7;
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &dashboard::button8_Click);
			// 
			// button9
			// 
			this->button9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button9.BackgroundImage")));
			this->button9->Location = System::Drawing::Point(1786, 299);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(81, 61);
			this->button9->TabIndex = 8;
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &dashboard::button9_Click);
			// 
			// secondimage
			// 
			this->secondimage->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondimage.BackgroundImage")));
			this->secondimage->Location = System::Drawing::Point(185, 187);
			this->secondimage->Name = L"secondimage";
			this->secondimage->Size = System::Drawing::Size(1515, 285);
			this->secondimage->TabIndex = 9;
			this->secondimage->UseVisualStyleBackColor = true;
			this->secondimage->Visible = false;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 130);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(133, 23);
			this->label1->TabIndex = 10;
			this->label1->Text = L"label1";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(40, 561);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(212, 34);
			this->label2->TabIndex = 11;
			this->label2->Text = L"CATEGORIES:";
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::LightSalmon;
			this->button6->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(516, 631);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(172, 42);
			this->button6->TabIndex = 12;
			this->button6->Text = L"FAST FOOD";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &dashboard::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::LightSalmon;
			this->button7->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(792, 631);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(155, 42);
			this->button7->TabIndex = 13;
			this->button7->Text = L"DESI FOOD";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &dashboard::button7_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::LightSalmon;
			this->button10->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(1037, 631);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(181, 42);
			this->button10->TabIndex = 14;
			this->button10->Text = L"SWEET DISHES";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &dashboard::button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::LightSalmon;
			this->button11->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(1313, 631);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(158, 42);
			this->button11->TabIndex = 15;
			this->button11->Text = L"DRINKS";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &dashboard::button11_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(39, 728);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(376, 34);
			this->label3->TabIndex = 17;
			this->label3->Text = L"SUGGESTIONS FOR YOU:";
			// 
			// button13
			// 
			this->button13->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button13.BackgroundImage")));
			this->button13->Location = System::Drawing::Point(334, 811);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(226, 180);
			this->button13->TabIndex = 18;
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &dashboard::button13_Click);
			// 
			// button15
			// 
			this->button15->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button15.BackgroundImage")));
			this->button15->Location = System::Drawing::Point(936, 811);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(226, 180);
			this->button15->TabIndex = 20;
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &dashboard::button15_Click);
			// 
			// button16
			// 
			this->button16->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button16.BackgroundImage")));
			this->button16->Location = System::Drawing::Point(1254, 811);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(226, 180);
			this->button16->TabIndex = 21;
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &dashboard::button16_Click);
			// 
			// button17
			// 
			this->button17->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button17.BackgroundImage")));
			this->button17->Location = System::Drawing::Point(1560, 811);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(226, 180);
			this->button17->TabIndex = 22;
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &dashboard::button17_Click);
			// 
			// button14
			// 
			this->button14->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button14.BackgroundImage")));
			this->button14->Location = System::Drawing::Point(628, 811);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(236, 180);
			this->button14->TabIndex = 23;
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &dashboard::button14_Click_1);
			// 
			// dashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1904, 1041);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->secondimage);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->mainpic);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Cursor = System::Windows::Forms::Cursors::PanNW;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"dashboard";
			this->Text = L"TASTY TRIALS";
			this->Load += gcnew System::EventHandler(this, &dashboard::dashboard_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {

		int newX1 = mainpic->Location.X;
		int newy1 = mainpic->Location.Y;
		int newX = button9->Location.X - mainpic->Location.X-10;
		int newY = mainpic->Location.Y;

		mainpic->Location = Point(newX, newY);

		button9->Visible = true;
		secondimage->Location = Point(newX1, newy1);
		secondimage->Visible = true;

	}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {

	int newX1 = mainpic->Location.X;
	int newy1 = mainpic->Location.Y;
	int newX = button9->Location.X - mainpic->Location.X + 10;
	int newY = mainpic->Location.Y;

	mainpic->Location = Point(newX, newY);

	button9->Visible = true;
	secondimage->Location = Point(newX1, newy1);
	secondimage->Visible = true;
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	OOPFINALPROJECTSEMESTER2::search^ ser = gcnew OOPFINALPROJECTSEMESTER2::search(this);
	ser->Show();
	this->Hide();

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	
	
	OOPFINALPROJECTSEMESTER2::PROFILE^ prof = gcnew OOPFINALPROJECTSEMESTER2::PROFILE(name,email,phone_no,address,this);
	
	prof->Show();
	this->Hide();


}
private: System::Void dashboard_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	OOPFINALPROJECTSEMESTER2::FASTFOODS^ FF = gcnew OOPFINALPROJECTSEMESTER2::FASTFOODS(this);

	FF->Show();
	this->Hide();
	


}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	OOPFINALPROJECTSEMESTER2::DESIFOODS^ DF = gcnew OOPFINALPROJECTSEMESTER2::DESIFOODS(this);
	DF->Show();
	this->Hide();
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {

	OOPFINALPROJECTSEMESTER2::SWEETDISHES^ SD = gcnew OOPFINALPROJECTSEMESTER2::SWEETDISHES(this);
	SD->Show();
	this->Hide();


}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	OOPFINALPROJECTSEMESTER2::DRINKS^ D = gcnew OOPFINALPROJECTSEMESTER2::DRINKS(this);
	D->Show();
	this->Hide();


}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	OOPFINALPROJECTSEMESTER2::	CHICKINOW^ ch = gcnew OOPFINALPROJECTSEMESTER2::CHICKINOW(this);
	ch->Show();
	this->Hide();
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	OOPFINALPROJECTSEMESTER2::Saltnpaper^ sp = gcnew OOPFINALPROJECTSEMESTER2::Saltnpaper (this);
	sp->Show();
	this->Hide();
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	OOPFINALPROJECTSEMESTER2::HennBun^ hb = gcnew OOPFINALPROJECTSEMESTER2::HennBun(this);
	hb->Show();
	this->Hide();
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	OOPFINALPROJECTSEMESTER2::BroadwayPizza^ bp = gcnew OOPFINALPROJECTSEMESTER2::BroadwayPizza(this);
	bp->Show();
	this->Hide();
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
	OOPFINALPROJECTSEMESTER2::IceCurl^ uc = gcnew OOPFINALPROJECTSEMESTER2::IceCurl(this);
	uc->Show();
	this->Hide();
}
private: System::Void button14_Click_1(System::Object^ sender, System::EventArgs^ e) {
	OOPFINALPROJECTSEMESTER2::Saltnpaper^ uc = gcnew OOPFINALPROJECTSEMESTER2::Saltnpaper(this);
	uc->Show();
	this->Hide();

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {


	OOPFINALPROJECTSEMESTER2::Coins^ DF = gcnew OOPFINALPROJECTSEMESTER2::Coins(this,name);
	DF->Show();
	this->Hide();




}
};
}
