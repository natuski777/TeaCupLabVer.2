#pragma once

namespace TeaCupLabVer2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// deleteWindow �̊T�v
	/// </summary>
	public ref class deleteWindow : public System::Windows::Forms::Form
	{
	private:
		System::DateTime dateFromMyForm;
	public:
		property System::DateTime DateFromMyForm {
			System::DateTime get() {
				return dateFromMyForm;
			}
			void set(System::DateTime value) {
				dateFromMyForm = value;
			}
			}

	public:
		deleteWindow(void)
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
		~deleteWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ buttonDeleteCancel;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ labelViewDate;

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
			this->buttonDeleteCancel = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->labelViewDate = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 10));
			this->button1->Location = System::Drawing::Point(48, 191);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 34);
			this->button1->TabIndex = 0;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &deleteWindow::button1_Click);
			// 
			// buttonDeleteCancel
			// 
			this->buttonDeleteCancel->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 10));
			this->buttonDeleteCancel->Location = System::Drawing::Point(153, 191);
			this->buttonDeleteCancel->Name = L"buttonDeleteCancel";
			this->buttonDeleteCancel->Size = System::Drawing::Size(75, 34);
			this->buttonDeleteCancel->TabIndex = 1;
			this->buttonDeleteCancel->Text = L"Cancel";
			this->buttonDeleteCancel->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 10));
			this->label1->Location = System::Drawing::Point(35, 82);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(219, 34);
			this->label1->TabIndex = 2;
			this->label1->Text = L"�o�^�ς݂̏����폜���܂��B\r\n�{���ɍ폜���܂����H";
			// 
			// labelViewDate
			// 
			this->labelViewDate->AutoSize = true;
			this->labelViewDate->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 10));
			this->labelViewDate->Location = System::Drawing::Point(22, 19);
			this->labelViewDate->Name = L"labelViewDate";
			this->labelViewDate->Size = System::Drawing::Size(110, 17);
			this->labelViewDate->TabIndex = 3;
			this->labelViewDate->Text = L"labelViewDate";
			// 
			// deleteWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(282, 253);
			this->Controls->Add(this->labelViewDate);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->buttonDeleteCancel);
			this->Controls->Add(this->button1);
			this->Name = L"deleteWindow";
			this->Text = L"deleteWindow";
			this->Load += gcnew System::EventHandler(this, &deleteWindow::deleteWindow_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void deleteWindow_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		labelViewDate->Text = dateFromMyForm.ToLongDateString();
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	//labelViewDate�̃f�[�^���擾�E�ϊ�
	String^ DeleteDate = gcnew String(labelViewDate->Text);			//�ϐ�Date�ɓ��t�̏�����
	string deletedate = msclr::interop::marshal_as<string>(DeleteDate);		//�ϐ�date�ɂ͓��t���̓�����String�^��Date����
	//�t�@�C�����J���čŌ�̍s�֓��t�{�����J���}��؂�œ��́�����܂�
	ofstream writing_file;
	string filename = "TeaCupLab.txt";
	writing_file.open(filename, ios::app);
	string writing_text = deletedate + "," + "" + "," + "" + "," + "" + "," + "" + "," + "��񂪓o�^����Ă��܂���B" + ",";
	writing_file << writing_text << endl;
	writing_file.close();
}
};
}
