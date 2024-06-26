#pragma once
#include "homeWindow.h"

namespace TeaCupLabVer2 
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// loginWindow の概要
	/// </summary>
	public ref class loginWindow : public System::Windows::Forms::Form
	{
	public:
		loginWindow(void)
		{
			InitializeComponent();
			//
			//TODO: ここにコンストラクター コードを追加します
			//
		}

		//入力されたテキストが英数字かどうかを判断
		static int Alnumjudge(String^ LoginText, int len)
		{
			int i = 0;
			//入力テキストを先頭から1文字ずつチェック
			for (i; i < len; i++)
			{
				//文字が英数字以外だった場合、ループを抜ける
				if (!isalnum(LoginText[i]))
				{
					break;
				}

			}
			//文字列の末尾まで確認しきれた場合に1を返し、そうでない場合に0を返す
			if (i == len)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		};

	protected:
		/// <summary>
		/// 使用中のリソースをすべてクリーンアップします。
		/// </summary>
		~loginWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ labelUserName;
	protected:

	private: System::Windows::Forms::Label^ labelPassword;
	private: System::Windows::Forms::TextBox^ textBoxUserName;
	protected:

	protected:


	private: System::Windows::Forms::TextBox^ textBoxPassword;


	private: System::Windows::Forms::Button^ buttonLogin;
	private: System::Windows::Forms::Button^ buttonCancel;
	private: System::Windows::Forms::Label^ labelRogin;
	private: System::Windows::Forms::Label^ labelCaution;
	private: System::Windows::Forms::Button^ buttonPasswordVisual;






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
			this->labelUserName = (gcnew System::Windows::Forms::Label());
			this->labelPassword = (gcnew System::Windows::Forms::Label());
			this->textBoxUserName = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPassword = (gcnew System::Windows::Forms::TextBox());
			this->buttonLogin = (gcnew System::Windows::Forms::Button());
			this->buttonCancel = (gcnew System::Windows::Forms::Button());
			this->labelRogin = (gcnew System::Windows::Forms::Label());
			this->labelCaution = (gcnew System::Windows::Forms::Label());
			this->buttonPasswordVisual = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// labelUserName
			// 
			this->labelUserName->AutoSize = true;
			this->labelUserName->Font = (gcnew System::Drawing::Font(L"ＭＳ ゴシック", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->labelUserName->Location = System::Drawing::Point(50, 120);
			this->labelUserName->Name = L"labelUserName";
			this->labelUserName->Size = System::Drawing::Size(130, 23);
			this->labelUserName->TabIndex = 0;
			this->labelUserName->Text = L"ユーザー名";
			// 
			// labelPassword
			// 
			this->labelPassword->AutoSize = true;
			this->labelPassword->Font = (gcnew System::Drawing::Font(L"ＭＳ ゴシック", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->labelPassword->Location = System::Drawing::Point(50, 180);
			this->labelPassword->Name = L"labelPassword";
			this->labelPassword->Size = System::Drawing::Size(130, 23);
			this->labelPassword->TabIndex = 1;
			this->labelPassword->Text = L"パスワード";
			// 
			// textBoxUserName
			// 
			this->textBoxUserName->Font = (gcnew System::Drawing::Font(L"ＭＳ ゴシック", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->textBoxUserName->ImeMode = System::Windows::Forms::ImeMode::Disable;
			this->textBoxUserName->Location = System::Drawing::Point(200, 117);
			this->textBoxUserName->Name = L"textBoxUserName";
			this->textBoxUserName->Size = System::Drawing::Size(340, 30);
			this->textBoxUserName->TabIndex = 2;
			// 
			// textBoxPassword
			// 
			this->textBoxPassword->Font = (gcnew System::Drawing::Font(L"ＭＳ ゴシック", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->textBoxPassword->ImeMode = System::Windows::Forms::ImeMode::Disable;
			this->textBoxPassword->Location = System::Drawing::Point(200, 177);
			this->textBoxPassword->Name = L"textBoxPassword";
			this->textBoxPassword->PasswordChar = '*';
			this->textBoxPassword->Size = System::Drawing::Size(340, 30);
			this->textBoxPassword->TabIndex = 3;
			// 
			// buttonLogin
			// 
			this->buttonLogin->Font = (gcnew System::Drawing::Font(L"ＭＳ ゴシック", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->buttonLogin->ForeColor = System::Drawing::Color::Tomato;
			this->buttonLogin->Location = System::Drawing::Point(152, 282);
			this->buttonLogin->Name = L"buttonLogin";
			this->buttonLogin->Size = System::Drawing::Size(170, 38);
			this->buttonLogin->TabIndex = 4;
			this->buttonLogin->Text = L"ログイン";
			this->buttonLogin->UseVisualStyleBackColor = true;
			this->buttonLogin->Click += gcnew System::EventHandler(this, &loginWindow::buttonLogin_Click);
			// 
			// buttonCancel
			// 
			this->buttonCancel->Font = (gcnew System::Drawing::Font(L"ＭＳ ゴシック", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->buttonCancel->Location = System::Drawing::Point(422, 282);
			this->buttonCancel->Name = L"buttonCancel";
			this->buttonCancel->Size = System::Drawing::Size(170, 38);
			this->buttonCancel->TabIndex = 5;
			this->buttonCancel->Text = L"キャンセル";
			this->buttonCancel->UseVisualStyleBackColor = true;
			this->buttonCancel->Click += gcnew System::EventHandler(this, &loginWindow::buttonCancel_Click);
			// 
			// labelRogin
			// 
			this->labelRogin->AutoSize = true;
			this->labelRogin->Font = (gcnew System::Drawing::Font(L"ＭＳ ゴシック", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->labelRogin->Location = System::Drawing::Point(244, 40);
			this->labelRogin->Name = L"labelRogin";
			this->labelRogin->Size = System::Drawing::Size(257, 40);
			this->labelRogin->TabIndex = 6;
			this->labelRogin->Text = L"ログイン画面";
			// 
			// labelCaution
			// 
			this->labelCaution->AutoSize = true;
			this->labelCaution->Font = (gcnew System::Drawing::Font(L"ＭＳ ゴシック", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->labelCaution->ForeColor = System::Drawing::Color::Tomato;
			this->labelCaution->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->labelCaution->Location = System::Drawing::Point(247, 220);
			this->labelCaution->Name = L"labelCaution";
			this->labelCaution->Size = System::Drawing::Size(293, 17);
			this->labelCaution->TabIndex = 7;
			this->labelCaution->Text = L"※半角英数字を入力してください";
			// 
			// buttonPasswordVisual
			// 
			this->buttonPasswordVisual->Font = (gcnew System::Drawing::Font(L"ＭＳ ゴシック", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->buttonPasswordVisual->Location = System::Drawing::Point(575, 172);
			this->buttonPasswordVisual->Name = L"buttonPasswordVisual";
			this->buttonPasswordVisual->Size = System::Drawing::Size(120, 38);
			this->buttonPasswordVisual->TabIndex = 8;
			this->buttonPasswordVisual->Text = L"表示";
			this->buttonPasswordVisual->UseVisualStyleBackColor = true;
			this->buttonPasswordVisual->Click += gcnew System::EventHandler(this, &loginWindow::buttonPasswordVisual_Click);
			// 
			// loginWindow
			// 
			this->AcceptButton = this->buttonLogin;
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LemonChiffon;
			this->ClientSize = System::Drawing::Size(737, 373);
			this->Controls->Add(this->buttonPasswordVisual);
			this->Controls->Add(this->labelCaution);
			this->Controls->Add(this->labelRogin);
			this->Controls->Add(this->buttonCancel);
			this->Controls->Add(this->buttonLogin);
			this->Controls->Add(this->textBoxPassword);
			this->Controls->Add(this->textBoxUserName);
			this->Controls->Add(this->labelPassword);
			this->Controls->Add(this->labelUserName);
			this->ForeColor = System::Drawing::Color::Black;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"loginWindow";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"茶碗蒸し研究所";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &loginWindow::viewWindow_FormClosing);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonLogin_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//未入力時に表示されるメッセージテキストを用意
		String^ NotEntered = "";

		//ユーザー名またはパスワードが未入力状態の場合、テキストを追加
		if (this->textBoxUserName->Text == "")
		{
			NotEntered += "ユーザー名は必須項目です。\n";
		}
		if (this->textBoxPassword->Text == "")
		{
			NotEntered += "パスワードは必須項目です。\n";
		}
		//未入力状態のテキストボックスがあった場合、テキストをメッセージで表示
		if (NotEntered != "")
		{
			MessageBox::Show(NotEntered);
		}
		//両方入力されている場合
		else
		{	//入力内容と文字数を取得
			String^ Username = this->textBoxUserName->Text;
			String^ Password = this->textBoxPassword->Text;
			int lenUsername = Username->Length;
			int lenPassword = Password->Length;

			//入力テキスト内に記号が含まれていないか検証
			//含まれているとメッセージを表示
			if (!(Alnumjudge(Username, lenUsername) && Alnumjudge(Password, lenPassword)))
			{
				MessageBox::Show("記号、スペースは入力できません");

			}
			//ユーザーID,パスワードを検証し,成功した場合カレンダー画面に遷移
			else if (this->textBoxUserName->Text == "User1" && this->textBoxPassword->Text == "Pass1")
			{
				this->Hide();

				homeWindow^ Hom = gcnew homeWindow();
				Hom->ShowDialog();

				this->Show();
			}
			//ユーザー名、パスワードの検証失敗時メッセージを表示
			else
			{
				MessageBox::Show("ユーザー名またはパスワードが違います");
			}

		}
		
	}

		//キャンセルボタンをクリック時、テキストボックス内の入力内容をクリア
	private: System::Void buttonCancel_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->textBoxUserName->Text = "";
		this->textBoxPassword->Text = "";
	}
		//フォームを閉じる際にメッセージボックスを表示
	private: System::Void viewWindow_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) 
	{
		if (System::Windows::Forms::DialogResult::Cancel == MessageBox::Show("アプリを終了しますか？", "", MessageBoxButtons::OKCancel))
		{
			e->Cancel = true;
		}
	}
		   //入力されたパスワードの表示切り替え
	private: System::Void buttonPasswordVisual_Click(System::Object^ sender, System::EventArgs^ e)
	{
		//ボタンが押された回数を記録する変数の宣言
		static int CountPush = 1;

		//表示/非表示ボタンがクリックされる度にパスワードの表示を切り替え
		if (CountPush % 2)
		{
			textBoxPassword->PasswordChar = 0;
			buttonPasswordVisual->Text = "非表示";
		}
		else
		{
			textBoxPassword->PasswordChar = '*';
			buttonPasswordVisual->Text = "表示";
		}

		CountPush++;
	}
};
}
