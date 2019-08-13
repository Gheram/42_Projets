#!/usr/bin/php
<?php
	function	ft_split($my_str)
	{
		$my_str = explode(" ", $my_str);
		$my_str = array_filter($my_str, strlen);
		sort($my_str);
		return $my_str;
	}

	function ft_alpha_cmp($c1, $c2)
    {
        $c1 = ord($c1);
        $c2 = ord($c2);

        if (($c1 >= 97 && $c2 >= 97) || ($c1 <= 90 && $c2 <= 90))
            return ($c1 - $c2);
        if ($c1 < $c2)
        {
            $c2 -= 32;
            if ($c1 == $c2)
                return (-1);
        }
        else
        {
            $c1 -= 32;
            if ($c1 == $c2)
                return (1);
        }
        return ($c1 - $c2);
    }

	function	sort_tab($a, $b)
	{
		if ($a == $b)
			return 0;
		$i = 0;
		while ($a[$i] == $b[$i])
			$i++;
		if (!$a[$i])
			return (-1);
		if (!$b[$i])
			return (1);
		if (ctype_alpha($a[$i]))
			$val_a = 3;
		if (is_numeric($a[$i]))
			$val_a = 2;
		if (!(is_numeric($a[$i])) && !(ctype_alpha($a[$i])))
			$val_a = 1;
		if (ctype_alpha($b[$i]))
			$val_b = 3;
		if (is_numeric($b[$i]))
			$val_b = 2;
		if (!(is_numeric($b[$i])) && !(ctype_alpha($b[$i])))
			$val_b = 1;
		if ($val_a != $val_b)
			return ($val_b - $val_a);
		else if ($val_a == 3)
			return (ft_alpha_cmp($a[$i], $b[$i]));
		else
			return (ord($a[$i]) - ord($b[$i]));
	}

	$argv = array_slice($argv, 1);
	foreach ($argv as $elem)
		$tous = $tous." ".$elem;
	$tab = ft_split($tous);
	usort($tab, 'sort_tab');
	foreach ($tab as $value)
		echo "$value\n";
?>
