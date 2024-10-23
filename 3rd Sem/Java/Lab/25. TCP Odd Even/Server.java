import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.net.ServerSocket;
import java.net.Socket;

public class Server{
    public static void main(String[] args) throws Exception {
        ServerSocket ss = new ServerSocket(5500);
        System.out.println("Server Running on 5500");
        Socket s = ss.accept();
        System.out.println("Client Connected");
        DataInputStream dis = new DataInputStream(s.getInputStream());
        DataOutputStream dos = new DataOutputStream(s.getOutputStream());
        int num = dis.readInt();
        if(num%2==0){
            dos.writeUTF("Even");
        }
        else{
            dos.writeUTF("Odd");
        }
        dos.flush();
        dos.close();
        dis.close();
        s.close();
        ss.close();
    }
}