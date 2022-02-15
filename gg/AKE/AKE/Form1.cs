using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace AKE


    
{
    public partial class Form1 : Form
    {
        int sayi=6;
        public Form1()
        {
            InitializeComponent();





        }

        private void Form1_Load(object sender, EventArgs e)
        {
            timer1.Start();
        }

        private void button1_Click(object sender, EventArgs e)
        {

            
            /*itemi ekle */    
            listBox1.Items.Add(textBox1.Text);
                     
            /* konuşmalar */
            if (textBox1.Text == "Merhaba" || textBox1.Text == "merhaba" || textBox1.Text == "Selam" || textBox1.Text == "selam")
                listBox2.Items.Add("Selam");
            else if (textBox1.Text == "Bende ne yapayım işte her zaman ki gibi boş boş uğraşıyorum öyle" || textBox1.Text == "bende ne yapayım işte her zaman ki gibi boş boş uğraşıyorum öyle")
                listBox2.Items.Add("Eee ne yaptın bugün raporla bakayım bi hzjskzs");
            else if (textBox1.Text == "Ne yapıyorsun bakem" || textBox1.Text == "ne yapıyorsun bakem" || textBox1.Text == "napıyosun" || textBox1.Text == "Napıyosun" || textBox1.Text == "Napıyosun bakem" || textBox1.Text == "napıyosun bakem" || textBox1.Text == "bende iyidir napıyosun" || textBox1.Text == "Bende iyidir napıyosun" || textBox1.Text == "Bende iyidir napıyosun bakem" || textBox1.Text == "bende iyidir napıyosun bakem" || textBox1.Text == "ben de iyidir napıyosun bakem" || textBox1.Text == "Ben de iyidir napıyosun bakem" || textBox1.Text == "bende iyidir ne yapıyorsun bakem" || textBox1.Text == "Bende iyidir ne yapıyorsun bakem" || textBox1.Text == "ben de iyidir ne yapıyorsun bakem" || textBox1.Text == "Ben de iyidir ne yapıyorsun bakem")
                listBox2.Items.Add("Yemek yedim yatıyorum öyle bal sen ne yapıyorsun ?");
            else if (textBox1.Text == "naber" || textBox1.Text == "Naber" || textBox1.Text == "Nasılsın" || textBox1.Text == "nasılsın")
                listBox2.Items.Add("iyidir seni bal sormalı ?");
            else if (textBox1.Text == "neden yazmıyorsun" || textBox1.Text == "Neden yazmıyorsun" || textBox1.Text == "Yazsana" || textBox1.Text == " yazsana" || textBox1.Text == "Ordamısın" || textBox1.Text == "ordamısın" || textBox1.Text == "yazmayacakmısın" || textBox1.Text == "Yazmayacakmısın")
                listBox2.Items.Add("Yazacak birşey bulamadım ki bal özür dilerim");
            else if (textBox1.Text == "Hadi görüşürüz" || textBox1.Text == "hadi görüşürüz" || textBox1.Text == "görüşürüz" || textBox1.Text == "Görüşürüz" || textBox1.Text == "neyse görüşürüz bakem" || textBox1.Text == " Neyse görüşürüz bakem" || textBox1.Text == "sonra görüşürüz kaçtım ben" || textBox1.Text == "Sonra görüşürüz kaçtım ben")
                listBox2.Items.Add( "Tamam o zaman iyi eğlenceler sana benimde işim vardı zaten görüşürüz samoşum ");

            /*boxu temizle*/
            textBox1.Clear();
        
        }
        

        private void textBox1_KeyPress(object sender, KeyPressEventArgs e)
        {
            if (e.KeyChar == 13)
            {
                button1.PerformClick();


            }
        }

        private void timer1_Tick(object sender, EventArgs e)
        {

            label1.Text = DateTime.Now.ToLongTimeString();

        }

        private void toolStripMenuItem1_Click(object sender, EventArgs e)
        {

        }

        private void selamToolStripMenuItem_Click(object sender, EventArgs e)
        {

        }

        private void Form1_PreviewKeyDown(object sender, PreviewKeyDownEventArgs e)
        {

        }


    }
}
