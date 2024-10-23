import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.net.Socket;

public class Client {
    public static void main(String[] args) throws Exception {
        Socket s = new Socket("localhost", 5500);
        int num = 11;
        DataInputStream dis = new DataInputStream(s.getInputStream());
        DataOutputStream dos = new DataOutputStream(s.getOutputStream());
        dos.writeInt(num);
        String ans = dis.readUTF();
        System.out.println("The number is: "+ans);
        dos.close();
        dis.close();
        s.close();
    }
}
