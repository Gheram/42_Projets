<?php
	function	ft_split($my_str)
	{
		$my_str = explode(" ", $my_str);
		$my_str = array_filter($my_str, strlen);
		sort($my_str);
		return $my_str;
	}
?>
