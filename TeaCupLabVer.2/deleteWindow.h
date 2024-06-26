#pragma once
#include <msclr/marshal_cppstd.h>	//System::String←→std::stringで必要
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
	using namespace std;	//std::string
	using namespace System::IO;

	/// <summary>
	/// deleteWindow の概要
	/// </summary>
	/// 
	/// カレンダーの日付情報を受け取る処理
	public ref class deleteWindow : public System::Windows::Forms::Form
	{
	private:
		System::DateTime dateFromDelete;
	public:
		property System::DateTime DateFromDelete;

	public:
		deleteWindow(void)
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
		~deleteWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonDeleteOK;
	protected:

	private: System::Windows::Forms::Button^ buttonDeleteCancel;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ labelViewDate;

	protected:

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
			this->buttonDeleteOK = (gcnew System::Windows::Forms::Button());
			this->buttonDeleteCancel = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->labelViewDate = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// buttonDeleteOK
			// 
			this->buttonDeleteOK->Font = (gcnew System::Drawing::Font(L"ＭＳ ゴシック", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->buttonDeleteOK->Location = System::Drawing::Point(54, 180);
			this->buttonDeleteOK->Name = L"buttonDeleteOK";
			this->buttonDeleteOK->Size = System::Drawing::Size(150, 38);
			this->buttonDeleteOK->TabIndex = 0;
			this->buttonDeleteOK->Text = L"OK";
			this->buttonDeleteOK->UseVisualStyleBackColor = true;
			this->buttonDeleteOK->Click += gcnew System::EventHandler(this, &deleteWindow::buttonDeleteOK_Click);
			// 
			// buttonDeleteCancel
			// 
			this->buttonDeleteCancel->Font = (gcnew System::Drawing::Font(L"ＭＳ ゴシック", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->buttonDeleteCancel->Location = System::Drawing::Point(242, 180);
			this->buttonDeleteCancel->Name = L"buttonDeleteCancel";
			this->buttonDeleteCancel->Size = System::Drawing::Size(150, 38);
			this->buttonDeleteCancel->TabIndex = 1;
			this->buttonDeleteCancel->Text = L"キャンセル";
			this->buttonDeleteCancel->UseVisualStyleBackColor = true;
			this->buttonDeleteCancel->Click += gcnew System::EventHandler(this, &deleteWindow::buttonDeleteCancel_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"ＭＳ ゴシック", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label1->Location = System::Drawing::Point(50, 100);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(346, 46);
			this->label1->TabIndex = 2;
			this->label1->Text = L"登録済みの情報を削除します。\r\n本当に削除しますか？";
			// 
			// labelViewDate
			// 
			this->labelViewDate->AutoSize = true;
			this->labelViewDate->Font = (gcnew System::Drawing::Font(L"ＭＳ ゴシック", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->labelViewDate->Location = System::Drawing::Point(50, 40);
			this->labelViewDate->Name = L"labelViewDate";
			this->labelViewDate->Size = System::Drawing::Size(166, 23);
			this->labelViewDate->TabIndex = 3;
			this->labelViewDate->Text = L"labelViewDate";
			// 
			// deleteWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LemonChiffon;
			this->ClientSize = System::Drawing::Size(438, 253);
			this->Controls->Add(this->labelViewDate);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->buttonDeleteCancel);
			this->Controls->Add(this->buttonDeleteOK);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"deleteWindow";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"茶碗蒸し研究所";
			this->Load += gcnew System::EventHandler(this, &deleteWindow::deleteWindow_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void deleteWindow_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		//labelViewDateに日付情報を代入
		labelViewDate->Text = DateFromDelete.ToLongDateString();
	}
private: System::Void buttonDeleteOK_Click(System::Object^ sender, System::EventArgs^ e) //OKを押したときにファイルに初期表示の値を送り、情報登録画面に戻る処理
{
	//labelViewDateのデータを取得・変換
	String^ DeleteDate = gcnew String(labelViewDate->Text);			//変数Dateに日付の情報を代入
	string deletedate = msclr::interop::marshal_as<string>(DeleteDate);		//変数dateには日付情報の入ったString型のDateを代入
	//ファイルを開いて最後の行へ日付＋情報をカンマ区切りで入力→閉じるまで
	ofstream writing_file;
	string filename = "TeaCupLab.txt";
	writing_file.open(filename, ios::app);
	string writing_text = deletedate + ",\n" + "," + "予定が登録されていません" + "," + "-" + "," + "-" + "," + "-" + "," + "-" + "," + "" + ",";
	writing_file << writing_text << endl;
	writing_file.close();
	Close();
}
//キャンセルを押したときに情報登録画面に戻る処理
private: System::Void buttonDeleteCancel_Click(System::Object^ sender, System::EventArgs^ e)
{
	Close();
}
};
}
