package danhsachsinhvien;
import java.util.*;
import java.io.*;
public class Main {
    static ArrayList<SinhVien> ds = new ArrayList<>();
    public static void main(String[] args) throws IOException {
        Scanner in = new Scanner(new File("SINHVIEN.in"));
        int n = Integer.parseInt(in.nextLine());
        for(int i=1;i<=n;i++){
            String line[] = new String[4];
            docFile(in,line,4);
            ds.add(new SinhVien(line));
        }
        Collections.sort(ds);
        for(SinhVien a:ds){
            System.out.println(a);
        }
    }
    public static void docFile(Scanner in,  String line[], int sodong){
        for(int i=0;i<sodong;i++){
            line[i] = in.nextLine();
        }
    }
}
