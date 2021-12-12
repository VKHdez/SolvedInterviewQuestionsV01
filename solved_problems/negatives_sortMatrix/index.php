<?php
$grid = array(
    array(-3,2,3),
    array(-1,0,1),
    array(-23,-15,2)
);

function countNegatives($grid){

    $limit = count($grid);

    $i=0; $j=$limit-1; $res=0;

    while($j>=0 && $i<$limit){

        if($grid[$i][$j] < 0){

            $res += ($j+1);
            $j = $limit-1;
            $i++;
        }else{
            $j--;
        }
    }

    return $res;
}

echo strval(countNegatives($grid));
?>
