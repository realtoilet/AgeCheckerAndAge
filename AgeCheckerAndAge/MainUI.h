#pragma once

namespace AgeCheckerAndAge {

	using namespace System;
	using namespace std;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainUI
	/// </summary>
	public ref class MainUI : public System::Windows::Forms::Form
	{
	public:
		MainUI(void)
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
		~MainUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DateTimePicker^ dateTime;
	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ comboBox;

	private: System::Windows::Forms::PictureBox^ pictureBox;
	private: System::Windows::Forms::Button^ btn_getAgeAndGenda;
	private: System::Windows::Forms::Label^ lb_display;



	protected:

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
			this->dateTime = (gcnew System::Windows::Forms::DateTimePicker());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->btn_getAgeAndGenda = (gcnew System::Windows::Forms::Button());
			this->lb_display = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->BeginInit();
			this->SuspendLayout();
			// 
			// dateTime
			// 
			this->dateTime->Location = System::Drawing::Point(90, 22);
			this->dateTime->Name = L"dateTime";
			this->dateTime->Size = System::Drawing::Size(200, 22);
			this->dateTime->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(22, 17);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(62, 29);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Age:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(21, 67);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(108, 32);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Genda:";
			// 
			// comboBox
			// 
			this->comboBox->FormattingEnabled = true;
			this->comboBox->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Male", L"Female", L"Non-Binary", L"Prefer not to say" });
			this->comboBox->Location = System::Drawing::Point(135, 75);
			this->comboBox->Name = L"comboBox";
			this->comboBox->Size = System::Drawing::Size(121, 24);
			this->comboBox->TabIndex = 3;
			// 
			// pictureBox
			// 
			this->pictureBox->Location = System::Drawing::Point(331, 17);
			this->pictureBox->Name = L"pictureBox";
			this->pictureBox->Size = System::Drawing::Size(200, 212);
			this->pictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox->TabIndex = 4;
			this->pictureBox->TabStop = false;
			// 
			// btn_getAgeAndGenda
			// 
			this->btn_getAgeAndGenda->Location = System::Drawing::Point(70, 118);
			this->btn_getAgeAndGenda->Name = L"btn_getAgeAndGenda";
			this->btn_getAgeAndGenda->Size = System::Drawing::Size(186, 40);
			this->btn_getAgeAndGenda->TabIndex = 5;
			this->btn_getAgeAndGenda->Text = L"Get your Age and Genda!!";
			this->btn_getAgeAndGenda->UseVisualStyleBackColor = true;
			this->btn_getAgeAndGenda->Click += gcnew System::EventHandler(this, &MainUI::btn_getAgeAndGenda_Click);
			// 
			// lb_display
			// 
			this->lb_display->AutoSize = true;
			this->lb_display->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_display->Location = System::Drawing::Point(12, 229);
			this->lb_display->Name = L"lb_display";
			this->lb_display->Size = System::Drawing::Size(211, 25);
			this->lb_display->TabIndex = 6;
			this->lb_display->Text = L"No Age and Genda yet";
			// 
			// MainUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(579, 354);
			this->Controls->Add(this->lb_display);
			this->Controls->Add(this->btn_getAgeAndGenda);
			this->Controls->Add(this->pictureBox);
			this->Controls->Add(this->comboBox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dateTime);
			this->Name = L"MainUI";
			this->Text = L"MainUI";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btn_getAgeAndGenda_Click(System::Object^ sender, System::EventArgs^ e) {
		DateTime today = DateTime::Now;
		DateTime birthday = dateTime->Value;

		int age = today.Year - birthday.Year;

		String^ genderStr;

		if (comboBox->SelectedItem == nullptr) {
			MessageBox::Show("NO GENDER");
		}
		else if (comboBox->SelectedItem->ToString() == "Male") {
			pictureBox->Image = Image::FromFile("C:\\Users\\Adrian\\Downloads\\gigachad.png");
			genderStr = "YOU ARE A MALE";
		}
		else if (comboBox->SelectedItem->ToString() == "Female") {
			pictureBox->Image = Image::FromFile("C:\\Users\\Adrian\\Downloads\\maid.png");
			genderStr = "YOU ARE A FEMALE";
		}
		else if (comboBox->SelectedItem->ToString() == "Non-Binary") {
			pictureBox->Image = Image::FromFile("C:\\Users\\Adrian\\Downloads\\kap.png");
			genderStr = "YOU ARE NON BINARY";
		}


		String^ ageType;
		if (age <= 10) {
			ageType = "KID";
		}
		else if (age <= 17) {
			ageType = "TEEN";
		}
		else if (age <= 60) {
			ageType = "ADULT";
		}
		else {
			ageType = "SENIOR CITIZEN";
		}

		lb_display->Text = "YOUR AGE IS :" + age + "\n" + genderStr + "\nYOU ARE A " + ageType;

	}
};
}
