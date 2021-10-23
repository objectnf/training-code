<?php

class Solution {
    /**
     * @param Integer[] $nums
     * @return Integer
     */
    public function removeDuplicates(&$nums) {
        $a=$b=1;
        while($a <= count($nums)-1) {
            if ($nums[$a - 1] != $nums[$a]) {
                $nums[$b] = $nums[$a];
                $b++;
            }
            $a++;
        }
        return $b;
    }
}

function main(){
    $in_mums=[1, 1, 2, 3, 4, 5, 5, 6, 7, 7, 7];
    $solu = new Solution();
    $ret = $solu->removeDuplicates($in_mums);
    echo($ret."\n".$in_mums);
}
