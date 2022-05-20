#pragma once
#include <string>
#include <vector>
namespace Project2 {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker5;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker7;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker6;
	private: System::Windows::Forms::TextBox^ textBox19;
	private: System::Windows::Forms::TextBox^ textBox20;
	private: System::Windows::Forms::TextBox^ textBox21;
	private: System::Windows::Forms::TextBox^ textBox22;
	private: System::Windows::Forms::TextBox^ textBox23;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox2;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker4;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker3;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker9;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker8;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker11;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker10;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Label^ label24;



	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker11 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker10 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker9 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker8 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->dateTimePicker5 = (gcnew System::Windows::Forms::DateTimePicker());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->maskedTextBox2 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker7 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker6 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker4 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker3 = (gcnew System::Windows::Forms::DateTimePicker());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Appearance = System::Windows::Forms::TabAppearance::FlatButtons;
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Multiline = true;
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(611, 289);
			this->tabControl1->TabIndex = 0;
			this->tabControl1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::tabControl1_SelectedIndexChanged);
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(132)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(188)));
			this->tabPage1->Controls->Add(this->groupBox2);
			this->tabPage1->Controls->Add(this->groupBox1);
			this->tabPage1->ForeColor = System::Drawing::Color::Black;
			this->tabPage1->Location = System::Drawing::Point(4, 31);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(603, 254);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Продолжительность";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->numericUpDown2);
			this->groupBox2->Controls->Add(this->numericUpDown1);
			this->groupBox2->Controls->Add(this->checkBox1);
			this->groupBox2->Controls->Add(this->label23);
			this->groupBox2->Controls->Add(this->label22);
			this->groupBox2->Controls->Add(this->label21);
			this->groupBox2->Controls->Add(this->label20);
			this->groupBox2->Controls->Add(this->dateTimePicker11);
			this->groupBox2->Controls->Add(this->label19);
			this->groupBox2->Controls->Add(this->textBox10);
			this->groupBox2->Controls->Add(this->dateTimePicker10);
			this->groupBox2->Controls->Add(this->label18);
			this->groupBox2->Controls->Add(this->label17);
			this->groupBox2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox2->ForeColor = System::Drawing::Color::White;
			this->groupBox2->Location = System::Drawing::Point(243, 6);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(354, 236);
			this->groupBox2->TabIndex = 9;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Время окончания";
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(156, 68);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
			this->numericUpDown2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(126, 30);
			this->numericUpDown2->TabIndex = 19;
			this->numericUpDown2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown2->Visible = false;
			this->numericUpDown2->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown1_ValueChanged);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(156, 125);
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(126, 30);
			this->numericUpDown1->TabIndex = 18;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown1->Visible = false;
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown1_ValueChanged);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->ForeColor = System::Drawing::Color::White;
			this->checkBox1->Location = System::Drawing::Point(188, 186);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(159, 26);
			this->checkBox1->TabIndex = 17;
			this->checkBox1->Text = L"Автоматически";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->ForeColor = System::Drawing::Color::White;
			this->label23->Location = System::Drawing::Point(279, 126);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(50, 22);
			this->label23->TabIndex = 16;
			this->label23->Text = L"МБ/c";
			this->label23->Visible = false;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->ForeColor = System::Drawing::Color::White;
			this->label22->Location = System::Drawing::Point(279, 70);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(30, 22);
			this->label22->TabIndex = 14;
			this->label22->Text = L"МБ";
			this->label22->Visible = false;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->ForeColor = System::Drawing::Color::White;
			this->label21->Location = System::Drawing::Point(152, 104);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(200, 22);
			this->label21->TabIndex = 12;
			this->label21->Text = L"Скорость скачивания";
			this->label21->Visible = false;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->ForeColor = System::Drawing::Color::White;
			this->label20->Location = System::Drawing::Point(152, 42);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(130, 22);
			this->label20->TabIndex = 11;
			this->label20->Text = L"Размер файла";
			this->label20->Visible = false;
			// 
			// dateTimePicker11
			// 
			this->dateTimePicker11->Format = System::Windows::Forms::DateTimePickerFormat::Time;
			this->dateTimePicker11->Location = System::Drawing::Point(10, 125);
			this->dateTimePicker11->Name = L"dateTimePicker11";
			this->dateTimePicker11->ShowUpDown = true;
			this->dateTimePicker11->Size = System::Drawing::Size(126, 30);
			this->dateTimePicker11->TabIndex = 9;
			this->dateTimePicker11->Value = System::DateTime(2022, 5, 14, 0, 0, 0, 0);
			this->dateTimePicker11->ValueChanged += gcnew System::EventHandler(this, &MyForm::dateTimePicker3_ValueChanged);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->ForeColor = System::Drawing::Color::White;
			this->label19->Location = System::Drawing::Point(6, 101);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(130, 22);
			this->label19->TabIndex = 9;
			this->label19->Text = L"Длительность";
			// 
			// textBox10
			// 
			this->textBox10->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox10->Location = System::Drawing::Point(10, 184);
			this->textBox10->Name = L"textBox10";
			this->textBox10->ReadOnly = true;
			this->textBox10->Size = System::Drawing::Size(126, 30);
			this->textBox10->TabIndex = 10;
			// 
			// dateTimePicker10
			// 
			this->dateTimePicker10->Format = System::Windows::Forms::DateTimePickerFormat::Time;
			this->dateTimePicker10->Location = System::Drawing::Point(10, 68);
			this->dateTimePicker10->Name = L"dateTimePicker10";
			this->dateTimePicker10->ShowUpDown = true;
			this->dateTimePicker10->Size = System::Drawing::Size(126, 30);
			this->dateTimePicker10->TabIndex = 10;
			this->dateTimePicker10->Value = System::DateTime(2022, 5, 14, 0, 0, 0, 0);
			this->dateTimePicker10->ValueChanged += gcnew System::EventHandler(this, &MyForm::dateTimePicker3_ValueChanged);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->ForeColor = System::Drawing::Color::White;
			this->label18->Location = System::Drawing::Point(6, 158);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(160, 22);
			this->label18->TabIndex = 9;
			this->label18->Text = L"Время окончания";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->ForeColor = System::Drawing::Color::White;
			this->label17->Location = System::Drawing::Point(6, 42);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(130, 22);
			this->label17->TabIndex = 9;
			this->label17->Text = L"Время начала";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox8);
			this->groupBox1->Controls->Add(this->dateTimePicker9);
			this->groupBox1->Controls->Add(this->dateTimePicker8);
			this->groupBox1->Controls->Add(this->label16);
			this->groupBox1->Controls->Add(this->label15);
			this->groupBox1->Controls->Add(this->label14);
			this->groupBox1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->ForeColor = System::Drawing::Color::White;
			this->groupBox1->Location = System::Drawing::Point(6, 6);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(231, 236);
			this->groupBox1->TabIndex = 8;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Длительность";
			// 
			// textBox8
			// 
			this->textBox8->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox8->Location = System::Drawing::Point(10, 184);
			this->textBox8->Name = L"textBox8";
			this->textBox8->ReadOnly = true;
			this->textBox8->Size = System::Drawing::Size(156, 30);
			this->textBox8->TabIndex = 8;
			// 
			// dateTimePicker9
			// 
			this->dateTimePicker9->Format = System::Windows::Forms::DateTimePickerFormat::Time;
			this->dateTimePicker9->Location = System::Drawing::Point(10, 125);
			this->dateTimePicker9->Name = L"dateTimePicker9";
			this->dateTimePicker9->ShowUpDown = true;
			this->dateTimePicker9->Size = System::Drawing::Size(156, 30);
			this->dateTimePicker9->TabIndex = 7;
			this->dateTimePicker9->Value = System::DateTime(2022, 5, 14, 0, 0, 0, 0);
			this->dateTimePicker9->ValueChanged += gcnew System::EventHandler(this, &MyForm::dateTimePicker8_ValueChanged);
			// 
			// dateTimePicker8
			// 
			this->dateTimePicker8->Format = System::Windows::Forms::DateTimePickerFormat::Time;
			this->dateTimePicker8->Location = System::Drawing::Point(10, 68);
			this->dateTimePicker8->Name = L"dateTimePicker8";
			this->dateTimePicker8->ShowUpDown = true;
			this->dateTimePicker8->Size = System::Drawing::Size(156, 30);
			this->dateTimePicker8->TabIndex = 6;
			this->dateTimePicker8->Value = System::DateTime(2022, 5, 14, 0, 0, 0, 0);
			this->dateTimePicker8->ValueChanged += gcnew System::EventHandler(this, &MyForm::dateTimePicker8_ValueChanged);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->ForeColor = System::Drawing::Color::White;
			this->label16->Location = System::Drawing::Point(6, 158);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(130, 22);
			this->label16->TabIndex = 5;
			this->label16->Text = L"Длительность";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->ForeColor = System::Drawing::Color::White;
			this->label15->Location = System::Drawing::Point(6, 100);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(160, 22);
			this->label15->TabIndex = 3;
			this->label15->Text = L"Время окончания";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->ForeColor = System::Drawing::Color::White;
			this->label14->Location = System::Drawing::Point(6, 42);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(130, 22);
			this->label14->TabIndex = 1;
			this->label14->Text = L"Время начала";
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(132)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(188)));
			this->tabPage2->Controls->Add(this->groupBox5);
			this->tabPage2->Controls->Add(this->groupBox4);
			this->tabPage2->Controls->Add(this->groupBox3);
			this->tabPage2->ForeColor = System::Drawing::Color::Black;
			this->tabPage2->Location = System::Drawing::Point(4, 31);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(603, 254);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Мировые часы";
			// 
			// groupBox5
			// 
			this->groupBox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->groupBox5->Controls->Add(this->textBox14);
			this->groupBox5->Controls->Add(this->label27);
			this->groupBox5->Controls->Add(this->textBox15);
			this->groupBox5->Controls->Add(this->label28);
			this->groupBox5->Controls->Add(this->textBox16);
			this->groupBox5->Controls->Add(this->label29);
			this->groupBox5->Controls->Add(this->textBox13);
			this->groupBox5->Controls->Add(this->label26);
			this->groupBox5->Controls->Add(this->textBox12);
			this->groupBox5->Controls->Add(this->label25);
			this->groupBox5->Controls->Add(this->textBox11);
			this->groupBox5->Controls->Add(this->label24);
			this->groupBox5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->groupBox5->ForeColor = System::Drawing::Color::White;
			this->groupBox5->Location = System::Drawing::Point(351, 11);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(248, 224);
			this->groupBox5->TabIndex = 4;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Мировые часы";
			// 
			// textBox14
			// 
			this->textBox14->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox14->Location = System::Drawing::Point(127, 158);
			this->textBox14->Name = L"textBox14";
			this->textBox14->ReadOnly = true;
			this->textBox14->Size = System::Drawing::Size(89, 26);
			this->textBox14->TabIndex = 13;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->ForeColor = System::Drawing::Color::White;
			this->label27->Location = System::Drawing::Point(123, 136);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(63, 19);
			this->label27->TabIndex = 12;
			this->label27->Text = L"Берлин";
			// 
			// textBox15
			// 
			this->textBox15->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox15->Location = System::Drawing::Point(127, 107);
			this->textBox15->Name = L"textBox15";
			this->textBox15->ReadOnly = true;
			this->textBox15->Size = System::Drawing::Size(89, 26);
			this->textBox15->TabIndex = 11;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->ForeColor = System::Drawing::Color::White;
			this->label28->Location = System::Drawing::Point(123, 85);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(54, 19);
			this->label28->TabIndex = 10;
			this->label28->Text = L"Пекин";
			// 
			// textBox16
			// 
			this->textBox16->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox16->Location = System::Drawing::Point(126, 56);
			this->textBox16->Name = L"textBox16";
			this->textBox16->ReadOnly = true;
			this->textBox16->Size = System::Drawing::Size(89, 26);
			this->textBox16->TabIndex = 9;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->ForeColor = System::Drawing::Color::White;
			this->label29->Location = System::Drawing::Point(122, 34);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(54, 19);
			this->label29->TabIndex = 8;
			this->label29->Text = L"Токио";
			// 
			// textBox13
			// 
			this->textBox13->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox13->Location = System::Drawing::Point(12, 158);
			this->textBox13->Name = L"textBox13";
			this->textBox13->ReadOnly = true;
			this->textBox13->Size = System::Drawing::Size(89, 26);
			this->textBox13->TabIndex = 7;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->ForeColor = System::Drawing::Color::White;
			this->label26->Location = System::Drawing::Point(8, 136);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(81, 19);
			this->label26->TabIndex = 6;
			this->label26->Text = L"Нью-Йорк";
			// 
			// textBox12
			// 
			this->textBox12->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox12->Location = System::Drawing::Point(12, 107);
			this->textBox12->Name = L"textBox12";
			this->textBox12->ReadOnly = true;
			this->textBox12->Size = System::Drawing::Size(89, 26);
			this->textBox12->TabIndex = 5;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->ForeColor = System::Drawing::Color::White;
			this->label25->Location = System::Drawing::Point(8, 85);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(63, 19);
			this->label25->TabIndex = 4;
			this->label25->Text = L"Лондон";
			// 
			// textBox11
			// 
			this->textBox11->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox11->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox11->Location = System::Drawing::Point(11, 56);
			this->textBox11->Name = L"textBox11";
			this->textBox11->ReadOnly = true;
			this->textBox11->Size = System::Drawing::Size(89, 26);
			this->textBox11->TabIndex = 3;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->ForeColor = System::Drawing::Color::White;
			this->label24->Location = System::Drawing::Point(7, 34);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(63, 19);
			this->label24->TabIndex = 0;
			this->label24->Text = L"Москва";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->textBox3);
			this->groupBox4->Controls->Add(this->comboBox2);
			this->groupBox4->ForeColor = System::Drawing::Color::White;
			this->groupBox4->Location = System::Drawing::Point(12, 129);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(318, 106);
			this->groupBox4->TabIndex = 3;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Время В";
			// 
			// textBox3
			// 
			this->textBox3->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox3->Location = System::Drawing::Point(6, 52);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(89, 26);
			this->textBox3->TabIndex = 2;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(25) {
				L"(UTC -12) Линия перемены дат", L"(UTC -11) Время в формате UTC -11",
					L"(UTC -10) Гавайи", L"(UTC -9)  Аляска", L"(UTC -8) Нижняя калифорния", L"(UTC -7) Аризона", L"(UTC -6) Остров Пасхи", L"(UTC -5) Гаити",
					L"(UTC -4) Сантьяго", L"(UTC -3) Гренландия", L"(UTC -2) Время в формате UTC -2", L"(UTC -1) Азорские острова", L"(UTC 0) Лондон",
					L"(UTC +1) Берлин", L"(UTC +2) Калининград", L"(UTC +3) Москва", L"(UTC +4) Самара", L"(UTC +5) Екатеринбург", L"(UTC +6) Омск",
					L"(UTC +7) Томск", L"(UTC +8) Иркутск", L"(UTC +9) Токио", L"(UTC +10) Владивосток", L"(UTC +11) Сахалин", L"(UTC +12) Фиджи"
			});
			this->comboBox2->Location = System::Drawing::Point(6, 19);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(306, 27);
			this->comboBox2->TabIndex = 0;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->comboBox1);
			this->groupBox3->Controls->Add(this->dateTimePicker5);
			this->groupBox3->ForeColor = System::Drawing::Color::White;
			this->groupBox3->Location = System::Drawing::Point(12, 11);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(318, 108);
			this->groupBox3->TabIndex = 2;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Время А";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(25) {
				L"(UTC -12) Линия перемены дат", L"(UTC -11) Время в формате UTC -11",
					L"(UTC -10) Гавайи", L"(UTC -9)  Аляска", L"(UTC -8) Нижняя калифорния", L"(UTC -7) Аризона", L"(UTC -6) Остров Пасхи", L"(UTC -5) Гаити",
					L"(UTC -4) Сантьяго", L"(UTC -3) Гренландия", L"(UTC -2) Время в формате UTC -2", L"(UTC -1) Азорские острова", L"(UTC 0) Лондон",
					L"(UTC +1) Берлин", L"(UTC +2) Калининград", L"(UTC +3) Москва", L"(UTC +4) Самара", L"(UTC +5) Екатеринбург", L"(UTC +6) Омск",
					L"(UTC +7) Томск", L"(UTC +8) Иркутск", L"(UTC +9) Токио", L"(UTC +10) Владивосток", L"(UTC +11) Сахалин", L"(UTC +12) Фиджи"
			});
			this->comboBox1->Location = System::Drawing::Point(6, 19);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(306, 27);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// dateTimePicker5
			// 
			this->dateTimePicker5->Format = System::Windows::Forms::DateTimePickerFormat::Time;
			this->dateTimePicker5->Location = System::Drawing::Point(6, 55);
			this->dateTimePicker5->Name = L"dateTimePicker5";
			this->dateTimePicker5->ShowUpDown = true;
			this->dateTimePicker5->Size = System::Drawing::Size(95, 26);
			this->dateTimePicker5->TabIndex = 1;
			this->dateTimePicker5->Value = System::DateTime(2022, 5, 13, 0, 0, 0, 0);
			this->dateTimePicker5->ValueChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// tabPage3
			// 
			this->tabPage3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(132)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(188)));
			this->tabPage3->Controls->Add(this->maskedTextBox2);
			this->tabPage3->Controls->Add(this->maskedTextBox1);
			this->tabPage3->Controls->Add(this->textBox19);
			this->tabPage3->Controls->Add(this->textBox20);
			this->tabPage3->Controls->Add(this->textBox21);
			this->tabPage3->Controls->Add(this->textBox22);
			this->tabPage3->Controls->Add(this->textBox23);
			this->tabPage3->Controls->Add(this->label13);
			this->tabPage3->Controls->Add(this->label6);
			this->tabPage3->Controls->Add(this->label4);
			this->tabPage3->Controls->Add(this->textBox9);
			this->tabPage3->Controls->Add(this->textBox6);
			this->tabPage3->Controls->Add(this->textBox7);
			this->tabPage3->Controls->Add(this->textBox5);
			this->tabPage3->Controls->Add(this->textBox4);
			this->tabPage3->Controls->Add(this->label12);
			this->tabPage3->Controls->Add(this->label11);
			this->tabPage3->Controls->Add(this->comboBox3);
			this->tabPage3->Controls->Add(this->label10);
			this->tabPage3->Controls->Add(this->dateTimePicker7);
			this->tabPage3->Controls->Add(this->label9);
			this->tabPage3->Controls->Add(this->dateTimePicker6);
			this->tabPage3->ForeColor = System::Drawing::Color::Black;
			this->tabPage3->Location = System::Drawing::Point(4, 31);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(603, 254);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Заработная плата";
			// 
			// maskedTextBox2
			// 
			this->maskedTextBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->maskedTextBox2->ForeColor = System::Drawing::Color::Black;
			this->maskedTextBox2->Location = System::Drawing::Point(49, 212);
			this->maskedTextBox2->Mask = L"00000";
			this->maskedTextBox2->Name = L"maskedTextBox2";
			this->maskedTextBox2->Size = System::Drawing::Size(39, 26);
			this->maskedTextBox2->TabIndex = 60;
			this->maskedTextBox2->ValidatingType = System::Int32::typeid;
			this->maskedTextBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::comboBox3_SelectedIndexChanged);
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->maskedTextBox1->ForeColor = System::Drawing::Color::Black;
			this->maskedTextBox1->Location = System::Drawing::Point(49, 153);
			this->maskedTextBox1->Mask = L"00000";
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->Size = System::Drawing::Size(39, 26);
			this->maskedTextBox1->TabIndex = 59;
			this->maskedTextBox1->ValidatingType = System::Int32::typeid;
			this->maskedTextBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::comboBox3_SelectedIndexChanged);
			// 
			// textBox19
			// 
			this->textBox19->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox19->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox19->ForeColor = System::Drawing::Color::White;
			this->textBox19->Location = System::Drawing::Point(424, 212);
			this->textBox19->Name = L"textBox19";
			this->textBox19->ReadOnly = true;
			this->textBox19->Size = System::Drawing::Size(149, 26);
			this->textBox19->TabIndex = 58;
			// 
			// textBox20
			// 
			this->textBox20->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox20->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox20->ForeColor = System::Drawing::Color::White;
			this->textBox20->Location = System::Drawing::Point(424, 180);
			this->textBox20->Name = L"textBox20";
			this->textBox20->ReadOnly = true;
			this->textBox20->Size = System::Drawing::Size(149, 26);
			this->textBox20->TabIndex = 57;
			// 
			// textBox21
			// 
			this->textBox21->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox21->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox21->ForeColor = System::Drawing::Color::White;
			this->textBox21->Location = System::Drawing::Point(424, 148);
			this->textBox21->Name = L"textBox21";
			this->textBox21->ReadOnly = true;
			this->textBox21->Size = System::Drawing::Size(149, 26);
			this->textBox21->TabIndex = 56;
			// 
			// textBox22
			// 
			this->textBox22->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox22->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox22->ForeColor = System::Drawing::Color::White;
			this->textBox22->Location = System::Drawing::Point(424, 116);
			this->textBox22->Name = L"textBox22";
			this->textBox22->ReadOnly = true;
			this->textBox22->Size = System::Drawing::Size(149, 26);
			this->textBox22->TabIndex = 55;
			// 
			// textBox23
			// 
			this->textBox23->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox23->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox23->ForeColor = System::Drawing::Color::Black;
			this->textBox23->Location = System::Drawing::Point(424, 87);
			this->textBox23->Name = L"textBox23";
			this->textBox23->ReadOnly = true;
			this->textBox23->Size = System::Drawing::Size(149, 26);
			this->textBox23->TabIndex = 54;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->ForeColor = System::Drawing::Color::White;
			this->label13->Location = System::Drawing::Point(420, 65);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(153, 19);
			this->label13->TabIndex = 43;
			this->label13->Text = L"Стоимость работы";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(45, 190);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(126, 19);
			this->label6->TabIndex = 42;
			this->label6->Text = L"Ночная ставка";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(45, 130);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(135, 19);
			this->label4->TabIndex = 41;
			this->label4->Text = L"Дневная ставка";
			// 
			// textBox9
			// 
			this->textBox9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox9->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox9->ForeColor = System::Drawing::Color::White;
			this->textBox9->Location = System::Drawing::Point(190, 213);
			this->textBox9->Name = L"textBox9";
			this->textBox9->ReadOnly = true;
			this->textBox9->Size = System::Drawing::Size(224, 26);
			this->textBox9->TabIndex = 33;
			// 
			// textBox6
			// 
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox6->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox6->ForeColor = System::Drawing::Color::White;
			this->textBox6->Location = System::Drawing::Point(190, 181);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(224, 26);
			this->textBox6->TabIndex = 32;
			// 
			// textBox7
			// 
			this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox7->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox7->ForeColor = System::Drawing::Color::White;
			this->textBox7->Location = System::Drawing::Point(190, 149);
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(224, 26);
			this->textBox7->TabIndex = 31;
			// 
			// textBox5
			// 
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox5->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox5->ForeColor = System::Drawing::Color::White;
			this->textBox5->Location = System::Drawing::Point(190, 117);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(224, 26);
			this->textBox5->TabIndex = 30;
			// 
			// textBox4
			// 
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox4->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox4->ForeColor = System::Drawing::Color::White;
			this->textBox4->Location = System::Drawing::Point(190, 85);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(224, 26);
			this->textBox4->TabIndex = 29;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->ForeColor = System::Drawing::Color::White;
			this->label12->Location = System::Drawing::Point(187, 63);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(135, 19);
			this->label12->TabIndex = 28;
			this->label12->Text = L"Местоположение";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->ForeColor = System::Drawing::Color::White;
			this->label11->Location = System::Drawing::Point(187, 5);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(117, 19);
			this->label11->TabIndex = 27;
			this->label11->Text = L"Часовой пояс";
			// 
			// comboBox3
			// 
			this->comboBox3->ForeColor = System::Drawing::Color::Black;
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(25) {
				L"(UTC -12) Линия перемены дат", L"(UTC -11) Время в формате UTC -11",
					L"(UTC -10) Гавайи", L"(UTC -9)  Аляска", L"(UTC -8) Нижняя калифорния", L"(UTC -7) Аризона", L"(UTC -6) Остров Пасхи", L"(UTC -5) Гаити",
					L"(UTC -4) Сантьяго", L"(UTC -3) Гренландия", L"(UTC -2) Время в формате UTC -2", L"(UTC -1) Азорские острова", L"(UTC 0) Лондон",
					L"(UTC +1) Берлин", L"(UTC +2) Калининград", L"(UTC +3) Москва", L"(UTC +4) Самара", L"(UTC +5) Екатеринбург", L"(UTC +6) Омск",
					L"(UTC +7) Томск", L"(UTC +8) Иркутск", L"(UTC +9) Токио", L"(UTC +10) Владивосток", L"(UTC +11) Сахалин", L"(UTC +12) Фиджи"
			});
			this->comboBox3->Location = System::Drawing::Point(190, 27);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(308, 27);
			this->comboBox3->TabIndex = 26;
			this->comboBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox3_SelectedIndexChanged);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(36, 69);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(117, 19);
			this->label10->TabIndex = 25;
			this->label10->Text = L"Конец работы";
			// 
			// dateTimePicker7
			// 
			this->dateTimePicker7->CalendarForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->dateTimePicker7->Format = System::Windows::Forms::DateTimePickerFormat::Time;
			this->dateTimePicker7->Location = System::Drawing::Point(41, 91);
			this->dateTimePicker7->Name = L"dateTimePicker7";
			this->dateTimePicker7->ShowUpDown = true;
			this->dateTimePicker7->Size = System::Drawing::Size(113, 26);
			this->dateTimePicker7->TabIndex = 24;
			this->dateTimePicker7->Value = System::DateTime(2022, 5, 13, 0, 0, 0, 0);
			this->dateTimePicker7->ValueChanged += gcnew System::EventHandler(this, &MyForm::comboBox3_SelectedIndexChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(37, 5);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(126, 19);
			this->label9->TabIndex = 23;
			this->label9->Text = L"Начало работы";
			// 
			// dateTimePicker6
			// 
			this->dateTimePicker6->Format = System::Windows::Forms::DateTimePickerFormat::Time;
			this->dateTimePicker6->Location = System::Drawing::Point(41, 27);
			this->dateTimePicker6->Name = L"dateTimePicker6";
			this->dateTimePicker6->ShowUpDown = true;
			this->dateTimePicker6->Size = System::Drawing::Size(122, 26);
			this->dateTimePicker6->TabIndex = 22;
			this->dateTimePicker6->Value = System::DateTime(2022, 5, 13, 0, 0, 0, 0);
			this->dateTimePicker6->ValueChanged += gcnew System::EventHandler(this, &MyForm::comboBox3_SelectedIndexChanged);
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Location = System::Drawing::Point(0, 0);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker2->TabIndex = 0;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(6, 163);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(140, 22);
			this->label3->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(6, 96);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(100, 22);
			this->label2->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(6, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(120, 22);
			this->label1->TabIndex = 0;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(9, 188);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(117, 30);
			this->textBox1->TabIndex = 7;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(0, 0);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker1->TabIndex = 0;
			// 
			// dateTimePicker4
			// 
			this->dateTimePicker4->CalendarForeColor = System::Drawing::Color::White;
			this->dateTimePicker4->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->dateTimePicker4->Format = System::Windows::Forms::DateTimePickerFormat::Time;
			this->dateTimePicker4->Location = System::Drawing::Point(10, 121);
			this->dateTimePicker4->Name = L"dateTimePicker4";
			this->dateTimePicker4->ShowUpDown = true;
			this->dateTimePicker4->Size = System::Drawing::Size(116, 30);
			this->dateTimePicker4->TabIndex = 3;
			this->dateTimePicker4->Value = System::DateTime(2022, 5, 13, 0, 0, 0, 0);
			this->dateTimePicker4->ValueChanged += gcnew System::EventHandler(this, &MyForm::dateTimePicker3_ValueChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(6, 163);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(100, 22);
			this->label8->TabIndex = 4;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(6, 96);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(140, 22);
			this->label7->TabIndex = 1;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(6, 26);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(120, 22);
			this->label5->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(10, 188);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(116, 30);
			this->textBox2->TabIndex = 7;
			// 
			// dateTimePicker3
			// 
			this->dateTimePicker3->CalendarForeColor = System::Drawing::Color::White;
			this->dateTimePicker3->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->dateTimePicker3->Format = System::Windows::Forms::DateTimePickerFormat::Time;
			this->dateTimePicker3->Location = System::Drawing::Point(10, 51);
			this->dateTimePicker3->Name = L"dateTimePicker3";
			this->dateTimePicker3->ShowUpDown = true;
			this->dateTimePicker3->Size = System::Drawing::Size(116, 30);
			this->dateTimePicker3->TabIndex = 2;
			this->dateTimePicker3->Value = System::DateTime(2022, 5, 13, 0, 0, 0, 0);
			this->dateTimePicker3->ValueChanged += gcnew System::EventHandler(this, &MyForm::dateTimePicker3_ValueChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(101)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->ClientSize = System::Drawing::Size(611, 289);
			this->Controls->Add(this->tabControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(627, 328);
			this->MinimumSize = System::Drawing::Size(627, 328);
			this->Name = L"MyForm";
			this->Text = L"Калькулятор времени";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void dateTimePicker8_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	int h1, m1, s1, h2, m2, s2, h, m, s;
	h1 = dateTimePicker9->Value.Hour;
	m1 = dateTimePicker9->Value.Minute;
	s1 = dateTimePicker9->Value.Second;
	h2 = dateTimePicker8->Value.Hour;
	m2 = dateTimePicker8->Value.Minute;
	s2 = dateTimePicker8->Value.Second;
	h = h1 - h2;
	m = m1 - m2;
	s = s1 - s2;
	if (s < 60) { s += 60; m -= 1; }
	if (m < 60) { m += 60; h -= 1; }
	if (h < 24) { h += 24; }
	if (s >= 60) { s -= 60; m += 1; }
	if (m >= 60) { m -= 60; h += 1; }
	if (h >= 24) { h -= 24; }
	if (h < 10 ) this->textBox8->Text = "0" + Convert::ToString(h);
	else this->textBox8->Text = Convert::ToString(h);
	if (m < 10) this->textBox8->Text += ":0" + Convert::ToString(m);
	else this->textBox8->Text += ":" + Convert::ToString(m);
	if (s < 10) this->textBox8->Text += ":0" + Convert::ToString(s);
	else this->textBox8->Text += ":" + Convert::ToString(s);
}
private: System::Void dateTimePicker3_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	int h1, m1, s1, h2, m2, s2,h,m,s;
	h1 = dateTimePicker10->Value.Hour;
	m1 = dateTimePicker10->Value.Minute;
	s1 = dateTimePicker10->Value.Second;
	h2 = dateTimePicker11->Value.Hour;
	m2 = dateTimePicker11->Value.Minute;
	s2 = dateTimePicker11->Value.Second;
	h = h1 + h2;
	m = m1 + m2;
	s = s1 + s2;
	if (s >= 60) { s -= 60; m += 1; }
	if (m >= 60) { m -= 60; h += 1; }
	if (h >= 24) { h -= 24; }
	if (h < 10) this->textBox10->Text = "0" + Convert::ToString(h);
	else this->textBox10->Text = Convert::ToString(h);
	if (m < 10) this->textBox10->Text += ":0" + Convert::ToString(m);
	else this->textBox10->Text += ":" + Convert::ToString(m);
	if (s < 10) this->textBox10->Text += ":0" + Convert::ToString(s);
	else this->textBox10->Text += ":" + Convert::ToString(s);
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	int a1 = this->comboBox1->SelectedIndex;
	int a2 = this->comboBox2->SelectedIndex;
	int b1, b2;
	switch (a1)
	{
	case 0: b1 = -12; break;
	case 1: b1 = -11; break;
	case 2: b1 = -10; break;
	case 3: b1 = -9; break;
	case 4: b1 = -8; break;
	case 5: b1 = -7; break;
	case 6: b1 = -6; break;
	case 7: b1 = -5; break;
	case 8: b1 = -4; break;
	case 9: b1 = -3; break;
	case 10: b1 = -2; break;
	case 11: b1 = -1; break;
	case 12: b1 = 0; break;
	case 13: b1 = 1; break;
	case 14: b1 = 2; break;
	case 15: b1 = 3; break;
	case 16: b1 = 4; break;
	case 17: b1 = 5; break;
	case 18: b1 = 6; break;
	case 19: b1 = 7; break;
	case 20: b1 = 8; break;
	case 21: b1 = 9; break;
	case 22: b1 = 10; break;
	case 23: b1 = 11; break;
	case 24: b1 = 12; break;
	default: b1 = 0; break;
	}
	switch (a2)
	{
	case 0: b2 = -12; break;
	case 1: b2 = -11; break;
	case 2: b2 = -10; break;
	case 3: b2 = -9; break;
	case 4: b2 = -8; break;
	case 5: b2 = -7; break;
	case 6: b2 = -6; break;
	case 7: b2 = -5; break;
	case 8: b2 = -4; break;
	case 9: b2 = -3; break;
	case 10: b2 = -2; break;
	case 11: b2 = -1; break;
	case 12: b2 = 0; break;
	case 13: b2 = 1; break;
	case 14: b2 = 2; break;
	case 15: b2 = 3; break;
	case 16: b2 = 4; break;
	case 17: b2 = 5; break;
	case 18: b2 = 6; break;
	case 19: b2 = 7; break;
	case 20: b2 = 8; break;
	case 21: b2 = 9; break;
	case 22: b2 = 10; break;
	case 23: b2 = 11; break;
	case 24: b2 = 12; break;
	default: b2 = 0; break;
	}
	int b = b1 - b2;
	String^ s = Convert::ToString(this->dateTimePicker5->Value.AddHours(b));
	s = s->Substring(11);
	this->textBox3->Text = s;
	b = b1;
	 s = Convert::ToString(this->dateTimePicker5->Value.AddHours(b));
	s = s->Substring(11);
	this->textBox12->Text = s;
	b = b1 - 4;
	 s = Convert::ToString(this->dateTimePicker5->Value.AddHours(b));
	s = s->Substring(11);
	this->textBox13->Text = s;
	b = b1 + 2;
	 s = Convert::ToString(this->dateTimePicker5->Value.AddHours(b));
	s = s->Substring(11);
	this->textBox14->Text = s;
	b = b1 + 8;
	 s = Convert::ToString(this->dateTimePicker5->Value.AddHours(b));
	s = s->Substring(11);
							this->textBox15->Text = s;
	b = b1 + 9;
	s = Convert::ToString(this->dateTimePicker5->Value.AddHours(b));
	s = s->Substring(11);
	this->textBox16->Text = s;
	b = b1 + 2;
	s = Convert::ToString(this->dateTimePicker5->Value.AddHours(b));
	s = s->Substring(11);
	this->textBox11->Text = s;
}
private: System::Void comboBox3_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	DateTime start = this->dateTimePicker6->Value;
	DateTime end = this->dateTimePicker7->Value;
	int h1 = start.Hour, h2 = end.Hour;
	int hours = h2 - h1,  a1 = this->comboBox3->SelectedIndex, b1;
	if (hours < 0) hours += 24;
	switch (a1)
	{
	case 0: b1 = -12; break;
	case 1: b1 = -11; break;
	case 2: b1 = -10; break;
	case 3: b1 = -9; break;
	case 4: b1 = -8; break;
	case 5: b1 = -7; break;
	case 6: b1 = -6; break;
	case 7: b1 = -5; break;
	case 8: b1 = -4; break;
	case 9: b1 = -3; break;
	case 10: b1 = -2; break;
	case 11: b1 = -1; break;
	case 12: b1 = 0; break;
	case 13: b1 = 1; break;
	case 14: b1 = 2; break;
	case 15: b1 = 3; break;
	case 16: b1 = 4; break;
	case 17: b1 = 5; break;
	case 18: b1 = 6; break;
	case 19: b1 = 7; break;
	case 20: b1 = 8; break;
	case 21: b1 = 9; break;
	case 22: b1 = 10; break;
	case 23: b1 = 11; break;
	case 24: b1 = 12; break;
	default: b1 = 0; break;
	}
	std::vector<int> Price;
	for (int i = -12; i < 13; i++)
	{
		int tempS = start.Hour;
		int tempE = end.Hour;
		tempS -= b1 - i;
		if (tempS < 0) tempS += 24;
		tempE -= b1 - i;
		if (tempE < 0) tempE += 24;
		int h = tempS;
		int DayH = 0, NightH = 0;
		for (int i = 0; i < hours; i++)
		{
			if ((21 > h) && (h >= 9)) DayH++;
			h++;
			if (h == 24) h = 0;
		}
		NightH = hours - DayH;
		int price = 0;
		if ((maskedTextBox1->Text != "") && (maskedTextBox2->Text != ""))
			price = Convert::ToInt32(maskedTextBox1->Text) * DayH + Convert::ToInt32(maskedTextBox2->Text) * NightH;
		Price.push_back(price);
	}

	int min = 1000000;
	int index = 0;
	for (int i = 0; i < 25; i++)
	{
		if (Price[i] < min) {
			min = Price[i];
			index = i;
		}	
	}
	this->textBox4->Text = Convert::ToString(this->comboBox3->Items[index]);
	this->textBox23->Text = Convert::ToString(Price[index]);
	Price[index] = -1;

	min = 1000000;
	index = 0;
	for (int i = 0; i < 25; i++)
	{
		if ((Price[i] < min) && (Price[i] > 0)) {
			min = Price[i];
			index = i;
		}
	}
	this->textBox5->Text = Convert::ToString(this->comboBox3->Items[index]);
	this->textBox22->Text = Convert::ToString(Price[index]);
	Price[index] = -1;

	min = 1000000;
	index = 0;
	for (int i = 0; i < 25; i++)
	{
		if ((Price[i] < min) && (Price[i] > 0)) {
			min = Price[i];
			index = i;
		}
	}
	this->textBox7->Text = Convert::ToString(this->comboBox3->Items[index]);
	this->textBox21->Text = Convert::ToString(Price[index]);
	Price[index] = -1;

	min = 1000000;
	index = 0;
	for (int i = 0; i < 25; i++)
	{
		if ((Price[i] < min) && (Price[i] > 0)) {
			min = Price[i];
			index = i;
		}
	}
	this->textBox6->Text = Convert::ToString(this->comboBox3->Items[index]);
	this->textBox20->Text = Convert::ToString(Price[index]);
	Price[index] = -1;

	min = 1000000;
	index = 0;
	for (int i = 0; i < 25; i++)
	{
		if ((Price[i] < min) && (Price[i] > 0)) {
			min = Price[i];
			index = i;
		}
	}
	this->textBox9->Text = Convert::ToString(this->comboBox3->Items[index]);
	this->textBox19->Text = Convert::ToString(Price[index]);
	Price[index] = -1;
}
private: System::Void tabControl1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->tabControl1->SelectedIndex == 3) Application::Exit();
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->checkBox1->Checked == true) {
		this->label20->Visible = true;
		this->label21->Visible = true;
		this->label22->Visible = true;
		this->label23->Visible = true;
		this->numericUpDown1->Visible = true;
		this->numericUpDown2->Visible = true;
		this->dateTimePicker11->Visible = false;
		this->label19->Visible = false;
	}
	else {
		this->label20->Visible = false;
		this->label21->Visible = false;
		this->label22->Visible = false;
		this->label23->Visible = false;
		this->numericUpDown1->Visible = false;
		this->numericUpDown2->Visible = false;
		this->dateTimePicker11->Visible = true;
		this->label19->Visible = true;
	}
}
private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	int time = Convert::ToInt32(this->numericUpDown2->Value / this->numericUpDown1->Value);
	int h, m, s;
	h = time / 3600;
	m = (time - h*3600) / 60;
	s = time - h*3600 - m*60;
	this->dateTimePicker11->Value = this->dateTimePicker11->Value.AddHours(h - this->dateTimePicker11->Value.Hour);
	this->dateTimePicker11->Value = this->dateTimePicker11->Value.AddMinutes(m - this->dateTimePicker11->Value.Minute);
	this->dateTimePicker11->Value = this->dateTimePicker11->Value.AddSeconds(s - this->dateTimePicker11->Value.Second);
}
};
}