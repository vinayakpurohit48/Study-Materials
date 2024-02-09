import java.applet.Applet;
import java.awt.Graphics;

public class HelloWorldApplet extends Applet {
    public void paint(Graphics g) {
        g.drawString("Hello, World!", 20, 20);
    }
}

/*
<applet code="HelloWorldApplet.class",height="500",width="500">

</applet>
*/