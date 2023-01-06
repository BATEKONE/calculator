#pragma once

namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class Calculator_YE : public System::Windows::Forms::Form
	{
	public:
		Calculator_YE(void)
		{
			InitializeComponent();
		}

	protected:
		~Calculator_YE()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ Screen;

	protected:





	private: System::Windows::Forms::Button^ button_divi;

	private: System::Windows::Forms::Button^ button_seve;

	private: System::Windows::Forms::Button^ button_eigh;
	private: System::Windows::Forms::Button^ button_nine;
	private: System::Windows::Forms::Button^ button_mult;
	private: System::Windows::Forms::Button^ button_four;
	private: System::Windows::Forms::Button^ button_five;
	private: System::Windows::Forms::Button^ button_six;
	private: System::Windows::Forms::Button^ button_minu;
	private: System::Windows::Forms::Button^ button_one;
	private: System::Windows::Forms::Button^ button_two;
	private: System::Windows::Forms::Button^ button_three;
	private: System::Windows::Forms::Button^ button_plus;

	private: System::Windows::Forms::Button^ button_zero;

	private: System::Windows::Forms::Button^ button_equa;
	private: System::Windows::Forms::Button^ button_clear;
	private: System::Windows::Forms::Button^ button_sin;
	private: System::Windows::Forms::Button^ button_abs;
	private: System::Windows::Forms::Button^ button_sqrt;




	private: System::Windows::Forms::Button^ button_tan;
	private: System::Windows::Forms::Button^ button_pow;




	private: System::Windows::Forms::Button^ button_csc;

	private: System::Windows::Forms::Button^ button_cos;
	private: System::Windows::Forms::Button^ button_e;


	private: System::Windows::Forms::Button^ button_cot;

	private: System::Windows::Forms::Button^ button_sec;
	private: System::Windows::Forms::Button^ button_pi;
	private: System::Windows::Forms::Button^ button_del;
	private: System::Windows::Forms::Button^ button_log;
	private: System::Windows::Forms::Button^ button_dot;





	protected:

	protected:

	protected:

	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Calculator_YE::typeid));
			this->Screen = (gcnew System::Windows::Forms::TextBox());
			this->button_divi = (gcnew System::Windows::Forms::Button());
			this->button_seve = (gcnew System::Windows::Forms::Button());
			this->button_eigh = (gcnew System::Windows::Forms::Button());
			this->button_nine = (gcnew System::Windows::Forms::Button());
			this->button_mult = (gcnew System::Windows::Forms::Button());
			this->button_four = (gcnew System::Windows::Forms::Button());
			this->button_five = (gcnew System::Windows::Forms::Button());
			this->button_six = (gcnew System::Windows::Forms::Button());
			this->button_minu = (gcnew System::Windows::Forms::Button());
			this->button_one = (gcnew System::Windows::Forms::Button());
			this->button_two = (gcnew System::Windows::Forms::Button());
			this->button_three = (gcnew System::Windows::Forms::Button());
			this->button_plus = (gcnew System::Windows::Forms::Button());
			this->button_zero = (gcnew System::Windows::Forms::Button());
			this->button_equa = (gcnew System::Windows::Forms::Button());
			this->button_clear = (gcnew System::Windows::Forms::Button());
			this->button_sin = (gcnew System::Windows::Forms::Button());
			this->button_abs = (gcnew System::Windows::Forms::Button());
			this->button_sqrt = (gcnew System::Windows::Forms::Button());
			this->button_tan = (gcnew System::Windows::Forms::Button());
			this->button_pow = (gcnew System::Windows::Forms::Button());
			this->button_csc = (gcnew System::Windows::Forms::Button());
			this->button_cos = (gcnew System::Windows::Forms::Button());
			this->button_e = (gcnew System::Windows::Forms::Button());
			this->button_cot = (gcnew System::Windows::Forms::Button());
			this->button_sec = (gcnew System::Windows::Forms::Button());
			this->button_pi = (gcnew System::Windows::Forms::Button());
			this->button_del = (gcnew System::Windows::Forms::Button());
			this->button_log = (gcnew System::Windows::Forms::Button());
			this->button_dot = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Screen
			// 
			this->Screen->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Screen->BackColor = System::Drawing::Color::AntiqueWhite;
			this->Screen->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Screen->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->Screen->Font = (gcnew System::Drawing::Font(L"Rockwell Condensed", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Screen->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Screen->Location = System::Drawing::Point(-3, 190);
			this->Screen->Margin = System::Windows::Forms::Padding(3, 100, 3, 120);
			this->Screen->Name = L"Screen";
			this->Screen->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Screen->Size = System::Drawing::Size(387, 63);
			this->Screen->TabIndex = 0;
			this->Screen->Text = L"0";
			this->Screen->WordWrap = false;
			// 
			// button_divi
			// 
			this->button_divi->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->button_divi->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button_divi->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->button_divi->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkGray;
			this->button_divi->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_divi->Font = (gcnew System::Drawing::Font(L"Rockwell Condensed", 16.2F));
			this->button_divi->ForeColor = System::Drawing::Color::White;
			this->button_divi->Location = System::Drawing::Point(295, 283);
			this->button_divi->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->button_divi->Name = L"button_divi";
			this->button_divi->Size = System::Drawing::Size(75, 50);
			this->button_divi->TabIndex = 5;
			this->button_divi->Text = L"÷";
			this->button_divi->UseVisualStyleBackColor = false;
			this->button_divi->Click += gcnew System::EventHandler(this, &Calculator_YE::button_divi_Click);
			// 
			// button_seve
			// 
			this->button_seve->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->button_seve->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button_seve->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->button_seve->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkGray;
			this->button_seve->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_seve->Font = (gcnew System::Drawing::Font(L"Rockwell Condensed", 16.2F));
			this->button_seve->ForeColor = System::Drawing::Color::White;
			this->button_seve->Location = System::Drawing::Point(12, 343);
			this->button_seve->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->button_seve->Name = L"button_seve";
			this->button_seve->Size = System::Drawing::Size(75, 50);
			this->button_seve->TabIndex = 6;
			this->button_seve->Text = L"7";
			this->button_seve->UseVisualStyleBackColor = false;
			this->button_seve->Click += gcnew System::EventHandler(this, &Calculator_YE::button_seve_Click);
			// 
			// button_eigh
			// 
			this->button_eigh->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->button_eigh->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button_eigh->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->button_eigh->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkGray;
			this->button_eigh->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_eigh->Font = (gcnew System::Drawing::Font(L"Rockwell Condensed", 16.2F));
			this->button_eigh->ForeColor = System::Drawing::Color::White;
			this->button_eigh->Location = System::Drawing::Point(93, 343);
			this->button_eigh->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->button_eigh->Name = L"button_eigh";
			this->button_eigh->Size = System::Drawing::Size(75, 50);
			this->button_eigh->TabIndex = 7;
			this->button_eigh->Text = L"8";
			this->button_eigh->UseVisualStyleBackColor = false;
			this->button_eigh->Click += gcnew System::EventHandler(this, &Calculator_YE::button_eigh_Click);
			// 
			// button_nine
			// 
			this->button_nine->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->button_nine->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button_nine->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->button_nine->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkGray;
			this->button_nine->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_nine->Font = (gcnew System::Drawing::Font(L"Rockwell Condensed", 16.2F));
			this->button_nine->ForeColor = System::Drawing::Color::White;
			this->button_nine->Location = System::Drawing::Point(174, 343);
			this->button_nine->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->button_nine->Name = L"button_nine";
			this->button_nine->Size = System::Drawing::Size(75, 50);
			this->button_nine->TabIndex = 8;
			this->button_nine->Text = L"9";
			this->button_nine->UseVisualStyleBackColor = false;
			this->button_nine->Click += gcnew System::EventHandler(this, &Calculator_YE::button_nine_Click);
			// 
			// button_mult
			// 
			this->button_mult->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->button_mult->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button_mult->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->button_mult->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkGray;
			this->button_mult->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_mult->Font = (gcnew System::Drawing::Font(L"Rockwell Condensed", 16.2F));
			this->button_mult->ForeColor = System::Drawing::Color::White;
			this->button_mult->Location = System::Drawing::Point(295, 343);
			this->button_mult->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->button_mult->Name = L"button_mult";
			this->button_mult->Size = System::Drawing::Size(75, 50);
			this->button_mult->TabIndex = 9;
			this->button_mult->Text = L"х";
			this->button_mult->UseVisualStyleBackColor = false;
			this->button_mult->Click += gcnew System::EventHandler(this, &Calculator_YE::button_mult_Click);
			// 
			// button_four
			// 
			this->button_four->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->button_four->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button_four->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->button_four->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkGray;
			this->button_four->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_four->Font = (gcnew System::Drawing::Font(L"Rockwell Condensed", 16.2F));
			this->button_four->ForeColor = System::Drawing::Color::White;
			this->button_four->Location = System::Drawing::Point(12, 403);
			this->button_four->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->button_four->Name = L"button_four";
			this->button_four->Size = System::Drawing::Size(75, 50);
			this->button_four->TabIndex = 10;
			this->button_four->Text = L"4";
			this->button_four->UseVisualStyleBackColor = false;
			this->button_four->Click += gcnew System::EventHandler(this, &Calculator_YE::button_four_Click);
			// 
			// button_five
			// 
			this->button_five->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->button_five->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button_five->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->button_five->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkGray;
			this->button_five->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_five->Font = (gcnew System::Drawing::Font(L"Rockwell Condensed", 16.2F));
			this->button_five->ForeColor = System::Drawing::Color::White;
			this->button_five->Location = System::Drawing::Point(93, 403);
			this->button_five->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->button_five->Name = L"button_five";
			this->button_five->Size = System::Drawing::Size(75, 50);
			this->button_five->TabIndex = 11;
			this->button_five->Text = L"5";
			this->button_five->UseVisualStyleBackColor = false;
			this->button_five->Click += gcnew System::EventHandler(this, &Calculator_YE::button_five_Click);
			// 
			// button_six
			// 
			this->button_six->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->button_six->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button_six->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->button_six->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkGray;
			this->button_six->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_six->Font = (gcnew System::Drawing::Font(L"Rockwell Condensed", 16.2F));
			this->button_six->ForeColor = System::Drawing::Color::White;
			this->button_six->Location = System::Drawing::Point(174, 403);
			this->button_six->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->button_six->Name = L"button_six";
			this->button_six->Size = System::Drawing::Size(75, 50);
			this->button_six->TabIndex = 12;
			this->button_six->Text = L"6";
			this->button_six->UseVisualStyleBackColor = false;
			this->button_six->Click += gcnew System::EventHandler(this, &Calculator_YE::button_six_Click);
			// 
			// button_minu
			// 
			this->button_minu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->button_minu->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button_minu->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->button_minu->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkGray;
			this->button_minu->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_minu->Font = (gcnew System::Drawing::Font(L"Rockwell Condensed", 16.2F));
			this->button_minu->ForeColor = System::Drawing::Color::White;
			this->button_minu->Location = System::Drawing::Point(295, 403);
			this->button_minu->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->button_minu->Name = L"button_minu";
			this->button_minu->Size = System::Drawing::Size(75, 50);
			this->button_minu->TabIndex = 13;
			this->button_minu->Text = L"-";
			this->button_minu->UseVisualStyleBackColor = false;
			this->button_minu->Click += gcnew System::EventHandler(this, &Calculator_YE::button_minu_Click);
			// 
			// button_one
			// 
			this->button_one->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->button_one->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button_one->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->button_one->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkGray;
			this->button_one->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_one->Font = (gcnew System::Drawing::Font(L"Rockwell Condensed", 16.2F));
			this->button_one->ForeColor = System::Drawing::Color::White;
			this->button_one->Location = System::Drawing::Point(12, 463);
			this->button_one->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->button_one->Name = L"button_one";
			this->button_one->Size = System::Drawing::Size(75, 50);
			this->button_one->TabIndex = 14;
			this->button_one->Text = L"1";
			this->button_one->UseVisualStyleBackColor = false;
			this->button_one->Click += gcnew System::EventHandler(this, &Calculator_YE::button_one_Click);
			// 
			// button_two
			// 
			this->button_two->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->button_two->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button_two->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->button_two->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkGray;
			this->button_two->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_two->Font = (gcnew System::Drawing::Font(L"Rockwell Condensed", 16.2F));
			this->button_two->ForeColor = System::Drawing::Color::White;
			this->button_two->Location = System::Drawing::Point(93, 463);
			this->button_two->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->button_two->Name = L"button_two";
			this->button_two->Size = System::Drawing::Size(75, 50);
			this->button_two->TabIndex = 15;
			this->button_two->Text = L"2";
			this->button_two->UseVisualStyleBackColor = false;
			this->button_two->Click += gcnew System::EventHandler(this, &Calculator_YE::button_two_Click);
			// 
			// button_three
			// 
			this->button_three->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->button_three->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button_three->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->button_three->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkGray;
			this->button_three->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_three->Font = (gcnew System::Drawing::Font(L"Rockwell Condensed", 16.2F));
			this->button_three->ForeColor = System::Drawing::Color::White;
			this->button_three->Location = System::Drawing::Point(174, 463);
			this->button_three->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->button_three->Name = L"button_three";
			this->button_three->Size = System::Drawing::Size(75, 50);
			this->button_three->TabIndex = 16;
			this->button_three->Text = L"3";
			this->button_three->UseVisualStyleBackColor = false;
			this->button_three->Click += gcnew System::EventHandler(this, &Calculator_YE::button_three_Click);
			// 
			// button_plus
			// 
			this->button_plus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->button_plus->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button_plus->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->button_plus->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkGray;
			this->button_plus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_plus->Font = (gcnew System::Drawing::Font(L"Rockwell Condensed", 16.2F));
			this->button_plus->ForeColor = System::Drawing::Color::White;
			this->button_plus->Location = System::Drawing::Point(295, 463);
			this->button_plus->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->button_plus->Name = L"button_plus";
			this->button_plus->Size = System::Drawing::Size(75, 50);
			this->button_plus->TabIndex = 17;
			this->button_plus->Text = L"+";
			this->button_plus->UseVisualStyleBackColor = false;
			this->button_plus->Click += gcnew System::EventHandler(this, &Calculator_YE::button_plus_Click);
			// 
			// button_zero
			// 
			this->button_zero->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->button_zero->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button_zero->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->button_zero->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkGray;
			this->button_zero->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_zero->Font = (gcnew System::Drawing::Font(L"Rockwell Condensed", 16.2F));
			this->button_zero->ForeColor = System::Drawing::Color::White;
			this->button_zero->Location = System::Drawing::Point(93, 523);
			this->button_zero->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->button_zero->Name = L"button_zero";
			this->button_zero->Size = System::Drawing::Size(75, 50);
			this->button_zero->TabIndex = 19;
			this->button_zero->Text = L"0";
			this->button_zero->UseVisualStyleBackColor = false;
			this->button_zero->Click += gcnew System::EventHandler(this, &Calculator_YE::button_zero_Click);
			// 
			// button_equa
			// 
			this->button_equa->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->button_equa->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button_equa->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->button_equa->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkGray;
			this->button_equa->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_equa->Font = (gcnew System::Drawing::Font(L"Rockwell Condensed", 16.2F));
			this->button_equa->ForeColor = System::Drawing::Color::Black;
			this->button_equa->Location = System::Drawing::Point(295, 523);
			this->button_equa->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->button_equa->Name = L"button_equa";
			this->button_equa->Size = System::Drawing::Size(75, 50);
			this->button_equa->TabIndex = 21;
			this->button_equa->Text = L"=";
			this->button_equa->UseVisualStyleBackColor = false;
			this->button_equa->Click += gcnew System::EventHandler(this, &Calculator_YE::button_equa_Click);
			// 
			// button_clear
			// 
			this->button_clear->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(112)));
			this->button_clear->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button_clear->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->button_clear->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkGray;
			this->button_clear->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_clear->Font = (gcnew System::Drawing::Font(L"Rockwell Condensed", 16.2F));
			this->button_clear->Location = System::Drawing::Point(12, 283);
			this->button_clear->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->button_clear->Name = L"button_clear";
			this->button_clear->Size = System::Drawing::Size(75, 50);
			this->button_clear->TabIndex = 22;
			this->button_clear->Text = L"C";
			this->button_clear->UseVisualStyleBackColor = false;
			this->button_clear->Click += gcnew System::EventHandler(this, &Calculator_YE::button_clear_Click);
			// 
			// button_sin
			// 
			this->button_sin->AccessibleDescription = L"";
			this->button_sin->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(130)), static_cast<System::Int32>(static_cast<System::Byte>(72)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->button_sin->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button_sin->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->button_sin->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkGray;
			this->button_sin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_sin->Font = (gcnew System::Drawing::Font(L"Rockwell Condensed", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_sin->ForeColor = System::Drawing::Color::White;
			this->button_sin->Location = System::Drawing::Point(12, 14);
			this->button_sin->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->button_sin->Name = L"button_sin";
			this->button_sin->Size = System::Drawing::Size(65, 40);
			this->button_sin->TabIndex = 23;
			this->button_sin->TabStop = false;
			this->button_sin->Text = L"sin";
			this->button_sin->UseVisualStyleBackColor = false;
			this->button_sin->Click += gcnew System::EventHandler(this, &Calculator_YE::button_sin_Click);
			// 
			// button_abs
			// 
			this->button_abs->AccessibleDescription = L"";
			this->button_abs->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(105)), static_cast<System::Int32>(static_cast<System::Byte>(84)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->button_abs->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button_abs->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->button_abs->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkGray;
			this->button_abs->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_abs->Font = (gcnew System::Drawing::Font(L"Rockwell Condensed", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_abs->ForeColor = System::Drawing::Color::White;
			this->button_abs->Location = System::Drawing::Point(234, 14);
			this->button_abs->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->button_abs->Name = L"button_abs";
			this->button_abs->Size = System::Drawing::Size(65, 40);
			this->button_abs->TabIndex = 24;
			this->button_abs->TabStop = false;
			this->button_abs->Text = L"|x|";
			this->button_abs->UseVisualStyleBackColor = false;
			this->button_abs->Click += gcnew System::EventHandler(this, &Calculator_YE::button_abs_Click);
			// 
			// button_sqrt
			// 
			this->button_sqrt->AccessibleDescription = L"";
			this->button_sqrt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(105)), static_cast<System::Int32>(static_cast<System::Byte>(84)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->button_sqrt->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button_sqrt->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->button_sqrt->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkGray;
			this->button_sqrt->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_sqrt->Font = (gcnew System::Drawing::Font(L"Rockwell Condensed", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_sqrt->ForeColor = System::Drawing::Color::White;
			this->button_sqrt->Location = System::Drawing::Point(305, 14);
			this->button_sqrt->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->button_sqrt->Name = L"button_sqrt";
			this->button_sqrt->Size = System::Drawing::Size(65, 40);
			this->button_sqrt->TabIndex = 25;
			this->button_sqrt->TabStop = false;
			this->button_sqrt->Text = L"√x";
			this->button_sqrt->UseVisualStyleBackColor = false;
			this->button_sqrt->Click += gcnew System::EventHandler(this, &Calculator_YE::button_sqrt_Click);
			// 
			// button_tan
			// 
			this->button_tan->AccessibleDescription = L"";
			this->button_tan->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(130)), static_cast<System::Int32>(static_cast<System::Byte>(72)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->button_tan->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button_tan->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->button_tan->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkGray;
			this->button_tan->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_tan->Font = (gcnew System::Drawing::Font(L"Rockwell Condensed", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_tan->ForeColor = System::Drawing::Color::White;
			this->button_tan->Location = System::Drawing::Point(12, 64);
			this->button_tan->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->button_tan->Name = L"button_tan";
			this->button_tan->Size = System::Drawing::Size(65, 40);
			this->button_tan->TabIndex = 26;
			this->button_tan->TabStop = false;
			this->button_tan->Text = L"tan";
			this->button_tan->UseVisualStyleBackColor = false;
			this->button_tan->Click += gcnew System::EventHandler(this, &Calculator_YE::button_tan_Click);
			// 
			// button_pow
			// 
			this->button_pow->AccessibleDescription = L"";
			this->button_pow->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(105)), static_cast<System::Int32>(static_cast<System::Byte>(84)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->button_pow->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button_pow->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->button_pow->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkGray;
			this->button_pow->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_pow->Font = (gcnew System::Drawing::Font(L"Rockwell Condensed", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_pow->ForeColor = System::Drawing::Color::White;
			this->button_pow->Location = System::Drawing::Point(234, 64);
			this->button_pow->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->button_pow->Name = L"button_pow";
			this->button_pow->Size = System::Drawing::Size(65, 40);
			this->button_pow->TabIndex = 27;
			this->button_pow->TabStop = false;
			this->button_pow->Text = L"x²";
			this->button_pow->UseVisualStyleBackColor = false;
			this->button_pow->Click += gcnew System::EventHandler(this, &Calculator_YE::button_pow_Click);
			// 
			// button_csc
			// 
			this->button_csc->AccessibleDescription = L"";
			this->button_csc->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(130)), static_cast<System::Int32>(static_cast<System::Byte>(72)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->button_csc->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button_csc->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->button_csc->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkGray;
			this->button_csc->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_csc->Font = (gcnew System::Drawing::Font(L"Rockwell Condensed", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_csc->ForeColor = System::Drawing::Color::White;
			this->button_csc->Location = System::Drawing::Point(12, 114);
			this->button_csc->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->button_csc->Name = L"button_csc";
			this->button_csc->Size = System::Drawing::Size(65, 40);
			this->button_csc->TabIndex = 29;
			this->button_csc->TabStop = false;
			this->button_csc->Text = L"csc";
			this->button_csc->UseVisualStyleBackColor = false;
			this->button_csc->Click += gcnew System::EventHandler(this, &Calculator_YE::button_csc_Click);
			// 
			// button_cos
			// 
			this->button_cos->AccessibleDescription = L"";
			this->button_cos->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(130)), static_cast<System::Int32>(static_cast<System::Byte>(72)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->button_cos->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button_cos->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->button_cos->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkGray;
			this->button_cos->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_cos->Font = (gcnew System::Drawing::Font(L"Rockwell Condensed", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_cos->ForeColor = System::Drawing::Color::White;
			this->button_cos->Location = System::Drawing::Point(83, 14);
			this->button_cos->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->button_cos->Name = L"button_cos";
			this->button_cos->Size = System::Drawing::Size(65, 40);
			this->button_cos->TabIndex = 30;
			this->button_cos->TabStop = false;
			this->button_cos->Text = L"cos";
			this->button_cos->UseVisualStyleBackColor = false;
			this->button_cos->Click += gcnew System::EventHandler(this, &Calculator_YE::button_cos_Click);
			// 
			// button_e
			// 
			this->button_e->AccessibleDescription = L"";
			this->button_e->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(105)), static_cast<System::Int32>(static_cast<System::Byte>(84)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->button_e->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button_e->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->button_e->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkGray;
			this->button_e->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_e->Font = (gcnew System::Drawing::Font(L"Rockwell Condensed", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_e->ForeColor = System::Drawing::Color::White;
			this->button_e->Location = System::Drawing::Point(305, 114);
			this->button_e->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->button_e->Name = L"button_e";
			this->button_e->Size = System::Drawing::Size(65, 40);
			this->button_e->TabIndex = 31;
			this->button_e->TabStop = false;
			this->button_e->Text = L"e";
			this->button_e->UseVisualStyleBackColor = false;
			this->button_e->Click += gcnew System::EventHandler(this, &Calculator_YE::button_e_Click);
			// 
			// button_cot
			// 
			this->button_cot->AccessibleDescription = L"";
			this->button_cot->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(130)), static_cast<System::Int32>(static_cast<System::Byte>(72)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->button_cot->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button_cot->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->button_cot->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkGray;
			this->button_cot->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_cot->Font = (gcnew System::Drawing::Font(L"Rockwell Condensed", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_cot->ForeColor = System::Drawing::Color::White;
			this->button_cot->Location = System::Drawing::Point(83, 114);
			this->button_cot->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->button_cot->Name = L"button_cot";
			this->button_cot->Size = System::Drawing::Size(65, 40);
			this->button_cot->TabIndex = 32;
			this->button_cot->TabStop = false;
			this->button_cot->Text = L"cot";
			this->button_cot->UseVisualStyleBackColor = false;
			this->button_cot->Click += gcnew System::EventHandler(this, &Calculator_YE::button_cot_Click);
			// 
			// button_sec
			// 
			this->button_sec->AccessibleDescription = L"";
			this->button_sec->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(130)), static_cast<System::Int32>(static_cast<System::Byte>(72)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->button_sec->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button_sec->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->button_sec->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkGray;
			this->button_sec->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_sec->Font = (gcnew System::Drawing::Font(L"Rockwell Condensed", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_sec->ForeColor = System::Drawing::Color::White;
			this->button_sec->Location = System::Drawing::Point(83, 64);
			this->button_sec->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->button_sec->Name = L"button_sec";
			this->button_sec->Size = System::Drawing::Size(65, 40);
			this->button_sec->TabIndex = 33;
			this->button_sec->TabStop = false;
			this->button_sec->Text = L"sec";
			this->button_sec->UseVisualStyleBackColor = false;
			this->button_sec->Click += gcnew System::EventHandler(this, &Calculator_YE::button_sec_Click);
			// 
			// button_pi
			// 
			this->button_pi->AccessibleDescription = L"";
			this->button_pi->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(105)), static_cast<System::Int32>(static_cast<System::Byte>(84)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->button_pi->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button_pi->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->button_pi->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkGray;
			this->button_pi->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_pi->Font = (gcnew System::Drawing::Font(L"Rockwell Condensed", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_pi->ForeColor = System::Drawing::Color::White;
			this->button_pi->Location = System::Drawing::Point(234, 114);
			this->button_pi->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->button_pi->Name = L"button_pi";
			this->button_pi->Size = System::Drawing::Size(65, 40);
			this->button_pi->TabIndex = 34;
			this->button_pi->TabStop = false;
			this->button_pi->Text = L"π";
			this->button_pi->UseVisualStyleBackColor = false;
			this->button_pi->Click += gcnew System::EventHandler(this, &Calculator_YE::button_pi_Click);
			// 
			// button_del
			// 
			this->button_del->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->button_del->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button_del->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->button_del->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkGray;
			this->button_del->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_del->Font = (gcnew System::Drawing::Font(L"Rockwell Condensed", 16.2F));
			this->button_del->ForeColor = System::Drawing::Color::White;
			this->button_del->Location = System::Drawing::Point(174, 283);
			this->button_del->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->button_del->Name = L"button_del";
			this->button_del->Size = System::Drawing::Size(75, 50);
			this->button_del->TabIndex = 35;
			this->button_del->Text = L"<-";
			this->button_del->UseVisualStyleBackColor = false;
			this->button_del->Click += gcnew System::EventHandler(this, &Calculator_YE::button_del_Click);
			// 
			// button_log
			// 
			this->button_log->AccessibleDescription = L"";
			this->button_log->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(105)), static_cast<System::Int32>(static_cast<System::Byte>(84)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->button_log->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button_log->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->button_log->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkGray;
			this->button_log->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_log->Font = (gcnew System::Drawing::Font(L"Rockwell Condensed", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_log->ForeColor = System::Drawing::Color::White;
			this->button_log->Location = System::Drawing::Point(305, 65);
			this->button_log->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->button_log->Name = L"button_log";
			this->button_log->Size = System::Drawing::Size(65, 40);
			this->button_log->TabIndex = 36;
			this->button_log->TabStop = false;
			this->button_log->Text = L"log";
			this->button_log->UseVisualStyleBackColor = false;
			this->button_log->Click += gcnew System::EventHandler(this, &Calculator_YE::button_log_Click);
			// 
			// button_dot
			// 
			this->button_dot->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->button_dot->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button_dot->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->button_dot->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkGray;
			this->button_dot->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_dot->Font = (gcnew System::Drawing::Font(L"Rockwell Condensed", 16.2F));
			this->button_dot->ForeColor = System::Drawing::Color::White;
			this->button_dot->Location = System::Drawing::Point(12, 523);
			this->button_dot->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->button_dot->Name = L"button_dot";
			this->button_dot->Size = System::Drawing::Size(75, 50);
			this->button_dot->TabIndex = 37;
			this->button_dot->Text = L".";
			this->button_dot->UseVisualStyleBackColor = false;
			this->button_dot->Click += gcnew System::EventHandler(this, &Calculator_YE::button_dot_Click);
			// 
			// Calculator_YE
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::AntiqueWhite;
			this->ClientSize = System::Drawing::Size(382, 603);
			this->Controls->Add(this->button_dot);
			this->Controls->Add(this->button_log);
			this->Controls->Add(this->button_del);
			this->Controls->Add(this->button_pi);
			this->Controls->Add(this->button_sec);
			this->Controls->Add(this->button_cot);
			this->Controls->Add(this->button_e);
			this->Controls->Add(this->button_cos);
			this->Controls->Add(this->button_csc);
			this->Controls->Add(this->button_pow);
			this->Controls->Add(this->button_tan);
			this->Controls->Add(this->button_sqrt);
			this->Controls->Add(this->button_abs);
			this->Controls->Add(this->button_sin);
			this->Controls->Add(this->button_clear);
			this->Controls->Add(this->button_equa);
			this->Controls->Add(this->button_zero);
			this->Controls->Add(this->button_plus);
			this->Controls->Add(this->button_three);
			this->Controls->Add(this->button_two);
			this->Controls->Add(this->button_one);
			this->Controls->Add(this->button_minu);
			this->Controls->Add(this->button_six);
			this->Controls->Add(this->button_five);
			this->Controls->Add(this->button_four);
			this->Controls->Add(this->button_mult);
			this->Controls->Add(this->button_nine);
			this->Controls->Add(this->button_eigh);
			this->Controls->Add(this->button_seve);
			this->Controls->Add(this->button_divi);
			this->Controls->Add(this->Screen);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->KeyPreview = true;
			this->MaximizeBox = false;
			this->Name = L"Calculator_YE";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Калькулятор";
			this->TransparencyKey = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Calculator_YE::Calculator_YE_KeyDown);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double firstnum;
		double secondnum;
		double res;
		char oper;
		
		/*Ввод чисел*/

		private: System::Void button_one_Click(System::Object^ sender, System::EventArgs^ e) {
			if (Screen->Text == "0") {
				Screen->Text = "1";
			}
			else {
				Screen->Text = Screen->Text + "1";
			}
		}

		private: System::Void button_two_Click(System::Object^ sender, System::EventArgs^ e) {
			if (Screen->Text == "0") {
				Screen->Text = "2";
			}
			else {
				Screen->Text = Screen->Text + "2";
			}
		}

		private: System::Void button_three_Click(System::Object^ sender, System::EventArgs^ e) {
			if (Screen->Text == "0") {
				Screen->Text = "3";
			}
			else {
				Screen->Text = Screen->Text + "3";
			}
		}

		private: System::Void button_four_Click(System::Object^ sender, System::EventArgs^ e) {
			if (Screen->Text == "0") {
				Screen->Text = "4";
			}
			else {
				Screen->Text = Screen->Text + "4";
			}
		}

		private: System::Void button_five_Click(System::Object^ sender, System::EventArgs^ e) {
			if (Screen->Text == "0") {
				Screen->Text = "5";
			}
			else {
				Screen->Text = Screen->Text + "5";
			}
		}

		private: System::Void button_six_Click(System::Object^ sender, System::EventArgs^ e) {
			if (Screen->Text == "0") {
				Screen->Text = "6";
			}
			else {
				Screen->Text = Screen->Text + "6";
			}
		}

		private: System::Void button_seve_Click(System::Object^ sender, System::EventArgs^ e) {
			if (Screen->Text == "0") {
				Screen->Text = "7";
			}
			else {
				Screen->Text = Screen->Text + "7";
			}
		}

		private: System::Void button_eigh_Click(System::Object^ sender, System::EventArgs^ e) {
			if (Screen->Text == "0") {
				Screen->Text = "8";
			}
			else {
				Screen->Text = Screen->Text + "8";
			}
		}

		private: System::Void button_nine_Click(System::Object^ sender, System::EventArgs^ e) {
			if (Screen->Text == "0") {
				Screen->Text = "9";
			}
			else {
				Screen->Text = Screen->Text + "9";
			}
		}

		private: System::Void button_zero_Click(System::Object^ sender, System::EventArgs^ e) {
			if (Screen->Text == "0") {
				Screen->Text = "0";
			}
			else {
				Screen->Text = Screen->Text + "0";
			}
		}

		private: System::Void button_dot_Click(System::Object^ sender, System::EventArgs^ e) {
			if (Screen->Text == "0") {
				Screen->Text = ",";
			}
			else {
				Screen->Text = Screen->Text + ",";
			}
		}

		/*Операции*/

		private: System::Void button_divi_Click(System::Object^ sender, System::EventArgs^ e) {
			firstnum = Convert::ToDouble(Screen->Text);
			Screen->Text = "0";
			oper = '/';
		}

		private: System::Void button_mult_Click(System::Object^ sender, System::EventArgs^ e) {
			firstnum = Convert::ToDouble(Screen->Text);
			Screen->Text = "0";
			oper = '*';
		}

		private: System::Void button_minu_Click(System::Object^ sender, System::EventArgs^ e) {
			firstnum = Convert::ToDouble(Screen->Text);
			Screen->Text = "0";
			oper = '-';
		}

		private: System::Void button_plus_Click(System::Object^ sender, System::EventArgs^ e) {
			firstnum = Convert::ToDouble(Screen->Text);
			Screen->Text = "0";
			oper = '+';
		}

		/*Тригонометрия*/

		private: System::Void button_sin_Click(System::Object^ sender, System::EventArgs^ e) {
			firstnum = Convert::ToDouble(Screen->Text);
			if (firstnum) {
				firstnum = Math::Sin(Math::PI * firstnum / 180.0);
				Screen->Text = System::Convert::ToString(firstnum);
			}
			else if (secondnum) {
				secondnum = Math::Sin(Math::PI * secondnum / 180.0);
				Screen->Text = System::Convert::ToString(secondnum);
			}
			else if (res) {
				res = Math::Sin(Math::PI * res / 180.0);
				Screen->Text = System::Convert::ToString(res);
			}
		}

		private: System::Void button_cos_Click(System::Object^ sender, System::EventArgs^ e) {
			firstnum = Convert::ToDouble(Screen->Text);
			if (firstnum) {
				firstnum = Math::Cos(Math::PI * firstnum / 180.0);
				Screen->Text = System::Convert::ToString(firstnum);
			}
			else if (secondnum) {
				secondnum = Math::Cos(Math::PI * secondnum / 180.0);
				Screen->Text = System::Convert::ToString(secondnum);
			}
			else if (res) {
				res = Math::Cos(Math::PI * res / 180.0);
				Screen->Text = System::Convert::ToString(res);
			}
		}

		private: System::Void button_tan_Click(System::Object^ sender, System::EventArgs^ e) {
			firstnum = Convert::ToDouble(Screen->Text);
			if (firstnum) {
				firstnum = Math::Tan(Math::PI * firstnum / 180.0);
				Screen->Text = System::Convert::ToString(firstnum);
			}
			else if (secondnum) {
				secondnum = Math::Tan(Math::PI * secondnum / 180.0);
				Screen->Text = System::Convert::ToString(secondnum);
			}
			else if (res) {
				res = Math::Tan(Math::PI * res / 180.0);
				Screen->Text = System::Convert::ToString(res);
			}
		}

		private: System::Void button_cot_Click(System::Object^ sender, System::EventArgs^ e) {
			firstnum = Convert::ToDouble(Screen->Text);
			if (firstnum) {
				firstnum = Math::Cos(Math::PI * firstnum / 180.0) / Math::Sin(Math::PI * firstnum / 180.0);
				Screen->Text = System::Convert::ToString(firstnum);
			}
			else if (secondnum) {
				secondnum = Math::Cos(Math::PI * secondnum / 180.0) / Math::Sin(Math::PI * secondnum / 180.0);
				Screen->Text = System::Convert::ToString(secondnum);
			}
			else if (res) {
				res = Math::Cos(Math::PI * res / 180.0) / Math::Sin(Math::PI * res / 180.0);
				Screen->Text = System::Convert::ToString(res);
			}
		}

		private: System::Void button_sec_Click(System::Object^ sender, System::EventArgs^ e) {
			firstnum = Convert::ToDouble(Screen->Text);
			if (firstnum) {
				firstnum = 1 / Math::Cos(Math::PI * firstnum / 180.0);
				Screen->Text = System::Convert::ToString(firstnum);
			}
			else if (secondnum) {
				secondnum = 1 / Math::Cos(Math::PI * secondnum / 180.0);
				Screen->Text = System::Convert::ToString(secondnum);
			}
			else if (res) {
				res = 1 / Math::Cos(Math::PI * res / 180.0);
				Screen->Text = System::Convert::ToString(res);
			}
		}

		private: System::Void button_csc_Click(System::Object^ sender, System::EventArgs^ e) {
			firstnum = Convert::ToDouble(Screen->Text);
			if (firstnum) {
				firstnum = 1 / Math::Sin(Math::PI * firstnum / 180.0);
				Screen->Text = System::Convert::ToString(firstnum);
			}
			else if (secondnum) {
				secondnum = 1 / Math::Sin(Math::PI * secondnum / 180.0);
				Screen->Text = System::Convert::ToString(secondnum);
			}
			else if (res) {
				res = 1 / Math::Sin(Math::PI * res / 180.0);
				Screen->Text = System::Convert::ToString(res);
			}
		}

		/*Модуль и прочее*/

		private: System::Void button_abs_Click(System::Object^ sender, System::EventArgs^ e) {
			firstnum = Convert::ToDouble(Screen->Text);
			res = Math::Abs(res);
			Screen->Text = System::Convert::ToString(res);
		}

		private: System::Void button_sqrt_Click(System::Object^ sender, System::EventArgs^ e) {
			firstnum = Convert::ToDouble(Screen->Text);
			if (firstnum) {
				firstnum = Math::Sqrt(firstnum);
				Screen->Text = System::Convert::ToString(firstnum);
			}
			else if (secondnum) {
				secondnum = Math::Sqrt(secondnum);
				Screen->Text = System::Convert::ToString(secondnum);
			}
			else if (res) {
				res = Math::Sqrt(res);
				Screen->Text = System::Convert::ToString(res);
			}
		}

		private: System::Void button_pow_Click(System::Object^ sender, System::EventArgs^ e) {
			firstnum = Convert::ToDouble(Screen->Text);
			if (firstnum) {
				firstnum = Math::Pow(firstnum, 2);
				Screen->Text = System::Convert::ToString(firstnum);
			}
			else if (secondnum) {
				firstnum = Math::Pow(secondnum, 2);
				Screen->Text = System::Convert::ToString(secondnum);
			}
			else if (res) {
				res = Math::Pow(res, 2);
				Screen->Text = System::Convert::ToString(res);
			}
		}

		private: System::Void button_pi_Click(System::Object^ sender, System::EventArgs^ e) {
			firstnum = Convert::ToDouble(Screen->Text);
			firstnum = 3.1415926535;
			Screen->Text = System::Convert::ToString(firstnum);
		}

		private: System::Void button_e_Click(System::Object^ sender, System::EventArgs^ e) {
			firstnum = Convert::ToDouble(Screen->Text);
			firstnum = 2.7182818284;
			Screen->Text = System::Convert::ToString(firstnum);
		}

		private: System::Void button_log_Click(System::Object^ sender, System::EventArgs^ e) {
			firstnum = Convert::ToDouble(Screen->Text);
			if (firstnum) {
				firstnum = Math::Log10(firstnum);
				Screen->Text = System::Convert::ToString(firstnum);
			}
			else if(secondnum) {
				secondnum = Math::Log10(secondnum);
				Screen->Text = System::Convert::ToString(secondnum);
			}
			else if (res) {
				res = Math::Log10(res);
				Screen->Text = System::Convert::ToString(res);
			}
		}

		/*Итоги опепаций*/

		private: System::Void button_equa_Click(System::Object^ sender, System::EventArgs^ e) {
			secondnum = Convert::ToDouble(Screen->Text);

			switch (oper) {
			case '/':
				res = firstnum / secondnum;
				Screen->Text = System::Convert::ToString(res);
				break;
			case '*':
				res = firstnum * secondnum;
				Screen->Text = System::Convert::ToString(res);
				break;
			case '-':
				res = firstnum - secondnum;
				Screen->Text = System::Convert::ToString(res);
				break;
			case '+':
				res = firstnum + secondnum;
				Screen->Text = System::Convert::ToString(res);
				break;
			}
		}

		/*Очистка*/

		private: System::Void button_clear_Click(System::Object^ sender, System::EventArgs^ e) {
			Screen->Clear();
			Screen->Text = "0";
		}

		private: System::Void button_del_Click(System::Object^ sender, System::EventArgs^ e) {
			int l = Screen->Text->Length - 1;
			String^ txt = Convert::ToString(Screen->Text);
			Screen->Clear();
			for (int i = 0; i < l; i++) {
				firstnum = txt[i];
				secondnum = txt[i];
				Screen->Text = Screen->Text + txt[i];
			}
		}

		private: System::Void Calculator_YE_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
			if (e->KeyValue == (char)Keys::Escape) {
				button_clear_Click(button_clear, nullptr);
			}
			if (e->KeyValue == (char)Keys::Back) {
				button_del_Click(button_del, nullptr);
			}
		}
};
}