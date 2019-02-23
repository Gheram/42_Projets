cat annnuaire | grep -i "nicolas\tbauer" | grep '[0-9]\{3\}\-' | rev | cut -d$ '\t' -f 2 | rev
