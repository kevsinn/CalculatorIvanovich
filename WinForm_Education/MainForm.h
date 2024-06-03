#pragma once

namespace WinFormEducation {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbl_mainname;

	private: System::Windows::Forms::Label^ lbl_result;
	private: System::Windows::Forms::Button^ btn_clear;

	private: System::Windows::Forms::Button^ btn_plusminus;
	private: System::Windows::Forms::Button^ btn_percent;
	private: System::Windows::Forms::Button^ btn_divide;





	private: System::Windows::Forms::Button^ btn_multiply;
	private: System::Windows::Forms::Button^ btn_9;
	private: System::Windows::Forms::Button^ btn_8;
	private: System::Windows::Forms::Button^ btn_7;




	private: System::Windows::Forms::Button^ btn_minus;

	private: System::Windows::Forms::Button^ btn_6;

	private: System::Windows::Forms::Button^ btn_5;

	private: System::Windows::Forms::Button^ btn_4;

	private: System::Windows::Forms::Button^ btn_plus;
	private: System::Windows::Forms::Button^ btn_3;
	private: System::Windows::Forms::Button^ btn_2;
	private: System::Windows::Forms::Button^ btn_1;




	private: System::Windows::Forms::Button^ btn_equal;

	private: System::Windows::Forms::Button^ btn_dot;

	private: System::Windows::Forms::Button^ btn_0;

	private: float first_num;
	private: char user_action = ' ';
	private: bool is_equal = false;



	protected:

