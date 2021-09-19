package TFIDF;

import java.io.IOException;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.io.IntWritable;
import org.apache.hadoop.mapreduce.Mapper;

public class Mapper_1 extends Mapper <Object, Text, Text, IntWritable> {
    public void map(Object key, Text data, Context context) throws IOException, InterruptedException{
        //Defining a int-like variable that hadoop can understand
        IntWritable one = new IntWritable(1);
        
        //Defining the regular expression (Regex) and cleaning the database
        Pattern dataPattern = Pattern.compile("([0-9]{6})[,]([0-4])[,](.[^,]{0,})[,](.{1,})");
        Matcher matcher = dataPattern.matcher(data.toString().toLowerCase().replaceAll("[-+=.^:;#$%!*\'\"]", ""));

        //Conditional structure for whether the regular expression matches the read database
        if (matcher.matches()){

            //Reading the news, replacing the comma with an empty string and storing the words on a String array
            String news0 = matcher.group(4).replaceAll("[,]", "");
            String[] news = news0.split("\\s");
            
            //Repeat loop for the definition of the key joining the news id and the word found in this news separating them by underscore
            for (String word : news){
                String idPlusWord = matcher.group(1) + "_" + word;

                //Defining a string-like variable that hadoop can understand
                Text wordRead = new Text(idPlusWord);

                //Sending the key-value to Reducer, for instance: 000001_after <1>
                context.write(wordRead, one);
            }
        }
    }
}