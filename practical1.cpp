#include<omp.h>
#include<bits/stdc++.h>
#include<pthread.h>
#include<stdio.h>
#include<stdlib.h>
int main(){
	
	#pragma omp parallel
	{
		printf("thread No. %d  Hello World\n", omp_get_thread_num());
	}
    return 0;
}