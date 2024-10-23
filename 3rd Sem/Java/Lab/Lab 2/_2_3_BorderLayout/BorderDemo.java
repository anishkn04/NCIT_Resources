import javax.swing.*;
import java.awt.*;

public class BorderDemo {
    public BorderDemo(){
        JFrame f = new JFrame();
        f.setSize(720, 480);
        JButton north = new JButton("North");
        JButton south = new JButton("South");
        JButton west = new JButton("West");
        JButton east = new JButton("East");
        JButton center = new JButton("Center");
        f.add(north, BorderLayout.NORTH);
        f.add(south, BorderLayout.SOUTH);
        f.add(east, BorderLayout.EAST);
        f.add(west, BorderLayout.WEST);
        f.add(center, BorderLayout.CENTER);
//        f.add(center)
//        f.setLayout(new BorderLayout());
        f.setVisible(true);
    }

    public static void main(String[] args) {
        new BorderDemo();
    }
}
