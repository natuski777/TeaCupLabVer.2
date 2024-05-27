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
		System::DateTime selectedDate;

	public:
		property System::DateTime SelectedDate {
			System::DateTime get() {
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
	private: System::Windows::Forms::Label^ label1;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// buttonLogout
			// 
			this->buttonLogout->Font = (gcnew System::Drawing::Font(L"ＭＳ ゴシック", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->buttonLogout->ForeColor = System::Drawing::Color::Tomato;
			this->buttonLogout->Location = System::Drawing::Point(775, 86);
			this->buttonLogout->Name = L"buttonLogout";
			this->buttonLogout->Size = System::Drawing::Size(136, 50);
			this->buttonLogout->TabIndex = 3;
			this->buttonLogout->Text = L"ログアウト";
			this->buttonLogout->UseVisualStyleBackColor = true;
			this->buttonLogout->Click += gcnew System::EventHandler(this, &homeWindow::buttonLogout_Click);
			// 
			// buttonDecision
			// 
			this->buttonDecision->Font = (gcnew System::Drawing::Font(L"ＭＳ ゴシック", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->buttonDecision->Location = System::Drawing::Point(761, 213);
			this->buttonDecision->Name = L"buttonDecision";
			this->buttonDecision->Size = System::Drawing::Size(150, 53);
			this->buttonDecision->TabIndex = 6;
			this->buttonDecision->Text = L"確定";
			this->buttonDecision->UseVisualStyleBackColor = true;
			this->buttonDecision->Click += gcnew System::EventHandler(this, &homeWindow::buttonDecision_Click);
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->monthCalendar1->BackColor = System::Drawing::Color::LemonChiffon;
			this->monthCalendar1->CalendarDimensions = System::Drawing::Size(4, 3);
			this->monthCalendar1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->monthCalendar1->Font = (gcnew System::Drawing::Font(L"ＭＳ ゴシック", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->monthCalendar1->Location = System::Drawing::Point(103, 21);
			this->monthCalendar1->Margin = System::Windows::Forms::Padding(0);
			this->monthCalendar1->MaxSelectionCount = 1;
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->TabIndex = 8;
			this->monthCalendar1->DateSelected += gcnew System::Windows::Forms::DateRangeEventHandler(this, &homeWindow::monthCalendar1_DateSelected);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label1->Location = System::Drawing::Point(682, 341);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(208, 19);
			this->label1->TabIndex = 9;
			this->label1->Text = L"日付が選択されていません";
			// 
			// homeWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LemonChiffon;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(920, 552);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->monthCalendar1);
			this->Controls->Add(this->buttonDecision);
			this->Controls->Add(this->buttonLogout);
			this->ForeColor = System::Drawing::Color::Black;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"homeWindow";
			this->Text = L"茶碗蒸し研究所";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &homeWindow::homeWindow_FormClosing);
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
		if (System::Windows::Forms::DialogResult::Cancel == MessageBox::Show("ログアウトして終了しますか?", "確認", MessageBoxButtons::OKCancel))
		{
			e->Cancel = true;
			Close();
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
		selectedDate = monthCalendar1->SelectionStart;
		label1->Text = (selectedDate.ToLongDateString()+"が選択されています");
	}


};
}