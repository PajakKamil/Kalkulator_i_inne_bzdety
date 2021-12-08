#pragma once
#include "Nums_panel.h"

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;

	/// <summary>
	/// Summary for Cal_ext
	/// </summary>
	public ref class Cal_ext : public System::Windows::Forms::Form
	{
	public:

		Cal_ext(void)
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
		~Cal_ext()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ Panel_menu;
	private: System::Windows::Forms::Button^ Btn_exit;
	private: System::Windows::Forms::Button^ Btn_maximalise;
	private: System::Windows::Forms::Button^ Btn_minimalise;
	//private: UserControls::Nums_panel^ User_control_nums;
	//private: UserControls::Nums_panel^ User_control_nums = gcnew UserControls::Nums_panel();
	private: Nums_panel^ Uc_nums;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
		bool dragging = false;
	private: System::Windows::Forms::Label^ Calculator_name;

		   Point* Start_point = new Point(0, 0);

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Cal_ext::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->Panel_menu = (gcnew System::Windows::Forms::Panel());
			this->Uc_nums = (gcnew Nums_panel());
			this->Uc_nums->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Btn_exit = (gcnew System::Windows::Forms::Button());
			this->Btn_maximalise = (gcnew System::Windows::Forms::Button());
			this->Btn_minimalise = (gcnew System::Windows::Forms::Button());
			this->Calculator_name = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(3, 55);
			this->label1->Name = L"label1";
			this->label1->Padding = System::Windows::Forms::Padding(10);
			this->label1->Size = System::Drawing::Size(502, 59);
			this->label1->TabIndex = 0;
			this->label1->Text = L"0";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(0, 34);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(505, 156);
			this->panel1->TabIndex = 1;
			// 
			// Panel_menu
			// 
			this->Panel_menu->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Panel_menu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			Panel_menu->Controls->Add(Uc_nums);
			this->Panel_menu->Name = L"Panel_menu";
			this->Panel_menu->Size = System::Drawing::Size(334,314);
			this->Panel_menu->TabIndex = 6;
			// 
			// Btn_exit
			// 
			this->Btn_exit->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->Btn_exit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->Btn_exit->FlatAppearance->BorderSize = 0;
			this->Btn_exit->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Btn_exit->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->Btn_exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Btn_exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Btn_exit->ForeColor = System::Drawing::Color::White;
			this->Btn_exit->Location = System::Drawing::Point(462, -1);
			this->Btn_exit->Name = L"Btn_exit";
			this->Btn_exit->Size = System::Drawing::Size(43, 20);
			this->Btn_exit->TabIndex = 2;
			this->Btn_exit->Text = L"X";
			this->Btn_exit->UseVisualStyleBackColor = false;
			this->Btn_exit->Click += gcnew System::EventHandler(this, &Cal_ext::Btn_exit_Click);
			// 
			// Btn_maximalise
			// 
			this->Btn_maximalise->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->Btn_maximalise->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->Btn_maximalise->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->Btn_maximalise->FlatAppearance->BorderSize = 0;
			this->Btn_maximalise->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Btn_maximalise->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Btn_maximalise->ForeColor = System::Drawing::Color::White;
			this->Btn_maximalise->Location = System::Drawing::Point(418, -1);
			this->Btn_maximalise->Name = L"Btn_maximalise";
			this->Btn_maximalise->Size = System::Drawing::Size(43, 20);
			this->Btn_maximalise->TabIndex = 3;
			this->Btn_maximalise->UseVisualStyleBackColor = false;
			this->Btn_maximalise->Click += gcnew System::EventHandler(this, &Cal_ext::Btn_maximalise_Click);
			// 
			// Btn_minimalise
			// 
			this->Btn_minimalise->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->Btn_minimalise->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->Btn_minimalise->FlatAppearance->BorderSize = 0;
			this->Btn_minimalise->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Btn_minimalise->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Btn_minimalise->ForeColor = System::Drawing::Color::White;
			this->Btn_minimalise->Location = System::Drawing::Point(374, -1);
			this->Btn_minimalise->Name = L"Btn_minimalise";
			this->Btn_minimalise->Size = System::Drawing::Size(43, 20);
			this->Btn_minimalise->TabIndex = 4;
			this->Btn_minimalise->Text = L"-";
			this->Btn_minimalise->UseVisualStyleBackColor = false;
			this->Btn_minimalise->Click += gcnew System::EventHandler(this, &Cal_ext::Btn_minimalise_Click);
			// 
			// Calculator_name
			// 
			this->Calculator_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->Calculator_name->ForeColor = System::Drawing::Color::White;
			this->Calculator_name->Location = System::Drawing::Point(0, 0);
			this->Calculator_name->Margin = System::Windows::Forms::Padding(7);
			this->Calculator_name->Name = L"Calculator_name";
			this->Calculator_name->Padding = System::Windows::Forms::Padding(3);
			this->Calculator_name->Size = System::Drawing::Size(80, 24);
			this->Calculator_name->TabIndex = 5;
			this->Calculator_name->Text = L"Kalkulator";
			// 
			// Cal_ext
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(505, 735);
			this->Panel_menu->Location = System::Drawing::Point(100, 410);		//User_controll_drawing
			this->Controls->Add(this->Calculator_name);
			this->Controls->Add(this->Btn_minimalise);
			this->Controls->Add(this->Btn_maximalise);
			this->Controls->Add(this->Btn_exit);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->Panel_menu);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Cal_ext";
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Cal_ext::Cal_ext_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Cal_ext::Cal_ext_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Cal_ext::Cal_ext_MouseUp);
			this->panel1->ResumeLayout(false);
			this->Panel_menu->ResumeLayout(false);
			this->ResumeLayout(false);
		}
#pragma endregion



#pragma region Btn_exit
		private: System::Void Btn_exit_Click(System::Object^ sender, System::EventArgs^ e) {
			delete Start_point;

			Application::Exit();
		}
#pragma endregion

#pragma region Btn_max
		private: System::Void Btn_maximalise_Click(System::Object^ sender, System::EventArgs^ e) {
			if (this->WindowState == FormWindowState::Normal)
			{
				this->WindowState = FormWindowState::Maximized;
			}
			else
				this->WindowState = FormWindowState::Normal;

		}
#pragma endregion

#pragma region Btn_min
		private: System::Void Btn_minimalise_Click(System::Object^ sender, System::EventArgs^ e) {
			this->WindowState = FormWindowState::Minimized;
		}
#pragma endregion

private: System::Void Cal_ext_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	dragging = true;
	Start_point = new Point(e->X, e->Y);
	//User_control_nums->Btn_enter_number(sender, e);
}
private: System::Void Cal_ext_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	dragging = false;
}
private: System::Void Cal_ext_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (dragging)
	{
		Point p = PointToScreen(e->Location);
		///Location = new Point(p.X-this->Start_point->X, p.Y - this->Start_point->Y);
		this->Location = Point(p.X - this->Start_point->X, p.Y - this->Start_point->Y);
	}
}
	 
};

