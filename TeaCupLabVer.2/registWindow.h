#pragma once

namespace TeaCupLabVer2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// registWindow �̊T�v
	/// </summary>
	public ref class registWindow : public System::Windows::Forms::Form
	{
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
	private: System::Windows::Forms::Label^ label3;

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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// labelRegist
			// 
			this->labelRegist->AutoSize = true;
			this->labelRegist->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 15));
			this->labelRegist->Location = System::Drawing::Point(180, 19);
			this->labelRegist->Name = L"labelRegist";
			this->labelRegist->Size = System::Drawing::Size(112, 25);
			this->labelRegist->TabIndex = 0;
			this->labelRegist->Text = L"���o�^";
			// 
			// labelTimeStart
			// 
			this->labelTimeStart->AutoSize = true;
			this->labelTimeStart->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 10));
			this->labelTimeStart->Location = System::Drawing::Point(55, 87);
			this->labelTimeStart->Name = L"labelTimeStart";
			this->labelTimeStart->Size = System::Drawing::Size(94, 17);
			this->labelTimeStart->TabIndex = 1;
			this->labelTimeStart->Text = L"�E�J�n���ԁF";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 10));
			this->label2->Location = System::Drawing::Point(52, 124);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(94, 17);
			this->label2->TabIndex = 2;
			this->label2->Text = L"�E�I�����ԁF";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(47, 162);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(43, 15);
			this->label3->TabIndex = 3;
			this->label3->Text = L"label3";
			// 
			// registWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(507, 253);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->labelTimeStart);
			this->Controls->Add(this->labelRegist);
			this->Name = L"registWindow";
			this->Text = L"registWindow";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
