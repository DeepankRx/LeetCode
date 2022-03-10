class Solution {

    /**
     * @param Integer[] $nums
     * @return Integer
     */
    function numIdenticalPairs($nums) {
        $count = 0;
        for($i = 0;$i < sizeof($nums) ;$i++)
            for($j = 0; $j <sizeof($nums) ;$j++)
                if($nums[$i]==$nums[$j] && $i < $j)
                    $count++;
        return $count;
    }
}