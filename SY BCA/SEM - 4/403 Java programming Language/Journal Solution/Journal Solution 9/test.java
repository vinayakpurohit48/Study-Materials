import java.applet.*;
import java.awt.*;

public class test extends Applet {

    public void paint(Graphics g) {
		int value = Integer.parseInt(getParameter("val"));
		int size = Integer.parseInt(getParameter("size"));
		
        for (int i = 0; i < value; i++) {
			
            g.drawRect(100,i * 100,size,size);
        }
    }
}
/*
<applet code="test.class" width="500" height="500">
    <param name="val" value="5"></param>
	<param name="size" value="100"></param>
</applet>
*/