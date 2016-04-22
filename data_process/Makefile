
all: data_process data_analysis

data_process: 
	gcc -o data_process data_process.c 
	./data_process

data_analysis: 
	gcc -o data_analysis data_analysis.c
	./data_analysis

clean:
	rm data_analysis data_process execution_time.data r_time_spec.data s_time_spec.data  data_analysis.data
