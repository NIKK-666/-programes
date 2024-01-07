package DSA;

class Solution {
    public int minMaxDivisor(int divisor1, int divisor2, int uniqueCnt1, int uniqueCnt2) {
        int maxVal = Math.min(divisor1, divisor2);

        while (uniqueCnt1 < divisor2 || uniqueCnt2 < divisor1) {
            maxVal++;
            if (maxVal % divisor1 == 0) {
                maxVal++;
            }
            if (maxVal % divisor2 == 0) {
                maxVal++;
            }
        }

        return maxVal;
    }

    @Override
    public String toString() {
        return "Solution []";
    }

    @Override
    protected Object clone() throws CloneNotSupportedException {
        // TODO Auto-generated method stub
        return super.clone();
    }

    @Override
    public boolean equals(Object arg0) {
        // TODO Auto-generated method stub
        return super.equals(arg0);
    }

    @Override
    protected void finalize() throws Throwable {
        // TODO Auto-generated method stub
        super.finalize();
    }

    @Override
    public int hashCode() {
        // TODO Auto-generated method stub
        return super.hashCode();
    }
}