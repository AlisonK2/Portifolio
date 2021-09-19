package TFIDF;

import java.io.IOException;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.mapreduce.Job;
import org.apache.hadoop.io.IntWritable;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.mapreduce.lib.input.FileInputFormat;
import org.apache.hadoop.mapreduce.lib.output.FileOutputFormat;

public class Main_1 {
    public static void main(String[] args) throws IOException, ClassNotFoundException, InterruptedException{
        Configuration conf = new Configuration();
        Job job = Job.getInstance(conf, "Calculating tdf");

        //Setting the Main, Mapper and Reducer file for Hadoop
        job.setJarByClass(Main_1.class);
        job.setMapperClass(Mapper_1.class);
        job.setReducerClass(Reducer_1.class);

        //Setting the input and output types of Mapper and Reducer
        job.setMapOutputKeyClass(Text.class);
        job.setMapOutputValueClass(IntWritable.class);
        job.setOutputKeyClass(Text.class);
        job.setOutputValueClass(IntWritable.class);

        //Setting the database path and configuring it for Hadoop
        String input = "C:\\Users\\Aliso_f2\\OneDrive\\Documentos\\Faculdade\\4°_Semestre\\Frameworks_para_Big_Data\\TFIDF\\news.csv";
        FileInputFormat.addInputPath(job, new Path(input));

        //Setting the output path and configuring it for Hadoop
        String output = "C:\\Users\\Aliso_f2\\Desktop\\output_1";
        FileOutputFormat.setOutputPath(job, new Path(output));

        //System.exit(job.waitForCompletion(true) ? 0 : 1);
        job.waitForCompletion(true);
    }       
}