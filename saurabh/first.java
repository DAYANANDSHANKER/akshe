class first{
    public static void main(String[]a){
        int x = 7;
        int temo= x;
        int i =2;
        while(true){
            temo++;
          for( i =2;i<temo;i++){
           if(temo %i ==0)
              break;
        }  
        if(i == temo){
            System.out.println(temo);
            break;
        }
        }
        
    }
}