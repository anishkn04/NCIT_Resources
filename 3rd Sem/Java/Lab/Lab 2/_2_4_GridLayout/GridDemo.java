import javax.swing.*;
import java.awt.*;
import java.util.*;
public class GridDemo extends JFrame {
    public GridDemo(){
        JButton [] btn = new JButton[6];
        for (int i = 0; i < btn.length;i++) {
            btn[i] = new JButton("Btn"+i);
            add(btn[i]);
        }
        setSize(720, 480);
        setLayout(new GridLayout(2, 3));
        setVisible(true);
    }

    public static void main(String[] args) {
        new GridDemo();
    }
}
