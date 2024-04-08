import java.applet.*;
import java.awt.*;

public class applet extends Applet {

    public void paint(Graphics g) {
        String color = getParameter("color");
        Color backColor = Color.decode(color);
        setBackground(backColor);
    }
}
/*
<applet code="applet.class" width="1000" height="1000">
    <param name="color" value="#32a6a8"></param>
</applet>
*/