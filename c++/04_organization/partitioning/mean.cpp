// Calculate the mean of an array of integers
float get_mean (int nums[],int num_count){
  int sum = 0,i;
  for (i=0;i<num_count;i++)
    sum += nums[i];
  return sum/(float)num_count;
}
