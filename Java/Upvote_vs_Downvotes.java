class Votes{
    int upvotes;
    int downvotes;

    Votes(int upvotes, int downvotes){
        this.upvotes = upvotes;
        this.downvotes = downvotes;
    }
}

public class Upvote_vs_Downvotes {
    public static int get_vote_count(Votes votes){
        int result = votes.upvotes - votes.downvotes;
        return result;
    }

    public static void main(String[] args) {
        Votes v = new Votes(13, 0);
        System.out.println(get_vote_count(v));
    }
}
