import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.net.Socket;

public class Client2 {
    public static void main(String[] args) throws Exception {
        Socket s = new Socket("localhost", 5500);
        int num = 10;
        DataInputStream dis = new DataInputStream(s.getInputStream());
        DataOutputStream dos = new DataOutputStream(s.getOutputStream());
        dos.writeInt(num);
        int ans = dis.readInt();
        System.out.println("Answer: " + ans);
    }
}
