#pragma once
#include <msclr/marshal_cppstd.h>	//System::String����std::string�ŕK�v
#include <iostream>
#include <fstream>
#include <string>
#include "deleteWindow.h"

namespace TeaCupLabVer2 {

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
			this->SuspendLayout();
			// 
			// labelRegist
			// 
			this->labelRegist->AutoSize = true;
			this->labelRegist->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 15));
			this->labelRegist->Location = System::Drawing::Point(200, 18);
			this->labelRegist->Name = L"labelRegist";
			this->labelRegist->Size = System::Drawing::Size(112, 25);
			this->labelRegist->TabIndex = 0;
			this->labelRegist->Text = L"���o�^";
			// 
			// labelTimeStart
			// 
			this->labelTimeStart->AutoSize = true;
			this->labelTimeStart->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 10));
			this->labelTimeStart->Location = System::Drawing::Point(47, 73);
			this->labelTimeStart->Name = L"labelTimeStart";
			this->labelTimeStart->Size = System::Drawing::Size(94, 17);
			this->labelTimeStart->TabIndex = 1;
			this->labelTimeStart->Text = L"�E�J�n���ԁF";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 10));
			this->label2->Location = System::Drawing::Point(47, 113);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(94, 17);
			this->label2->TabIndex = 2;
			this->label2->Text = L"�E�I�����ԁF";
			// 
			// labelPlan
			// 
			this->labelPlan->AutoSize = true;
			this->labelPlan->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 10));
			this->labelPlan->Location = System::Drawing::Point(47, 153);
			this->labelPlan->Name = L"labelPlan";
			this->labelPlan->Size = System::Drawing::Size(94, 17);
			this->labelPlan->TabIndex = 3;
			this->labelPlan->Text = L"�E�\����e�F";
			// 
			// buttonTimeStart
			// 
			this->buttonTimeStart->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->buttonTimeStart->FormattingEnabled = true;
			this->buttonTimeStart->Items->AddRange(gcnew cli::array< System::Object^  >(25) {
				L"0", L"1", L"2", L"3", L"4", L"5", L"6",
					L"7", L"8", L"9", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24"
			});
			this->buttonTimeStart->Location = System::Drawing::Point(171, 63);
			this->buttonTimeStart->Name = L"buttonTimeStart";
			this->buttonTimeStart->Size = System::Drawing::Size(121, 23);
			this->buttonTimeStart->TabIndex = 4;
			this->buttonTimeStart->SelectedIndexChanged += gcnew System::EventHandler(this, &registWindow::comboBox1_SelectedIndexChanged);
			// 
			// buttonMinuteStart
			// 
			this->buttonMinuteStart->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->buttonMinuteStart->FormattingEnabled = true;
			this->buttonMinuteStart->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"0", L"5", L"10", L"15", L"20", L"25",
					L"30", L"35", L"40", L"45", L"50", L"55"
			});
			this->buttonMinuteStart->Location = System::Drawing::Point(347, 63);
			this->buttonMinuteStart->Name = L"buttonMinuteStart";
			this->buttonMinuteStart->Size = System::Drawing::Size(121, 23);
			this->buttonMinuteStart->TabIndex = 5;
			// 
			// buttonTimeFinish
			// 
			this->buttonTimeFinish->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->buttonTimeFinish->FormattingEnabled = true;
			this->buttonTimeFinish->Items->AddRange(gcnew cli::array< System::Object^  >(24) {
				L"0", L"1", L"2", L"3", L"4", L"5", L"6",
					L"7", L"8", L"9", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23"
			});
			this->buttonTimeFinish->Location = System::Drawing::Point(171, 109);
			this->buttonTimeFinish->Name = L"buttonTimeFinish";
			this->buttonTimeFinish->Size = System::Drawing::Size(121, 23);
			this->buttonTimeFinish->TabIndex = 6;
			// 
			// buttonMinuteFinish
			// 
			this->buttonMinuteFinish->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->buttonMinuteFinish->FormattingEnabled = true;
			this->buttonMinuteFinish->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"0", L"5", L"15", L"20", L"25", L"30",
					L"35", L"40", L"45", L"50", L"55"
			});
			this->buttonMinuteFinish->Location = System::Drawing::Point(347, 109);
			this->buttonMinuteFinish->Name = L"buttonMinuteFinish";
			this->buttonMinuteFinish->Size = System::Drawing::Size(121, 23);
			this->buttonMinuteFinish->TabIndex = 7;
			// 
			// textBoxPlan
			// 
			this->textBoxPlan->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 10));
			this->textBoxPlan->Location = System::Drawing::Point(171, 148);
			this->textBoxPlan->MaxLength = 50;
			this->textBoxPlan->Multiline = true;
			this->textBoxPlan->Name = L"textBoxPlan";
			this->textBoxPlan->Size = System::Drawing::Size(297, 55);
			this->textBoxPlan->TabIndex = 8;
			// 
			// buttonFinish
			// 
			this->buttonFinish->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 10));
			this->buttonFinish->Location = System::Drawing::Point(347, 247);
			this->buttonFinish->Name = L"buttonFinish";
			this->buttonFinish->Size = System::Drawing::Size(75, 34);
			this->buttonFinish->TabIndex = 9;
			this->buttonFinish->Text = L"����";
			this->buttonFinish->UseVisualStyleBackColor = true;
			this->buttonFinish->Click += gcnew System::EventHandler(this, &registWindow::buttonFinish_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 10));
			this->label1->Location = System::Drawing::Point(298, 64);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(25, 17);
			this->label1->TabIndex = 10;
			this->label1->Text = L"��";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 10));
			this->label3->Location = System::Drawing::Point(474, 63);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(25, 17);
			this->label3->TabIndex = 11;
			this->label3->Text = L"��";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 10));
			this->label4->Location = System::Drawing::Point(298, 110);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(25, 17);
			this->label4->TabIndex = 12;
			this->label4->Text = L"��";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 10));
			this->label5->Location = System::Drawing::Point(474, 110);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(25, 17);
			this->label5->TabIndex = 13;
			this->label5->Text = L"��";
			// 
			// buttonDelete
			// 
			this->buttonDelete->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 10));
			this->buttonDelete->Location = System::Drawing::Point(96, 247);
			this->buttonDelete->Name = L"buttonDelete";
			this->buttonDelete->Size = System::Drawing::Size(75, 34);
			this->buttonDelete->TabIndex = 14;
			this->buttonDelete->Text = L"�폜";
			this->buttonDelete->UseVisualStyleBackColor = true;
			this->buttonDelete->Click += gcnew System::EventHandler(this, &registWindow::buttonDelete_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 10));
			this->label6->Location = System::Drawing::Point(215, 206);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(253, 17);
			this->label6->TabIndex = 15;
			this->label6->Text = L"���e�L�X�g��50���܂œ��͂ł��܂��B";
			// 
			// labelViewDate
			// 
			this->labelViewDate->AutoSize = true;
			this->labelViewDate->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 10));
			this->labelViewDate->Location = System::Drawing::Point(47, 18);
			this->labelViewDate->Name = L"labelViewDate";
			this->labelViewDate->Size = System::Drawing::Size(72, 17);
			this->labelViewDate->TabIndex = 16;
			this->labelViewDate->Text = L"datelabel";
			this->labelViewDate->Click += gcnew System::EventHandler(this, &registWindow::labelViewDate_Click);
			// 
			// registWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(507, 292);
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
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"registWindow";
			this->Text = L"registWindow";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &registWindow::registWindow_FormClosing);
			this->Load += gcnew System::EventHandler(this, &registWindow::registWindow_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void registWindow_Load(System::Object^ sender, System::EventArgs^ e) {
		labelViewDate->Text = DateFromRegist.ToLongDateString();
	}
	//
	//�~���N���b�N�����ۂ̌x�����
private: System::Void registWindow_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	if (System::Windows::Forms::DialogResult::Cancel ==MessageBox::Show("���͒��̓��e�͕ۑ�����Ă��܂���B\n���̓o�^���I�����܂����H","�m�F",MessageBoxButtons::OKCancel, MessageBoxIcon::Question)) {
		e->Cancel = true;
	}
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
	//
	//�����{�^���������ꂽ�ꍇ�̏���
private: System::Void buttonFinish_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ err;	//�G���[�����i�[����ϐ�
	if (this->buttonTimeStart->SelectedIndex == -1 || this->buttonMinuteStart->SelectedIndex == -1)
	{
		err = err + "�E�J�n���Ԃ��I������Ă��܂���\n";
	}
	if (this->buttonTimeFinish->SelectedIndex == -1 || this->buttonMinuteFinish->SelectedIndex == -1)
	{
		err = err + "�E�I�����Ԃ��I������Ă��܂���B\n";
	}
	if (this->textBoxPlan->Text == "")
	{
		err = err + "�E�\����e�����͂���Ă��܂���B\n";
	}
	if (this->buttonTimeStart->SelectedIndex == -1 || this->buttonMinuteStart->SelectedIndex == -1 || this->buttonTimeFinish->SelectedIndex == -1 || this->buttonMinuteFinish->SelectedIndex == -1 || this->textBoxPlan->Text == "")
	{
		MessageBox::Show(err);
	}
	else
	{
		//labelViewDate�̃f�[�^���擾�E�ϊ�
		String^ Date = gcnew String(labelViewDate->Text);			//�ϐ�Date�ɓ��t�̏�����
		string date = msclr::interop::marshal_as<string>(Date);		//�ϐ�date�ɂ͓��t���̓�����String�^��Date����
		//textBoxPlan�̃f�[�^���擾�E�ϊ�
		String^ Plan = gcnew String(textBoxPlan->Text);				//System::String�^XXX��textBox1�̒��g�����A�ϐ�Plan�ɂ͗\����e����
		string plan = msclr::interop::marshal_as<string>(Plan);		//��XXX��std::string�^�ɕϊ�����YYY�ɑ���A�ϐ�plan�ɂ͗\����e�̓�����String�^��Plan����
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
		string filename = "TeaCupLab.txt";
		writing_file.open(filename, ios::app);
		string writing_text = date + "\n," + timestart + "," + minutestart + "," + timefinish + "," + minutefinish + "," + plan + ",";
		writing_file << writing_text << endl;
		writing_file.close();
		this->buttonTimeStart->SelectedIndex = -1;
		this->buttonMinuteStart->SelectedIndex = -1;
		this->buttonTimeFinish->SelectedIndex = -1;
		this->buttonMinuteFinish->SelectedIndex = -1;
		this->textBoxPlan->Text = "";
	}
}
	//
	//�폜�{�^���������ēo�^�����폜���鏈��
private: System::Void buttonDelete_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();

	deleteWindow^ Del = gcnew deleteWindow();
	Del->DateFromDelete = this->DateFromRegist;
	Del->ShowDialog();

	this->Show();
}
private: System::Void labelViewDate_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
