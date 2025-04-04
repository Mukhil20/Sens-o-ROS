# Sens-o-ROS
ARME's 3-day workshop on sensors ,IOT and ROS

BLYNK IOT:

Prerequisites: Intsall blynk library in Arduino ide.

1.Introduction to the UI:
(Inside dev zone)
	Template: A kind of workspace where all the things happens.It includes datastream, dashboard,devices etc..
	Datastream: These are channels for data to flow between your device and the Blynk platform.
	Dashboard: This is the GUI with widgets like switch,slider etc

2.Steps to control built in led using blynk:
•	Create a new template
•	Copy the template id and template name
•	Create new datastream(either virtual or digital pin) and save
•	Go to web dashboard and drag a switch
•	Choose the datstream and save
•	Go to devices and create a new one from “from template”.
•	Copy the auth token.It should be something like,
 #define BLYNK_TEMPLATE_ID "TMPL3q9DvYnio"
#define BLYNK_TEMPLATE_NAME "sens O ros"
#define BLYNK_AUTH_TOKEN "1mtQwIz-S5Di8_Rn4GpaVqNeEbSS2kiV" 
•	Go to Arduino ide and paste the code and upload it.

3.Similarly give the connections for any sensors of your preference and upload the code to monitor or control it using BLYNK IOT.





	
