#pragma once
#include "listWindow.h"
#include "deleteWindow.h"
#include"registWindow.h"
#include <string>
#include <msclr/marshal_cppstd.h>	


using namespace System;
using namespace std;
namespace TeaCupLabVer2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// homeWindow の概要
	/// </summary>
	public ref class homeWindow : public System::Windows::Forms::Form
	{
	private:
		System::DateTime selectedDate;				//変数宣言

	public:											//外部からのアクセスの為のプロパティ作成
		property System::DateTime SelectedDate
		{
			System::DateTime get()	//selectDateの値を返す
			{
				return selectedDate;
			}
		}
	public:
		homeWindow(void)
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
		~homeWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonLogout;
	private: System::Windows::Forms::Button^ buttonDecision;
	private: System::Windows::Forms::MonthCalendar^ monthCalendar1;
	private: System::Windows::Forms::Label^ labelDay;



	private:
		/// <summary>
		/// 必要なデザイナー変数です。
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// デザイナー サポートに必要なメソッドです。このメソッドの内容を
		/// コード エディターで変更しないでください。
		/// </summary>
		void InitializeComponent(void)
		{
			this->buttonLogout = (gcnew System::Windows::Forms::Button());
			this->buttonDecision = (gcnew System::Windows::Forms::Button());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->labelDay = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// buttonLogout
			// 
			this->buttonLogout->Font = (gcnew System::Drawing::Font(L"ＭＳ ゴシック", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->buttonLogout->ForeColor = System::Drawing::Color::Tomato;
			this->buttonLogout->Location = System::Drawing::Point(454, 526);
			this->buttonLogout->Name = L"buttonLogout";
			this->buttonLogout->Size = System::Drawing::Size(117, 53);
			this->buttonLogout->TabIndex = 3;
			this->buttonLogout->Text = L"ログアウト";
			this->buttonLogout->UseVisualStyleBackColor = true;
			this->buttonLogout->Click += gcnew System::EventHandler(this, &homeWindow::buttonLogout_Click);
			// 
			// buttonDecision
			// 
			this->buttonDecision->Font = (gcnew System::Drawing::Font(L"ＭＳ ゴシック", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->buttonDecision->Location = System::Drawing::Point(12, 526);
			this->buttonDecision->Name = L"buttonDecision";
			this->buttonDecision->Size = System::Drawing::Size(114, 53);
			this->buttonDecision->TabIndex = 6;
			this->buttonDecision->Text = L"確定";
			this->buttonDecision->UseVisualStyleBackColor = true;
			this->buttonDecision->Click += gcnew System::EventHandler(this, &homeWindow::buttonDecision_Click);
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->BackColor = System::Drawing::Color::LemonChiffon;
			this->monthCalendar1->CalendarDimensions = System::Drawing::Size(4, 3);
			this->monthCalendar1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->monthCalendar1->Dock = System::Windows::Forms::DockStyle::Right;
			this->monthCalendar1->Font = (gcnew System::Drawing::Font(L"ＭＳ ゴシック", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->monthCalendar1->ForeColor = System::Drawing::SystemColors::WindowText;
			this->monthCalendar1->Location = System::Drawing::Point(-225, 0);
			this->monthCalendar1->Margin = System::Windows::Forms::Padding(0);
			this->monthCalendar1->MaxSelectionCount = 1;
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->TabIndex = 8;
			this->monthCalendar1->DateSelected += gcnew System::Windows::Forms::DateRangeEventHandler(this, &homeWindow::monthCalendar1_DateSelected);
			// 
			// labelDay
			// 
			this->labelDay->AutoSize = true;
			this->labelDay->Font = (gcnew System::Drawing::Font(L"ＭＳ ゴシック", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->labelDay->Location = System::Drawing::Point(132, 543);
			this->labelDay->Name = L"labelDay";
			this->labelDay->Size = System::Drawing::Size(240, 19);
			this->labelDay->TabIndex = 9;
			this->labelDay->Text = L"日付を選択してください";
			// 
			// homeWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LemonChiffon;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(583, 591);
			this->Controls->Add(this->labelDay);
			this->Controls->Add(this->monthCalendar1);
			this->Controls->Add(this->buttonDecision);
			this->Controls->Add(this->buttonLogout);
			this->ForeColor = System::Drawing::Color::Black;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"homeWindow";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"茶碗蒸し研究所";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &homeWindow::homeWindow_FormClosing);
			this->Load += gcnew System::EventHandler(this, &homeWindow::homeWindow_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		//ログアウト確認メッセージボックス
	private: System::Void buttonLogout_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Close();
	}

		   //終了確認メッセージボックス
	private: System::Void homeWindow_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e)
	{
		if (System::Windows::Forms::DialogResult::Cancel == MessageBox::Show("ログアウトしますか?", "確認", MessageBoxButtons::OKCancel))
		{
			e->Cancel = true;
		}

	}

		   //情報一覧画面、情報登録画面、削除画面に日付を渡す
	private: System::Void buttonDecision_Click(System::Object^ sender, System::EventArgs^ e)
	{

		this->Hide();
		listWindow^ Lis = gcnew listWindow();	//登録情報一覧画面に日付を渡す
		Lis->DateFromList = this->SelectedDate;

		registWindow^ Reg = gcnew registWindow();	//情報登録画面に日付を渡す
		Reg->DateFromRegist = this->SelectedDate;

		deleteWindow^ Del = gcnew deleteWindow();	//削除画面に日付を渡す
		Del->DateFromDelete = this->SelectedDate;

		Lis->ShowDialog();	//登録情報一覧画面に遷移

		this->Show();
	}
		   //日付取得
	private: System::Void monthCalendar1_DateSelected(System::Object^ sender, System::Windows::Forms::DateRangeEventArgs^ e)
	{
		buttonDecision->Visible = TRUE;		//日付が選択された時は確定ボタン表示
		selectedDate = monthCalendar1->SelectionStart;	//日付取得
		labelDay->Text = (selectedDate.ToLongDateString() + "が選択されています");	//変換して表示
	}

	private: System::Void homeWindow_Load(System::Object^ sender, System::EventArgs^ e)
	{
		if (labelDay->Text == "日付を選択してください")
		{
			buttonDecision->Visible = FALSE;	//日付が選択されていない時は確定ボタン非表示
		}
	}
	};
}