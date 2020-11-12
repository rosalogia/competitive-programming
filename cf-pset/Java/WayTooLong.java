import java.util.*;

public class WayTooLong {
    public static void main(String[] args) {
        var scan = new Scanner(System.in);

        int n = scan.nextInt();

        scan.nextLine();

        for (int i = 0; i < n; i++) {
            var line = scan.nextLine();
            if (line.length() <= 10) {
                System.out.print(line);
            } else {
                char head = line.charAt(0);
                char end = line.charAt(line.length() - 1);
                int body = line.substring(1, line.length() - 1).length();
                String s = "" + head + body + end + "";
                System.out.print(s);
            }
            System.out.println();
        }
    }
}
