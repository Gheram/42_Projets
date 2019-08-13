#!/usr/bin/php
<?php
    while(1)
    {
        echo "Entrez un nombre: ";
        $val = trim(fgets(STDIN));
        if (is_numeric($val))
        {
            if ($val % 2)
                echo "Le chiffre $val est Impair\n";
            else
                echo "Le chiffre $val est Pair\n";
        }
        else
        {
            if (feof(STDIN) == TRUE)
            {
                echo "^D\n";
                exit();
            }
            else
                echo "'$val' n'est pas un chiffre\n";
        }
    }
?>
