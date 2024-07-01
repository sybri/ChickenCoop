# Sourcing de composants pour un poulailler connecté

## Composants en ma possession

- Moteur pas à pas 5V 28BYJ-48 + ULN2003
[Disponible sur Aliexpress pour 1,90€](https://fr.aliexpress.com/item/32889788942.html)

- Imprimante 3D

- EspCam32  [Disponible sur Aliexpress pour 1,49€](https://fr.aliexpress.com/item/1005006097541310.html?algo_pvid=41422c70-2cab-4520-949f-bf4efc4b0910&algo_exp_id=41422c70-2cab-4520-949f-bf4efc4b0910-0&pdp_npi=4@dis!EUR!8.07!0.99!!!8.47!1.04!@213ee07a17198197012318979eea7a!12000035726341715!sea!FR!0!AB&curPageLogUid=6onpgSU6sdyb&utparam-url=scene:search%7Cquery_from)

## Partie mécanique

### Conception et fabrication
Je possède déjà le moteur et une imprimante 3D, il me faut donc concevoir un modèle 3D pour réduire le moteur et fabriquer la porte.

### Idée de conception
Je prévois de réaliser une porte fonctionnant comme des volets roulants. Je vais m'inspirer de la mécanique de ces volets pour concevoir le système.

## Partie électronique


### Utilisation de l'espCam32
Je vais utiliser l'espCam32 pour la partie électronique car j'espère pouvoir utiliser la caméra dans des versions futures pour améliorer le projet.

### Capteur de fin de course
Avec l'utilisation du moteur pas à pas, je vais intégrer un capteur de fin de course pour déterminer la position d'ouverture et de fermeture. 

### Synchronisation et calibration
Lors d'un redémarrage, il faudra initialiser le moteur (en ouverture ou fermeture) pour calibrer les cycles de pas grâce au capteur de fin de course.


*Il n'y aura pas de PCB à concevoir. Les composants seront connectés ou soudés directement sur la carte espCam32.*