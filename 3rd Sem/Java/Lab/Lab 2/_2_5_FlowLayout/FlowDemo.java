import javax.swing.*;
import java.awt.*;

public class FlowDemo extends JFrame {
    public FlowDemo(){
        setSize(720, 480);
        JButton [] btn = new JButton[3];
        for (int i = 0; i < btn.length; i++) {
            btn[i] = new JButton(""+i);
            add(btn[i]);
        }
        setLayout(new FlowLayout(FlowLayout.LEFT));
        setVisible(true);
    }

    public static void main(String[] args) {
        new FlowDemo();
    }
}
