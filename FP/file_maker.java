import java.io.*;

public class file_maker{
    public static void main(String[] args) throws Exception {
        for (int i = 1; i <= 5; i++){
            File file = new File(i + ".c");
            FileWriter fw = new FileWriter(file);

            fw.write("#include <stdio.h>\n\nvoid main(){\n\tint num = 23;\n\tprintf(\"Result is %d\", num);\n}");

            fw.close();
            
            // To delete some file
            // file.delete();
        }
    }
}