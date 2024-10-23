import java.net.DatagramPacket;
import java.net.DatagramSocket;
import java.net.InetAddress;

public class UDPClient {
    public static void main(String[] args) throws Exception {
        DatagramSocket client = new DatagramSocket();
        String msg = "Hello";
        byte[] snBuffer = msg.getBytes();
        InetAddress serverAdd = InetAddress.getLocalHost();
        DatagramPacket snPacket = new DatagramPacket(snBuffer, snBuffer.length, serverAdd, 5500);
        client.send(snPacket);
        byte[] rxBuffer = new byte[1024];
        DatagramPacket rxPacket = new DatagramPacket(rxBuffer, rxBuffer.length);
        client.receive(rxPacket);
        String response = new String(rxPacket.getData());
        System.out.println("Response: "+response);
        client.close();
    }
}
