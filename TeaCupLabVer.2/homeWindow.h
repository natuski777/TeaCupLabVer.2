#pragma once
#include "listWindow.h"
#include <string>
#include <msclr/marshal_cppstd.h>	
#include "deleteWindow.h"
#include "loginWindow.h"

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
	protected:





	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::MonthCalendar^ monthCalendar1;




	protected:

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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->SuspendLayout();
			// 
			// buttonLogout
			// 
			this->buttonLogout->Location = System::Drawing::Point(66, 501);
			this->buttonLogout->Name = L"buttonLogout";
			this->buttonLogout->Size = System::Drawing::Size(185, 46);
			this->buttonLogout->TabIndex = 3;
			this->buttonLogout->Text = L"ログアウト";
			this->buttonLogout->UseVisualStyleBackColor = true;
			this->buttonLogout->Click += gcnew System::EventHandler(this, &homeWindow::buttonLogout_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(415, 501);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(138, 50);
			this->button2->TabIndex = 6;
			this->button2->Text = L"確定";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &homeWindow::button2_Click);
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->monthCalendar1->CalendarDimensions = System::Drawing::Size(4, 3);
			this->monthCalendar1->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->monthCalendar1->Location = System::Drawing::Point(18, 6);
			this->monthCalendar1->MaxSelectionCount = 1;
			this->monthCalendar1->MinimumSize = System::Drawing::Size(0, 40);
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->TabIndex = 8;
			this->monthCalendar1->DateSelected += gcnew System::Windows::Forms::DateRangeEventHandler(this, &homeWindow::monthCalendar1_DateSelected);
			// 
			// homeWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1014, 570);
			this->Controls->Add(this->monthCalendar1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->buttonLogout);
			this->Name = L"homeWindow";
			this->Text = L"homeWindow";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &homeWindow::homeWindow_FormClosing);
			this->ResumeLayout(false);

		}
#pragma endregion
		
		//ログアウト確認メッセージボックス
	private: System::Void buttonLogout_Click(System::Object^ sender, System::EventArgs^ e)
	{
		MessageBox::Show("ログアウトしますか?", "確認", MessageBoxButtons::OKCancel);
		if (this->DialogResult == System::Windows::Forms::DialogResult::OK)
		{
			loginWindow^Log=gcnew loginWindow();
			Log->ShowDialog();
		}
	}

		 //終了確認メッセージボックス
	private: System::Void homeWindow_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e)
	{
		if (System::Windows::Forms::DialogResult::Cancel ==MessageBox::Show("アプリを終了しますか?", "確認",MessageBoxButtons::OKCancel)) 
		{
			e->Cancel = true;
		}
	}

		
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		listWindow^ Lis = gcnew listWindow();
		Lis->DateFromMyForm = this->SelectedDate;
		Lis->ShowDialog();

		registWindow^ Reg = gcnew registWindow();
		Reg->DateFromMyForm = this->SelectedDate;
		Reg->ShowDialog();

		deleteWindow^ Del = gcnew deleteWindow();
		//del->DateFromMyForm = this->SelectedDate;
		//del->ShowDialog();
	}
		   //日付取得
private: System::Void monthCalendar1_DateSelected(System::Object^ sender, System::Windows::Forms::DateRangeEventArgs^ e) {
	selectedDate = monthCalendar1->SelectionStart;
}
};
}