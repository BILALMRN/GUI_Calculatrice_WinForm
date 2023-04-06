#pragma once
#include <sstream>
#include <iostream>
#include <string>
#include <corecrt_wstdlib.h>

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  buttonSoustraction;
	private: System::Windows::Forms::Button^  buttonAddition;


	private: System::Windows::Forms::Button^  buttonDiv;
	private: System::Windows::Forms::Button^  buttonMul;


	private: System::Windows::Forms::Button^  buttonEqual;

	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Panel^  panel2;

	private: System::Windows::Forms::Button^  buttonC;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  labelEqual;

	private: System::Windows::Forms::Label^  opiration;
	private: System::Windows::Forms::Label^  userVal2;
	private: System::Windows::Forms::Label^  userVal1;
	public:
	private:


	private:


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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->buttonC = (gcnew System::Windows::Forms::Button());
			this->buttonSoustraction = (gcnew System::Windows::Forms::Button());
			this->buttonAddition = (gcnew System::Windows::Forms::Button());
			this->buttonDiv = (gcnew System::Windows::Forms::Button());
			this->buttonMul = (gcnew System::Windows::Forms::Button());
			this->buttonEqual = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->labelEqual = (gcnew System::Windows::Forms::Label());
			this->opiration = (gcnew System::Windows::Forms::Label());
			this->userVal2 = (gcnew System::Windows::Forms::Label());
			this->userVal1 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->AutoSize = true;
			this->button1->BackColor = System::Drawing::Color::Gray;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Consolas", 60, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->button1->Location = System::Drawing::Point(12, 14);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(97, 104);
			this->button1->TabIndex = 0;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::val1);
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->panel1->Controls->Add(this->buttonC);
			this->panel1->Controls->Add(this->buttonSoustraction);
			this->panel1->Controls->Add(this->buttonAddition);
			this->panel1->Controls->Add(this->buttonDiv);
			this->panel1->Controls->Add(this->buttonMul);
			this->panel1->Controls->Add(this->buttonEqual);
			this->panel1->Controls->Add(this->button9);
			this->panel1->Controls->Add(this->button8);
			this->panel1->Controls->Add(this->button7);
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button12);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Location = System::Drawing::Point(0, 85);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(572, 424);
			this->panel1->TabIndex = 1;
			// 
			// buttonC
			// 
			this->buttonC->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->buttonC->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->buttonC->BackColor = System::Drawing::Color::LightSteelBlue;
			this->buttonC->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonC->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->buttonC->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonC->Font = (gcnew System::Drawing::Font(L"Consolas", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonC->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonC->Location = System::Drawing::Point(0, 383);
			this->buttonC->Name = L"buttonC";
			this->buttonC->Size = System::Drawing::Size(572, 42);
			this->buttonC->TabIndex = 30;
			this->buttonC->Text = L"C";
			this->buttonC->UseVisualStyleBackColor = false;
			this->buttonC->Click += gcnew System::EventHandler(this, &MyForm::btn_c);
			// 
			// buttonSoustraction
			// 
			this->buttonSoustraction->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->buttonSoustraction->AutoSize = true;
			this->buttonSoustraction->BackColor = System::Drawing::Color::Gray;
			this->buttonSoustraction->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonSoustraction->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->buttonSoustraction->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonSoustraction->Font = (gcnew System::Drawing::Font(L"Consolas", 60, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonSoustraction->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonSoustraction->Location = System::Drawing::Point(464, 14);
			this->buttonSoustraction->Name = L"buttonSoustraction";
			this->buttonSoustraction->Size = System::Drawing::Size(97, 104);
			this->buttonSoustraction->TabIndex = 29;
			this->buttonSoustraction->Text = L"-";
			this->buttonSoustraction->UseVisualStyleBackColor = false;
			this->buttonSoustraction->Click += gcnew System::EventHandler(this, &MyForm::soustraction);
			// 
			// buttonAddition
			// 
			this->buttonAddition->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->buttonAddition->AutoSize = true;
			this->buttonAddition->BackColor = System::Drawing::Color::Gray;
			this->buttonAddition->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonAddition->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->buttonAddition->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonAddition->Font = (gcnew System::Drawing::Font(L"Consolas", 60, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonAddition->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonAddition->Location = System::Drawing::Point(361, 14);
			this->buttonAddition->Name = L"buttonAddition";
			this->buttonAddition->Size = System::Drawing::Size(97, 104);
			this->buttonAddition->TabIndex = 28;
			this->buttonAddition->Text = L"+";
			this->buttonAddition->UseVisualStyleBackColor = false;
			this->buttonAddition->Click += gcnew System::EventHandler(this, &MyForm::add);
			// 
			// buttonDiv
			// 
			this->buttonDiv->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->buttonDiv->AutoSize = true;
			this->buttonDiv->BackColor = System::Drawing::Color::Gray;
			this->buttonDiv->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonDiv->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->buttonDiv->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonDiv->Font = (gcnew System::Drawing::Font(L"Consolas", 60, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonDiv->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonDiv->Location = System::Drawing::Point(467, 141);
			this->buttonDiv->Name = L"buttonDiv";
			this->buttonDiv->Size = System::Drawing::Size(97, 104);
			this->buttonDiv->TabIndex = 27;
			this->buttonDiv->Text = L"/";
			this->buttonDiv->UseVisualStyleBackColor = false;
			this->buttonDiv->Click += gcnew System::EventHandler(this, &MyForm::division);
			// 
			// buttonMul
			// 
			this->buttonMul->AutoSize = true;
			this->buttonMul->BackColor = System::Drawing::Color::Gray;
			this->buttonMul->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonMul->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->buttonMul->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonMul->Font = (gcnew System::Drawing::Font(L"Consolas", 60, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonMul->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonMul->Location = System::Drawing::Point(361, 141);
			this->buttonMul->Name = L"buttonMul";
			this->buttonMul->Size = System::Drawing::Size(97, 104);
			this->buttonMul->TabIndex = 26;
			this->buttonMul->Text = L"x";
			this->buttonMul->UseVisualStyleBackColor = false;
			this->buttonMul->Click += gcnew System::EventHandler(this, &MyForm::mulltiplication);
			// 
			// buttonEqual
			// 
			this->buttonEqual->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->buttonEqual->AutoSize = true;
			this->buttonEqual->BackColor = System::Drawing::Color::Gray;
			this->buttonEqual->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonEqual->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->buttonEqual->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonEqual->Font = (gcnew System::Drawing::Font(L"Consolas", 60, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonEqual->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonEqual->Location = System::Drawing::Point(464, 282);
			this->buttonEqual->Name = L"buttonEqual";
			this->buttonEqual->Size = System::Drawing::Size(97, 104);
			this->buttonEqual->TabIndex = 25;
			this->buttonEqual->Text = L"=";
			this->buttonEqual->UseVisualStyleBackColor = false;
			this->buttonEqual->Click += gcnew System::EventHandler(this, &MyForm::equal);
			// 
			// button9
			// 
			this->button9->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button9->AutoSize = true;
			this->button9->BackColor = System::Drawing::Color::Gray;
			this->button9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button9->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button9->Font = (gcnew System::Drawing::Font(L"Consolas", 60, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->button9->Location = System::Drawing::Point(243, 282);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(97, 104);
			this->button9->TabIndex = 23;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::val9);
			// 
			// button8
			// 
			this->button8->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button8->AutoSize = true;
			this->button8->BackColor = System::Drawing::Color::Gray;
			this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button8->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button8->Font = (gcnew System::Drawing::Font(L"Consolas", 60, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->button8->Location = System::Drawing::Point(130, 282);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(97, 104);
			this->button8->TabIndex = 22;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::val8);
			// 
			// button7
			// 
			this->button7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button7->AutoSize = true;
			this->button7->BackColor = System::Drawing::Color::Gray;
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->Font = (gcnew System::Drawing::Font(L"Consolas", 60, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->button7->Location = System::Drawing::Point(12, 282);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(97, 104);
			this->button7->TabIndex = 21;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::val7);
			// 
			// button6
			// 
			this->button6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button6->AutoSize = true;
			this->button6->BackColor = System::Drawing::Color::Gray;
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Font = (gcnew System::Drawing::Font(L"Consolas", 60, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->button6->Location = System::Drawing::Point(243, 141);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(97, 119);
			this->button6->TabIndex = 20;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::val6);
			// 
			// button5
			// 
			this->button5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button5->AutoSize = true;
			this->button5->BackColor = System::Drawing::Color::Gray;
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Consolas", 60, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->button5->Location = System::Drawing::Point(130, 148);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(97, 104);
			this->button5->TabIndex = 19;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::val5);
			// 
			// button4
			// 
			this->button4->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->button4->AutoSize = true;
			this->button4->BackColor = System::Drawing::Color::Gray;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Consolas", 60, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->button4->Location = System::Drawing::Point(12, 148);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(97, 104);
			this->button4->TabIndex = 18;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::val4);
			// 
			// button3
			// 
			this->button3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button3->AutoSize = true;
			this->button3->BackColor = System::Drawing::Color::Gray;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Consolas", 60, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->button3->Location = System::Drawing::Point(243, 14);
			this->button3->Name = L"button3";
			this->button3->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->button3->Size = System::Drawing::Size(97, 104);
			this->button3->TabIndex = 17;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::val3);
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button2->AutoSize = true;
			this->button2->BackColor = System::Drawing::Color::Gray;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Consolas", 60, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->button2->Location = System::Drawing::Point(130, 14);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(97, 104);
			this->button2->TabIndex = 16;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::val2);
			// 
			// button12
			// 
			this->button12->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button12->AutoSize = true;
			this->button12->BackColor = System::Drawing::Color::Gray;
			this->button12->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button12->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button12->Font = (gcnew System::Drawing::Font(L"Consolas", 60, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->button12->Location = System::Drawing::Point(361, 282);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(97, 104);
			this->button12->TabIndex = 15;
			this->button12->Text = L"0";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::val0);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->labelEqual);
			this->panel2->Controls->Add(this->opiration);
			this->panel2->Controls->Add(this->userVal2);
			this->panel2->Controls->Add(this->userVal1);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(576, 84);
			this->panel2->TabIndex = 2;
			// 
			// labelEqual
			// 
			this->labelEqual->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelEqual->Location = System::Drawing::Point(3, 61);
			this->labelEqual->Name = L"labelEqual";
			this->labelEqual->Size = System::Drawing::Size(100, 23);
			this->labelEqual->TabIndex = 4;
			this->labelEqual->Text = L"=";
			this->labelEqual->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// opiration
			// 
			this->opiration->Location = System::Drawing::Point(3, 23);
			this->opiration->Name = L"opiration";
			this->opiration->Size = System::Drawing::Size(100, 15);
			this->opiration->TabIndex = 3;
			this->opiration->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// userVal2
			// 
			this->userVal2->Location = System::Drawing::Point(3, 38);
			this->userVal2->Name = L"userVal2";
			this->userVal2->Size = System::Drawing::Size(100, 23);
			this->userVal2->TabIndex = 2;
			this->userVal2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// userVal1
			// 
			this->userVal1->Location = System::Drawing::Point(3, 0);
			this->userVal1->Name = L"userVal1";
			this->userVal1->Size = System::Drawing::Size(100, 23);
			this->userVal1->TabIndex = 1;
			this->userVal1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(100, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(476, 84);
			this->label1->TabIndex = 0;
			this->label1->Text = L"0";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->ClientSize = System::Drawing::Size(576, 521);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"CALCUL";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		//
		//LES VALEUR UTLISE DANS CE PROGRAM
		//
	private: int64_t deuximValeur = NULL, resulta = NULL, valeurEntrerParUser = 0;
	public: int choix = NULL; bool continueCalculAvecDernierValeur = true;
			//
			// LES FONCTION 
			//
			void fonctionValeurEntrerParUser( int val ) {
				if ((continueCalculAvecDernierValeur == false)) {
					fonctionRenisailisation();
					continueCalculAvecDernierValeur = true;
					valeurEntrerParUser = (valeurEntrerParUser * 10) + val;
					this->label1->Text = Convert::ToString(valeurEntrerParUser);
				}
				else {
					valeurEntrerParUser = (valeurEntrerParUser * 10) + val;
					this->label1->Text = Convert::ToString(valeurEntrerParUser);
				}
			}
			//
			//fonction
			//
			void foctionAffectation() {	
				this->userVal2->Text = L"" + Convert::ToString(valeurEntrerParUser);
				this->userVal1->Text = L"" + Convert::ToString(deuximValeur);
				deuximValeur = resulta;
				valeurEntrerParUser = 0;
				}
			//
			//fonction pour  reINISIALISER DES VALEUR 
			//
			void fonctionRenisailisation() {
				this->userVal2->Text = L"";
				this->opiration->Text = "";
				this->userVal1->Text = L"";
				deuximValeur = NULL;
				valeurEntrerParUser = 0; 
				resulta=NULL;
				choix = 0;
			}
			//
			//fonction pour  reINISIALISER libel
			//
			void labelNull() {
				this->label1->Text = L"";
			}
			//
			//fonction pour  utilisre DernierValeur de Equal
			//
			void continueCalculAvecDernierValeurEqual() {
				continueCalculAvecDernierValeur = true;
			}
			//
			//fonction pour choisir l'opiration 
			//
			void choisir() {
				if (deuximValeur == NULL) {
					deuximValeur = valeurEntrerParUser;
					this->userVal1->Text = L""+ Convert::ToString(deuximValeur);
					valeurEntrerParUser = 0;
				}
				else  {
					switch (choix)
					{
					case 0:
						break;
					case 1:
						resulta = deuximValeur + valeurEntrerParUser;
						foctionAffectation();
						labelNull();
						break;
					case 2:
						resulta = deuximValeur - valeurEntrerParUser;
						foctionAffectation();
						labelNull();
						break;
					case 3:
						resulta = deuximValeur * valeurEntrerParUser;
						foctionAffectation();
						labelNull();
						break;
					case 4:
						//
						//la division sur 0 est impossible
						//
						if (valeurEntrerParUser == 0) {
							this->label1->Text = L"ERROR";
							fonctionRenisailisation();
						}
						else
						{
							resulta = deuximValeur / valeurEntrerParUser;
							foctionAffectation();
							labelNull();
							break;
						}
						break;
					//default:  break;
					}


				}				
}
			//
			//button de number
			//
private: System::Void val1(System::Object^  sender, System::EventArgs^  e) {
	fonctionValeurEntrerParUser(1);
}
private: System::Void val2(System::Object^  sender, System::EventArgs^  e) {
	fonctionValeurEntrerParUser(2);
}
private: System::Void val3(System::Object^  sender, System::EventArgs^  e) {
	fonctionValeurEntrerParUser(3);
}
private: System::Void val4(System::Object^  sender, System::EventArgs^  e) {
	fonctionValeurEntrerParUser(4);
}
private: System::Void val5(System::Object^  sender, System::EventArgs^  e) {
	fonctionValeurEntrerParUser(5);
}
private: System::Void val6(System::Object^  sender, System::EventArgs^  e) {
	fonctionValeurEntrerParUser(6);
}
private: System::Void val7(System::Object^  sender, System::EventArgs^  e) {
	fonctionValeurEntrerParUser(7);
}
private: System::Void val8(System::Object^  sender, System::EventArgs^  e) {
	fonctionValeurEntrerParUser(8);
}
private: System::Void val9(System::Object^  sender, System::EventArgs^  e) {
	fonctionValeurEntrerParUser(9);
}
private: System::Void val0(System::Object^  sender, System::EventArgs^  e) {
	fonctionValeurEntrerParUser(0);
}
		 //
		 //button de l'opiration : *,-,+,/,
		 //
private: System::Void add(System::Object^  sender, System::EventArgs^  e) {
	this->opiration->Text = "+";
	labelNull();
	choisir();
	choix = 1;
	continueCalculAvecDernierValeurEqual();
}
private: System::Void soustraction(System::Object^  sender, System::EventArgs^  e) {
	this->opiration->Text = "-";
	labelNull();
	choisir();
	choix = 2;
	continueCalculAvecDernierValeurEqual();
}
private: System::Void mulltiplication(System::Object^  sender, System::EventArgs^  e) {
	this->opiration->Text = "x";
	labelNull();
	choisir();
	choix = 3;
	continueCalculAvecDernierValeurEqual();
}
private: System::Void division(System::Object^  sender, System::EventArgs^  e) {
	this->opiration->Text = "/";
	labelNull();
	choisir();
	choix = 4;
	continueCalculAvecDernierValeurEqual();
}
		 //
		 //button equal
		 //
private: System::Void equal(System::Object^  sender, System::EventArgs^  e) {
	choisir();
	this->label1->Text = L"" + Convert::ToString(deuximValeur);
	valeurEntrerParUser = 0;
	choix = 0;
	continueCalculAvecDernierValeur = false;
	
}
	//
	// button " C "  :  reINISIALISER LES VALEUR POUR UTILISER AUTRE FOIS 
	//
private: System::Void btn_c(System::Object^  sender, System::EventArgs^  e) {
		fonctionRenisailisation();
		labelNull();
}

};
}
