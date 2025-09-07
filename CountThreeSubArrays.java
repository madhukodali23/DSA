class Main {
    public static void main(String[] args) {
        int arr[] = {1, 2, 1, 3, 5, 2,4, 2};
        int count = 0;
        for(int i=0;i<arr.length;i++)
        {
            for(int j=i;j<arr.length;j++)
            {
                if (j-i+1 == 3) {
                   if (arr[i] + arr[j] == arr[i+1])
                   {
                       count++;
                   }
                }
            }
        }
        System.out.println(count);
    }
}
