#pragma once
#include <msclr/marshal_cppstd.h>	//System::String����std::string�ŕK�v
#include <iostream>
#include <fstream>
#include <string>
#include "deleteWindow.h"

namespace TeaCupLabVer2 
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;	//std::string
	using namespace System::IO;

	/// <summary>
	/// registWindow �̊T�v
	/// </summary>
	/// 
	/// ���t�̏����󂯎�鏈��
	public ref class registWindow : public System::Windows::Forms::Form
	{
	private:
		System::DateTime dateFromRegist;
	public:
		property System::DateTime DateFromRegist;

	public:
		registWindow(void)
		{
			InitializeComponent();
			//
			//TODO: �����ɃR���X�g���N�^�[ �R�[�h��ǉ����܂�
			//
		}

	protected:
		/// <summary>
		/// �g�p���̃��\�[�X�����ׂăN���[���A�b�v���܂��B
		/// </summary>
		~registWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ labelRegist;
	protected:
	private: System::Windows::Forms::Label^ labelTimeStart;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ labelPlan;
	private: System::Windows::Forms::ComboBox^ buttonTimeStart;
	private: System::Windows::Forms::ComboBox^ buttonMinuteStart;
	private: System::Windows::Forms::ComboBox^ buttonTimeFinish;
	private: System::Windows::Forms::ComboBox^ buttonMinuteFinish;
	private: System::Windows::Forms::TextBox^ textBoxPlan;





	private: System::Windows::Forms::Button^ buttonFinish;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ buttonDelete;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ labelViewDate;
	private: System::Windows::Forms::Label^ labelTitle;
	private: System::Windows::Forms::TextBox^ textBoxTitle;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ buttonReturn;
	private: System::Windows::Forms::Label^ label10;






	private:
		/// <summary>
		/// �K�v�ȃf�U�C�i�[�ϐ��ł��B
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �f�U�C�i�[ �T�|�[�g�ɕK�v�ȃ��\�b�h�ł��B���̃��\�b�h�̓��e��
		/// �R�[�h �G�f�B�^�[�ŕύX���Ȃ��ł��������B
		/// </summary>
		void InitializeComponent(void)
		{
			this->labelRegist = (gcnew System::Windows::Forms::Label());
			this->labelTimeStart = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->labelPlan = (gcnew System::Windows::Forms::Label());
			this->buttonTimeStart = (gcnew System::Windows::Forms::ComboBox());
			this->buttonMinuteStart = (gcnew System::Windows::Forms::ComboBox());
			this->buttonTimeFinish = (gcnew System::Windows::Forms::ComboBox());
			this->buttonMinuteFinish = (gcnew System::Windows::Forms::ComboBox());
			this->textBoxPlan = (gcnew System::Windows::Forms::TextBox());
			this->buttonFinish = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->buttonDelete = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->labelViewDate = (gcnew System::Windows::Forms::Label());
			this->labelTitle = (gcnew System::Windows::Forms::Label());
			this->textBoxTitle = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->buttonReturn = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// labelRegist
			// 
			this->labelRegist->AutoSize = true;
			this->labelRegist->Font = (gcnew System::Drawing::Font(L"�l�r �S�V�b�N", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->labelRegist->Location = System::Drawing::Point(286, 40);
			this->labelRegist->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelRegist->Name = L"labelRegist";
			this->labelRegist->Size = System::Drawing::Size(177, 40);
			this->labelRegist->TabIndex = 0;
			this->labelRegist->Text = L"���o�^";
			// 
			// labelTimeStart
			// 
			this->labelTimeStart->AutoSize = true;
			this->labelTimeStart->Font = (gcnew System::Drawing::Font(L"�l�r �S�V�b�N", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->labelTimeStart->Location = System::Drawing::Point(80, 240);
			this->labelTimeStart->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelTimeStart->Name = L"labelTimeStart";
			this->labelTimeStart->Size = System::Drawing::Size(130, 23);
			this->labelTimeStart->TabIndex = 1;
			this->labelTimeStart->Text = L"�J�n���ԁF";
			this->labelTimeStart->Click += gcnew System::EventHandler(this, &registWindow::labelTimeStart_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"�l�r �S�V�b�N", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label2->Location = System::Drawing::Point(80, 300);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(130, 23);
			this->label2->TabIndex = 2;
			this->label2->Text = L"�I�����ԁF";
			this->label2->Click += gcnew System::EventHandler(this, &registWindow::label2_Click);
			// 
			// labelPlan
			// 
			this->labelPlan->AutoSize = true;
			this->labelPlan->Font = (gcnew System::Drawing::Font(L"�l�r �S�V�b�N", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->labelPlan->Location = System::Drawing::Point(80, 360);
			this->labelPlan->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelPlan->Name = L"labelPlan";
			this->labelPlan->Size = System::Drawing::Size(130, 23);
			this->labelPlan->TabIndex = 3;
			this->labelPlan->Text = L"�\����e�F";
			this->labelPlan->Click += gcnew System::EventHandler(this, &registWindow::labelPlan_Click);
			// 
			// buttonTimeStart
			// 
			this->buttonTimeStart->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->buttonTimeStart->Font = (gcnew System::Drawing::Font(L"�l�r �S�V�b�N", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->buttonTimeStart->FormattingEnabled = true;
			this->buttonTimeStart->Items->AddRange(gcnew cli::array< System::Object^  >(25)
			{
				L"00", L"01", L"02", L"03", L"04", L"05",
					L"06", L"07", L"08", L"09", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23",
					L"24"
			});
			this->buttonTimeStart->Location = System::Drawing::Point(255, 237);
			this->buttonTimeStart->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->buttonTimeStart->Name = L"buttonTimeStart";
			this->buttonTimeStart->Size = System::Drawing::Size(100, 31);
			this->buttonTimeStart->TabIndex = 4;
			this->buttonTimeStart->SelectedIndexChanged += gcnew System::EventHandler(this, &registWindow::comboBox1_SelectedIndexChanged);
			// 
			// buttonMinuteStart
			// 
			this->buttonMinuteStart->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->buttonMinuteStart->Font = (gcnew System::Drawing::Font(L"�l�r �S�V�b�N", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->buttonMinuteStart->FormattingEnabled = true;
			this->buttonMinuteStart->Items->AddRange(gcnew cli::array< System::Object^  >(12)
			{
				L"00", L"05", L"10", L"15", L"20", L"25",
					L"30", L"35", L"40", L"45", L"50", L"55"
			});
			this->buttonMinuteStart->Location = System::Drawing::Point(475, 237);
			this->buttonMinuteStart->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->buttonMinuteStart->Name = L"buttonMinuteStart";
			this->buttonMinuteStart->Size = System::Drawing::Size(100, 31);
			this->buttonMinuteStart->TabIndex = 5;
			this->buttonMinuteStart->SelectedIndexChanged += gcnew System::EventHandler(this, &registWindow::buttonMinuteStart_SelectedIndexChanged);
			// 
			// buttonTimeFinish
			// 
			this->buttonTimeFinish->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->buttonTimeFinish->Font = (gcnew System::Drawing::Font(L"�l�r �S�V�b�N", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->buttonTimeFinish->FormattingEnabled = true;
			this->buttonTimeFinish->Items->AddRange(gcnew cli::array< System::Object^  >(24) 
			{
				L"00", L"01", L"02", L"03", L"04", L"05",
					L"06", L"07", L"08", L"09", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23"
			});
			this->buttonTimeFinish->Location = System::Drawing::Point(255, 297);
			this->buttonTimeFinish->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->buttonTimeFinish->Name = L"buttonTimeFinish";
			this->buttonTimeFinish->Size = System::Drawing::Size(100, 31);
			this->buttonTimeFinish->TabIndex = 6;
			this->buttonTimeFinish->SelectedIndexChanged += gcnew System::EventHandler(this, &registWindow::buttonTimeFinish_SelectedIndexChanged);
			// 
			// buttonMinuteFinish
			// 
			this->buttonMinuteFinish->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->buttonMinuteFinish->Font = (gcnew System::Drawing::Font(L"�l�r �S�V�b�N", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->buttonMinuteFinish->FormattingEnabled = true;
			this->buttonMinuteFinish->Items->AddRange(gcnew cli::array< System::Object^  >(11)
			{
				L"00", L"05", L"15", L"20", L"25", L"30",
					L"35", L"40", L"45", L"50", L"55"
			});
			this->buttonMinuteFinish->Location = System::Drawing::Point(475, 297);
			this->buttonMinuteFinish->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->buttonMinuteFinish->Name = L"buttonMinuteFinish";
			this->buttonMinuteFinish->Size = System::Drawing::Size(100, 31);
			this->buttonMinuteFinish->TabIndex = 7;
			this->buttonMinuteFinish->SelectedIndexChanged += gcnew System::EventHandler(this, &registWindow::buttonMinuteFinish_SelectedIndexChanged);
			// 
			// textBoxPlan
			// 
			this->textBoxPlan->Font = (gcnew System::Drawing::Font(L"�l�r �S�V�b�N", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->textBoxPlan->Location = System::Drawing::Point(230, 360);
			this->textBoxPlan->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBoxPlan->MaxLength = 50;
			this->textBoxPlan->Multiline = true;
			this->textBoxPlan->Name = L"textBoxPlan";
			this->textBoxPlan->Size = System::Drawing::Size(400, 70);
			this->textBoxPlan->TabIndex = 8;
			this->textBoxPlan->TextChanged += gcnew System::EventHandler(this, &registWindow::textBoxPlan_TextChanged);
			// 
			// buttonFinish
			// 
			this->buttonFinish->Font = (gcnew System::Drawing::Font(L"�l�r �S�V�b�N", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->buttonFinish->Location = System::Drawing::Point(120, 480);
			this->buttonFinish->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->buttonFinish->Name = L"buttonFinish";
			this->buttonFinish->Size = System::Drawing::Size(90, 38);
			this->buttonFinish->TabIndex = 9;
			this->buttonFinish->Text = L"����";
			this->buttonFinish->UseVisualStyleBackColor = true;
			this->buttonFinish->Click += gcnew System::EventHandler(this, &registWindow::buttonFinish_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"�l�r �S�V�b�N", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label1->Location = System::Drawing::Point(380, 300);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(34, 23);
			this->label1->TabIndex = 10;
			this->label1->Text = L"��";
			this->label1->Click += gcnew System::EventHandler(this, &registWindow::label1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"�l�r �S�V�b�N", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label3->Location = System::Drawing::Point(595, 300);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(34, 23);
			this->label3->TabIndex = 11;
			this->label3->Text = L"��";
			this->label3->Click += gcnew System::EventHandler(this, &registWindow::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"�l�r �S�V�b�N", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label4->Location = System::Drawing::Point(380, 240);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(34, 23);
			this->label4->TabIndex = 12;
			this->label4->Text = L"��";
			this->label4->Click += gcnew System::EventHandler(this, &registWindow::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"�l�r �S�V�b�N", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label5->Location = System::Drawing::Point(595, 240);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(34, 23);
			this->label5->TabIndex = 13;
			this->label5->Text = L"��";
			this->label5->Click += gcnew System::EventHandler(this, &registWindow::label5_Click);
			// 
			// buttonDelete
			// 
			this->buttonDelete->Font = (gcnew System::Drawing::Font(L"�l�r �S�V�b�N", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->buttonDelete->Location = System::Drawing::Point(324, 480);
			this->buttonDelete->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->buttonDelete->Name = L"buttonDelete";
			this->buttonDelete->Size = System::Drawing::Size(90, 38);
			this->buttonDelete->TabIndex = 14;
			this->buttonDelete->Text = L"�폜";
			this->buttonDelete->UseVisualStyleBackColor = true;
			this->buttonDelete->Click += gcnew System::EventHandler(this, &registWindow::buttonDelete_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"�l�r �S�V�b�N", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label6->ForeColor = System::Drawing::Color::Tomato;
			this->label6->Location = System::Drawing::Point(450, 435);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(180, 17);
			this->label6->TabIndex = 15;
			this->label6->Text = L"��50�����܂œ��͉�";
			// 
			// labelViewDate
			// 
			this->labelViewDate->AutoSize = true;
			this->labelViewDate->Font = (gcnew System::Drawing::Font(L"�l�r �S�V�b�N", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->labelViewDate->Location = System::Drawing::Point(80, 120);
			this->labelViewDate->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelViewDate->Name = L"labelViewDate";
			this->labelViewDate->Size = System::Drawing::Size(166, 23);
			this->labelViewDate->TabIndex = 16;
			this->labelViewDate->Text = L"labelViewDate";
			this->labelViewDate->Click += gcnew System::EventHandler(this, &registWindow::labelViewDate_Click);
			// 
			// labelTitle
			// 
			this->labelTitle->AutoSize = true;
			this->labelTitle->Location = System::Drawing::Point(80, 180);
			this->labelTitle->Name = L"labelTitle";
			this->labelTitle->Size = System::Drawing::Size(130, 23);
			this->labelTitle->TabIndex = 17;
			this->labelTitle->Text = L"�^�C�g���F";
			// 
			// textBoxTitle
			// 
			this->textBoxTitle->Location = System::Drawing::Point(230, 177);
			this->textBoxTitle->MaxLength = 20;
			this->textBoxTitle->Name = L"textBoxTitle";
			this->textBoxTitle->Size = System::Drawing::Size(400, 30);
			this->textBoxTitle->TabIndex = 18;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"�l�r �S�V�b�N", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label7->ForeColor = System::Drawing::Color::Tomato;
			this->label7->Location = System::Drawing::Point(96, 203);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(103, 17);
			this->label7->TabIndex = 19;
			this->label7->Text = L"�����͕K�{";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"�l�r �S�V�b�N", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label8->ForeColor = System::Drawing::Color::Tomato;
			this->label8->Location = System::Drawing::Point(96, 263);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(103, 17);
			this->label8->TabIndex = 20;
			this->label8->Text = L"�����͕K�{";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"�l�r �S�V�b�N", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label9->ForeColor = System::Drawing::Color::Tomato;
			this->label9->Location = System::Drawing::Point(96, 323);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(103, 17);
			this->label9->TabIndex = 21;
			this->label9->Text = L"�����͕K�{";
			// 
			// buttonReturn
			// 
			this->buttonReturn->Location = System::Drawing::Point(539, 480);
			this->buttonReturn->Name = L"buttonReturn";
			this->buttonReturn->Size = System::Drawing::Size(90, 38);
			this->buttonReturn->TabIndex = 22;
			this->buttonReturn->Text = L"�߂�";
			this->buttonReturn->UseVisualStyleBackColor = true;
			this->buttonReturn->Click += gcnew System::EventHandler(this, &registWindow::buttonReturn_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"�l�r �S�V�b�N", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label10->ForeColor = System::Drawing::Color::Tomato;
			this->label10->Location = System::Drawing::Point(450, 210);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(180, 17);
			this->label10->TabIndex = 23;
			this->label10->Text = L"��20�����܂œ��͉�";
			// 
			// registWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 23);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LemonChiffon;
			this->ClientSize = System::Drawing::Size(732, 553);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->buttonReturn);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBoxTitle);
			this->Controls->Add(this->labelTitle);
			this->Controls->Add(this->labelViewDate);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->buttonDelete);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->buttonFinish);
			this->Controls->Add(this->textBoxPlan);
			this->Controls->Add(this->buttonMinuteFinish);
			this->Controls->Add(this->buttonTimeFinish);
			this->Controls->Add(this->buttonMinuteStart);
			this->Controls->Add(this->buttonTimeStart);
			this->Controls->Add(this->labelPlan);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->labelTimeStart);
			this->Controls->Add(this->labelRegist);
			this->Font = (gcnew System::Drawing::Font(L"�l�r �S�V�b�N", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"registWindow";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"���q����������";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &registWindow::registWindow_FormClosing);
			this->Load += gcnew System::EventHandler(this, &registWindow::registWindow_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void registWindow_Load(System::Object^ sender, System::EventArgs^ e)
	{
		labelViewDate->Text = DateFromRegist.ToLongDateString();	//labelViewDate�ɓ��t�̏�����
	}
	//
	//�~���N���b�N�����ۂ̌x�����
private: System::Void registWindow_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e)
{
	if (System::Windows::Forms::DialogResult::Cancel ==MessageBox::Show("���͒��̓��e�͕ۑ�����Ă��܂���B\n���̓o�^���I�����܂����H","�m�F",MessageBoxButtons::OKCancel, MessageBoxIcon::Question)) 
	{
		e->Cancel = true;
	}
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
}
	//
	//�����{�^���������ꂽ�ꍇ�̏���
private: System::Void buttonFinish_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ err;	//�G���[�����i�[����ϐ�
	if (this->textBoxTitle->Text == "")
	{
		err = err + "�E�^�C�g�������͂���Ă��܂���B\n";
	}
	if (this->buttonTimeStart->SelectedIndex == -1 || this->buttonMinuteStart->SelectedIndex == -1)
	{
		err = err + "�E�J�n���Ԃ��I������Ă��܂���\n";
	}
	if (this->buttonTimeFinish->SelectedIndex == -1 || this->buttonMinuteFinish->SelectedIndex == -1)
	{
		err = err + "�E�I�����Ԃ��I������Ă��܂���B\n";
	}
	if (this->buttonTimeStart->SelectedIndex == -1 || this->buttonMinuteStart->SelectedIndex == -1 || this->buttonTimeFinish->SelectedIndex == -1 || this->buttonMinuteFinish->SelectedIndex == -1 || this->textBoxTitle->Text == "")
	{
		MessageBox::Show(err);
	}
	else    //��������񂪓��͂��ꂽ�ꍇ�̏���
	{
		//System::String�^XXX��textBox1�̒��g����
		// ��XXX��std::string�^�ɕϊ�����YYY�ɑ��
		//labelViewDate�̃f�[�^���擾�E�ϊ�
		String^ Date = gcnew String(labelViewDate->Text);			//�ϐ�Date�ɓ��t�̏�����
		string date = msclr::interop::marshal_as<string>(Date);		//�ϐ�date�ɂ͓��t���̓�����String�^��Date����
		//textBoxTitle�̃f�[�^���擾�E�ϊ�
		String^ Title = gcnew String(textBoxTitle->Text);				//�ϐ�Title�ɂ͗\����e����
		string title = msclr::interop::marshal_as<string>(Title);		//�ϐ�title�ɂ͗\����e�̓�����String�^��Title����
		//textBoxPlan�̃f�[�^���擾�E�ϊ�
		String^ Plan = gcnew String(textBoxPlan->Text);				//�ϐ�Plan�ɂ͗\����e����
		string plan = msclr::interop::marshal_as<string>(Plan);		//�ϐ�plan�ɂ͗\����e�̓�����String�^��Plan����
		//buttonTimeStart�̃f�[�^���擾�E�ϊ�
		String^ TimeStart = gcnew String(buttonTimeStart->Text);			//�ϐ�TimeStart�ɂ͊J�n���ԁi���j����
		string timestart = msclr::interop::marshal_as<string>(TimeStart);	//�ϐ�timestart�ɂ͊J�n���ԁi���j�̓�����String�^��TimeStart����
		//buttonMinuteStart�̃f�[�^���擾�E�ϊ�
		String^ MinuteStart = gcnew String(buttonMinuteStart->Text);			//�ϐ�MinuteStart�ɂ͊J�n���ԁi���j����
		string minutestart = msclr::interop::marshal_as<string>(MinuteStart);	//�ϐ�minutestart�ɂ͊J�n���ԁi���j�̓�����String�^��MinuteStart����
		//buttonTimeFinish�̃f�[�^���擾�E�ϊ�
		String^ TimeFinish = gcnew String(buttonTimeFinish->Text);				//�ϐ�TimeFinish�ɂ͏I�����ԁi���j����
		string timefinish = msclr::interop::marshal_as<string>(TimeFinish);		//�ϐ�timefinish�ɂ͏I�����ԁi���j�̓�����String�^��TimeFinish����
		//buttonMinuteFinish�̃f�[�^���擾�E�ϊ�
		String^ MinuteFinish = gcnew String(buttonMinuteFinish->Text);				//�ϐ�MinuteFinish�ɂ͏I�����ԁi���j����
		string minutefinish = msclr::interop::marshal_as<string>(MinuteFinish);		//�ϐ�Minutefinish�ɂ͏I�����ԁi���j�̓�����String�^��MinuteFinish����
		//�t�@�C�����J���čŌ�̍s�֓��t�{�����J���}��؂�œ��́�����܂�
		ofstream writing_file;
		string filename = "TeaCupLab.txt";		//�ϐ�filename�Ƀe�L�X�g�t�@�C������
		writing_file.open(filename, ios::app);
		string writing_text = date + ",\n" + title + "," + timestart + "," + minutestart + "," + timefinish + "," + minutefinish + "," + plan + ",";
		writing_file << writing_text << endl;
		writing_file.close();
		this->textBoxTitle->Text = "";					//�R���{�{�b�N�X�A�e�L�X�g�{�b�N�X�̒��g��������
		this->buttonTimeStart->SelectedIndex = -1;			
		this->buttonMinuteStart->SelectedIndex = -1;
		this->buttonTimeFinish->SelectedIndex = -1;
		this->buttonMinuteFinish->SelectedIndex = -1;
		this->textBoxPlan->Text = "";
		MessageBox::Show("���͏�񂪐���ɓo�^����܂����B", "", MessageBoxButtons::OK);
	}
}
	//
	//�폜�{�^���������č폜��ʂɑJ�ڂ��鏈��
private: System::Void buttonDelete_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Hide();
	//deleteWindow�̃C���X�^���X��
	deleteWindow^ Del = gcnew deleteWindow();
	Del->DateFromDelete = this->DateFromRegist;
	Del->ShowDialog();

	this->Show();
}
private: System::Void labelViewDate_Click(System::Object^ sender, System::EventArgs^ e) 
{
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) 
{
}
private: System::Void labelPlan_Click(System::Object^ sender, System::EventArgs^ e)
{
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e)
{
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e)
{
}
private: System::Void labelTimeStart_Click(System::Object^ sender, System::EventArgs^ e)
{
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e)
{
}
private: System::Void buttonMinuteFinish_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
}
private: System::Void buttonMinuteStart_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e)
{
}
private: System::Void buttonTimeFinish_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
}
private: System::Void textBoxPlan_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
}
//�߂�{�^���������ď��o�^��ʂ���鏈��
private: System::Void buttonReturn_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Close();
}
};
}
