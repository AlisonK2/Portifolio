package TFIDF;

import java.io.IOException;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.mapreduce.Mapper;

public class Mapper_2 extends Mapper <Object, Text, Text, Text> {
    public void map(Object key, Text data, Context context) throws IOException, InterruptedException{

        //Defining the regular expression of the new database that will be the output of the previous MapReduce
        Pattern dataPattern = Pattern.compile("([0-9]{6})[_](.{1,30})\t([0-9999])");
        Matcher matcher = dataPattern.matcher(data.toString());

        //Conditional structure for whether the regular expression matches the read database
        if (matcher.matches()){
            //Defining the key as the read words and the value as id plus the previously quantity found
            String word = matcher.group(2);
            String IdQtd = matcher.group(1) + "_" + matcher.group(3);
           
            //Sending the key-value to Reducer, for instance: after <000001_1, ...>  -> 
            context.write(new Text(word), new Text(IdQtd));
        }
    }
}