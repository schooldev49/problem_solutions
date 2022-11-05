class Solution {
    public List<List<Integer>> generate(int numRows) {     
        List<List<Integer>> answer = new ArrayList<>();
        for (int i=0; i<numRows; i++){
            List<Integer> ya = new ArrayList<>(Arrays.asList(1));
            for (int q=1; q<i; q++){
               ya.add(answer.get(i-1).get(q-1)+ answer.get(i-1).get(q)); 
            }
            if (i>0) ya.add(1);
            answer.add(ya);

        }
        return answer;
    }
}
