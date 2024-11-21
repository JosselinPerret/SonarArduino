# Projet Sonar avec Arduino  

## 🌟 **Qu'est-ce que c'est ?**  

Ce projet, créé par **ZenkoLab**, est une implémentation simple d'un système de sonar utilisant Arduino, conçu à des fins éducatives et expérimentales.  

Le sonar scanne son environnement (**de 15° à 165°**) et calcule la distance entre lui et les objets détectés. Il utilise un capteur ultrason monté sur un servomoteur pour balayer la zone, tandis qu'une interface graphique affiche les résultats en temps réel.

---

## 🛠️ **Composants nécessaires**  

Pour réaliser ce projet, vous aurez besoin de :  

- **Arduino** :  
  Un **Arduino Mega 2560** est recommandé pour éviter les problèmes de compatibilité ou de mémoire rencontrés avec l'Arduino Uno.  
- **Câbles Jumper** :  
  Différents types de câbles (sauf femelle à femelle).  
- **Capteur Ultrason** :  
  Le **HC-SR04** est utilisé pour mesurer les distances.  
- **Breadboard** (optionnel) :  
  Pour simplifier les connexions si nécessaire.  
- **Micro Servomoteur** :  
  Le **SM-S2309S** permet de faire pivoter le capteur ultrason.  

---

## 🖥️ **Prérequis**  

1. **Arduino IDE** :  
   Pour programmer et contrôler la carte Arduino ainsi que le capteur ultrason.  
   Téléchargez-le [ici](https://www.arduino.cc/en/software).  

2. **Processing IDE** :  
   Pour afficher l'interface visuelle du sonar.  
   Téléchargez-le [ici](https://processing.org/download).  

---

## 🔧 **Comment ça fonctionne ?**  

1. Le capteur ultrason émet des ondes sonores et mesure le temps nécessaire au retour de l'écho après avoir rebondi sur un objet.  
2. Le servomoteur fait pivoter le capteur sur une plage prédéfinie (**15° à 165°**), permettant de scanner l'environnement.  
3. L'Arduino calcule la distance des objets détectés et envoie les données à l'interface Processing.  
4. L'interface Processing visualise en temps réel la zone scannée, offrant une représentation similaire à un radar.  

---

## 🚀 **Premiers pas**  

### Configuration matérielle  

1. **Connectez le capteur ultrason** à l'Arduino :  
   - VCC -> 5V  
   - GND -> GND  
   - Trig -> Pin numérique (ex. D9)  
   - Echo -> Pin numérique (ex. D8)  

2. **Connectez le servomoteur** :  
   - Signal -> Pin PWM (ex. D3)  
   - VCC -> 5V  
   - GND -> GND  

3. Utilisez une breadboard si nécessaire pour simplifier les connexions.  

### Configuration logicielle  

1. **Arduino IDE** :  
   - Installez les bibliothèques nécessaires (ex. bibliothèque Servo).  
   - Téléversez le code fourni (`sonar_arduino.ino`) sur votre carte Arduino.  

2. **Processing IDE** :  
   - Installez l'IDE Processing.  
   - Ouvrez le sketch Processing (`sonar_interface.pde`) pour afficher l'interface graphique du sonar.  
   - Assurez-vous que le port COM est identique entre Arduino et Processing.  

---

## 💡 **Limitations du projet**  

- La portée de détection du capteur **HC-SR04** est limitée à **2-400 cm**, et la précision diminue aux distances plus importantes.  
- Le servomoteur peut s'user en cas d'utilisation prolongée en rotation continue.  
- La détection peut être perturbée par des surfaces réfléchissantes ou des obstacles complexes.  

---

## 📋 **Licence**  

Ce projet est open-source et distribué sous la **licence MIT**. Vous êtes libre de l'utiliser, de le modifier et de le partager de manière responsable !  

---  

Amusez-vous à explorer et à construire votre propre sonar ! 🚀
