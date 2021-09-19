package TFIDF;

import java.io.IOException;

public class Main {
    public static void main(String[] args) throws ClassNotFoundException, IOException, InterruptedException{
        //Setting the 2 MapReduces to run and the third and last Map
        Main_1.main(args);
        Main_2.main(args);
        Main_3.main(args);
    }
}
