#pragma once
#include "registWindow.h"
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
		System::DateTime dateFromList;
	public:
		property System::DateTime DateFromList {
			System::DateTime get() {
				return dateFromList;
			}
			void set(System::DateTime value) {
				dateFromList = value;
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
	private: System::Windows::Forms::Label^ labelTimeStart;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ labelMinuteStart;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ labelTimeFinish;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ labelMinuteFinish;
	private: System::Windows::Forms::Label^ label8;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ labelTitle;
	private: System::Windows::Forms::TextBox^ labelPlan;

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
			this->labelTimeStart = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->labelMinuteStart = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->labelTimeFinish = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->labelMinuteFinish = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->labelTitle = (gcnew System::Windows::Forms::Label());
			this->labelPlan = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"ＭＳ ゴシック", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label1->Location = System::Drawing::Point(257, 40);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(257, 40);
			this->label1->TabIndex = 0;
			this->label1->Text = L"登録情報一覧";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"ＭＳ ゴシック", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label2->Location = System::Drawing::Point(80, 240);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(130, 23);
			this->label2->TabIndex = 1;
			this->label2->Text = L"開始時間：";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"ＭＳ ゴシック", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label3->Location = System::Drawing::Point(80, 300);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(130, 23);
			this->label3->TabIndex = 2;
			this->label3->Text = L"終了時間：";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"ＭＳ ゴシック", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label4->Location = System::Drawing::Point(80, 360);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(130, 23);
			this->label4->TabIndex = 3;
			this->label4->Text = L"予定内容：";
			// 
			// buttonRegist
			// 
			this->buttonRegist->Font = (gcnew System::Drawing::Font(L"ＭＳ ゴシック", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->buttonRegist->ForeColor = System::Drawing::SystemColors::ControlText;
			this->buttonRegist->Location = System::Drawing::Point(120, 480);
			this->buttonRegist->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->buttonRegist->Name = L"buttonRegist";
			this->buttonRegist->Size = System::Drawing::Size(229, 38);
			this->buttonRegist->TabIndex = 4;
			this->buttonRegist->Text = L"情報登録画面へ";
			this->buttonRegist->UseVisualStyleBackColor = true;
			this->buttonRegist->Click += gcnew System::EventHandler(this, &listWindow::buttonRegist_Click);
			// 
			// labelViewDate
			// 
			this->labelViewDate->AutoSize = true;
			this->labelViewDate->Font = (gcnew System::Drawing::Font(L"ＭＳ ゴシック", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->labelViewDate->Location = System::Drawing::Point(80, 120);
			this->labelViewDate->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelViewDate->Name = L"labelViewDate";
			this->labelViewDate->Size = System::Drawing::Size(166, 23);
			this->labelViewDate->TabIndex = 6;
			this->labelViewDate->Text = L"labelViewDate";
			// 
			// buttonReturn
			// 
			this->buttonReturn->Font = (gcnew System::Drawing::Font(L"ＭＳ ゴシック", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->buttonReturn->ForeColor = System::Drawing::SystemColors::ControlText;
			this->buttonReturn->Location = System::Drawing::Point(405, 480);
			this->buttonReturn->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->buttonReturn->Name = L"buttonReturn";
			this->buttonReturn->Size = System::Drawing::Size(229, 38);
			this->buttonReturn->TabIndex = 10;
			this->buttonReturn->Text = L"カレンダー画面へ";
			this->buttonReturn->UseVisualStyleBackColor = true;
			this->buttonReturn->Click += gcnew System::EventHandler(this, &listWindow::buttonReturn_Click);
			// 
			// labelTimeStart
			// 
			this->labelTimeStart->AutoSize = true;
			this->labelTimeStart->Font = (gcnew System::Drawing::Font(L"ＭＳ ゴシック", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->labelTimeStart->Location = System::Drawing::Point(320, 240);
			this->labelTimeStart->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelTimeStart->Name = L"labelTimeStart";
			this->labelTimeStart->Size = System::Drawing::Size(22, 23);
			this->labelTimeStart->TabIndex = 11;
			this->labelTimeStart->Text = L"-";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"ＭＳ ゴシック", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label5->Location = System::Drawing::Point(380, 240);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(34, 23);
			this->label5->TabIndex = 12;
			this->label5->Text = L"時";
			// 
			// labelMinuteStart
			// 
			this->labelMinuteStart->AutoSize = true;
			this->labelMinuteStart->Font = (gcnew System::Drawing::Font(L"ＭＳ ゴシック", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->labelMinuteStart->Location = System::Drawing::Point(535, 240);
			this->labelMinuteStart->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelMinuteStart->Name = L"labelMinuteStart";
			this->labelMinuteStart->Size = System::Drawing::Size(22, 23);
			this->labelMinuteStart->TabIndex = 13;
			this->labelMinuteStart->Text = L"-";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"ＭＳ ゴシック", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label6->Location = System::Drawing::Point(595, 240);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(34, 23);
			this->label6->TabIndex = 14;
			this->label6->Text = L"分";
			// 
			// labelTimeFinish
			// 
			this->labelTimeFinish->AutoSize = true;
			this->labelTimeFinish->Font = (gcnew System::Drawing::Font(L"ＭＳ ゴシック", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->labelTimeFinish->Location = System::Drawing::Point(320, 300);
			this->labelTimeFinish->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelTimeFinish->Name = L"labelTimeFinish";
			this->labelTimeFinish->Size = System::Drawing::Size(22, 23);
			this->labelTimeFinish->TabIndex = 15;
			this->labelTimeFinish->Text = L"-";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"ＭＳ ゴシック", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label7->Location = System::Drawing::Point(380, 300);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(34, 23);
			this->label7->TabIndex = 16;
			this->label7->Text = L"時";
			// 
			// labelMinuteFinish
			// 
			this->labelMinuteFinish->AutoSize = true;
			this->labelMinuteFinish->Font = (gcnew System::Drawing::Font(L"ＭＳ ゴシック", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->labelMinuteFinish->Location = System::Drawing::Point(535, 300);
			this->labelMinuteFinish->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelMinuteFinish->Name = L"labelMinuteFinish";
			this->labelMinuteFinish->Size = System::Drawing::Size(22, 23);
			this->labelMinuteFinish->TabIndex = 17;
			this->labelMinuteFinish->Text = L"-";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"ＭＳ ゴシック", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label8->Location = System::Drawing::Point(595, 300);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(34, 23);
			this->label8->TabIndex = 18;
			this->label8->Text = L"分";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"ＭＳ ゴシック", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label9->Location = System::Drawing::Point(80, 180);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(130, 23);
			this->label9->TabIndex = 20;
			this->label9->Text = L"タイトル：";
			// 
			// labelTitle
			// 
			this->labelTitle->AutoSize = true;
			this->labelTitle->Font = (gcnew System::Drawing::Font(L"ＭＳ ゴシック", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->labelTitle->Location = System::Drawing::Point(230, 180);
			this->labelTitle->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelTitle->Name = L"labelTitle";
			this->labelTitle->Size = System::Drawing::Size(106, 23);
			this->labelTitle->TabIndex = 21;
			this->labelTitle->Text = L"タイトル";
			// 
			// labelPlan
			// 
			this->labelPlan->BackColor = System::Drawing::Color::LemonChiffon;
			this->labelPlan->Font = (gcnew System::Drawing::Font(L"ＭＳ ゴシック", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->labelPlan->Location = System::Drawing::Point(234, 360);
			this->labelPlan->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->labelPlan->Multiline = true;
			this->labelPlan->Name = L"labelPlan";
			this->labelPlan->ReadOnly = true;
			this->labelPlan->Size = System::Drawing::Size(400, 70);
			this->labelPlan->TabIndex = 22;
			// 
			// listWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 23);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LemonChiffon;
			this->ClientSize = System::Drawing::Size(732, 553);
			this->Controls->Add(this->labelPlan);
			this->Controls->Add(this->labelTitle);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->labelMinuteFinish);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->labelTimeFinish);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->labelMinuteStart);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->labelTimeStart);
			this->Controls->Add(this->buttonReturn);
			this->Controls->Add(this->labelViewDate);
			this->Controls->Add(this->buttonRegist);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"ＭＳ ゴシック", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"listWindow";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"茶碗蒸し研究所";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &listWindow::listWindow_FormClosing);
			this->Load += gcnew System::EventHandler(this, &listWindow::listWindow_Load);
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion
	private: System::Void listWindow_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e)
	{
	}
	private:void File_Load(void)
	{
		//ラベルの中身をstd::string型に変更（ファイルの中身と一致させるため）
		labelViewDate->Text = dateFromList.ToLongDateString();
		String^ labelviewdate = gcnew String(labelViewDate->Text);
		string date = msclr::interop::marshal_as<string>(labelviewdate);

		string line;	//line　＝　一行
		string str_first_conma;
		string str_buf[6];

		//ファイルを開く
		ifstream myFile("TeaCupLab.txt", ios::in);//read

		// getline関数で1行ずつ最後まで読み込む
		while (getline(myFile, line))
		{
			//先頭カンマを読み取る
			istringstream i_stream(line);
			getline(i_stream, str_first_conma, ',');

			//先頭の文字列とdateの文字列が一致する行

			if (str_first_conma == date)
			{
				//↑の中身をカンマ区切りでstr_buf配列に格納する
				for (int i = 0; i < 6; i++)
				{
					getline(myFile, str_buf[i], ',');
				}
			}
			//ラベルに表示するためにSystem::String型に変換
			//予定のタイトル
			String^ List_Title = msclr::interop::marshal_as<String^>(str_buf[0]);
			//開始　時間
			String^ Time_Start = msclr::interop::marshal_as<String^>(str_buf[1]);
			//開始　分
			String^ Minute_Start = msclr::interop::marshal_as<String^>(str_buf[2]);
			//終了　時間
			String^ Time_Finish = msclr::interop::marshal_as<String^>(str_buf[3]);
			//終了　分
			String^ Minute_Finish = msclr::interop::marshal_as<String^>(str_buf[4]);
			//予定内容
			String^ List_Plan = msclr::interop::marshal_as<String^>(str_buf[5]);

			//選択した日付がテキストファイルにない場合に「情報が登録されていません。」と表示する処理
			if (List_Title == "")
			{
				labelTitle->Text = "予定が登録されていません。";
				labelTimeStart->Text = "-";
				labelMinuteStart->Text = "-";
				labelTimeFinish->Text = "-";
				labelMinuteFinish->Text = "-";
				labelPlan->Text = "";
			}
			else
			{
				labelTitle->Text = List_Title;
				labelTimeStart->Text = Time_Start;
				labelMinuteStart->Text = Minute_Start;
				labelTimeFinish->Text = Time_Finish;
				labelMinuteFinish->Text = Minute_Finish;
				labelPlan->Text = List_Plan;
			}
		}
		myFile.close();
	}
		//情報登録画面のボタンをクリックすると情報登録画面へ遷移する処理,モーダルダイアログで表示
	private: System::Void buttonRegist_Click(System::Object^ sender, System::EventArgs^ e)
{
		this->Hide();
		registWindow^ Reg = gcnew registWindow();
		Reg->DateFromRegist = this->dateFromList;
		Reg->ShowDialog();
		this->Show();
		File_Load();
}
	//カレンダー画面へのボタンをクリックするとホーム画面へ遷移する処理、モーダルダイアログで表示
	private: System::Void buttonReturn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Close();
	}
	
	private: System::Void listWindow_Load(System::Object^ sender, System::EventArgs^ e)
	{
		File_Load();
	}
};
}
