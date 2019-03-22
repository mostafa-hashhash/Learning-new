
# Version 2 
##################

bot_name = "Alex " 
author_name = "Darsh "
weather_status = "Very Cold"

Res = { "what's you name?"    : " It's " + bot_name , 
		"what's your job?"      : " I am Helping You With All My Love :) " + author_name ,
		"what's the weather?"  : " It Seems To Be a " + weather_status + " day" ,
		"None"                : " hmmm , sorry I don't Understand What you Just Told me :( "
	}
	
def respond(mes):
	
	if mes in Res :
		B_Mes = Res[mes]
	else :
		B_Mes = Res["None"]
		
	print(B_Mes)
	
respond("Hello My Love")
respond("what's you name?")
respond("what's your job?")
respond("what's the weather?")


