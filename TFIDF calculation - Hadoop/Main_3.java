package TFIDF;

import java.io.IOException;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.mapreduce.Job;
import org.apache.hadoop.io.DoubleWritable;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.mapreduce.lib.input.FileInputFormat;
import org.apache.hadoop.mapreduce.lib.output.FileOutputFormat;

public class Main_3 {
    public static void main(String[] args) throws IOException, ClassNotFoundException, InterruptedException{
        Configuration conf = new Configuration();
        Job job = Job.getInstance(conf, "Calculating TFIDF");

        //Setting the Main and Mapper file for Hadoop
        job.setJarByClass(Main_3.class);
        job.setMapperClass(Mapper_3.class);

        //Setting the input and output types of Mapper
        job.setMapOutputKeyClass(Text.class);
        job.setMapOutputValueClass(DoubleWritable.class);

        //Setting the new database(the output of the previous MapReduce) path and configuring it for Hadoop
        String input = "C:\\Users\\Aliso_f2\\Desktop\\output_2\\part-r-00000";
        FileInputFormat.addInputPath(job, new Path(input));

        //Setting the output path and configuring it for Hadoop
        String output = "C:\\Users\\Aliso_f2\\Desktop\\output_3";
        FileOutputFormat.setOutputPath(job, new Path(output));

        System.exit(job.waitForCompletion(true) ? 0 : 1);
    }       
}