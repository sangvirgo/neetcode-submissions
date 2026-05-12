class Solution {

    public String encode(List<String> strs) {
        StringBuilder rs = new StringBuilder();
        for(String temp:strs) {
            rs.append(temp.length());
            rs.append("@");
            rs.append(temp);
        }
        return rs.toString();
    }

// 4@sang5@sangg

    public List<String> decode(String str) {
        List<String> rs = new ArrayList<>();
        int i = 0; 
        while(i<str.length()) {
            int j=i; 
            while(i<str.length() && str.charAt(i)!='@') {
                i++;
            }
            int lengthNum = Integer.parseInt(str.substring(j, i));
            rs.add(str.substring(i+1, i+lengthNum+1));
            i+=lengthNum+1;
        }
        return rs;
    }
}
