import javax.swing.*;
import java.awt.*;
import javax.swing.JComponent;
import java.awt.Graphics;

public class Cercle extends JComponent {

	private int v = 5;

	public Cercle (){
		super();
		this.setPreferredSize (new Dimension (500,100));
	}

	public void upV (){
		if (v !=9){
			v ++;
			this.repaint ();
		}
	}

	public void dwV (){
		if (v!=0){
			v--;
			this.repaint();
		}
	}

	@Override
	protected void paintComponent (Graphics c){
		Graphics p = c.create ();

		if (this.isOpaque()){			
			p.setColor(this.getBackground());
			p.fillRect(0,0,this.getWidth(), this.getHeight());
		}

		p.setColor (Color.YELLOW);
		int x1, x2;

		for (x1=0; x1<v; x1++){
			p.fillOval (5*(x1+1)+ (this.getWidth()*x1/10), 25, 50,50);
		}

		p.setColor (Color.GRAY);

		for (x2 = x1; x2<9; x2++){
			p.fillOval (5*(x2+1)+ (this.getWidth()*x2/10), 25, 50,50);
		}
	}
}