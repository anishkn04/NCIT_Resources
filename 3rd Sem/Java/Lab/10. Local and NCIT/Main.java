import java.net.*;
import java.io.*;

public class Main {
    public static void main(String[] args) throws Exception {
        InetAddress localAddress = InetAddress.getLocalHost();
        System.out.println("Local IP Address: " + localAddress.getHostAddress());

        InetAddress remoteAddress = InetAddress.getByName("ncit.edu.np");
        System.out.println("ncit.edu.np IP Address: " + remoteAddress.getHostAddress());

        URI uri = new URI("https://ncit.edu.np");
        URL url = uri.toURL();
        URLConnection conn = url.openConnection();
        BufferedReader in = new BufferedReader(new InputStreamReader(conn.getInputStream()));
        String inputLine;
        while ((inputLine = in.readLine()) != null)
            System.out.println(inputLine);
        in.close();
    }
}