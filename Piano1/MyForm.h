#pragma once
namespace Piano1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}
		

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonC;
	private: System::Windows::Forms::Button^ buttonD;
	private: System::Windows::Forms::Button^ buttonE;
	private: System::Windows::Forms::Button^ buttonF;
	private: System::Windows::Forms::Button^ buttonG;
	private: System::Windows::Forms::Button^ buttonA;
	private: System::Windows::Forms::Button^ buttonB;

	private: System::Windows::Forms::Button^ buttonC1;
	private: System::Windows::Forms::Button^ buttonCC;
	private: System::Windows::Forms::Button^ buttonDD;
	private: System::Windows::Forms::Button^ buttonFF;
	private: System::Windows::Forms::Button^ buttonGG;
	private: System::Windows::Forms::Button^ buttonBB;
	protected:

	protected:








	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->buttonC = (gcnew System::Windows::Forms::Button());
			this->buttonD = (gcnew System::Windows::Forms::Button());
			this->buttonE = (gcnew System::Windows::Forms::Button());
			this->buttonF = (gcnew System::Windows::Forms::Button());
			this->buttonG = (gcnew System::Windows::Forms::Button());
			this->buttonA = (gcnew System::Windows::Forms::Button());
			this->buttonB = (gcnew System::Windows::Forms::Button());
			this->buttonC1 = (gcnew System::Windows::Forms::Button());
			this->buttonCC = (gcnew System::Windows::Forms::Button());
			this->buttonDD = (gcnew System::Windows::Forms::Button());
			this->buttonFF = (gcnew System::Windows::Forms::Button());
			this->buttonGG = (gcnew System::Windows::Forms::Button());
			this->buttonBB = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// buttonC
			// 
			this->buttonC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->buttonC->Location = System::Drawing::Point(154, 191);
			this->buttonC->Name = L"buttonC";
			this->buttonC->Size = System::Drawing::Size(82, 338);
			this->buttonC->TabIndex = 10;
			this->buttonC->Text = L"C";
			this->buttonC->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->buttonC->UseVisualStyleBackColor = true;
			this->buttonC->Click += gcnew System::EventHandler(this, &MyForm::buttonC_Click);
			// 
			// buttonD
			// 
			this->buttonD->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->buttonD->Location = System::Drawing::Point(241, 191);
			this->buttonD->Name = L"buttonD";
			this->buttonD->Size = System::Drawing::Size(82, 338);
			this->buttonD->TabIndex = 11;
			this->buttonD->Text = L"D";
			this->buttonD->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->buttonD->UseVisualStyleBackColor = true;
			this->buttonD->Click += gcnew System::EventHandler(this, &MyForm::buttonD_Click);
			// 
			// buttonE
			// 
			this->buttonE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->buttonE->Location = System::Drawing::Point(329, 191);
			this->buttonE->Name = L"buttonE";
			this->buttonE->Size = System::Drawing::Size(82, 338);
			this->buttonE->TabIndex = 12;
			this->buttonE->Text = L"E";
			this->buttonE->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->buttonE->UseVisualStyleBackColor = true;
			this->buttonE->Click += gcnew System::EventHandler(this, &MyForm::buttonE_Click);
			// 
			// buttonF
			// 
			this->buttonF->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->buttonF->Location = System::Drawing::Point(417, 191);
			this->buttonF->Name = L"buttonF";
			this->buttonF->Size = System::Drawing::Size(82, 338);
			this->buttonF->TabIndex = 13;
			this->buttonF->Text = L"F";
			this->buttonF->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->buttonF->UseVisualStyleBackColor = true;
			this->buttonF->Click += gcnew System::EventHandler(this, &MyForm::buttonF_Click);
			// 
			// buttonG
			// 
			this->buttonG->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->buttonG->Location = System::Drawing::Point(505, 191);
			this->buttonG->Name = L"buttonG";
			this->buttonG->Size = System::Drawing::Size(82, 338);
			this->buttonG->TabIndex = 14;
			this->buttonG->Text = L"G";
			this->buttonG->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->buttonG->UseVisualStyleBackColor = true;
			this->buttonG->Click += gcnew System::EventHandler(this, &MyForm::buttonG_Click);
			// 
			// buttonA
			// 
			this->buttonA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->buttonA->Location = System::Drawing::Point(593, 191);
			this->buttonA->Name = L"buttonA";
			this->buttonA->Size = System::Drawing::Size(82, 338);
			this->buttonA->TabIndex = 15;
			this->buttonA->Text = L"A";
			this->buttonA->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->buttonA->UseVisualStyleBackColor = true;
			this->buttonA->Click += gcnew System::EventHandler(this, &MyForm::buttonA_Click);
			// 
			// buttonB
			// 
			this->buttonB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->buttonB->Location = System::Drawing::Point(681, 191);
			this->buttonB->Name = L"buttonB";
			this->buttonB->Size = System::Drawing::Size(82, 338);
			this->buttonB->TabIndex = 16;
			this->buttonB->Text = L"B";
			this->buttonB->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->buttonB->UseVisualStyleBackColor = true;
			this->buttonB->Click += gcnew System::EventHandler(this, &MyForm::buttonB_Click);
			// 
			// buttonC1
			// 
			this->buttonC1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->buttonC1->Location = System::Drawing::Point(769, 191);
			this->buttonC1->Name = L"buttonC1";
			this->buttonC1->Size = System::Drawing::Size(82, 338);
			this->buttonC1->TabIndex = 17;
			this->buttonC1->Text = L"C1";
			this->buttonC1->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->buttonC1->UseVisualStyleBackColor = true;
			this->buttonC1->Click += gcnew System::EventHandler(this, &MyForm::buttonC1_Click);
			// 
			// buttonCC
			// 
			this->buttonCC->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->buttonCC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->buttonCC->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->buttonCC->Location = System::Drawing::Point(206, 191);
			this->buttonCC->Name = L"buttonCC";
			this->buttonCC->Size = System::Drawing::Size(61, 186);
			this->buttonCC->TabIndex = 18;
			this->buttonCC->Text = L"C#";
			this->buttonCC->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->buttonCC->UseVisualStyleBackColor = false;
			this->buttonCC->Click += gcnew System::EventHandler(this, &MyForm::buttonCC_Click);
			// 
			// buttonDD
			// 
			this->buttonDD->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->buttonDD->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->buttonDD->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->buttonDD->Location = System::Drawing::Point(294, 191);
			this->buttonDD->Name = L"buttonDD";
			this->buttonDD->Size = System::Drawing::Size(61, 186);
			this->buttonDD->TabIndex = 19;
			this->buttonDD->Text = L"D#";
			this->buttonDD->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->buttonDD->UseVisualStyleBackColor = false;
			this->buttonDD->Click += gcnew System::EventHandler(this, &MyForm::buttonDD_Click);
			// 
			// buttonFF
			// 
			this->buttonFF->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->buttonFF->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->buttonFF->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->buttonFF->Location = System::Drawing::Point(471, 191);
			this->buttonFF->Name = L"buttonFF";
			this->buttonFF->Size = System::Drawing::Size(61, 186);
			this->buttonFF->TabIndex = 20;
			this->buttonFF->Text = L"F#";
			this->buttonFF->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->buttonFF->UseVisualStyleBackColor = false;
			this->buttonFF->Click += gcnew System::EventHandler(this, &MyForm::buttonFF_Click);
			// 
			// buttonGG
			// 
			this->buttonGG->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->buttonGG->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->buttonGG->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->buttonGG->Location = System::Drawing::Point(558, 191);
			this->buttonGG->Name = L"buttonGG";
			this->buttonGG->Size = System::Drawing::Size(61, 186);
			this->buttonGG->TabIndex = 21;
			this->buttonGG->Text = L"G#";
			this->buttonGG->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->buttonGG->UseVisualStyleBackColor = false;
			this->buttonGG->Click += gcnew System::EventHandler(this, &MyForm::buttonGG_Click);
			// 
			// buttonBB
			// 
			this->buttonBB->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->buttonBB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->buttonBB->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->buttonBB->Location = System::Drawing::Point(648, 191);
			this->buttonBB->Name = L"buttonBB";
			this->buttonBB->Size = System::Drawing::Size(61, 186);
			this->buttonBB->TabIndex = 22;
			this->buttonBB->Text = L"Bb";
			this->buttonBB->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->buttonBB->UseVisualStyleBackColor = false;
			this->buttonBB->Click += gcnew System::EventHandler(this, &MyForm::buttonBB_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(998, 561);
			this->Controls->Add(this->buttonBB);
			this->Controls->Add(this->buttonGG);
			this->Controls->Add(this->buttonFF);
			this->Controls->Add(this->buttonDD);
			this->Controls->Add(this->buttonCC);
			this->Controls->Add(this->buttonC1);
			this->Controls->Add(this->buttonB);
			this->Controls->Add(this->buttonA);
			this->Controls->Add(this->buttonG);
			this->Controls->Add(this->buttonF);
			this->Controls->Add(this->buttonE);
			this->Controls->Add(this->buttonD);
			this->Controls->Add(this->buttonC);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void buttonC_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("C://Users//48665//source//repos//Piano1//Buttons//butC.wav");
		player->Load();
		player->Play();
	}
	private: System::Void buttonCC_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("C://Users//48665//source//repos//Piano1//Buttons//butCC.wav");
		player->Load();
		player->Play();
}	   
	private: System::Void buttonD_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("C://Users//48665//source//repos//Piano1//Buttons//butD.wav");
		player->Load();
		player->Play();
	}
	private: System::Void buttonDD_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("C://Users//48665//source//repos//Piano1//Buttons//butDD.wav");
		player->Load();
		player->Play();
	}
	private: System::Void buttonE_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("C://Users//48665//source//repos//Piano1//Buttons//butE.wav");
		player->Load();
		player->Play();
	}
	private: System::Void buttonF_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("C://Users//48665//source//repos//Piano1//Buttons//butF.wav");
		player->Load();
		player->Play();
	}
	private: System::Void buttonFF_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("C://Users//48665//source//repos//Piano1//Buttons//butFF.wav");
		player->Load();
		player->Play();
	}
	private: System::Void buttonG_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("C://Users//48665//source//repos//Piano1//Buttons//butG.wav");
		player->Load();
		player->Play();
	}
	private: System::Void buttonGG_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("C://Users//48665//source//repos//Piano1//Buttons//butGG.wav");
		player->Load();
		player->Play();
	}
	private: System::Void buttonA_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("C://Users//48665//source//repos//Piano1//Buttons//butA.wav");
		player->Load();
		player->Play();
}
	private: System::Void buttonBB_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("C://Users//48665//source//repos//Piano1//Buttons//butBB.wav");
		player->Load();
		player->Play();
	}
	private: System::Void buttonB_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("C://Users//48665//source//repos//Piano1//Buttons//butB.wav");
		player->Load();
		player->Play();
	}
	private: System::Void buttonC1_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("C://Users//48665//source//repos//Piano1//Buttons//butC1.wav");
		player->Load();
		player->Play();
	}
};
}
