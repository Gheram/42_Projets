<?php
    function	ft_is_sort($tab)
    {
        $copy = $tab;
        sort($copy);
        if ($copy == $tab)
            return 1;
        else
            return (0);
    }
?>
