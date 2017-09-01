import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
public class Fjalia extends JFrame implements ActionListener{
	private JButton butoni1,butoni2;
	private JTextField abc;
	private JLabel fusha,f1,f2;
	
	public Fjalia(){
		super("Detyra");
		setSize(450,200);
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		setVisible(true);
		Container c=getContentPane();
		c.setBackground(Color.BLUE);
		c.setLayout(new FlowLayout());
	 fusha= new JLabel("Shkruani fjaline !");
	  abc= new JTextField(20);
		abc.setFont(new Font("Serif",Font.PLAIN,14));
		c.add(abc);
		c.add(fusha);
		f1= new JLabel("Per te llogaritur numrin e karaktereve ne fjali 
kliko tek funksioni 1");
		butoni1=new JButton("Funksioni 1");
		f2=new JLabel(" Per te gjetur sa here perseritet nje karakter ne 
fjali kliko te  funksioni 2");
		butoni2=new JButton("Funksioni 2");
		c.add(f1);
		c.add(butoni1);
		c.add(f2);
		c.add(butoni2);
		
		setContentPane(c);
		butoni1.addActionListener(this);
		butoni2.addActionListener(this);
		
	
			
		}public static int numero(String a){
			int numri=0;
			for(int i=0;i<a.length();i++){
				numri = i+1;
			}
			return numri;
			}
		public static int perseritur(char karakteri , String a){
			int saHere= 0;
			for (int i = 0; i<a.length();i++){
				if (karakteri==a.charAt(i)){ 
					saHere +=1;}
				
				}return saHere;
			}
			
		
		@Override
		public void actionPerformed(ActionEvent e) {
			String fjaliaa=abc.getText();
			if(e.getSource()==butoni1)
				
JOptionPane.showMessageDialog(null,numero(fjaliaa));
			else 
			{ String a =JOptionPane.showInputDialog("Ju lutem , 
shkruani nje karakter");
			char karakteri=a.charAt(0);
			
			 JOptionPane.showMessageDialog(null, 
perseritur(karakteri,fjaliaa));
		}}
	public static void main(String[]args){ Fjalia eshte=new Fjalia();
	
}
}
