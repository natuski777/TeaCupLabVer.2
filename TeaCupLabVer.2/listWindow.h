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
	private: System::Windows::Forms::Label^ labelTimeStart;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ labelMinuteStart;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ labelTimeFinish;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ labelMinuteFinish;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ labelPlan;











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
			this->labelPlan = (gcnew System::Windows::Forms::Label());
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
			this->buttonRegist->Location = System::Drawing::Point(286, 291);
			this->buttonRegist->Name = L"buttonRegist";
			this->buttonRegist->Size = System::Drawing::Size(146, 39);
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
			this->buttonReturn->Location = System::Drawing::Point(97, 291);
			this->buttonReturn->Name = L"buttonReturn";
			this->buttonReturn->Size = System::Drawing::Size(146, 39);
			this->buttonReturn->TabIndex = 10;
			this->buttonReturn->Text = L"カレンダー画面へ";
			this->buttonReturn->UseVisualStyleBackColor = true;
			this->buttonReturn->Click += gcnew System::EventHandler(this, &listWindow::buttonReturn_Click);
			// 
			// labelTimeStart
			// 
			this->labelTimeStart->AutoSize = true;
			this->labelTimeStart->Location = System::Drawing::Point(168, 107);
			this->labelTimeStart->Name = L"labelTimeStart";
			this->labelTimeStart->Size = System::Drawing::Size(23, 15);
			this->labelTimeStart->TabIndex = 11;
			this->labelTimeStart->Text = L"00";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(221, 107);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(22, 15);
			this->label5->TabIndex = 12;
			this->label5->Text = L"時";
			// 
			// labelMinuteStart
			// 
			this->labelMinuteStart->AutoSize = true;
			this->labelMinuteStart->Location = System::Drawing::Point(283, 107);
			this->labelMinuteStart->Name = L"labelMinuteStart";
			this->labelMinuteStart->Size = System::Drawing::Size(23, 15);
			this->labelMinuteStart->TabIndex = 13;
			this->labelMinuteStart->Text = L"00";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(358, 107);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(22, 15);
			this->label6->TabIndex = 14;
			this->label6->Text = L"分";
			// 
			// labelTimeFinish
			// 
			this->labelTimeFinish->AutoSize = true;
			this->labelTimeFinish->Location = System::Drawing::Point(168, 167);
			this->labelTimeFinish->Name = L"labelTimeFinish";
			this->labelTimeFinish->Size = System::Drawing::Size(23, 15);
			this->labelTimeFinish->TabIndex = 15;
			this->labelTimeFinish->Text = L"00";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(221, 167);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(22, 15);
			this->label7->TabIndex = 16;
			this->label7->Text = L"時";
			// 
			// labelMinuteFinish
			// 
			this->labelMinuteFinish->AutoSize = true;
			this->labelMinuteFinish->Location = System::Drawing::Point(283, 167);
			this->labelMinuteFinish->Name = L"labelMinuteFinish";
			this->labelMinuteFinish->Size = System::Drawing::Size(23, 15);
			this->labelMinuteFinish->TabIndex = 17;
			this->labelMinuteFinish->Text = L"00";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(358, 167);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(22, 15);
			this->label8->TabIndex = 18;
			this->label8->Text = L"分";
			// 
			// labelPlan
			// 
			this->labelPlan->AutoSize = true;
			this->labelPlan->Location = System::Drawing::Point(146, 229);
			this->labelPlan->Name = L"labelPlan";
			this->labelPlan->Size = System::Drawing::Size(0, 15);
			this->labelPlan->TabIndex = 19;
			// 
			// listWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(502, 359);
			this->Controls->Add(this->labelPlan);
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
			this->Name = L"listWindow";
			this->Text = L"00";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &listWindow::listWindow_FormClosing);
			this->Load += gcnew System::EventHandler(this, &listWindow::listWindow_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void listWindow_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e)
	{
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
		Close();
}
	

	private: System::Void listWindow_Load(System::Object^ sender, System::EventArgs^ e)
	{
		labelViewDate->Text = dateFromMyForm.ToLongDateString();

		//ラベルの中身をstd::string型に変更（ファイルの中身と一致させるため）
		String^ labelviewdate = gcnew String(labelViewDate->Text);
		string date = msclr::interop::marshal_as<string>(labelviewdate);

		string line;	//line　＝　一行
		string str_first_conma;
		string str_buf[5];

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
				for (int i = 0; i < 5; i++)
				{
					getline(myFile, str_buf[i], ',');
				}
			}
			else
			{

			}
			//ラベルに表示するためにSystem::String型に変換
			//開始　時間
			string time_start =  str_buf[0];
			String^ Time_Start = msclr::interop::marshal_as<String^>(time_start);
			//開始　分
			string minutes_tart =  str_buf[1];
			String^ Minute_Start = msclr::interop::marshal_as<String^>(minutes_tart);
			//終了　時間
			string time_finish =  str_buf[2];
			String^ Time_Finish = msclr::interop::marshal_as<String^>(time_finish);
			//終了　分
			string minute_finish =  str_buf[3];
			String^ Minute_Finish = msclr::interop::marshal_as<String^>(minute_finish);
			//予定内容
			string list_plan =  str_buf[4];
			String^ List_Plan = msclr::interop::marshal_as<String^>(list_plan);

			//ラベルに表示
			labelTimeStart->Text = Time_Start;
			labelMinuteStart->Text = Minute_Start;
			labelTimeFinish->Text = Time_Finish;
			labelMinuteFinish	->Text = Minute_Finish;
			labelPlan->Text = List_Plan;

			//MessageBox::Show(labelviewdate,"a");


		}
		myFile.close();
	}

};
}
