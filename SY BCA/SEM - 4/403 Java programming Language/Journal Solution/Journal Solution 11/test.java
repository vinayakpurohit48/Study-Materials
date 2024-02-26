import java.applet.*;
import java.awt.*;

public class test extends Applet {
    public void paint(Graphics g) {
        g.setColor(Color.YELLOW);
        g.fillOval(200, 200, 200, 200); 
        
        g.setColor(Color.BLACK);
        g.fillOval(250, 250, 25, 25);
        g.fillOval(325, 250, 25, 25);
        
        g.fillArc(250, 300, 100, 50, 180, 180);
    }
}

/*
<applet code="test.class",height="500",width="500">

</applet>
*/