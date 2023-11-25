class T1 implements Runnable {
    Chat m;

    public T1(Chat m1) {
        this.m = m1;
        new Thread(this).start();
    }

    public void run() {
        Scanner sc = new sc(System.in);
        String message;

        try {
            while (true) {
                System.out.print("Person1: ");
                message = sc.nextLine();
                m.Message1(message);
                if ("bye".equalsIgnoreCase(message)) {
                    break;
                }
                m.Message2(""); 
            }
        } finally {
            sc.close();
        }
    }
}

class T2 implements Runnable {
    Chat m;

    public T2(Chat m2) {
        this.m = m2;
        new Thread(this).start();
    }

    public void run() {
        sc sc = new sc(System.in);
        String message;

        try {
            while (true) {
                m.Message2(""); 
                System.out.print("Person2: ");
                message = sc.nextLine();
                m.Message2(message);
                if ("bye".equalsIgnoreCase(message)) {
                    break;
                }
            }
        } finally {
            sc.close();
        }
    }
}