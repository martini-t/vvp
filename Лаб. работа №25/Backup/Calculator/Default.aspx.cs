using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

namespace Calculator
{
    public partial class _Default : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {

        }

        protected static int i;
        protected static double n1;
        protected void Button13_Click(object sender, EventArgs e) // Кнопка "0"
        {
            TextBox1.Text += (sender as Button).Text;
        }

        protected void Button9_Click(object sender, EventArgs e) // Кнопка "1"
        {
          
            TextBox1.Text += (sender as Button).Text;
        }

        protected void Button10_Click(object sender, EventArgs e) // Кнопка "2"
        {
            TextBox1.Text += (sender as Button).Text;
        }

        protected void Button11_Click(object sender, EventArgs e) // Кнопка "3"
        {
            TextBox1.Text += (sender as Button).Text;
        }

        protected void Button5_Click(object sender, EventArgs e) // Кнопка "4"
        {
            TextBox1.Text += (sender as Button).Text;
        }

        protected void Button6_Click(object sender, EventArgs e) // Кнопка "5"
        {
            TextBox1.Text += (sender as Button).Text;
        }

        protected void Button7_Click(object sender, EventArgs e) // Кнопка "6"
        {
            TextBox1.Text += (sender as Button).Text;
        }

        protected void Button1_Click(object sender, EventArgs e) // Кнопка "7"
        {
            TextBox1.Text += (sender as Button).Text;
        }

        protected void Button2_Click(object sender, EventArgs e) // Кнопка "8"
        {
            TextBox1.Text += (sender as Button).Text;
        }

        protected void Button3_Click(object sender, EventArgs e) // Кнопка "9"
        {
            TextBox1.Text += (sender as Button).Text;
        }

        protected void Button14_Click(object sender, EventArgs e) // Кнопка "+"
        {
            i = 1;
            n1 = Convert.ToDouble(TextBox1.Text);
            TextBox1.Text = "";
        }

        protected void Button12_Click(object sender, EventArgs e) // Кнопка "-"
        {
            i = 2;
            n1 = Convert.ToDouble(TextBox1.Text);
            TextBox1.Text = "";
        }

        protected void Button8_Click(object sender, EventArgs e) // Кнопка "*"
        {
            i = 3;
            n1 = Convert.ToDouble(TextBox1.Text);
            TextBox1.Text = "";
        }

        protected void Button4_Click(object sender, EventArgs e) // Кнопка "/"
        {
            i = 4;
            n1 = Convert.ToDouble(TextBox1.Text);
            TextBox1.Text = "";
        }

        protected void Button16_Click(object sender, EventArgs e) // Кнопка "."
        {
            if ((TextBox1.Text != "") && (TextBox1.Text.IndexOf(",") == -1)) TextBox1.Text += ",";
        }

        protected void Button17_Click(object sender, EventArgs e) // Кнопка "C"
        {
            TextBox1.Text = "";
        }

        protected void Button15_Click(object sender, EventArgs e) // Кнопка "="
        {
            double n2, n3;
            if (i == 1)
            {
                n2 = Convert.ToDouble(TextBox1.Text);
                n3 = n1 + n2;
                TextBox1.Text = Convert.ToString(n3);
            }
            if (i == 2)
            {
                n2 = Convert.ToDouble(TextBox1.Text);
                n3 = n1 - n2;
                TextBox1.Text = Convert.ToString(n3);
            }
            if (i == 3)
            {
                n2 = Convert.ToDouble(TextBox1.Text);
                n3 = n1 * n2;
                TextBox1.Text = Convert.ToString(n3);
            }
            if (i == 4)
            {
                n2 = Convert.ToDouble(TextBox1.Text);
                n3 = n1 / n2;
                TextBox1.Text = Convert.ToString(n3);
            }
        }


    }
}