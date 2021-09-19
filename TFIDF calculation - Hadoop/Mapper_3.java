package TFIDF;

import java.lang.Math;
import java.io.IOException;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.mapreduce.Mapper;
import org.apache.hadoop.io.DoubleWritable;

public class Mapper_3 extends Mapper <Object, Text, Text, DoubleWritable> {
    public void map(Object key, Text data, Context context) throws IOException, InterruptedException{
        double tfidf = 0.0;

        //Defining the regular expression of the new database that will be the output of the previous MapReduce
        Pattern dataPattern = Pattern.compile("([0-9]{6})[_](.[^_]{1,})[_]([1-9999])\t([0-9]{0,})");
        Matcher matcher = dataPattern.matcher(data.toString());

        //Conditional structure for whether the regular expression matches the read database
        if(matcher.matches()){
            //Defining the variables to be used in the TFIDF calculation
            double tfd = (double) Integer.parseInt(matcher.group(3));
            double n = 7600.0;
            double dft = (double) Integer.parseInt(matcher.group(4));
            double idft = Math.log10(n / (1 + dft));

            //Calculating the TFIDF
            tfidf = tfd * idft;

            //Setting the key as id plus word separating by underscore
            String idWord = matcher.group(1) + "_" + matcher.group(2);

            //Sending the key-values, for instance: 000001_after	0.9982890543259109000001
            context.write(new Text(idWord), new DoubleWritable(tfidf));
        }
    }
}