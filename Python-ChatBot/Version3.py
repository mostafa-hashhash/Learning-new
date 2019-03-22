
# Version 3
##################
import random 

bot_name = "Alex " 
author_name = "Darsh "
weather_status = "Very Cold"

Res = { "what's you name?"  :[     " It's " + bot_name ,
				   " My name is " + bot_name ,
				   " They Call me " + bot_name ,
				   " I am " + bot_name ],
									
	"what's your job?"     :[ " I am Helping You With All My Love :) " + author_name ,
				  " I Answer Your Questions :) " + author_name ,
				  " Giving you Info , " + author_name ] ,
									
	"what's the weather?" :[  " It Seems To Be a " + weather_status + " day" ,
				  " It's very " + weather_status + " today" ,
				  " oooooh It's very " + weather_status + " this day " ],
								
	"None"                : " hmmm , sorry I don't Understand What you Just Told me :( "
	}
	
def respond(mes):
	
	if mes in Res :
		B_Mes = random.choice(Res[mes])
	else :
		B_Mes = Res["None"]
		
	print(B_Mes)
	
respond("Hello My Love")
respond("what's you name?")
respond("what's your job?")
respond("what's the weather?")
