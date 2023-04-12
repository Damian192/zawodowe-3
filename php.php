http://127.0.0.1/aaa/index.php

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <p>
        <?php
         echo ("test skryptu PHP<br>");
         $x =1;
         $nazwa="zl";
         $ilosc= 4;
         echo ("wynik wynosi $x" .$nazwa. "! <br>");
         $x= 832; // format ósemkowy
         $x_1 = 021;
         $x2 = 0xFF; //format szesnaastkowy
         $x2_1=0x0c;
         echo 'to jest symbol \' uzyty w kodzie PHP <br>';
         $s='to jest tekst <br>';
         echo $z;
         $y="to jest tekst";
         echo "$y";
        
         $napis = "napis";
         $tekst = <<ID;
         <br> tutaj rozpoczyna sie $napis <br>
         tutaj jest kontynuowany. <br>
         ID;
         echo $tekst;

         //howdoc
         echo $tekst =<<<'ID';
         <br>tutaj zaczyna sie $napis<br>
         tutaj jest kontynuwwany<br>

         $tab= array(t1,t2, t3);
         $tab2 = array[1,2,3];

         $in[0]="Jan";
         $in[1]="Andrzej";
         $in[2]="Anna";
         $in[5]="Monika";

        echo $in[0]." ".$in[2]. " ". $in[6];

        $tab3 = array (
            "nazwisko" => "Kowalski",
            "imie" => "Jan",
            "wiek" => 18;
        );

        echo $tab3["naziwsko"]. "<br>";

        $dane =array (
            array("nazwisko" =>"Kowalski", "imie"=>"jan","wiek" => 18),
            array("nazwisko" =>"Nowak", "imie"=>"Andrzej","wiek" => 18),
            array("nazwisko" =>"Psikuta", "imie"=>"Monika","wiek" => 18),
        );

        echo $dane[2]["nazwisko"];

        $a2 = 23.70;
        $a3 = (integer) $a2;
        echo "<br> $a2 <br> $a3 ";
        $a4 = 15.323;
        echo "zadeklarowana wartosc zmiennej \$a4: $a4 <br>";
        settype($a4, 'string');
        echo "warosc zmiennej \$a4 po zmianie typu na string: $a4 <br>";
        settype($a4, "integer");
        echo "warosc zmiennej \$a4 po zmianie typu na integer: $a4 <br>";
        ?>
        
    </p>
</body>
</html>












</php

$kolor="red";
switch($kolor) {
    case "red":
        echo: "DOminujacym kolorem jest czerwony!";
        break;
    case "blue":
        echo: "Dominujacym kolorem jest niebieski!";
        break;
    case "green":
        echo: "DOminujacym kolorem jest zielony";
        break;
    default:
    echo: "Brak dominujacego koloru!";
}
?>
</p>




    //operator warunkowy
    //warunek ? wartosc1: wartosc2
    //jezeli warunek bedzie prawdziwy to wartosc wyrazenia wyniesie wartosc wartosc1
    //jezeli nie to wartosc 2



    $x=11;
    $wynik= ($x <0) ? "ujemna": "dodatnia";
    echo "wartość zmiennej x jest $wynik";
                    
                        for($i=1;$i<=5;$i++) {
        echo "Pętla wykonana po raz: $i <br>";
    }




    $x = 0;
    while($x++<5) {
        echo "Pętla wykonana po raz: $x <br>";
    }
                  
                   /*
  * foreach($tablica as $wartosc) {
  *     instrukcje;
  * }
  * 
  * lub
  * foreach($tablica as $klucz => $wartosc) {
  * instrukcje;
  * w tym przypadku oprocz wartosci argumentu
  * otrzymujemy wartosc aktualnego klucza
  *}
  */

    $tab = array(
        1=> 'blue',
        2=>'red',
        3=>'green',
        4=>'white',
        5=>'black'
    );
    foreach($tab as $a) {
        echo "$a <br>";
    };

        
        
        
        
         <style>
        table,th,td {
        text-align: left;
        width: 400px;
        border: 1px solid black;
        }
    </style>
</head>
<body>

    <p>
    
<?php
    //bloki php i html

    $tx = true;
    if(isset($_POST['button'])) {
        $tx = false;
    }
    if(isset($_POST['button2'])) {
        $tx = true;
    }
    if($tx) {
?>

<table>
    <tr><th>Nazwisko</th><th>Imię</th><th>Telefon</th></tr>
    <tr><td>Kowalski</td><td>Jan</td><td>123321123</td></tr>
    <tr><td>Nowak</td><td>Adam</td><td>123321123</td></tr>
    <tr><td>Ptak</td><td>Adam</td><td>123321123</td></tr>
</table>
<?php
}
?>
<br>
<form method="post">
    <input type="submit" name="button" value="ukryj"/>
    <input type="submit" name="button2" value="pokaz"/>
</form>
</p>




<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>

    <p>
    
<?php
   $x;
   for($x = 150;$x >= 100;$x--)
   if($x%5==0) {
    echo $x."<br>";
   }
?>
</p>
</body>
</html>
        
