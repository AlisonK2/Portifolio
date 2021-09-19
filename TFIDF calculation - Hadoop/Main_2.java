package TFIDF;

import java.io.IOException;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.mapreduce.Job;
import org.apache.hadoop.io.IntWritable;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.mapreduce.lib.input.FileInputFormat;
import org.apache.hadoop.mapreduce.lib.output.FileOutputFormat;

public class Main_2 {
    public static void main(String[] args) throws IOException, ClassNotFoundException, InterruptedException{
        Configuration conf = new Configuration();
        Job job = Job.getInstance(conf, "Calculating idft");

        //Setting the Main, Mapper and Reducer file for Hadoop
        job.setJarByClass(Main_2.class);
        job.setMapperClass(Mapper_2.class);
        job.setReducerClass(Reducer_2.class);

        //Setting the input and output types of Mapper and Reducer
        job.setMapOutputKeyClass(Text.class);
        job.setMapOutputValueClass(Text.class);
        job.setOutputKeyClass(Text.class);
        job.setOutputValueClass(IntWritable.class);

        //Setting the new database(the output of the previous MapReduce) path and configuring it for Hadoop
        String input = "C:\\Users\\Aliso_f2\\Desktop\\output_1\\part-r-00000";
        FileInputFormat.addInputPath(job, new Path(input));

        //Setting the output path and configuring it for Hadoop
        String output = "C:\\Users\\Aliso_f2\\Desktop\\output_2";
        FileOutputFormat.setOutputPath(job, new Path(output));

        //System.exit(job.waitForCompletion(true) ? 0 : 1);
        job.waitForCompletion(true);
    }       
}