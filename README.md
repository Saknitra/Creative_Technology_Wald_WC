# Creative_Technology_Wald_WC

# Example Creative Technology Project

## About

Auf der Polenta 7000-Wiese in Chur verwandelt das immersive Wald-WC den alltäglichen Toilettengang in eine multisensorische Natur-Oase. Beim Betreten der Kabine aktiviert ein smarter Türsensor automatisch ein atmosphärisches Setup aus grünen LED-Stripes, Raumklang-Lautsprechern mit authentischen Waldgeräuschen und künstlichem Efeu. Sobald man den Raum verlässt, schaltet sich die Installation ebenso dynamisch wieder ab.

[Image Video](https://youtube.com)
[Dokumentation] .... (Link)

## Usage

Comprehensible **step-by-step instructions** available for non-experts to replicate the project.
including ...

- text
- TouchDesigner version used
- Screenshots / pictures / eg. GIFs
- communication diagram -> shows the digital and haptic media components used, including software (eg. TouchDesigner, ...), hardware (eg. computer, sensor), communication (use of communication protocols, eg. OSC), etc.

![Example communication diagram](gitimg/Komponentenplan.png)
_Example communication diagram_

1. Lichtinstallation
Die TouchDesigner Datei muss heruntergeladen und geöffnet werden. Anschliessend werden die LED-Stripes an das Schaltnetzteil verbunden gemäss Foto: (Stimmt das auf dem Bild?)(Bilder_Aufbauanleitung\Anschluss_LED_Controller.jpeg)
Anschliessend wird über die Anschlüsse (rotes Kabel) die Verbindung zum LED Controller gemacht. (Worauf achten und was womit verbinden?)
Der Controller wird mit dem Strom verbunden, sowie über ein USB-Kabel mit dem Laptop. Auf TouchDesigner muss nun der richtige Eingang ausgewählt werden, sodass der Output auf die LED-Stripes gelegt wird und diese beginnen zu leuchten.

2. Audioinstallation
Die Amps müssen an den vier blauen Ausgängen mit den Plus und Minuspolen zweier Lautsprecher verbunden werden. Dies geht am Besten mit den Lautsprecherkabeln, die mit den Polen der Lautsprecher zusammengelötet wurden.
Das graue Kabel wird mit dem USB-Multichannel Audio Interface verbunden.
Anschliessend wird das Amp zusätzlich mit dem Strom versorgt, also an das Constant Voltage Device angeschlossen. (s. Anschlüsse im Bild: Bilder_Aufbauanleitung\Verbindung Amps.jpeg) Dieser Schritt mit den Verbindungen muss beim zweiten Amp wiederholt werden.
Um die Lautsprecher noch lauter zu machen, wird ein Resonanzkörper an jeden Lautsprecher mit Tape befestigt (s. Bilder_Aufbauanleitung\Lautsprecher.jpeg). Dies wird für jeden Lautsprecher wiederholt.
Bei der Installation der Boxen und der Technik muss darauf geachtet werden, ob die Lautsprecher beim USB-Multichannel Audio Interface beim Rear-Ausgang oder beim Front-Ausgang eingesteckt wurde, da diese anders angesprochen werden vom Audio und sonst auch vertauscht Geräusche ausgeben.

3. Bewegungssensor
Der Bewegungssensor wird mithilfe von Kabeln an die Steckplatine befestigt gemäss Bild (Bilder_Aufbauanleitung\Bewegunssensor_Anschluesse.jpeg).
Anschliessend wird der ESP über ein USB-C Kabel mit dem Laptop verbunden und das Arduino-Programm raufgeladen. Somit sollte die Installation funktionieren und der Aufbau ist bereits vollständig.

4. Installation
Die Boxen werden in je eine Ecke des WCs aufgehängt. Die LED Streifen werden an den Wänden nach Belieben befestigt. Sie dürfen jedoch nicht auseinandergeschnitten werden. Der Bewegungssensor wird so installiert, dass er auf das WC zeigt, damit er möglichst verlässlich funktioniert. Um ihn zu verstecken, haben wir ihn auf der Box angeklebt und das Steckbrett mit dem ESP hinter der Box angeklebt. Das Ganze haben wir noch mit Fake-Efeu verziert und so konnten noch weitere Kabel versteckt werden. Dies kann nach Belieben ausgeführt werden.

## Making process

Information on ...

- planning and development process
- challenges, rejected solutions, failures and re-planning
- task distribution (who did what?)
- learning effect
- tools (AI tools are expressly permitted and desired and should be mentioned)
- known bugs, if there are any (-1)

Anfangs andere Idee: Getränketracking, Idee ist nicht konsumsförderung, darum andere Idee. Polenta-Besuch: WC vielen auf  Wald WC. Konzepteinreichung: wie interaktiv machen? Das dann umgesetzt.
Getestet mit Surround-Audio (richtige fette lautsprecher ohne Löten) und Licht (fotos), Heute 2. Tag (24.6.) weil Amps noch nicht da waren. 3D-Sound in Audition 5.1 Setup, aber 1 Spur leer, weil nur 4 Lautsprecher. Versch. Programme ausprobiert (Ableton), aber dann doch in Audition Audio gemacht. Audition am besten gekannt und am eingängigsten das Interface und Workflow, dann dort am Besten klar kommen und auch schon Lizenz, darum nicht Ableton.
Jule machte Audio, die anderen Beiden (Andrin und Len) haben LED Stuff in TD gemacht. (Arbeitsteilung)

- challenges, rejected solutions, failures and re-planning
Braucht viel mehr Zeit als gedacht und schwierig rauszufinden, wie machen, weil für alle das Erste mal sowas machen.

- task distribution (who did what?)
Programm und Design Lichtinstallation: Andrin und Len
Audiotechnik: Jule
Aufbau und Zusammenstellung: Alle
Dokumentation und Video: Sara

- learning effect
Alles neu: ziemlich viel gelernt, auch TouchDesigner neu, v.a. am Meisten im Selbststudium gelernt: Technik Stuff und Elektronik (wie funktioniert was und ist wie warum verbunden)
- tools (AI tools are expressly permitted and desired and should be mentioned)
Immer mal wieder, zum kontrollieren, obs stimmt und für Konzeptausarbeitung, formulierung und Überarbeiten mit KI.
- known bugs, if there are any (-1)
bisher keine Bugs vorhanden
