import javax.swing.*;

public class BoxDemo extends JFrame{
    public BoxDemo(){
        setTitle("Box Demo");
        JButton [] btn = new JButton[5];
        for (int i = 0; i < 5; i++) {
            if(i==3){
                btn[i] = new JButton("Long named box "+(i+1));
                continue;
            }
            if(i==4){
                btn[i] = new JButton(""+(i+1));
                continue;
            }
            btn[i] = new JButton("Box "+(i+1));
        }
        for (int i = 0; i < 5; i++) {
            btn[i].setAlignmentX(JComponent.CENTER_ALIGNMENT);
            add(btn[i]);
        }
        setLayout(new BoxLayout(getContentPane(), BoxLayout.Y_AXIS));
        pack();
        setVisible(true);
    }

    public static void main(String[] args) {
        new BoxDemo();
    }
}
