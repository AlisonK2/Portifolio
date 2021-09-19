package TFIDF;

import java.util.List;
import java.io.IOException;
import java.util.ArrayList;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.io.IntWritable;
import org.apache.hadoop.mapreduce.Reducer;

public class Reducer_2 extends Reducer <Text, Text, Text, IntWritable> {
    public void reduce(Text key, Iterable<Text> values, Context context) throws IOException, InterruptedException{
        int counter = 0;
        String idWordQtd = "";
        List<String> valuesCopy = new ArrayList<>(); 

        //Defining the regular expression of the new database that will be the output of the previous MapReduce
        Pattern dataPattern = Pattern.compile("(.{1,30})\t([0-9]{6})[_]([0-9999])");

        //Repeat loop for counting how many values ​​there are in each key and copying the values ​​to be used in the next repeat loop
        for (Text value : values){
            counter+=1;
            valuesCopy.add(value.toString());
        }

        //Repeat loop iterating over the list containing the values(id of each file along with the amount obtained in the first MapReduce) of each key(word)
        for (String value : valuesCopy){
            Matcher matcher = dataPattern.matcher(key.toString() + "\t" + value.toString());

            //Conditional structure for whether the regular expression matches the read database
            if(matcher.matches()){
                //Setting the key joing the id, word and quantity separating by underscore
                idWordQtd = matcher.group(2) + "_" + matcher.group(1) + "_" + matcher.group(3);
            }

            //Sending the key-values, for instance: 003843_called_1	80
            context.write(new Text(idWordQtd), new IntWritable(counter));
        }
    }
}