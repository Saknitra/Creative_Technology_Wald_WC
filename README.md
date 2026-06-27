# Creative_Technology_Wald_WC

## About

Auf der Polenta 7000-Wiese in Chur verwandelt das immersive Wald-WC den alltäglichen Toilettengang in eine multisensorische Natur-Oase. Beim Betreten der Kabine aktiviert ein smarter Türsensor automatisch ein atmosphärisches Setup aus grünen LED-Stripes, Raumklang-Lautsprechern mit authentischen Waldgeräuschen und künstlichem Efeu. Sobald man den Raum verlässt, schaltet sich die Installation ebenso dynamisch wieder ab.

[Image Video](https://youtube.com)
[Dokumentation] .... (Link)

## Usage

Schritt-für-Schritt-Anleitung für den Aufbau und die Installation, des Wald-WCs:

[Komponentenplan](Komponentenplan\Komponentenplan_v03.png)

Überprüfe, ob du alle Teile der Materialliste (Komponentenplan\Materialliste.md) beisammen hast, bevor du mit dem Aufbau und der Installation beginnst.

1. Lichtinstallation
Software vorbereiten: Lade die entsprechende TouchDesigner (TD)-Datei herunter und öffne sie auf dem Laptop.

Stromversorgung verkabeln: Verbinde die LED-Stripes mit dem silbernen Schaltnetzteil (Stromversorgung LED). (s. Bild: Bilder_Aufbauanleitung\Anschluss_LED_Controller.jpeg)
Worauf zu achten ist: An der Klemmenleiste des Schaltnetzteils liegt an den Anschlüssen (L, N) offene Netzspannung (230V) an. Diese Kontakte müssen im Betrieb unbedingt berührungssicher abgedeckt sein! Schliesse die DC-Ausgänge (V+ und V-) mit ausreichend dicken Kabeln an die Stromadern des LED-Streifens an und stecke das Netzteil erst ein, wenn du alles verbunden hast.

Signalverbindung herstellen: Führe die Datenleitungen des LED-Streifens (beschriftet mit DAT/Data und CLK/Clock) an die grünen Schraubklemmen des LED-Controllers (z. B. Port 1: DAT an DAT, GND an GND).

Inbetriebnahme: Verbinde den LED-Controller per USB-Kabel mit dem Laptop und schliesse ihn an den Strom an. Wähle in TouchDesigner den korrekten COM-Port (bzw. Ausgangs-CHOP/DAT) aus, damit die Pixeldaten korrekt an den Controller übertragen werden und die LEDs grün aufleuchten.

2. Audioinstallation
Lautsprecher vorbereiten: Nimm vier lange (ca. 3 Meter) Abschnitte des Lautsprecherkabels, schneide die Abdichtung an den Enden ab und löte je ein Kabel an die Kontakte eines Lautsprechers.
Um den Schalldruck der kleinen, nackten Lautsprecher-Chassis zu maximieren, befestige jeden Lautsprecher flach mit Tape auf einem Hohlkörper (z. B. einer Kartonbox), der als Resonanzkörper fungiert. Schaue dabei, dass du Löcher hast, wo das Kabel durchgeführt werden kann. (s. Bilder_Aufbauanleitung\Lautsprecher.jpeg)

Verstärker (Amps) verkabeln: Schnappe dir die erste 2.1-Kanal-Verstärkerplatine (Amp). Schliesse die Kabel der vorderen zwei Lautsprecher an die blauen Lautsprecher-Schraubklemmen (Speaker Out) an. Achte hierbei strikt auf die korrekte Polung (Plus an Plus, Minus an Minus), da die Boxen sonst phasenverschoben klingen.

Audio-Eingang anschliessen: Stecke das graue Audiokabel (mit dem kleinen weissen JST-Stecker) in den "Audio In"-Port der Verstärkerplatine. Das andere Ende des Kabels lötest du mit den Kontakten der RCA-Stecker zusammen (achte auf die Farben der Kabel und der Stecker) und führst sie zum Front-Ausgang des externen USB Multi-Channel Audio Interfaces.

Stromversorgung (Constant Voltage Control Device): Verbinde die obere blaue Schraubklemme des Amps (Power In / DC) mit dem zentralen Netzteil (im Komponentenplan als Constant Voltage Control Device deklariert). Dieses liefert die benötigte Gleichspannung (z.B. 12V oder 24V).

Zweites Amp-Modul: Wiederhole die letzten 3 Schritte exakt so für das zweite Amp-Modul und verbinde dessen Audio-Eingang mit dem Rear-Ausgang des USB-Audio-Interfaces.

Wichtiger Hinweis zum Routing: Achte beim Platzieren der Boxen im Raum penibel darauf, welche Boxen am Front- und welche am Rear-Kanal hängen.

3. Bewegungssensor
Hardware-Setup: Der PiR-Bewegungssensor v1.0 wird mithilfe von Jumper-Kabeln an die Steckplatine (Breadboard) und den ESP32C6-Microcontroller befestigt. (s. Bild: Bilder_Aufbauanleitung\Bewegunssensor_Anschluesse.jpeg)

Firmware aufspielen: Anschliessend den ESP über ein USB-C-Kabel mit dem Laptop verbinden, die Arduino IDE öffnen und das vorbereitete Programm () hineinkopieren und hochladen. Der Microcontroller sendet die Triggersignale bei Bewegung direkt an TouchDesigner, um die Installation zu aktivieren.

4. Physische Rauminstallation
Lautsprecher platzieren: Die Boxen werden in je eine Ecke des WCs aufgehängt (zwei vorne für Front, zwei hinten für Rear), um einen umschliessenden Raumklang zu erzeugen.

Licht montieren: Die LED-Streifen werden an den Wänden nach Belieben befestigt. Wichtig: Sie dürfen nicht auseinandergeschnitten werden, da sonst die Datenleitung unterbrochen wird.

Technik tarnen: Der Bewegungssensor wird so installiert, dass er direkt in das WC auf die Schüssel zeigt, damit er möglichst verlässlich funktioniert. Um ihn und die Elektronik zu verstecken, haben wir den Sensor auf einer der Boxen angeklebt und das Steckbrett mit dem ESP hinter der Box befestigt.

Dekoration: Das Ganze wurde mit künstlichem Efeu verziert. Das sorgt für die Wald-Atmosphäre und bietet die perfekte Möglichkeit, um lose Kabel, Netzteile und Platinen unsichtbar zu verlegen.

## Making process

1. Planning and Development
Das Projekt begann ursprünglich mit einer völlig anderen Idee: einem digitalen System zum Getränke-Tracking. Während der Konzeptionierung stellten wir jedoch fest, dass ein solches System vor allem den Konsum fördern würde. Da dem Organisationsteam der Polenta Nachhaltigkeit und ein bewusster Umgang sehr wichtig sind, lehnten sie diesen Vorschlag ab und wir suchten nach einer Alternative.
Bei einem Vorab-Besuch auf dem Gelände der Polenta 7000 fielen uns sofort die dortigen Kompost-WCs aus Holz auf. Das inspirierte uns zu dem Konzept, diese triste Umgebung in ein immersives „Wald-WC“ zu verwandeln. Für die Konzepteinreichung stand zudem die wichtige Bewertungsanforderung im Raum, die Installation interaktiv zu gestalten. So entstand die finale Idee: Das Wald-WC soll ein geschlossenes Ökosystem bilden, das sich erst dann dynamisch aktiviert, wenn die Kabine tatsächlich betreten und benutzt wird.
Am ersten Testtag bauten wir einen Prototypen auf. Die Lichtinstallation funktionierte auf Anhieb und den Surround-Sound testeten wir zunächst erfolgreich mit grossen, aktiven Studiolautsprechern, die noch keinen Lötaufwand erforderten. Da unsere massgeschneiderten Verstärkerplatinen (Amps) am ersten Tag noch nicht geliefert worden waren, folgte der finale Zusammenbau des gesamten Elektronik-Setups am zweiten Projekttag.
Für das Sounddesign experimentierten wir anfangs mit verschiedenen Programmen wie Ableton Live. Wir entschieden uns letztendlich jedoch für Adobe Audition. Da das Team dieses Programm bereits am besten kannte, uns das Interface sowie der Workflow am eingängigsten erschienen und wir bereits über die entsprechenden Lizenzen verfügten, war dies die effizienteste Wahl. Da unsere Installation über genau vier Lautsprecher verfügt, mischten wir den Ton in einem klassischen 5.1-Setup ab und liessen den Center-Kanal bewusst frei.

2. Challenges and Re-Planning
Die grösste Herausforderung im Projektverlauf war der Faktor Zeit. Da keines der Teammitglieder zuvor ein Projekt in diesem Umfang realisiert hatte, unterschätzten wir anfangs die steile Lernkurve. Es brauchte viel Zeit und tiefgehende Recherche, um herauszufinden, wie die komplexen Komponenten im Bereich Physical Computing – insbesondere das Zusammenspiel aus Sensoren, Aktoren, Netzteilen und Mikrocontrollern – fehlerfrei miteinander kommunizieren und verkabelt werden müssen.

3. Task Distribution
Programmierung und Design der Lichtinstallation (TouchDesigner): Andrin und Len
Audiotechnik und Sounddesign (Adobe Audition): Jule
Physischer Aufbau und Hardware-Zusammenstellung: Alle Teammitglieder gemeinsam
Dokumentation und Videoschnitt: Sara

4. Learning Effect
Da fast alle Disziplinen dieses Projekts Neuland für uns waren, war der Lerneffekt enorm. Wir haben uns intensiv in die visuelle Entwicklungsumgebung von TouchDesigner eingearbeitet. Den grössten Fortschritt erzielten wir jedoch im Selbststudium direkt an der Hardware: Wir haben grundlegendes Wissen über Elektronik erworben und gelernt, wie Spannungen umgewandelt werden, wie Audiosignale sauber fliessen und wie man eine stabile Brücke zwischen physischer Sensorik und digitaler Kunst baut.

5. Tools Used
Neben der Kernsoftware (TouchDesigner, Adobe Audition, Arduino IDE) kamen während des gesamten Prozesses regelmässig KI-Tools (wie ChatGPT, Gemini und Claude) zum Einsatz. Wir nutzten sie intensiv als digitale Qualitätskontrolle, um die Korrektheit unserer Schaltungen beim Zusammenbau zu überprüfen, den Code des ESP32 zu reviewen sowie für die Strukturierung, Konzeptausarbeitung und finale Formulierung dieser Dokumentation.

6. Known Bugs
Das Gesamtsystem läuft in den Testläufen vollkommen stabil; es sind aktuell keine Bugs vorhanden.