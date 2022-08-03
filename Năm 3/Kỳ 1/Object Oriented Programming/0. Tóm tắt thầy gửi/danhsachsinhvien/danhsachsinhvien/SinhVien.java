/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package danhsachsinhvien;

/**
 *
 * @author Dell
 */
import java.util.*;
public class SinhVien implements Comparable<SinhVien>{
    private String ma, ten, lop, email; 
    
    public SinhVien(String ds[]){
        ma = ds[0];
        ten = chuanHoa(ds[1]);
        lop = ds[2];
        email = ds[3];
    }
    
    private String chuanHoa(String s){
        StringTokenizer st = new StringTokenizer(s);
        StringBuilder kq = new StringBuilder();
        while(st.hasMoreTokens()){
            String tmp = st.nextToken();
            kq.append(Character.toUpperCase(tmp.charAt(0)));
            for(int i=1;i<tmp.length();i++){
                kq.append(Character.toLowerCase(tmp.charAt(i)));
            }
            kq.append(" ");
        }
        return kq.toString().trim();
    }
    
    public String toString(){
        return ma + " " + ten + " " + lop + " " + email;
    }

    @Override
    public int compareTo(SinhVien o) {
        return this.ma.compareTo(o.ma);
    }
}
