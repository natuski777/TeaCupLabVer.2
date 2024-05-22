#pragma once

namespace TeaCupLabVer2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// viewWindow �̊T�v
	/// </summary>
	public ref class viewWindow : public System::Windows::Forms::Form
	{
	public:
		viewWindow(void)
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
		~viewWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ labelUserId;
	private: System::Windows::Forms::Label^ labelPassword;
	protected:

	protected:

	private: System::Windows::Forms::TextBox^ textBoxUserId;
	private: System::Windows::Forms::TextBox^ textBoxPassword;


	private: System::Windows::Forms::Button^ buttonLogin;
	private: System::Windows::Forms::Button^ buttonCancel;
	private: System::Windows::Forms::Label^ labelRogin;




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
			this->labelUserId = (gcnew System::Windows::Forms::Label());
			this->labelPassword = (gcnew System::Windows::Forms::Label());
			this->textBoxUserId = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPassword = (gcnew System::Windows::Forms::TextBox());
			this->buttonLogin = (gcnew System::Windows::Forms::Button());
			this->buttonCancel = (gcnew System::Windows::Forms::Button());
			this->labelRogin = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// labelUserId
			// 
			this->labelUserId->AutoSize = true;
			this->labelUserId->Font = (gcnew System::Drawing::Font(L"�l�r �o�S�V�b�N", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->labelUserId->Location = System::Drawing::Point(27, 97);
			this->labelUserId->Name = L"labelUserId";
			this->labelUserId->Size = System::Drawing::Size(110, 20);
			this->labelUserId->TabIndex = 0;
			this->labelUserId->Text = L"���[�U�[ID";
			// 
			// labelPassword
			// 
			this->labelPassword->AutoSize = true;
			this->labelPassword->Font = (gcnew System::Drawing::Font(L"�l�r �o�S�V�b�N", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->labelPassword->Location = System::Drawing::Point(28, 177);
			this->labelPassword->Name = L"labelPassword";
			this->labelPassword->Size = System::Drawing::Size(104, 20);
			this->labelPassword->TabIndex = 1;
			this->labelPassword->Text = L"�p�X���[�h";
			// 
			// textBoxUserId
			// 
			this->textBoxUserId->Location = System::Drawing::Point(143, 95);
			this->textBoxUserId->Name = L"textBoxUserId";
			this->textBoxUserId->Size = System::Drawing::Size(340, 22);
			this->textBoxUserId->TabIndex = 2;
			// 
			// textBoxPassword
			// 
			this->textBoxPassword->Location = System::Drawing::Point(143, 174);
			this->textBoxPassword->Name = L"textBoxPassword";
			this->textBoxPassword->Size = System::Drawing::Size(340, 22);
			this->textBoxPassword->TabIndex = 3;
			// 
			// buttonLogin
			// 
			this->buttonLogin->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->buttonLogin->Location = System::Drawing::Point(67, 264);
			this->buttonLogin->Name = L"buttonLogin";
			this->buttonLogin->Size = System::Drawing::Size(170, 42);
			this->buttonLogin->TabIndex = 4;
			this->buttonLogin->Text = L"���O�C��";
			this->buttonLogin->UseVisualStyleBackColor = true;
			this->buttonLogin->Click += gcnew System::EventHandler(this, &viewWindow::buttonLogin_Click);
			// 
			// buttonCancel
			// 
			this->buttonCancel->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->buttonCancel->Location = System::Drawing::Point(313, 265);
			this->buttonCancel->Name = L"buttonCancel";
			this->buttonCancel->Size = System::Drawing::Size(170, 42);
			this->buttonCancel->TabIndex = 5;
			this->buttonCancel->Text = L"�L�����Z��";
			this->buttonCancel->UseVisualStyleBackColor = true;
			this->buttonCancel->Click += gcnew System::EventHandler(this, &viewWindow::buttonCancel_Click);
			// 
			// labelRogin
			// 
			this->labelRogin->AutoSize = true;
			this->labelRogin->Font = (gcnew System::Drawing::Font(L"�l�r �o�S�V�b�N", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->labelRogin->Location = System::Drawing::Point(185, 31);
			this->labelRogin->Name = L"labelRogin";
			this->labelRogin->Size = System::Drawing::Size(207, 34);
			this->labelRogin->TabIndex = 6;
			this->labelRogin->Text = L"���O�C�����";
			// 
			// viewWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(581, 348);
			this->Controls->Add(this->labelRogin);
			this->Controls->Add(this->buttonCancel);
			this->Controls->Add(this->buttonLogin);
			this->Controls->Add(this->textBoxPassword);
			this->Controls->Add(this->textBoxUserId);
			this->Controls->Add(this->labelPassword);
			this->Controls->Add(this->labelUserId);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"viewWindow";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonLogin_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		 //���[�U�[ID,�p�X���[�h�����؂�,���������ꍇ�J�����_�[��ʂɑJ��
		if (this->textBoxUserId->Text == "User1" && this->textBoxPassword->Text == "Pass1")
		{

		}
	}

		//�e�L�X�g�{�b�N�X���̓��͓��e���N���A
	private: System::Void buttonCancel_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->textBoxUserId->Text = "";
		this->textBoxPassword->Text = "";
	}
};
}
