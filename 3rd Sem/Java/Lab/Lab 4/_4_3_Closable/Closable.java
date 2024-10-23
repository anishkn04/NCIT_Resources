package _4_3_Closable;

import javax.swing.*;
import java.awt.event.*;

public class Closable implements WindowListener {
    JFrame f;

    public Closable() {
        f = new JFrame();
        f.setSize(200, 300);
        f.setVisible(true);
        f.addWindowListener(this); // Correctly add the WindowListener
    }

    @Override
    public void windowOpened(WindowEvent e) {

    }

    @Override
    public void windowClosing(WindowEvent e) {
        int choice = JOptionPane.showConfirmDialog(f, "Are you sure you want to close?");
        if (choice == JOptionPane.YES_OPTION) {
            f.dispose();  // Close the frame if the user chooses "Yes"
        }
    }

    @Override
    public void windowClosed(WindowEvent e) {

    }

    @Override
    public void windowIconified(WindowEvent e) {

    }

    @Override
    public void windowDeiconified(WindowEvent e) {

    }

    @Override
    public void windowActivated(WindowEvent e) {

    }

    @Override
    public void windowDeactivated(WindowEvent e) {

    }

    // Implement other WindowListener methods if needed

    public static void main(String[] args) {
        new Closable();
    }
}
