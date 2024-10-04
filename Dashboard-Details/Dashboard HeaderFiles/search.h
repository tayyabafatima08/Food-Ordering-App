#pragma once
#include "KFC.h"
#include "McDonalds.h"
#include "Saltnpaper.h"
#include"FRI CHICKS.h"
#include "CHEEZIOUS.h"
#include "PIZZA HUT.h"
#include "YASIR BROAST.h"
#include "JS.h"
#include "texaschicken.h"
#include "TwiceDaSpice.h"
#include "PizzaMax.h"
#include "BunduKhanRestaurant.h"
#include "SuperGrillBurger.h"
#include "HennBun.h"
#include "DajjajBroast.h"
#include "KababjeesFried.h"
#include "BroadwayPizza.h"
#include"IceCurl.h"
#include "OPTP.h"
#include "CaliforniaPizza.h"
#include "DOMINOS.h"
#include "ZoroBurger.h"
#include "TimHortons.h"
#include "Subway.h"
#include "karachi student biryani.h"
#include "MB.h"
#include "PO.h"
#include "bbqtonight.h"
#include "HOWDIE.h"
#include "CHICKINOW.h"
#include "ksb.h"
#include "CART.h"
namespace OOPFINALPROJECTSEMESTER2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for search
	/// </summary>
	public ref class search : public System::Windows::Forms::Form
	{
	public:
		String^ hi;
		//Eishah restaurants:
		String^ res1 = "KFC";
		String^ res2 = "McDONALDS";
		String^ res3 = "Salt'n Pepper";				
		String^ res4 = "FRI CHICKS";
		String^ res5 = "CHEEZIOUS";
		String^ res6 = "PIZZA HUT";						
		String^ res7 = "YASIR BROAST";
		String^ res30 = "Jalal sons";
		//mustafa restaurants:
		String^ res8 = "Texas Chicken";
		String^ res9 = "Twice Da Spice";
		String^ res10 = "Pizza Max";
		String^ res11 = "Bundu Khan Restaurant";
		String^ res12 = "Super grill burger";
		String^ res13 = "Hen n Bun";
		String^ res14 = "Dajjaj Broast";
		String^ res15 = "Kababjees";
		//Tayyaba restaurants:
		String^ res16 = "Broadway pizza";
		String^ res17 = "Icecurl";
		String^ res18 = "Optp";
		String^ res19 = "California pizza";
		String^ res20 = "Dominos";
		String^ res21 = "Zoro burger";
		String^ res22 = "Timhortons";
		String^ res23 = "Subway";
		//Moeez restaurants
		String^ res24 = "Student Biryani";
		String^ res25 = "MY BURGER";
		String^ res26 = "PIZZA ONLINE";
		String^ res27 = "BAR BQ tonight";
		String^ res28 = "Howdie";
		String^ res29 = "Chicki Now";
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	public:

		Form^ obj;
		search(void)
		{
			InitializeComponent();
			
		}
		search(Form^ obj1)
		{
			obj = obj1;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}


	protected:
		
		~search()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;

	public:
		
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(search::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(612, 392);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(658, 26);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &search::textBox1_TextChanged);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Location = System::Drawing::Point(570, 392);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(43, 26);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1276, 392);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(87, 26);
			this->button1->TabIndex = 2;
			this->button1->Text = L"SEARCH";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &search::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->ForeColor = System::Drawing::Color::RosyBrown;
			this->button2->Location = System::Drawing::Point(35, 60);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(72, 69);
			this->button2->TabIndex = 17;
			this->button2->TextAlign = System::Drawing::ContentAlignment::TopLeft;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &search::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->ForeColor = System::Drawing::Color::RosyBrown;
			this->button3->Location = System::Drawing::Point(1568, 68);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(81, 61);
			this->button3->TabIndex = 18;
			this->button3->UseVisualStyleBackColor = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->ForeColor = System::Drawing::Color::RosyBrown;
			this->button4->Location = System::Drawing::Point(1811, 68);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(81, 61);
			this->button4->TabIndex = 19;
			this->button4->UseVisualStyleBackColor = false;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Transparent;
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->ForeColor = System::Drawing::Color::RosyBrown;
			this->button5->Location = System::Drawing::Point(1690, 68);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(81, 61);
			this->button5->TabIndex = 20;
			this->button5->UseVisualStyleBackColor = false;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Transparent;
			this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.BackgroundImage")));
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->ForeColor = System::Drawing::Color::RosyBrown;
			this->button6->Location = System::Drawing::Point(1441, 68);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(81, 61);
			this->button6->TabIndex = 21;
			this->button6->UseVisualStyleBackColor = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(43, 498);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(279, 37);
			this->label1->TabIndex = 22;
			this->label1->Text = L"MOST POPULAR:";
			// 
			// button7
			// 
			this->button7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.BackgroundImage")));
			this->button7->Location = System::Drawing::Point(50, 649);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(272, 240);
			this->button7->TabIndex = 26;
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &search::button7_Click);
			// 
			// button8
			// 
			this->button8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.BackgroundImage")));
			this->button8->Location = System::Drawing::Point(447, 649);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(272, 240);
			this->button8->TabIndex = 27;
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &search::button8_Click);
			// 
			// button9
			// 
			this->button9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button9.BackgroundImage")));
			this->button9->Location = System::Drawing::Point(846, 649);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(272, 240);
			this->button9->TabIndex = 28;
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &search::button9_Click);
			// 
			// search
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1904, 1041);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->textBox1);
			this->Cursor = System::Windows::Forms::Cursors::PanNW;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"search";
			this->Text = L"TASTY TRIALS";
			this->Load += gcnew System::EventHandler(this, &search::search_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void search_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) 
{
	
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	hi = textBox1->Text;
	//																	Eishah restaurants:

	if (textBox1->Text == res1)
	{
		OOPFINALPROJECTSEMESTER2::KFC^ K = gcnew OOPFINALPROJECTSEMESTER2::KFC(this);
		K->Show();
		this->Hide();

	}
	if (textBox1->Text == res2)
	{
		OOPFINALPROJECTSEMESTER2::McDonalds^ m = gcnew OOPFINALPROJECTSEMESTER2::McDonalds(this);
		m->Show();
		this->Hide();

	}
	if (textBox1->Text == res3)
	{
		OOPFINALPROJECTSEMESTER2::Saltnpaper^ s = gcnew OOPFINALPROJECTSEMESTER2::Saltnpaper(this);
		s->Show();
		this->Hide();

	}
	if (textBox1->Text == res4)
	{
		OOPFINALPROJECTSEMESTER2::FRICHICKS^ f = gcnew OOPFINALPROJECTSEMESTER2::FRICHICKS();
		f->Show();
		this->Hide();
	}
	if (textBox1->Text == res5)
	{
		OOPFINALPROJECTSEMESTER2::CHEEZIOUS^ c = gcnew OOPFINALPROJECTSEMESTER2::CHEEZIOUS();
		c->Show();
		this->Hide();

	}
	if (textBox1->Text == res6)
	{
		OOPFINALPROJECTSEMESTER2::PIZZAHUT^ P = gcnew OOPFINALPROJECTSEMESTER2::PIZZAHUT();
		P->Show();
		this->Hide();

	}
	if (textBox1->Text == res7)
	{
		OOPFINALPROJECTSEMESTER2::YASIRBROAST^ YB = gcnew OOPFINALPROJECTSEMESTER2::YASIRBROAST();
		YB->Show();
		this->Hide();

	}
	if (textBox1->Text == res30)
	{
		OOPFINALPROJECTSEMESTER2::JS^ JL = gcnew OOPFINALPROJECTSEMESTER2::JS(this);
		JL->Show();
		this->Hide();
	}
	//																     Mustafa Restaurants:
	if (textBox1->Text == res8)
	{

		OOPFINALPROJECTSEMESTER2::texaschicken^ TX = gcnew OOPFINALPROJECTSEMESTER2::texaschicken(this);
		TX->Show();
		this->Hide();

	}
	if (textBox1->Text == res9)
	{
		OOPFINALPROJECTSEMESTER2::TwiceDaSpice^ TS = gcnew OOPFINALPROJECTSEMESTER2::TwiceDaSpice(this);
		TS->Show();
		this->Hide();

	}
	if (textBox1->Text == res10)
	{
		OOPFINALPROJECTSEMESTER2::PizzaMax^ PM = gcnew OOPFINALPROJECTSEMESTER2::PizzaMax(this);
		PM->Show();
		this->Hide();
	}
	if (textBox1->Text == res11)
	{
		OOPFINALPROJECTSEMESTER2::BunduKhanRestaurant^ BK = gcnew OOPFINALPROJECTSEMESTER2::BunduKhanRestaurant(this);
		BK->Show();
		this->Hide();
	}
	if (textBox1->Text == res12)
	{
		OOPFINALPROJECTSEMESTER2::SuperGrillBurger^ SG = gcnew OOPFINALPROJECTSEMESTER2::SuperGrillBurger(this);
		SG->Show();
		this->Hide();
	}
	if (textBox1->Text == res13)
	{
		OOPFINALPROJECTSEMESTER2::HennBun^ HB = gcnew OOPFINALPROJECTSEMESTER2::HennBun(this);
		HB->Show();
		this->Hide();

	}
	if (textBox1->Text == res14)
	{
		OOPFINALPROJECTSEMESTER2::DajjajBroast^ DB = gcnew OOPFINALPROJECTSEMESTER2::DajjajBroast(this);
		DB->Show();
		this->Hide();
	}
	if (textBox1->Text == res15)
	{
		OOPFINALPROJECTSEMESTER2::KababjeesFried^ KJF = gcnew OOPFINALPROJECTSEMESTER2::KababjeesFried(this);
		KJF->Show();
		this->Hide();

	}

	//																	 Tayyaba Restaurants:
	if (textBox1->Text == res16)
	{
		OOPFINALPROJECTSEMESTER2::BroadwayPizza^ BROAD = gcnew OOPFINALPROJECTSEMESTER2::BroadwayPizza(this);
		BROAD->Show();
		this->Hide();
	}
	if (textBox1->Text == res17)
	{
		OOPFINALPROJECTSEMESTER2::IceCurl^ IC = gcnew OOPFINALPROJECTSEMESTER2::IceCurl(this);
		IC->Show();
		this->Hide();

	}
	if (textBox1->Text == res18)
	{
		OOPFINALPROJECTSEMESTER2::OPTP^ OP = gcnew OOPFINALPROJECTSEMESTER2::OPTP(this);
		OP->Show();
		this->Hide();
	}
	if (textBox1->Text == res19)
	{
		OOPFINALPROJECTSEMESTER2::CaliforniaPizza^ CFP = gcnew OOPFINALPROJECTSEMESTER2::CaliforniaPizza(this);
		CFP->Show();
		this->Hide();
	}
	if (textBox1->Text == res20)
	{
		OOPFINALPROJECTSEMESTER2::DOMINOS^ DM = gcnew OOPFINALPROJECTSEMESTER2::DOMINOS(this);
		DM->Show();
		this->Hide();
	}
	if (textBox1->Text == res21)
	{
		OOPFINALPROJECTSEMESTER2::ZoroBurger^ ZB = gcnew OOPFINALPROJECTSEMESTER2::ZoroBurger(this);
		ZB->Show();
		this->Hide();

	}
	if (textBox1->Text == res22)
	{
		OOPFINALPROJECTSEMESTER2::TimHortons^ TH = gcnew OOPFINALPROJECTSEMESTER2::TimHortons(this);
		TH->Show();
		this->Hide();
	}
	if (textBox1->Text == res23)
	{
		OOPFINALPROJECTSEMESTER2::Subway^ SUB = gcnew OOPFINALPROJECTSEMESTER2::Subway(this);
		SUB->Show();
		this->Hide();

	}
	//																	 Moeez Restauranst:
	if (textBox1->Text == res24)
	{
		OOPFINALPROJECTSEMESTER2::ksb^ KSB = gcnew OOPFINALPROJECTSEMESTER2::ksb(this);
		KSB->Show();
		this->Hide();

	}
	if (textBox1->Text == res25)
	{
		OOPFINALPROJECTSEMESTER2::MB^ mb = gcnew OOPFINALPROJECTSEMESTER2::MB(this);
		mb->Show();
		this->Hide();

	}
	if (textBox1->Text == res26)
	{
		OOPFINALPROJECTSEMESTER2::PO^ po = gcnew OOPFINALPROJECTSEMESTER2::PO(this);
		po->Show();
		this->Hide();

	}
	if (textBox1->Text == res27)
	{
		OOPFINALPROJECTSEMESTER2::bbqtonight^ BBQ = gcnew OOPFINALPROJECTSEMESTER2::bbqtonight(this);
		BBQ->Show();
		this->Hide();
	}
	if (textBox1->Text == res28)
	{
		OOPFINALPROJECTSEMESTER2::HOWDIE^ HOW = gcnew OOPFINALPROJECTSEMESTER2::HOWDIE(this);
		HOW->Show();
		this->Hide();

	}
	if (textBox1->Text == res29)
	{
		OOPFINALPROJECTSEMESTER2::CHICKINOW^ CH = gcnew OOPFINALPROJECTSEMESTER2::CHICKINOW(this);
		CH->Show();
		this->Hide();
	}
	if (hi->Length == 0)
	{
		MessageBox::Show("Please enter all the fields", "Search Space is empty", MessageBoxButtons::OK);
		return;
	}

}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	OOPFINALPROJECTSEMESTER2::KFC^ K = gcnew OOPFINALPROJECTSEMESTER2::KFC(this);
	K->Show();
	this->Hide();
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {

	OOPFINALPROJECTSEMESTER2::TimHortons^ TH = gcnew OOPFINALPROJECTSEMESTER2::TimHortons(this);
	TH->Show();
	this->Hide();
}

private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {

	OOPFINALPROJECTSEMESTER2::Subway^ SUB = gcnew OOPFINALPROJECTSEMESTER2::Subway(this);
	SUB->Show();
	this->Hide();

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	obj->Show();


}
};
}