	protected:




	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->lbl_mainname = (gcnew System::Windows::Forms::Label());
			this->lbl_result = (gcnew System::Windows::Forms::Label());
			this->btn_clear = (gcnew System::Windows::Forms::Button());
			this->btn_plusminus = (gcnew System::Windows::Forms::Button());
			this->btn_percent = (gcnew System::Windows::Forms::Button());
			this->btn_divide = (gcnew System::Windows::Forms::Button());
			this->btn_multiply = (gcnew System::Windows::Forms::Button());
			this->btn_9 = (gcnew System::Windows::Forms::Button());
			this->btn_8 = (gcnew System::Windows::Forms::Button());
			this->btn_7 = (gcnew System::Windows::Forms::Button());
			this->btn_minus = (gcnew System::Windows::Forms::Button());
			this->btn_6 = (gcnew System::Windows::Forms::Button());
			this->btn_5 = (gcnew System::Windows::Forms::Button());
			this->btn_4 = (gcnew System::Windows::Forms::Button());
			this->btn_plus = (gcnew System::Windows::Forms::Button());
			this->btn_3 = (gcnew System::Windows::Forms::Button());
			this->btn_2 = (gcnew System::Windows::Forms::Button());
			this->btn_1 = (gcnew System::Windows::Forms::Button());
			this->btn_equal = (gcnew System::Windows::Forms::Button());
			this->btn_dot = (gcnew System::Windows::Forms::Button());
			this->btn_0 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lbl_mainname
			// 
			resources->ApplyResources(this->lbl_mainname, L"lbl_mainname");
			this->lbl_mainname->ForeColor = System::Drawing::SystemColors::MenuText;
			this->lbl_mainname->Name = L"lbl_mainname";
			// 
			// lbl_result
			// 
			this->lbl_result->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->lbl_result->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			resources->ApplyResources(this->lbl_result, L"lbl_result");
			this->lbl_result->Name = L"lbl_result";
			// 
			// btn_clear
			// 
			this->btn_clear->BackColor = System::Drawing::SystemColors::ButtonShadow;
			resources->ApplyResources(this->btn_clear, L"btn_clear");
			this->btn_clear->Name = L"btn_clear";
			this->btn_clear->UseVisualStyleBackColor = false;
			this->btn_clear->Click += gcnew System::EventHandler(this, &MainForm::btn_clear_Click);
			// 
			// btn_plusminus
			// 
			this->btn_plusminus->BackColor = System::Drawing::SystemColors::ButtonShadow;
			resources->ApplyResources(this->btn_plusminus, L"btn_plusminus");
			this->btn_plusminus->Name = L"btn_plusminus";
			this->btn_plusminus->UseVisualStyleBackColor = false;
			this->btn_plusminus->Click += gcnew System::EventHandler(this, &MainForm::btn_plusminus_Click);
			// 
			// btn_percent
			// 
			this->btn_percent->BackColor = System::Drawing::SystemColors::ButtonShadow;
			resources->ApplyResources(this->btn_percent, L"btn_percent");
			this->btn_percent->Name = L"btn_percent";
			this->btn_percent->UseVisualStyleBackColor = false;
			this->btn_percent->Click += gcnew System::EventHandler(this, &MainForm::btn_percent_Click);
			// 
			// btn_divide
			// 
			this->btn_divide->BackColor = System::Drawing::SystemColors::Info;
			resources->ApplyResources(this->btn_divide, L"btn_divide");
			this->btn_divide->Name = L"btn_divide";
			this->btn_divide->UseVisualStyleBackColor = false;
			this->btn_divide->Click += gcnew System::EventHandler(this, &MainForm::btn_divide_Click);
			// 
			// btn_multiply
			// 
			this->btn_multiply->BackColor = System::Drawing::SystemColors::Info;
			resources->ApplyResources(this->btn_multiply, L"btn_multiply");
			this->btn_multiply->Name = L"btn_multiply";
			this->btn_multiply->UseVisualStyleBackColor = false;
			this->btn_multiply->Click += gcnew System::EventHandler(this, &MainForm::btn_multiply_Click);
			// 
			// btn_9
			// 
			this->btn_9->BackColor = System::Drawing::SystemColors::ButtonFace;
			resources->ApplyResources(this->btn_9, L"btn_9");
			this->btn_9->Name = L"btn_9";
			this->btn_9->UseVisualStyleBackColor = false;
			this->btn_9->Click += gcnew System::EventHandler(this, &MainForm::AddNumToLable);
			// 
			// btn_8
			// 
			this->btn_8->BackColor = System::Drawing::SystemColors::ButtonFace;
			resources->ApplyResources(this->btn_8, L"btn_8");
			this->btn_8->Name = L"btn_8";
			this->btn_8->UseVisualStyleBackColor = false;
			this->btn_8->Click += gcnew System::EventHandler(this, &MainForm::AddNumToLable);
			// 
			// btn_7
			// 
			this->btn_7->BackColor = System::Drawing::SystemColors::ButtonFace;
			resources->ApplyResources(this->btn_7, L"btn_7");
			this->btn_7->Name = L"btn_7";
			this->btn_7->UseVisualStyleBackColor = false;
			this->btn_7->Click += gcnew System::EventHandler(this, &MainForm::AddNumToLable);
			// 
			// btn_minus
			// 
			this->btn_minus->BackColor = System::Drawing::SystemColors::Info;
			resources->ApplyResources(this->btn_minus, L"btn_minus");
			this->btn_minus->Name = L"btn_minus";
			this->btn_minus->UseVisualStyleBackColor = false;
			this->btn_minus->Click += gcnew System::EventHandler(this, &MainForm::btn_minus_Click);
			// 
			// btn_6
			// 
			this->btn_6->BackColor = System::Drawing::SystemColors::ButtonFace;
			resources->ApplyResources(this->btn_6, L"btn_6");
			this->btn_6->Name = L"btn_6";
			this->btn_6->UseVisualStyleBackColor = false;
			this->btn_6->Click += gcnew System::EventHandler(this, &MainForm::AddNumToLable);
			// 
			// btn_5
			// 
			this->btn_5->BackColor = System::Drawing::SystemColors::ButtonFace;
			resources->ApplyResources(this->btn_5, L"btn_5");
			this->btn_5->Name = L"btn_5";
			this->btn_5->UseVisualStyleBackColor = false;
			this->btn_5->Click += gcnew System::EventHandler(this, &MainForm::AddNumToLable);
			// 
			// btn_4
			// 
			this->btn_4->BackColor = System::Drawing::SystemColors::ButtonFace;
			resources->ApplyResources(this->btn_4, L"btn_4");
			this->btn_4->Name = L"btn_4";
			this->btn_4->UseVisualStyleBackColor = false;
			this->btn_4->Click += gcnew System::EventHandler(this, &MainForm::AddNumToLable);
			// 
			// btn_plus
			// 
			this->btn_plus->BackColor = System::Drawing::SystemColors::Info;
			resources->ApplyResources(this->btn_plus, L"btn_plus");
			this->btn_plus->Name = L"btn_plus";
			this->btn_plus->UseVisualStyleBackColor = false;
			this->btn_plus->Click += gcnew System::EventHandler(this, &MainForm::btn_plus_Click);
			// 
			// btn_3
			// 
			this->btn_3->BackColor = System::Drawing::SystemColors::ButtonFace;
			resources->ApplyResources(this->btn_3, L"btn_3");
			this->btn_3->Name = L"btn_3";
			this->btn_3->UseVisualStyleBackColor = false;
			this->btn_3->Click += gcnew System::EventHandler(this, &MainForm::AddNumToLable);
			// 
			// btn_2
			// 
			this->btn_2->BackColor = System::Drawing::SystemColors::ButtonFace;
			resources->ApplyResources(this->btn_2, L"btn_2");
			this->btn_2->Name = L"btn_2";
			this->btn_2->UseVisualStyleBackColor = false;
			this->btn_2->Click += gcnew System::EventHandler(this, &MainForm::AddNumToLable);
			// 
			// btn_1
			// 
			this->btn_1->BackColor = System::Drawing::SystemColors::ButtonFace;
			resources->ApplyResources(this->btn_1, L"btn_1");
			this->btn_1->Name = L"btn_1";
			this->btn_1->UseVisualStyleBackColor = false;
			this->btn_1->Click += gcnew System::EventHandler(this, &MainForm::AddNumToLable);
			// 
			// btn_equal
			// 
			this->btn_equal->BackColor = System::Drawing::SystemColors::Info;
			resources->ApplyResources(this->btn_equal, L"btn_equal");
			this->btn_equal->Name = L"btn_equal";
			this->btn_equal->UseVisualStyleBackColor = false;
			this->btn_equal->Click += gcnew System::EventHandler(this, &MainForm::btn_equal_Click);
			// 
			// btn_dot
			// 
			this->btn_dot->BackColor = System::Drawing::SystemColors::ButtonFace;
			resources->ApplyResources(this->btn_dot, L"btn_dot");
			this->btn_dot->Name = L"btn_dot";
			this->btn_dot->UseVisualStyleBackColor = false;
			this->btn_dot->Click += gcnew System::EventHandler(this, &MainForm::btn_dot_Click);
			// 
			// btn_0
			// 
			this->btn_0->BackColor = System::Drawing::SystemColors::ButtonFace;
			resources->ApplyResources(this->btn_0, L"btn_0");
			this->btn_0->Name = L"btn_0";
			this->btn_0->UseVisualStyleBackColor = false;
			this->btn_0->Click += gcnew System::EventHandler(this, &MainForm::AddNumToLable);
			// 
			// MainForm
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->Controls->Add(this->btn_equal);
			this->Controls->Add(this->btn_dot);
			this->Controls->Add(this->btn_0);
			this->Controls->Add(this->btn_plus);
			this->Controls->Add(this->btn_3);
			this->Controls->Add(this->btn_2);
			this->Controls->Add(this->btn_1);
			this->Controls->Add(this->btn_minus);
			this->Controls->Add(this->btn_6);
			this->Controls->Add(this->btn_5);
			this->Controls->Add(this->btn_4);
			this->Controls->Add(this->btn_multiply);
			this->Controls->Add(this->btn_9);
			this->Controls->Add(this->btn_8);
			this->Controls->Add(this->btn_7);
			this->Controls->Add(this->btn_divide);
			this->Controls->Add(this->btn_percent);
			this->Controls->Add(this->btn_plusminus);
			this->Controls->Add(this->btn_clear);
			this->Controls->Add(this->lbl_result);
			this->Controls->Add(this->lbl_mainname);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Name = L"MainForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void AddNumToLable(System::Object^ sender, System::EventArgs^ e)
	{
		if(this->lbl_result->ForeColor != Color::Black)
		{
			this->lbl_result->ForeColor = Color::Black;
		}
		Button^ button = safe_cast<Button^>(sender);
		String^ Zero = "0";

		if (this->lbl_result->Text == Zero || is_equal)
		{
			this->lbl_result->Text = button->Text;
			is_equal = false;
		}
		else
			this->lbl_result->Text = this->lbl_result->Text + button->Text;
	}
	
