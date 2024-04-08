import java.applet.*;
import java.awt.*;

public class applet extends Applet {

    public void paint(Graphics g) {
		int value = Integer.parseInt(getParameter("val"));
		int size = Integer.parseInt(getParameter("size"));
		
        for (int i = 1; i <=value; i++) {
			
            g.drawRect(i * 100,i * 100,size,size);
        }
    }
}
/*
<applet code="applet.class" width="1000" height="1000">
    <param name="val" value="3"></param>
	<param name="size" value="100"></param>
</applet>
*/