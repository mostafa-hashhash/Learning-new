
# Version 1 
##################


def send(U_Mes):
	B_Mes = " WOOW  I Can Hear That You Said : " + U_Mes
	return B_Mes
	
def respond(U_Mes):
	B_Mes = send(U_Mes)
	print (" User Said : " + U_Mes )
	print (" Then BOT Responded : " + B_Mes )


respond("Hello My Love")
