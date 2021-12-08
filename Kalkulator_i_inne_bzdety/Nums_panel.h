#pragma once
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;



	/// <summary>
	/// Summary for Nums_panel
	/// </summary>
	public  ref class Nums_panel : public System::Windows::Forms::UserControl
	{
	public:
		Nums_panel(void)
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
		~Nums_panel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Btn_1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
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
			this->Btn_1 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Btn_1
			// 
			this->Btn_1->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->Btn_1->BackColor = System::Drawing::Color::Black;
			this->Btn_1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Btn_1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Btn_1->ForeColor = System::Drawing::Color::White;
			this->Btn_1->Location = System::Drawing::Point(4, 267);
			this->Btn_1->Name = L"Btn_1";
			this->Btn_1->Padding = System::Windows::Forms::Padding(5);
			this->Btn_1->Size = System::Drawing::Size(78, 47);
			this->Btn_1->TabIndex = 0;
			this->Btn_1->Text = L"+/-";
			this->Btn_1->UseVisualStyleBackColor = false;
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button1->BackColor = System::Drawing::Color::Black;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(88, 267);
			this->button1->Name = L"button1";
			this->button1->Padding = System::Windows::Forms::Padding(5);
			this->button1->Size = System::Drawing::Size(78, 47);
			this->button1->TabIndex = 1;
			this->button1->Text = L"0";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Nums_panel::Btn_enter_number);
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button2->BackColor = System::Drawing::Color::Black;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(172, 267);
			this->button2->Name = L"button2";
			this->button2->Padding = System::Windows::Forms::Padding(5);
			this->button2->Size = System::Drawing::Size(78, 47);
			this->button2->TabIndex = 2;
			this->button2->Text = L",";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(253, 214);
			this->button3->Name = L"button3";
			this->button3->Padding = System::Windows::Forms::Padding(5);
			this->button3->Size = System::Drawing::Size(78, 47);
			this->button3->TabIndex = 3;
			this->button3->Text = L"+";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// button4
			// 
			this->button4->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(253, 267);
			this->button4->Name = L"button4";
			this->button4->Padding = System::Windows::Forms::Padding(5);
			this->button4->Size = System::Drawing::Size(78, 47);
			this->button4->TabIndex = 4;
			this->button4->Text = L"=";
			this->button4->UseVisualStyleBackColor = false;
			// 
			// button5
			// 
			this->button5->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button5->BackColor = System::Drawing::Color::Black;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(172, 214);
			this->button5->Name = L"button5";
			this->button5->Padding = System::Windows::Forms::Padding(5);
			this->button5->Size = System::Drawing::Size(78, 47);
			this->button5->TabIndex = 7;
			this->button5->Text = L"3";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Nums_panel::Btn_enter_number);
			// 
			// button6
			// 
			this->button6->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button6->BackColor = System::Drawing::Color::Black;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(88, 214);
			this->button6->Name = L"button6";
			this->button6->Padding = System::Windows::Forms::Padding(5);
			this->button6->Size = System::Drawing::Size(78, 47);
			this->button6->TabIndex = 6;
			this->button6->Text = L"2";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Nums_panel::Btn_enter_number);
			// 
			// button7
			// 
			this->button7->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button7->BackColor = System::Drawing::Color::Black;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button7->ForeColor = System::Drawing::Color::White;
			this->button7->Location = System::Drawing::Point(4, 214);
			this->button7->Name = L"button7";
			this->button7->Padding = System::Windows::Forms::Padding(5);
			this->button7->Size = System::Drawing::Size(78, 47);
			this->button7->TabIndex = 5;
			this->button7->Text = L"1";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Nums_panel::Btn_enter_number);
			// 
			// button8
			// 
			this->button8->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button8->BackColor = System::Drawing::Color::Black;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button8->ForeColor = System::Drawing::Color::White;
			this->button8->Location = System::Drawing::Point(172, 161);
			this->button8->Name = L"button8";
			this->button8->Padding = System::Windows::Forms::Padding(5);
			this->button8->Size = System::Drawing::Size(78, 47);
			this->button8->TabIndex = 10;
			this->button8->Text = L"6";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &Nums_panel::Btn_enter_number);
			// 
			// button9
			// 
			this->button9->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button9->BackColor = System::Drawing::Color::Black;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button9->ForeColor = System::Drawing::Color::White;
			this->button9->Location = System::Drawing::Point(88, 161);
			this->button9->Name = L"button9";
			this->button9->Padding = System::Windows::Forms::Padding(5);
			this->button9->Size = System::Drawing::Size(78, 47);
			this->button9->TabIndex = 9;
			this->button9->Text = L"5";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &Nums_panel::Btn_enter_number);
			// 
			// button10
			// 
			this->button10->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button10->BackColor = System::Drawing::Color::Black;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button10->ForeColor = System::Drawing::Color::White;
			this->button10->Location = System::Drawing::Point(4, 161);
			this->button10->Name = L"button10";
			this->button10->Padding = System::Windows::Forms::Padding(5);
			this->button10->Size = System::Drawing::Size(78, 47);
			this->button10->TabIndex = 8;
			this->button10->Text = L"4";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &Nums_panel::Btn_enter_number);
			// 
			// button11
			// 
			this->button11->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button11->BackColor = System::Drawing::Color::Black;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button11->ForeColor = System::Drawing::Color::White;
			this->button11->Location = System::Drawing::Point(172, 108);
			this->button11->Name = L"button11";
			this->button11->Padding = System::Windows::Forms::Padding(5);
			this->button11->Size = System::Drawing::Size(78, 47);
			this->button11->TabIndex = 13;
			this->button11->Text = L"9";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &Nums_panel::Btn_enter_number);
			// 
			// button12
			// 
			this->button12->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button12->BackColor = System::Drawing::Color::Black;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button12->ForeColor = System::Drawing::Color::White;
			this->button12->Location = System::Drawing::Point(88, 108);
			this->button12->Name = L"button12";
			this->button12->Padding = System::Windows::Forms::Padding(5);
			this->button12->Size = System::Drawing::Size(78, 47);
			this->button12->TabIndex = 12;
			this->button12->Text = L"8";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &Nums_panel::Btn_enter_number);
			// 
			// button13
			// 
			this->button13->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button13->BackColor = System::Drawing::Color::Black;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button13->ForeColor = System::Drawing::Color::White;
			this->button13->Location = System::Drawing::Point(4, 108);
			this->button13->Name = L"button13";
			this->button13->Padding = System::Windows::Forms::Padding(5);
			this->button13->Size = System::Drawing::Size(78, 47);
			this->button13->TabIndex = 11;
			this->button13->Text = L"7";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &Nums_panel::Btn_enter_number);
			// 
			// button14
			// 
			this->button14->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button14->ForeColor = System::Drawing::Color::White;
			this->button14->Location = System::Drawing::Point(253, 161);
			this->button14->Name = L"button14";
			this->button14->Padding = System::Windows::Forms::Padding(5);
			this->button14->Size = System::Drawing::Size(78, 47);
			this->button14->TabIndex = 15;
			this->button14->Text = L"−";
			this->button14->UseVisualStyleBackColor = false;
			// 
			// button15
			// 
			this->button15->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button15->ForeColor = System::Drawing::Color::White;
			this->button15->Location = System::Drawing::Point(253, 108);
			this->button15->Name = L"button15";
			this->button15->Padding = System::Windows::Forms::Padding(5);
			this->button15->Size = System::Drawing::Size(78, 47);
			this->button15->TabIndex = 14;
			this->button15->Text = L"X";
			this->button15->UseVisualStyleBackColor = false;
			// 
			// button16
			// 
			this->button16->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button16->ForeColor = System::Drawing::Color::White;
			this->button16->Location = System::Drawing::Point(253, 55);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(78, 47);
			this->button16->TabIndex = 17;
			this->button16->Text = L"÷";
			this->button16->UseVisualStyleBackColor = false;
			// 
			// button17
			// 
			this->button17->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button17->ForeColor = System::Drawing::Color::White;
			this->button17->Location = System::Drawing::Point(253, 2);
			this->button17->Name = L"button17";
			this->button17->Padding = System::Windows::Forms::Padding(5);
			this->button17->Size = System::Drawing::Size(78, 47);
			this->button17->TabIndex = 16;
			this->button17->Text = L"⌫";
			this->button17->UseVisualStyleBackColor = false;
			// 
			// button18
			// 
			this->button18->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button18->ForeColor = System::Drawing::Color::White;
			this->button18->Location = System::Drawing::Point(172, 56);
			this->button18->Name = L"button18";
			this->button18->Padding = System::Windows::Forms::Padding(5);
			this->button18->Size = System::Drawing::Size(78, 47);
			this->button18->TabIndex = 19;
			this->button18->Text = L"√";
			this->button18->UseVisualStyleBackColor = false;
			// 
			// button19
			// 
			this->button19->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button19->ForeColor = System::Drawing::Color::White;
			this->button19->Location = System::Drawing::Point(172, 3);
			this->button19->Name = L"button19";
			this->button19->Padding = System::Windows::Forms::Padding(5);
			this->button19->Size = System::Drawing::Size(78, 47);
			this->button19->TabIndex = 18;
			this->button19->Text = L"C";
			this->button19->UseVisualStyleBackColor = false;
			// 
			// button20
			// 
			this->button20->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button20->ForeColor = System::Drawing::Color::White;
			this->button20->Location = System::Drawing::Point(88, 56);
			this->button20->Name = L"button20";
			this->button20->Padding = System::Windows::Forms::Padding(5);
			this->button20->Size = System::Drawing::Size(78, 47);
			this->button20->TabIndex = 21;
			this->button20->Text = L"=";
			this->button20->UseVisualStyleBackColor = false;
			// 
			// button21
			// 
			this->button21->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button21->ForeColor = System::Drawing::Color::White;
			this->button21->Location = System::Drawing::Point(88, 3);
			this->button21->Name = L"button21";
			this->button21->Padding = System::Windows::Forms::Padding(5);
			this->button21->Size = System::Drawing::Size(78, 47);
			this->button21->TabIndex = 20;
			this->button21->Text = L"CE";
			this->button21->UseVisualStyleBackColor = false;
			// 
			// button22
			// 
			this->button22->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button22->ForeColor = System::Drawing::Color::White;
			this->button22->Location = System::Drawing::Point(4, 56);
			this->button22->Name = L"button22";
			this->button22->Padding = System::Windows::Forms::Padding(5);
			this->button22->Size = System::Drawing::Size(78, 47);
			this->button22->TabIndex = 23;
			this->button22->Text = L"1/x";
			this->button22->UseVisualStyleBackColor = false;
			// 
			// button23
			// 
			this->button23->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->button23->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button23->ForeColor = System::Drawing::Color::White;
			this->button23->Location = System::Drawing::Point(4, 3);
			this->button23->Name = L"button23";
			this->button23->Padding = System::Windows::Forms::Padding(5);
			this->button23->Size = System::Drawing::Size(78, 47);
			this->button23->TabIndex = 22;
			this->button23->Text = L"%";
			this->button23->UseVisualStyleBackColor = false;
			// 
			// Nums_panel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Btn_1);
			this->Name = L"Nums_panel";
			this->Size = System::Drawing::Size(334, 314);
			this->ResumeLayout(false);

		}
#pragma endregion

public : System::Void Btn_enter_number(System::Object^ sender, System::EventArgs^ e) {
}
};