	private: System::Void btn_plus_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		math_action('+');
	}
	private: System::Void btn_minus_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		math_action('-');
	}
	private: System::Void btn_multiply_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		math_action('*');
	}
	private: System::Void btn_divide_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		math_action('/');
	}

	private: System::Void btn_equal_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (user_action == ' ')
			return;

		float second = System::Convert::ToDouble(this->lbl_result->Text);
		float res{};

		switch (this->user_action)
		{
		case '+': res = this->first_num + second; break;
		case '-': res = this->first_num - second; break;
		case '*': res = this->first_num * second; break;
		case '%': res = this->first_num * second / 100; break;
		case '/':
			if (second == 0)
			{
				res = 0;
				this->lbl_result->ForeColor = Color::Red;
				MessageBox::Show(this, "Деление на ноль запрещено", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else
				res = this->first_num / second;
			break;
		}
		this->is_equal = true;
		this->lbl_result->Text = System::Convert::ToString(res);
	}
	private: System::Void math_action(char action)
	{
		this->first_num = System::Convert::ToDouble(this->lbl_result->Text);
		this->user_action = action;
		this->lbl_result->Text = "0";
	}

	private: System::Void btn_clear_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->lbl_result->Text = "0";
		this->lbl_result->ForeColor = Color::Black;
		this->first_num = 0;
		this->user_action = ' ';
		this->is_equal = false;
	}
	private: System::Void btn_plusminus_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		float num = System::Convert::ToDouble(this->lbl_result->Text);
		num *= -1;
		this->lbl_result->Text = System::Convert::ToString(num);
	}
	private: System::Void btn_percent_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		math_action('%');
	}
	private: System::Void btn_dot_Click(System::Object^ sender, System::EventArgs^ e)
	{
		String^ text = this->lbl_result->Text;
		if(!text->Contains(","))
			this->lbl_result->Text = text + ",";
	}
};
}
