package TFIDF;

import java.io.IOException;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.io.IntWritable;
import org.apache.hadoop.mapreduce.Reducer;

public class Reducer_1 extends Reducer <Text, IntWritable, Text, IntWritable> {
    public void reduce(Text key, Iterable<IntWritable> values, Context context) throws IOException, InterruptedException{
        int counter = 0;

        //Calculating the number of times a word appeared in a given news
        for(IntWritable value : values){
            counter += value.get();
        }

        //Sending the key-value, for instance: 007536_on    2
        context.write(key, new IntWritable(counter));
    }
}