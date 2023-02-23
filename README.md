# c_evl_aufgabe_4

Entwickeln Sie ein ANSI-C-Programm, das auf die Eingabe von Abkürzungsbezeichnungen
für die - deutschen - Wochentage mit der Ausgabe des vollen - englischen -
Namens der Wochentage reagiert.
Die Abkürzungsbezeichnungen für die Wochentage sollen aus 3 Zeichen bestehen
und folgendermaßen lauten : MON, DIE, MIT, DON, FRE, SAM, SON.
Zwischen Groß- und Kleinbuchstaben soll dabei nicht unterschieden werden, d.h.
statt "MON" kann z.B. auch "mon" oder "Mon" oder "moN" usw. verwendet werden.
Auf die Eingabe einer falschen - auch zu kurzen - Abkürzungsbezeichnung soll das
Programm mit der Ausgabe von "No_day" reagieren.
Das Programm soll in einer Schleife in jeweils einer neuen Zeile die Eingabe einer
neuen Abkürzungsbezeichnung anfordern und die entsprechende Ausgabe in der
nächsten Zeile erzeugen.
Abschluß jeder Eingabe mit <RETURN>.
Werden mehr als drei Zeichen eingegeben, so sind nur die ersten drei Zeichen zu
berücksichtigen. Der Rest der Eingabezeile ist zu ignorieren.
Das Programm soll enden, wenn nach einer Eingabeaufforderung als erstes Zeichen
ein '#' eingegeben wird.
