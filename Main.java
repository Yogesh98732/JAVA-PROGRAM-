
// import javax.swing.JFrame;
// import javax.swing.JLabel;
// class New{
// }
// class Main{
//     public static void main(String[] args) {
//         JFrame n = new JFrame("New Thing");
//         n.setBounds(50, 50, 100,100);
//         JLabel neww = new JLabel("Hellow Teacher");
//         n.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
//         n.setVisible(true);
//     }
// }

import java.io.File;
import java.io.IOException;
class Main{
    public static void main(String []args){
        File n = new File("H.txt");
        if (n.createNewFile()){
            System.out.print("Created here"+n.getName());
        }
        else{
            System.out.println("Not found");
        }
        catch(IOException e){
            System.out.print("Found Here");
        }
    }
}