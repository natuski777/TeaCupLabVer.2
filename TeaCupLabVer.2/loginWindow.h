#pragma once
#include "homeWindow.h"

namespace TeaCupLabVer2 
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// loginWindow �̊T�v
	/// </summary>
	public ref class loginWindow : public System::Windows::Forms::Form
	{
	public:
		loginWindow(void)
		{
			InitializeComponent();
			//
			//TODO: �����ɃR���X�g���N�^�[ �R�[�h��ǉ����܂�
			//
		}

		//���͂��ꂽ�e�L�X�g�����p�p�������ǂ����𔻒f
		static int Alnumjudge(String^ LoginText, int len)
		{
			int i = 0;
			for (i; i < len; i++)
			{
				if (!isalnum(LoginText[i]))
				{
					break;
				}

			}
			if (i == len)
				return 1;
			else
			{
				return 0;
			}
		};

	protected:
		/// <summary>
		/// �g�p���̃��\�[�X�����ׂăN���[���A�b�v���܂��B
		/// </summary>
		~loginWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ labelUserName;
	protected:

	private: System::Windows::Forms::Label^ labelPassword;
	private: System::Windows::Forms::TextBox^ textBoxUserName;
	protected:

	protected:


	private: System::Windows::Forms::TextBox^ textBoxPassword;


	private: System::Windows::Forms::Button^ buttonLogin;
	private: System::Windows::Forms::Button^ buttonCancel;
	private: System::Windows::Forms::Label^ labelRogin;
	private: System::Windows::Forms::Label^ labelCaution;





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
			this->labelUserName = (gcnew System::Windows::Forms::Label());
			this->labelPassword = (gcnew System::Windows::Forms::Label());
			this->textBoxUserName = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPassword = (gcnew System::Windows::Forms::TextBox());
			this->buttonLogin = (gcnew System::Windows::Forms::Button());
			this->buttonCancel = (gcnew System::Windows::Forms::Button());
			this->labelRogin = (gcnew System::Windows::Forms::Label());
			this->labelCaution = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// labelUserName
			// 
			this->labelUserName->AutoSize = true;
			this->labelUserName->Font = (gcnew System::Drawing::Font(L"�l�r �o�S�V�b�N", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->labelUserName->Location = System::Drawing::Point(15, 100);
			this->labelUserName->Name = L"labelUserName";
			this->labelUserName->Size = System::Drawing::Size(122, 23);
			this->labelUserName->TabIndex = 0;
			this->labelUserName->Text = L"���[�U�[��";
			// 
			// labelPassword
			// 
			this->labelPassword->AutoSize = true;
			this->labelPassword->Font = (gcnew System::Drawing::Font(L"�l�r �o�S�V�b�N", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->labelPassword->Location = System::Drawing::Point(23, 171);
			this->labelPassword->Name = L"labelPassword";
			this->labelPassword->Size = System::Drawing::Size(114, 23);
			this->labelPassword->TabIndex = 1;
			this->labelPassword->Text = L"�p�X���[�h";
			// 
			// textBoxUserName
			// 
			this->textBoxUserName->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->textBoxUserName->ImeMode = System::Windows::Forms::ImeMode::Disable;
			this->textBoxUserName->Location = System::Drawing::Point(143, 91);
			this->textBoxUserName->Name = L"textBoxUserName";
			this->textBoxUserName->Size = System::Drawing::Size(340, 37);
			this->textBoxUserName->TabIndex = 2;
			// 
			// textBoxPassword
			// 
			this->textBoxPassword->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->textBoxPassword->ImeMode = System::Windows::Forms::ImeMode::Disable;
			this->textBoxPassword->Location = System::Drawing::Point(143, 171);
			this->textBoxPassword->Name = L"textBoxPassword";
			this->textBoxPassword->PasswordChar = '*';
			this->textBoxPassword->Size = System::Drawing::Size(340, 37);
			this->textBoxPassword->TabIndex = 3;
			// 
			// buttonLogin
			// 
			this->buttonLogin->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->buttonLogin->Location = System::Drawing::Point(67, 294);
			this->buttonLogin->Name = L"buttonLogin";
			this->buttonLogin->Size = System::Drawing::Size(170, 40);
			this->buttonLogin->TabIndex = 4;
			this->buttonLogin->Text = L"���O�C��";
			this->buttonLogin->UseVisualStyleBackColor = true;
			this->buttonLogin->Click += gcnew System::EventHandler(this, &loginWindow::buttonLogin_Click);
			// 
			// buttonCancel
			// 
			this->buttonCancel->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->buttonCancel->Location = System::Drawing::Point(313, 294);
			this->buttonCancel->Name = L"buttonCancel";
			this->buttonCancel->Size = System::Drawing::Size(170, 40);
			this->buttonCancel->TabIndex = 5;
			this->buttonCancel->Text = L"�L�����Z��";
			this->buttonCancel->UseVisualStyleBackColor = true;
			this->buttonCancel->Click += gcnew System::EventHandler(this, &loginWindow::buttonCancel_Click);
			// 
			// labelRogin
			// 
			this->labelRogin->AutoSize = true;
			this->labelRogin->Font = (gcnew System::Drawing::Font(L"�l�r �o�S�V�b�N", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->labelRogin->Location = System::Drawing::Point(184, 20);
			this->labelRogin->Name = L"labelRogin";
			this->labelRogin->Size = System::Drawing::Size(227, 37);
			this->labelRogin->TabIndex = 6;
			this->labelRogin->Text = L"���O�C�����";
			// 
			// labelCaution
			// 
			this->labelCaution->AutoSize = true;
			this->labelCaution->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->labelCaution->ForeColor = System::Drawing::Color::Red;
			this->labelCaution->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->labelCaution->Location = System::Drawing::Point(188, 239);
			this->labelCaution->Name = L"labelCaution";
			this->labelCaution->Size = System::Drawing::Size(243, 18);
			this->labelCaution->TabIndex = 7;
			this->labelCaution->Text = L"�����p�p��������͂��Ă�������";
			// 
			// loginWindow
			// 
			this->AcceptButton = this->buttonLogin;
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(606, 348);
			this->Controls->Add(this->labelCaution);
			this->Controls->Add(this->labelRogin);
			this->Controls->Add(this->buttonCancel);
			this->Controls->Add(this->buttonLogin);
			this->Controls->Add(this->textBoxPassword);
			this->Controls->Add(this->textBoxUserName);
			this->Controls->Add(this->labelPassword);
			this->Controls->Add(this->labelUserName);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"loginWindow";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &loginWindow::viewWindow_FormClosing);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonLogin_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//�����͎��ɕ\������郁�b�Z�[�W�e�L�X�g��p��
		String^ NotEntered = "";

		//���[�U�[���܂��̓p�X���[�h�������͏�Ԃ̏ꍇ
		if (this->textBoxUserName->Text == "")
		{
			NotEntered += "���[�U�[���͕K�{���ڂł��B\n";
		}
		if (this->textBoxPassword->Text == "")
		{
			NotEntered += "�p�X���[�h�͕K�{���ڂł��B\n";
		}

		if (NotEntered != "")
		{
			MessageBox::Show(NotEntered);
		}
		else
		{	//���͓��e�ƕ��������擾
			String^ Username = this->textBoxUserName->Text;
			String^ Password = this->textBoxPassword->Text;
			int lenUsername = Username->Length;
			int lenPassword = Password->Length;

			//���̓e�L�X�g���ɋL�����܂܂�Ă��Ȃ�������
			//�܂܂�Ă���ƃ��b�Z�[�W��\��
			if (!(Alnumjudge(Username, lenUsername) && Alnumjudge(Password, lenPassword)))
			{
				MessageBox::Show("�L���A�X�y�[�X�͓��͂ł��܂���");

			}
			//���[�U�[ID,�p�X���[�h�����؂�,���������ꍇ�J�����_�[��ʂɑJ��
			else if (this->textBoxUserName->Text == "User1" && this->textBoxPassword->Text == "Pass1")
			{
				this->Hide();

				homeWindow^ Hom = gcnew homeWindow();
				Hom->ShowDialog();

				this->Show();
			}
			//���[�U�[���A�p�X���[�h�̌��؎��s�����b�Z�[�W��\��
			else
			{
				MessageBox::Show("���[�U�[���܂��̓p�X���[�h���Ⴂ�܂�");
			}

		}
		
	}

		//�L�����Z���{�^�����N���b�N���A�e�L�X�g�{�b�N�X���̓��͓��e���N���A
	private: System::Void buttonCancel_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->textBoxUserName->Text = "";
		this->textBoxPassword->Text = "";
	}
		//�t�H�[�������ۂɃ��b�Z�[�W�{�b�N�X��\��
	private: System::Void viewWindow_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) 
	{
		if (System::Windows::Forms::DialogResult::Cancel == MessageBox::Show("�A�v�����I�����܂����H", "", MessageBoxButtons::OKCancel))
		{
			e->Cancel = true;
		}
	}
};
}
