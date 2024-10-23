import java.net.*;


public class UDPServer {
    public static void main(String[] args) throws Exception {
        DatagramSocket server = new DatagramSocket(5500);
        byte[] rxBuffer = new byte[1024];
        DatagramPacket rxPacket = new DatagramPacket(rxBuffer, rxBuffer.length);
        server.receive(rxPacket);
        String msg = new String(rxPacket.getData());
        System.out.println("Client Message: "+msg);
        String reply = msg.toUpperCase();
        byte[] snBuffer = reply.getBytes();
        InetAddress clientAdd = rxPacket.getAddress();
        int clientPort = rxPacket.getPort();
        DatagramPacket snPacket = new DatagramPacket(snBuffer, snBuffer.length, clientAdd, clientPort);
        server.send(snPacket);
        server.close();
    }
}
