#pragma once

namespace TeaCupLabVer2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// homeWindow �̊T�v
	/// </summary>
	public ref class homeWindow : public System::Windows::Forms::Form
	{
	public:
		homeWindow(void)
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
		~homeWindow()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::MonthCalendar^ monthCalendar1;




	protected:

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(612, 442);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(569, 88);
			this->button1->TabIndex = 3;
			this->button1->Text = L"���O�A�E�g";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &homeWindow::button1_Click);
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->monthCalendar1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9999, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->monthCalendar1->Location = System::Drawing::Point(317, 124);
			this->monthCalendar1->MaxSelectionCount = 366;
			this->monthCalendar1->MinDate = System::DateTime(2024, 1, 1, 0, 0, 0, 0);
			this->monthCalendar1->MinimumSize = System::Drawing::Size(200, 200);
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->SelectionRange = (gcnew System::Windows::Forms::SelectionRange(System::DateTime(2024, 1, 1, 0, 0, 0, 0), System::DateTime(2024,
				12, 31, 0, 0, 0, 0)));
			this->monthCalendar1->TabIndex = 4;
			// 
			// homeWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1236, 553);
			this->Controls->Add(this->monthCalendar1);
			this->Controls->Add(this->button1);
			this->Name = L"homeWindow";
			this->Text = L"homeWindow";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &homeWindow::homeWindow_FormClosing);
			this->ResumeLayout(false);

		}
#pragma endregion

	
	private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void monthCalendar1_DateChanged(System::Object^ sender, System::Windows::Forms::DateRangeEventArgs^ e) {
	}

	 //���O�A�E�g�m�F���b�Z�[�W�{�b�N�X
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		MessageBox::Show("���O�A�E�g���܂���?", "�m�F", MessageBoxButtons::OKCancel);
	}

	//�I���m�F���b�Z�[�W�{�b�N�X
	private: System::Void homeWindow_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e)
	{
		if (System::Windows::Forms::DialogResult::Cancel ==
			MessageBox::Show("�A�v�����I�����܂���?", "�m�F",
				MessageBoxButtons::OKCancel)) {
			e->Cancel = true;
		}
	}
	private: System::Void monthCalendar1_DateChanged_1(System::Object^ sender, System::Windows::Forms::DateRangeEventArgs^ e) {
	}
};
}
