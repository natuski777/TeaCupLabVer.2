#pragma once
#include "registWindow.h"
//#include "homeWindow.h"
#include  <msclr/marshal_cppstd.h>//System::String←→std::stringで必要
#include <sstream>
#include <iostream>
#include <fstream>
#include <string>

namespace TeaCupLabVer2 
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System;
	using namespace std;
	using namespace System::IO;

	/// <summary>
	/// listWindow の概要
	/// </summary>
	public ref class listWindow : public System::Windows::Forms::Form
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
	private: System::Windows::Forms::Button^ buttonRegist;
	private: System::Windows::Forms::Label^ labelViewDate;







	private: System::Windows::Forms::Button^ buttonReturn;







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
			this->buttonRegist = (gcnew System::Windows::Forms::Button());
			this->labelViewDate = (gcnew System::Windows::Forms::Label());
			this->buttonReturn = (gcnew System::Windows::Forms::Button());
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
			// buttonRegist
			// 
			this->buttonRegist->Location = System::Drawing::Point(45, 279);
			this->buttonRegist->Name = L"buttonRegist";
			this->buttonRegist->Size = System::Drawing::Size(118, 39);
			this->buttonRegist->TabIndex = 4;
			this->buttonRegist->Text = L"情報登録画面へ";
			this->buttonRegist->UseVisualStyleBackColor = true;
			this->buttonRegist->Click += gcnew System::EventHandler(this, &listWindow::buttonRegist_Click);
			// 
			// labelViewDate
			// 
			this->labelViewDate->AutoSize = true;
			this->labelViewDate->Location = System::Drawing::Point(33, 54);
			this->labelViewDate->Name = L"labelViewDate";
			this->labelViewDate->Size = System::Drawing::Size(95, 15);
			this->labelViewDate->TabIndex = 6;
			this->labelViewDate->Text = L"labelViewDate";
			// 
			// buttonReturn
			// 
			this->buttonReturn->Location = System::Drawing::Point(235, 285);
			this->buttonReturn->Name = L"buttonReturn";
			this->buttonReturn->Size = System::Drawing::Size(145, 26);
			this->buttonReturn->TabIndex = 10;
			this->buttonReturn->Text = L"カレンダー画面へ";
			this->buttonReturn->UseVisualStyleBackColor = true;
			this->buttonReturn->Click += gcnew System::EventHandler(this, &listWindow::buttonReturn_Click);
			// 
			// listWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(449, 359);
			this->Controls->Add(this->buttonReturn);
			this->Controls->Add(this->labelViewDate);
			this->Controls->Add(this->buttonRegist);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"listWindow";
			this->Text = L"listWindow";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &listWindow::listWindow_FormClosing);
			this->Load += gcnew System::EventHandler(this, &listWindow::listWindow_Load);
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
	private: System::Void buttonRegist_Click(System::Object^ sender, System::EventArgs^ e)
{
		
		registWindow^ Reg = gcnew registWindow();
		Reg->ShowDialog();
}


	//カレンダー画面へのボタンをクリックするとホーム画面へ遷移する処理、モーダルダイアログで表示
	private: System::Void buttonReturn_Click(System::Object^ sender, System::EventArgs^ e)

{
	/*	homeWindow^ Hom = gcnew homeWindow();
		Hom->ShowDialog();
}*/
}
	
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) 
{	
}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) 
{
}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) 
{
}

	private: System::Void listWindow_Load(System::Object^ sender, System::EventArgs^ e)
	{
		labelViewDate->Text = dateFromMyForm.ToLongDateString();

		//ラベルの中身をstd::string型に変更（ファイルの中身と一致させるため）
		String^ labelviewdate = gcnew String(labelViewDate->Text);
		string date = msclr::interop::marshal_as<string>(labelviewdate);

		string line;	//line　＝　一行
		string str_first_conma;
		string str_buf[6];

		ifstream myFile("TeaCupLab.txt", ios::in);//read

		// getline関数で1行ずつ[,]まで読み込む(読み込んだ内容はstr_buf[]に格納)

		while (getline(myFile, line))
		{
			//先頭カンマを読み取る
			istringstream i_stream(line);
			getline(i_stream, str_first_conma, ',');

			if (str_first_conma == date)
			{
				for (int i = 0; i < 6; i++)
				{
					getline(myFile, str_buf[i], ',');
				}
			}
			//ラベルに表示するためにSystem::String型に変換
		
			String^ TS = msclr::interop::marshal_as<String^>(str_buf[1]);

			String^ MS = msclr::interop::marshal_as<String^>(str_buf[2]);

			String^ TF = msclr::interop::marshal_as<String^>(str_buf[3]);

			String^ FH = msclr::interop::marshal_as<String^>(str_buf[4]);

			String^ Plan = msclr::interop::marshal_as<String^>(str_buf[5]);

			//ラベルに表示
			labelTimeStart	->Text = TS;
			labelMinuteStart	->Text = MS;
			labelTimeFinish	->Text = TF;
			labelMinuteFinish	->Text = FH;
			labelPlan		->Text = Plan;
		}
		myFile.close();
	}

};
}
