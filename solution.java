public class Solution {
    public static void main(String[] args) {
        //Scanner sc = new Scanner(System.in);
        //get four values from std in.
       
        int a,b,c,d;
        // a = 1;
        // b = 1;
        // c = 1;
        // d = 100;
        a = sc.nextInt();
        b = sc.nextInt();
        c = sc.nextInt();
        d = sc.nextInt();
        //make division real division
        int trains_min;
        if ((c + d) % a == 0){
            trains_min = (c + d) / a;
        } else{
            int trains_min = (int)Math.ceil((double)(c + d) / a);
        }  
        int trains_max = d;
        boolean solution = false;
        for (int i = trains_min; i <= trains_max + 1; i++){
            //i * a - d = j * b
            //divisible by b and delivers right amoun of units to Mestre
            if ((i * a - d) % b == 0){
                int boats = (i * a - d) / b;
                if (boats * b >= c){
                    solution = true;
                    String add_truck = "";
                    String add_boat = "";
                    if(i != 1){
`                       add_truck = "s";
                    }
                    if(boats != 1){
                        add_boat = "s";
                    }
                    System.out.printf("We need %d truck%s and %d boat%s.", i, add_truck, boats, add_boat);
                    break;
                }
            }
        }
        if(!solution){
            System.out.printf("No Solution.");
        }
    }
}