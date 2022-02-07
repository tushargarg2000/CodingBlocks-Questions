   public static int mazePath(int cc, int cr, int etc, int er, String ans)

    {
        int count = 0;
        if (cc == ec && cr == er) {
            System.out.print(ans + " ");
            return 1;
        }
        if (cc > ec || cr > er) {
            return 0;
        }

        int cv = mazePath(cc, cr + 1, ec, er, ans + "V");
        int ch = mazePath(cc + 1, cr, ec, er, ans + "H");
        int cd = mazePath(cc + 1, cr + 1, ec, er, ans + "D");

        return ch + cv + cd;
    }
