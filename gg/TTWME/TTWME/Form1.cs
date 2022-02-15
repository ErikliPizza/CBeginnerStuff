using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Data.OleDb;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.IO;
namespace TTWME
{
    public partial class Form1 : Form
    {


        OleDbConnection bag = new OleDbConnection();
        OleDbCommand sorgu = new OleDbCommand();
        private int zaman;

        public Form1()
        {
            InitializeComponent();

        }

        
        
        /*gönder butonu*/
        private void button1_Click(object sender, EventArgs e)
        {
            /*konuşmalar*/
            listBox1.Items.Add(textBox1.Text);
            if (textBox1.Text == "Merhaba" || textBox1.Text == "merhaba" || textBox1.Text == "Selam" || textBox1.Text == "selam")
            {
                listBox2.Items.Add("Selam");
                timer1.Enabled = false;
            }
            else if (textBox1.Text == "Bende ne yapayım işte her zaman ki gibi boş boş uğraşıyorum öyle" || textBox1.Text == "bende ne yapayım işte her zaman ki gibi boş boş uğraşıyorum öyle")
                listBox2.Items.Add("Eee ne yaptın bugün raporla bakayım bi hzjskzs");
            else if (textBox1.Text == "Ne yapıyorsun bakem" || textBox1.Text == "ne yapıyorsun bakem" || textBox1.Text == "napıyosun" || textBox1.Text == "Napıyosun" || textBox1.Text == "Napıyosun bakem" || textBox1.Text == "napıyosun bakem" || textBox1.Text == "bende iyidir napıyosun" || textBox1.Text == "Bende iyidir napıyosun" || textBox1.Text == "Bende iyidir napıyosun bakem" || textBox1.Text == "bende iyidir napıyosun bakem" || textBox1.Text == "ben de iyidir napıyosun bakem" || textBox1.Text == "Ben de iyidir napıyosun bakem" || textBox1.Text == "bende iyidir ne yapıyorsun bakem" || textBox1.Text == "Bende iyidir ne yapıyorsun bakem" || textBox1.Text == "ben de iyidir ne yapıyorsun bakem" || textBox1.Text == "Ben de iyidir ne yapıyorsun bakem")
                listBox2.Items.Add("Yemek yedim yatıyorum öyle sen ne yapıyorsun ?");
            else if (textBox1.Text == "naber" || textBox1.Text == "Naber" || textBox1.Text == "Nasılsın" || textBox1.Text == "nasılsın")
                listBox2.Items.Add("iyidir seni sormalı ?");
            else if (textBox1.Text == "neden yazmıyorsun" || textBox1.Text == "Neden yazmıyorsun" || textBox1.Text == "Yazsana" || textBox1.Text == " yazsana" || textBox1.Text == "Ordamısın" || textBox1.Text == "ordamısın" || textBox1.Text == "yazmayacakmısın" || textBox1.Text == "Yazmayacakmısın")
                listBox2.Items.Add("Yazacak birşey bulamadım ki özür dilerim");
            else if (textBox1.Text == "Hadi görüşürüz" || textBox1.Text == "hadi görüşürüz" || textBox1.Text == "görüşürüz" || textBox1.Text == "Görüşürüz" || textBox1.Text == "neyse görüşürüz bakem" || textBox1.Text == " Neyse görüşürüz bakem" || textBox1.Text == "sonra görüşürüz kaçtım ben" || textBox1.Text == "Sonra görüşürüz kaçtım ben")
                listBox2.Items.Add("Tamam o zaman iyi eğlenceler sana benimde işim vardı zaten görüşürüz");
            
           
 
            /*textboxu sıfırla*/
           textBox1.Clear();
        }
           

        private void button2_Click(object sender, EventArgs e)
        {
            listBox1.Items.Clear();
            listBox2.Items.Clear();
        }

        
        
        
        
        
        /*mesajları kaydet*/
        private void button3_Click(object sender, EventArgs e)
        {

            int a;

            string[] Yazi = new String[listBox1.Items.Count];

            listBox1.Items.CopyTo(Yazi, 0);
            System.IO.File.WriteAllLines(@"C:\msj.txt", Yazi);
            
            string dosya = @"C:\msj.txt";

            if (File.Exists("msj.txt"))
            {
                Console.WriteLine(dosya + " dosyası bulundu");
                
            }
            else 
            {

                Console.WriteLine(dosya+" dosyası bulunamadı");

            }










        }

        private void textBox1_MouseEnter(object sender, EventArgs e)
        {

        }

        private void textBox1_AcceptsTabChanged(object sender, EventArgs e)
        {

        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void textBox1_KeyPress(object sender, KeyPressEventArgs e)
        {
            if (e.KeyChar == 13)
            {
                button1.PerformClick();
                

            }
        }

        private void button2_KeyDown(object sender, KeyEventArgs e)
        {



       }

        private void Form1_KeyDown(object sender, KeyEventArgs e)
        {
            if (e.KeyCode == Keys.F1)

                button2.PerformClick();
        }

        private void textBox1_KeyDown(object sender, KeyEventArgs e)
        {
            if (e.KeyCode == Keys.F1)

                button2.PerformClick();
        }

        private void listBox1_KeyDown(object sender, KeyEventArgs e)
        {

        }

        private void timer1_Tick(object sender, EventArgs e)
        {

            timer1.Enabled = true;
            timer1.Interval = 100;
            
            }

        private void Form1_Load(object sender, EventArgs e)
        {


            timer1.Enabled = true;

            timer1.Interval = 1000;

            label1.Text = zaman.ToString();
        }

        private void button4_Click(object sender, EventArgs e)
        {

        
        }

        private void button5_Click(object sender, EventArgs e)
        {
            timer1.Enabled = true;
        }

        private void button6_Click(object sender, EventArgs e)
        {
            timer1.Enabled = false;
        }
   }
}
