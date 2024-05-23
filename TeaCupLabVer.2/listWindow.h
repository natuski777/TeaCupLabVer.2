#pragma once
#include "registWindow.h"
#include "homeWindow.h"
#include  <msclr/marshal_cppstd.h>//System::String����std::string�ŕK�v


namespace TeaCupLabVer2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System;
	using namespace std;

	/// <summary>
	/// listWindow �̊T�v
	/// </summary>
	public ref class listWindow : public System::Windows::Forms::Form
	{
	public:
		listWindow(void)
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
		~listWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ buttonRegist;

	private: System::Windows::Forms::Button^ buttonReturn;

	private: System::Windows::Forms::Label^ label5;





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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->buttonRegist = (gcnew System::Windows::Forms::Button());
			this->buttonReturn = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label1->Location = System::Drawing::Point(144, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(180, 28);
			this->label1->TabIndex = 0;
			this->label1->Text = L"�o�^���ꗗ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(33, 107);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(67, 15);
			this->label2->TabIndex = 1;
			this->label2->Text = L"�J�n����";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(33, 167);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(67, 15);
			this->label3->TabIndex = 2;
			this->label3->Text = L"�I������";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(33, 229);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(67, 15);
			this->label4->TabIndex = 3;
			this->label4->Text = L"�\����e";
			// 
			// buttonRegist
			// 
			this->buttonRegist->Location = System::Drawing::Point(45, 279);
			this->buttonRegist->Name = L"buttonRegist";
			this->buttonRegist->Size = System::Drawing::Size(118, 39);
			this->buttonRegist->TabIndex = 4;
			this->buttonRegist->Text = L"���o�^��ʂ�";
			this->buttonRegist->UseVisualStyleBackColor = true;
			this->buttonRegist->Click += gcnew System::EventHandler(this, &listWindow::button1_Click);
			// 
			// buttonReturn
			// 
			this->buttonReturn->Location = System::Drawing::Point(247, 279);
			this->buttonReturn->Name = L"buttonReturn";
			this->buttonReturn->Size = System::Drawing::Size(120, 39);
			this->buttonReturn->TabIndex = 5;
			this->buttonReturn->Text = L"�J�����_�[��ʂ�";
			this->buttonReturn->UseVisualStyleBackColor = true;
			this->buttonReturn->Click += gcnew System::EventHandler(this, &listWindow::buttonReturn_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(33, 54);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(43, 15);
			this->label5->TabIndex = 6;
			this->label5->Text = L"label5";
			this->label5->Click += gcnew System::EventHandler(this, &listWindow::label5_Click);
			// 
			// listWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(449, 359);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->buttonReturn);
			this->Controls->Add(this->buttonRegist);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"listWindow";
			this->Text = L"listWindow";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &listWindow::listWindow_FormClosing);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void listWindow_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e)
	{
		//�t�H�[�������Ƃ��̏���
		if (System::Windows::Forms::DialogResult::Cancel ==
			MessageBox::Show("���e���ۑ�����Ă��܂���\n�{���ɏI�����܂���?", "�x��",
				MessageBoxButtons::OKCancel, MessageBoxIcon::Question))
		{
			e->Cancel= true;
		}
	}

		//���o�^��ʂ̃{�^�����N���b�N����Ə��o�^��ʂ֑J�ڂ��鏈��,���[�_���_�C�A���O�ŕ\��
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
{
		
		registWindow^ Reg = gcnew registWindow();
		Reg->ShowDialog();
}

		  //�J�����_�[��ʂ̃{�^�����N���b�N����ƃJ�����_�[��ʂ֑J�ڂ��鏈���@���[�_���_�C�A���O�ŕ\��
	private: System::Void buttonReturn_Click(System::Object^ sender, System::EventArgs^ e)
{
		homeWindow^ Hom = gcnew homeWindow();
		Hom->ShowDialog();

		//�z�[���{�^���N���b�N��Date�̒l�����Z�b�g���鏈��
		/*if (this->date->Checked == 0)
		{
			System::Diagnostics::Debug::WriteLine("");
		}*/

}
	   //�J�����_�[�̓��t(date)��label5�ɕ\�����鏈��
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e)
{
	/*String^ date = gcnew String(label5->Text);
	string label5= msclr::interop::marshal_as<string>(date);
	string date = gcnew string(label5->Text);
	String^ label5 = msclr::interop::marshal_as<String^>(date);*/

}
	   //���o�^��ʂ̗\����e��\���A�o�^���Ȃ���΁u�\��͂���܂���v�ƕ\������

};
}
