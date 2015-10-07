import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class ExerciseZero {

    public static void main(String[] args) throws IOException {

        BufferedReader bi = new BufferedReader(new InputStreamReader(System.in));
        String line;
        Map<Integer, Map<Integer, Integer>> map = new HashMap<>();
        List<String> input = new ArrayList<>();
        
        while ((line = bi.readLine()) != null) {
            String[] nums = line.split("\\|");
            int number = Integer.parseInt(nums[0]);
            int value = Integer.parseInt(nums[1]);
            input.add(line);
            if (map.containsKey(number)) {
                Map<Integer, Integer> mapRef = map.get(number);
                if (!mapRef.containsKey(value)) {
                    mapRef.put(value, mapRef.size() + 1);
                }
            }
            else {
                Map<Integer, Integer> newMap= new HashMap<>();
                newMap.put(value, 1);
                map.put(number, newMap);
            }
        }
        
        for (String s: input) {
            String[] nums = s.split("\\|");
            int number = Integer.parseInt(nums[0]);
            int value = Integer.parseInt(nums[1]);
            if (map.get(number).size() == 1)
                continue;
            System.out.println(s + "[" + map.get(number).get(value) + " of " + map.get(number).size() + "]" );
        }

    }

}
