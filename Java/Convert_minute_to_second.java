public class Convert_minute_to_second {
    public static void minute_to_second(int minute){
        int second = minute * 60;
        System.out.println(second);
    }
    public static void main(String[] args) {
        int minute = 25;
        minute_to_second(minute);
    }
}
