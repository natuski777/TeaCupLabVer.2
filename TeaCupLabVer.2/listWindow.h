#pragma once
#include "registWindow.h"
#include "homeWindow.h"

namespace TeaCupLabVer2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// listWindow の概要
	/// </summary>
	public ref class listWindow : public System::Windows::Forms::Form
	{
	public:
		listWindow(void)
		{
			InitializeComponent();
			//
			//TODO: ここにコンストラクター コードを追加します
			//
		}

	protected:
		/// <summary>
		/// 使用中のリソースをすべてクリーンアップします。
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
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox1;

	private:
		/// <summary>
		/// 必要なデザイナー変数です。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// デザイナー サポートに必要なメソッドです。このメソッドの内容を
		/// コード エディターで変更しないでください。
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
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
			this->label1->Text = L"登録情報一覧";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(33, 107);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(67, 15);
			this->label2->TabIndex = 1;
			this->label2->Text = L"開始時間";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(33, 167);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(67, 15);
			this->label3->TabIndex = 2;
			this->label3->Text = L"終了時間";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(33, 229);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(67, 15);
			this->label4->TabIndex = 3;
			this->label4->Text = L"予定内容";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(45, 279);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(118, 39);
			this->button1->TabIndex = 4;
			this->button1->Text = L"情報登録画面へ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &listWindow::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(247, 279);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(120, 39);
			this->button2->TabIndex = 5;
			this->button2->Text = L"カレンダー画面へ";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &listWindow::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(26, 51);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 6;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &listWindow::textBox1_TextChanged);
			// 
			// listWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(449, 359);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
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
		//フォームを閉じるときの処理
		if (System::Windows::Forms::DialogResult::Cancel ==
			MessageBox::Show("内容が保存されていません\n本当に終了しますか?", "警告",
				MessageBoxButtons::OKCancel, MessageBoxIcon::Question))
		{
			e->Cancel= true;
		}
	}

		//情報登録画面のボタンをクリックすると情報登録画面へ遷移する処理,モーダルダイアログで表示
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
{
		
		registWindow^ Reg = gcnew registWindow();
		Reg->ShowDialog();
}

		  //カレンダー画面のボタンをクリックするとカレンダー画面へ遷移する処理　モーダルダイアログで表示
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
{
		homeWindow^ Hom = gcnew homeWindow();
		Hom->ShowDialog();

}
	   
	//カレンダーの日付を表示する処理
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) 
{

}
};
}
