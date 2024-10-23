import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.net.ServerSocket;
import java.net.Socket;

public class Server{
    public static void main(String[] args) throws Exception {
        
        ServerSocket ss = new ServerSocket(5500);
        System.out.println("Server Running on 5500");
        while(true){
            Socket s = ss.accept();
            System.out.println("Client Connected");
            ClientHandler ch = new ClientHandler(s);
            ch.start();
        }
    }
}

class ClientHandler extends Thread{
    Socket s;
    public ClientHandler(Socket s){
        this.s = s;
    }
    @Override
    public void run(){
        try{
            DataInputStream dis = new DataInputStream(s.getInputStream());
            DataOutputStream dos = new DataOutputStream(s.getOutputStream());
            while (true) {
                int num = dis.readInt();
                int sq = num*num;
                dos.writeInt(sq);
                dos.flush();
                dos.close();
                dis.close();
                s.close();
            }
        }catch(Exception e){
            System.out.println(e.getMessage());
        }
    }
}