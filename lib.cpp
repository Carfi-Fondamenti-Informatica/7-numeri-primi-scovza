bool det(int a) {

    int c;
    int count = 0;

    c = 1;

    if (a > 1) {

        while (count <= 1 && c <= a / 2) {
            if (a % c == 0) {

                count++;
            }
            c++;
        }

        if (count == 1) {

            return true;
        }else {

            return false;
        }
    }else {

        return false;
    }
}
