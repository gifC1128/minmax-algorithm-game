#pragma once

#include "game.h" // including the game.h file

using namespace std;

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>

	game newgame; // creating game object

	public ref class Form1 : public System::Windows::Forms::Form
	{

	public:

		static int player1_human = 1; // setting up player 1 as a human player
		static int player2_human = 0; // setting up player 2 as a computer player
		static int radio_move; // just a variable to catch which radio button was pressed

		Form1(void)
		{

			InitializeComponent(); // default initializer of graphical interface

			// initializing additional settings for the first run
			groupBox3->Visible = false;
			label3->Visible = false;
			label4->Visible = false;
			radioButton5->Visible = false;
			radioButton6->Visible = false;
			radioButton7->Visible = false;
			radioButton8->Visible = false;
			radioButton9->Visible = false;
			radioButton10->Visible = false;
			radioButton11->Visible = false;
			radioButton12->Visible = false;
			label5->Visible = false;
			label6->Visible = false;
			label7->Visible = false;
			radioButton13->Text = "1, 0, 1, 1, 1";
			radioButton14->Text = "0, 0, 1, 0, 1, 0";
			radioButton15->Text = "1, 0, 0, 1, 1, 0, 0";
			radioButton16->Text = "1, 0, 1, 0, 1, 0, 1, 0";
			radioButton17->Text = "0, 0, 0, 1, 1, 0, 1, 0, 1";

			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::ComponentModel::IContainer^ components;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::RadioButton^ radioButton6;
	private: System::Windows::Forms::RadioButton^ radioButton7;
	private: System::Windows::Forms::RadioButton^ radioButton8;
	private: System::Windows::Forms::RadioButton^ radioButton9;
	private: System::Windows::Forms::RadioButton^ radioButton10;
	private: System::Windows::Forms::RadioButton^ radioButton11;
	private: System::Windows::Forms::RadioButton^ radioButton12;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::RadioButton^ radioButton17;
	private: System::Windows::Forms::RadioButton^ radioButton16;
	private: System::Windows::Forms::RadioButton^ radioButton15;
	private: System::Windows::Forms::RadioButton^ radioButton14;
	private: System::Windows::Forms::RadioButton^ radioButton13;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton8 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton9 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton10 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton11 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton12 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton17 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton16 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton15 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton14 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton13 = (gcnew System::Windows::Forms::RadioButton());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"New Game";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(20, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(45, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Player 1";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(20, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(45, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Player 2";
			this->label2->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(6, 19);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(59, 17);
			this->radioButton1->TabIndex = 3;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Human";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(6, 36);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(70, 17);
			this->radioButton2->TabIndex = 4;
			this->radioButton2->Text = L"Computer";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton2_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(6, 19);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(59, 17);
			this->radioButton3->TabIndex = 5;
			this->radioButton3->Text = L"Human";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton3_CheckedChanged);
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Checked = true;
			this->radioButton4->Location = System::Drawing::Point(6, 38);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(70, 17);
			this->radioButton4->TabIndex = 6;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Computer";
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton4_CheckedChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(12, 50);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(97, 65);
			this->groupBox1->TabIndex = 7;
			this->groupBox1->TabStop = false;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->radioButton3);
			this->groupBox2->Controls->Add(this->radioButton4);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Location = System::Drawing::Point(11, 121);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(98, 63);
			this->groupBox2->TabIndex = 8;
			this->groupBox2->TabStop = false;
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(20, 38);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(14, 13);
			this->radioButton5->TabIndex = 9;
			this->radioButton5->TabStop = true;
			this->radioButton5->UseVisualStyleBackColor = true;
			this->radioButton5->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton5_CheckedChanged);
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Location = System::Drawing::Point(40, 38);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(14, 13);
			this->radioButton6->TabIndex = 10;
			this->radioButton6->TabStop = true;
			this->radioButton6->UseVisualStyleBackColor = true;
			this->radioButton6->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton6_CheckedChanged);
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->Location = System::Drawing::Point(60, 38);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(14, 13);
			this->radioButton7->TabIndex = 11;
			this->radioButton7->TabStop = true;
			this->radioButton7->UseVisualStyleBackColor = true;
			this->radioButton7->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton7_CheckedChanged);
			// 
			// radioButton8
			// 
			this->radioButton8->AutoSize = true;
			this->radioButton8->Location = System::Drawing::Point(80, 38);
			this->radioButton8->Name = L"radioButton8";
			this->radioButton8->Size = System::Drawing::Size(14, 13);
			this->radioButton8->TabIndex = 12;
			this->radioButton8->TabStop = true;
			this->radioButton8->UseVisualStyleBackColor = true;
			this->radioButton8->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton8_CheckedChanged);
			// 
			// radioButton9
			// 
			this->radioButton9->AutoSize = true;
			this->radioButton9->Location = System::Drawing::Point(100, 38);
			this->radioButton9->Name = L"radioButton9";
			this->radioButton9->Size = System::Drawing::Size(14, 13);
			this->radioButton9->TabIndex = 13;
			this->radioButton9->TabStop = true;
			this->radioButton9->UseVisualStyleBackColor = true;
			this->radioButton9->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton9_CheckedChanged);
			// 
			// radioButton10
			// 
			this->radioButton10->AutoSize = true;
			this->radioButton10->Location = System::Drawing::Point(120, 38);
			this->radioButton10->Name = L"radioButton10";
			this->radioButton10->Size = System::Drawing::Size(14, 13);
			this->radioButton10->TabIndex = 14;
			this->radioButton10->TabStop = true;
			this->radioButton10->UseVisualStyleBackColor = true;
			this->radioButton10->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton10_CheckedChanged);
			// 
			// radioButton11
			// 
			this->radioButton11->AutoSize = true;
			this->radioButton11->Location = System::Drawing::Point(140, 38);
			this->radioButton11->Name = L"radioButton11";
			this->radioButton11->Size = System::Drawing::Size(14, 13);
			this->radioButton11->TabIndex = 15;
			this->radioButton11->TabStop = true;
			this->radioButton11->UseVisualStyleBackColor = true;
			this->radioButton11->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton11_CheckedChanged);
			// 
			// radioButton12
			// 
			this->radioButton12->AutoSize = true;
			this->radioButton12->Location = System::Drawing::Point(160, 38);
			this->radioButton12->Name = L"radioButton12";
			this->radioButton12->Size = System::Drawing::Size(14, 13);
			this->radioButton12->TabIndex = 16;
			this->radioButton12->TabStop = true;
			this->radioButton12->UseVisualStyleBackColor = true;
			this->radioButton12->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton12_CheckedChanged);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->button2);
			this->groupBox3->Controls->Add(this->label3);
			this->groupBox3->Controls->Add(this->radioButton5);
			this->groupBox3->Controls->Add(this->radioButton12);
			this->groupBox3->Controls->Add(this->radioButton6);
			this->groupBox3->Controls->Add(this->radioButton11);
			this->groupBox3->Controls->Add(this->radioButton7);
			this->groupBox3->Controls->Add(this->radioButton10);
			this->groupBox3->Controls->Add(this->radioButton8);
			this->groupBox3->Controls->Add(this->radioButton9);
			this->groupBox3->Location = System::Drawing::Point(208, 34);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(193, 91);
			this->groupBox3->TabIndex = 17;
			this->groupBox3->TabStop = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(9, 62);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 18;
			this->button2->Text = L"Make Move";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 16);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(181, 13);
			this->label3->TabIndex = 17;
			this->label3->Text = L"1-----1-----1-----1-----1-----1-----1-----1-----1";
			this->label3->UseWaitCursor = true;
			this->label3->Click += gcnew System::EventHandler(this, &Form1::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::SystemColors::Desktop;
			this->label4->Location = System::Drawing::Point(207, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(36, 13);
			this->label4->TabIndex = 18;
			this->label4->Text = L"Player";
			this->label4->Click += gcnew System::EventHandler(this, &Form1::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(205, 142);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(77, 13);
			this->label5->TabIndex = 19;
			this->label5->Text = L"Player 1 score:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(205, 163);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(77, 13);
			this->label6->TabIndex = 20;
			this->label6->Text = L"Player 2 score:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(325, 159);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(31, 13);
			this->label7->TabIndex = 21;
			this->label7->Text = L"Wins";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->radioButton17);
			this->groupBox4->Controls->Add(this->radioButton16);
			this->groupBox4->Controls->Add(this->radioButton15);
			this->groupBox4->Controls->Add(this->radioButton14);
			this->groupBox4->Controls->Add(this->radioButton13);
			this->groupBox4->Location = System::Drawing::Point(17, 209);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(187, 141);
			this->groupBox4->TabIndex = 22;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Field Settings";
			// 
			// radioButton17
			// 
			this->radioButton17->AutoSize = true;
			this->radioButton17->Location = System::Drawing::Point(7, 116);
			this->radioButton17->Name = L"radioButton17";
			this->radioButton17->Size = System::Drawing::Size(31, 17);
			this->radioButton17->TabIndex = 4;
			this->radioButton17->Text = L"5";
			this->radioButton17->UseVisualStyleBackColor = true;
			this->radioButton17->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton17_CheckedChanged);
			// 
			// radioButton16
			// 
			this->radioButton16->AutoSize = true;
			this->radioButton16->Location = System::Drawing::Point(7, 92);
			this->radioButton16->Name = L"radioButton16";
			this->radioButton16->Size = System::Drawing::Size(31, 17);
			this->radioButton16->TabIndex = 3;
			this->radioButton16->Text = L"4";
			this->radioButton16->UseVisualStyleBackColor = true;
			this->radioButton16->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton16_CheckedChanged);
			// 
			// radioButton15
			// 
			this->radioButton15->AutoSize = true;
			this->radioButton15->Location = System::Drawing::Point(7, 68);
			this->radioButton15->Name = L"radioButton15";
			this->radioButton15->Size = System::Drawing::Size(31, 17);
			this->radioButton15->TabIndex = 2;
			this->radioButton15->Text = L"3";
			this->radioButton15->UseVisualStyleBackColor = true;
			this->radioButton15->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton15_CheckedChanged);
			// 
			// radioButton14
			// 
			this->radioButton14->AutoSize = true;
			this->radioButton14->Location = System::Drawing::Point(7, 44);
			this->radioButton14->Name = L"radioButton14";
			this->radioButton14->Size = System::Drawing::Size(31, 17);
			this->radioButton14->TabIndex = 1;
			this->radioButton14->Text = L"2";
			this->radioButton14->UseVisualStyleBackColor = true;
			this->radioButton14->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton14_CheckedChanged);
			// 
			// radioButton13
			// 
			this->radioButton13->AutoSize = true;
			this->radioButton13->Checked = true;
			this->radioButton13->Location = System::Drawing::Point(7, 20);
			this->radioButton13->Name = L"radioButton13";
			this->radioButton13->Size = System::Drawing::Size(31, 17);
			this->radioButton13->TabIndex = 0;
			this->radioButton13->TabStop = true;
			this->radioButton13->Text = L"1";
			this->radioButton13->UseVisualStyleBackColor = true;
			this->radioButton13->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton13_CheckedChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(214, 209);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(63, 13);
			this->label8->TabIndex = 23;
			this->label8->Text = L"Game rules:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(214, 231);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(151, 13);
			this->label9->TabIndex = 24;
			this->label9->Text = L"11 = 1, minus 1 point to enemy";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(214, 255);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(151, 13);
			this->label10->TabIndex = 25;
			this->label10->Text = L"00 = 0, minus 1 point to enemy";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(214, 303);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(136, 13);
			this->label11->TabIndex = 26;
			this->label11->Text = L"10=1, minus 2 points to you";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(214, 279);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(136, 13);
			this->label12->TabIndex = 27;
			this->label12->Text = L"01=0, minus 2 points to you";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(214, 325);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(217, 13);
			this->label13->TabIndex = 28;
			this->label13->Text = L"game ends when the field has only 1 number";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(214, 344);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(305, 13);
			this->label14->TabIndex = 29;
			this->label14->Text = L"wins player with most highest score, it is a tie if scores are equal";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(527, 366);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		player1_human = 1; // setting up player 1 as a human player
	}
	private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		player1_human = 0; // setting up player 1 as a computer player
	}
	private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		player2_human = 1; // setting up player 2 as a human player
	}
	private: System::Void radioButton4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		player2_human = 0; // setting up player 1 as a computer player
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		if (radioButton13->Checked) { // checking if radioButton13 is checked
			restartgame({ 1, 0, 1, 1, 1 }, 0, 15, 15); // setting up game field, starting player and starting scores for both players
		}
		else if (radioButton14->Checked) { // checking if radioButton14 is checked
			restartgame({ 0, 0, 1, 0, 1, 0 }, 0, 15, 15); // setting up game field, starting player and starting scores for both players
		}
		else if (radioButton15->Checked) { // checking if radioButton15 is checked
			restartgame({ 1, 0, 0, 1, 1, 0, 0 }, 0, 15, 15); // setting up game field, starting player and starting scores for both players
		}
		else if (radioButton16->Checked) { // checking if radioButton16 is checked
			restartgame({ 1, 0, 1, 0, 1, 0, 1, 0 }, 0, 15, 15); // setting up game field, starting player and starting scores for both players
		}
		else if (radioButton17->Checked) { // checking if radioButton17 is checked
			restartgame({ 0, 0, 0, 1, 1, 0, 1, 0, 1 }, 0, 15, 15); // setting up game field, starting player and starting scores for both players
		}
		else { // going for default values
			restartgame({ 1, 0, 1, 1, 1 }, 0, 15, 15); // setting up game field, starting player and starting scores for both players
		}
		update(); // updating the window
		computermove(); // running to check if it is computers move

	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		int move = radio_move; // local variable for checking which radio button was checked
		if ((move < newgame.numberslist.size()) && (move > 0)) { // checking if the move is valid

			newgame = makemove(newgame, {move - 1, move}); // making a move
			update(); // updating the window
			computermove(); // running to check if it is computers move

		}
		else {
			MessageBox::Show("Invalid move"); // error message for invalid move
		}

	}
	private: System::Void radioButton5_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		radio_move = 1; // radio button checked and passing the move index to variable
	}
	private: System::Void radioButton6_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		radio_move = 2; // radio button checked and passing the move index to variable
	}
	private: System::Void radioButton7_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		radio_move = 3; // radio button checked and passing the move index to variable
	}
	private: System::Void radioButton8_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		radio_move = 4; // radio button checked and passing the move index to variable
	}
	private: System::Void radioButton9_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		radio_move = 5; // radio button checked and passing the move index to variable
	}
	private: System::Void radioButton10_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		radio_move = 6; // radio button checked and passing the move index to variable
	}
	private: System::Void radioButton11_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		radio_move = 7; // radio button checked and passing the move index to variable
	}
	private: System::Void radioButton12_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		radio_move = 8; // radio button checked and passing the move index to variable
	}
	private: System::Void radioButton13_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void radioButton14_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void radioButton15_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void radioButton16_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void radioButton17_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) { // OOPS! Misclick!
	}

		   void update() { // function for updating the window
			   groupBox3->Visible = true; // showing the groupbox containing the game field and make move button
			   label3->Visible = true; // showing the field state label
			   label4->Visible = true; // showing the label which shows current players turn

			   string temptext; // temporary variable for storing strings
			   for (int const& i : newgame.numberslist) { // iterating the field
				   temptext = temptext + to_string(i) + "     "; // creating text of field
			   }
			   label3->Text = gcnew String(temptext.c_str()); // storing text into the label

			   temptext = "Player 1"; // temporary variable for storing strings
			   if (newgame.player != 1) { // if it is player 1
				   temptext = "Player 1"; // adding string of the current players turn
			   }
			   else { // if it is player 2
				   temptext = "Player 2"; // adding string of the current players turn
			   }
			   label4->Text = gcnew String(temptext.c_str()); // storing string to label 4

			   temptext = "Player 1 score: " + to_string(newgame.player_score1); // temporary variable for storing strings adding the player 1 score
			   label5->Text = gcnew String(temptext.c_str()); // storing player 1 score into label 5
			   temptext = "Player 2 score: " + to_string(newgame.player_score2); // temporary variable for storing strings adding the player 2 score
			   label6->Text = gcnew String(temptext.c_str()); // storing player 2 score into label 6


			   if (newgame.numberslist.size() > 1) { // checking the field size
				   radioButton5->Visible = true; // showing radioButton5 which is meant for move 1
				   button2->Visible = true; // showing button2 which is meant for making a move
				   label5->Visible = true; // showing player 1 score on label5
				   label6->Visible = true; // showing player 2 score on label6
			   }
			   else { // if field size is equal to 1 or less the game is over
				   radioButton5->Visible = false; // hidding radioButton5 which is meant for move 1
				   button2->Visible = false; // hidding button2 which is meant for making a move
				   label7->Visible = true; // showing label7 which is meant for game outcome
				   if (newgame.player_score1 > newgame.player_score2) { // checking if player 1 score is higher than player 2
					   temptext = "Player 1 Wins"; // storing the game outcome text into temporary variable
				   }
				   if (newgame.player_score1 < newgame.player_score2) { // checking if player 2 score is higher than player 1
					   temptext = "Player 2 Wins"; // storing the game outcome text into temporary variable
				   }
				   if (newgame.player_score1 == newgame.player_score2) { // checking if scores of both players are equal
					   temptext = "It's a tie"; // storing the game outcome text into temporary variable
				   }
				   label7->Text = gcnew String(temptext.c_str()); // storing the game outcome into label7
			   }
			   if (newgame.numberslist.size() > 2) { // checking if size of field is greater than 2
				   radioButton6->Visible = true; // if size is greater than 2 showing another radio button for move
			   }
			   else { radioButton6->Visible = false; } // hidding the button if the field size is not greater than 2
			   if (newgame.numberslist.size() > 3) { // checking if size of field is greater than 3
				   radioButton7->Visible = true; // if size is greater than 3 showing another radio button for move
			   }
			   else { radioButton7->Visible = false; } // hidding the button if the field size is not greater than 3
			   if (newgame.numberslist.size() > 4) { // checking if size of field is greater than 4
				   radioButton8->Visible = true; // if size is greater than 4 showing another radio button for move
			   }
			   else { radioButton8->Visible = false; } // hidding the button if the field size is not greater than 4
			   if (newgame.numberslist.size() > 5) { // checking if size of field is greater than 5
				   radioButton9->Visible = true; // if size is greater than 5 showing another radio button for move
			   }
			   else { radioButton9->Visible = false; } // hidding the button if the field size is not greater than 5
			   if (newgame.numberslist.size() > 6) { // checking if size of field is greater than 6
				   radioButton10->Visible = true; // if size is greater than 6 showing another radio button for move
			   }
			   else { radioButton10->Visible = false; } // hidding the button if the field size is not greater than 6
			   if (newgame.numberslist.size() > 7) { // checking if size of field is greater than 7
				   radioButton11->Visible = true; // if size is greater than 7 showing another radio button for move
			   }
			   else { radioButton11->Visible = false; } // hidding the button if the field size is not greater than 7
			   if (newgame.numberslist.size() > 8) { // checking if size of field is greater than 8
				   radioButton12->Visible = true; // if size is greater than 8 showing another radio button for move
			   }
			   else { radioButton12->Visible = false; } // hidding the button if the field size is not greater than 8
		   }

		   void restartgame(list<int> list, int player, int score1, int score2) { // function for resetting the game object
			   newgame.numberslist = list; // passing the field
			   newgame.player = player; // passing the value of which players move it is
			   newgame.player_score1 = score1; // passing the score of player 1
			   newgame.player_score2 = score2; // passing the score of player 2
		   }

		   void computermove() { // function for making a computers move
			   if (!newgame.numberslist.empty()) { // just a check for whatever reason

				   vector<pair<int, int>> moves = getmoves(newgame.numberslist); // creating integer pair vector named moves and passing the valid moves into it

				   if (!moves.empty()) { // checking if there are any valid moves

					   if (newgame.player == 0) { // checking if it is player 1 move

						   if (player1_human != 1) { // checking if player 1 is not a human player
							   int bestscore = -999; // setting up low value in order to make sure that first score value is passed into bestscore for maximizer
							   pair<int, int> bestmove; // creating an integer pair variable for best move storage
							   for (const pair<int, int>& move : moves) { // iterating through moves
								   game tempgame = makemove(newgame, move); // creating a temporary game object and initiating makemove function
								   int score = minmax(tempgame, newgame.numberslist.size()); // creating integer variable and initiating minmax function in order to get score
								   if (score > bestscore) { // checking if score variable value is higher than bestscore variable value
									   bestscore = score; // storing new bestscore value if true
									   bestmove = move; // storing the move for this score
								   }
							   }
							   newgame = makemove(newgame, bestmove); // making a move for computer player
							   update(); // updating the window
						   }
					   }

					   else { // means it is player 2 move

						   if (player2_human != 1) { // checking if player 2 is not a human player
							   int bestscore = 999; // setting up high value in order to make sure that first score value is passed into bestscore for minimizer
							   pair<int, int> bestmove; // creating an integer pair variable for best move storage
							   for (const pair<int, int>& move : moves) { // iterating through moves
								   game tempgame = makemove(newgame, move); // creating a temporary game object and initiating makemove function
								   int score = minmax(tempgame, newgame.numberslist.size()); // creating integer variable and initiating minmax function in order to get score
								   if (score < bestscore) { // checking if score variable value is higher than bestscore variable value
									   bestscore = score; // storing new bestscore value if true
									   bestmove = move; // storing the move for this score
								   }
							   }
							   newgame = makemove(newgame, bestmove); // making a move for computer player
							   update(); // updating the window

						   }
					   }

					   if (((newgame.player == 0) && (player1_human != 1)) || ((newgame.player == 1) && (player2_human != 1))) { // after making a move the variable player has changed either to 1 or 0 so checking if next player is a computer or human player
						   computermove(); // creating a loop if next player is computer player
					   }

				   }
			   }
		   }


	};



}