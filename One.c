#include <windows.h>
#include <stdio.h>
#include <string.h>
char gen[] = "Gennaio";
char feb[] = "Febbraio";
char mar[] = "Marzo";
char apr[] = "Aprile";
char mag[] = "Maggio";
char giu[] = "Giugno";
char lug[] = "Luglio";
char ago[] = "Agosto";
char set[] = "Settembre";
char ott[] = "Ottobre";
char nov[] = "Novembre";
char dic[] = "Dicembre";
char mese[100];
char riavvio[100];
int giorno;
int main()
{	
	printf("|COMPLEANNI ONE PIECE| Scrivi il giorno e mese per vedere il compleanno dei personaggi dell'ononimo Anime: ");
	scanf("%d", &giorno);
	scanf("%s", &mese);

	if (strcmp(mese, gen) == 0)
	{
		if (giorno == 1)
		{
			printf("Buon compleanno Portuguese D. Ace, Islewan, Das Bornes (mr 1) e Eiichiro Oda!");
		}
		if (giorno == 2)
		{
			printf("Buon compleanno Peepley Lulu!");
		}
		if (giorno == 3)
		{
			printf("Buon compleanno Iceburg e Aisa!");
		}
		if (giorno == 4)
		{
			printf("Buon compleanno Crocus, Peterman e Ulti!");
		}
		if (giorno == 5)
		{
			printf("Buon compleanno Strawberry!");
		}
		if (giorno == 6)
		{
			printf("Buon compleanno Tilestone e Oimo!");
		}
		if (giorno == 7)
		{
			printf("Buon compleanno Mozu!");
		}
		if (giorno == 8)
		{
			printf("Buon compleanno Emporio Ivankov e Generale Franky!");
		}
		if (giorno == 9)
		{
			printf("Buon compleanno Pickles!");
		}
		if (giorno == 10)
		{
			printf("Buon compleanno Eustass Kidd e Otohime!");
		}
		if (giorno == 11)
		{
			printf("Buon compleanno Lombrico!");
		}
		if (giorno == 12)
		{
			printf("Buon compleanno Hillk!");
		}
		if (giorno == 13)
		{
			printf("Buon compleanno Ikaros Muhhi!");
		}
		if (giorno == 14)
		{
			printf("Buon compleanno Sweet Pea!");
		}
		if (giorno == 15)
		{
			printf("Buon compleanno A.O.!");
		}
		if (giorno == 16)
		{
			printf("ERROR 104!");
		}
		if (giorno == 17)
		{
			printf("Buon compleanno Capone Bege!");
		}
		if (giorno == 18)
		{
			printf("Buon compleanno Splash e Splatter!");
		}
		if (giorno == 19)
		{
			printf("Buon compleanno Spandine e Kozuki Toki!");
		}
		if (giorno == 20)
		{
			printf("Buon compleanno Kinderella!");
		}
		if (giorno == 21)
		{
			printf("Buon compleanno Antonio e Miss Friday!");
		}
		if (giorno == 22)
		{
			printf("Buon compleanno Merry!");
		}
		if (giorno == 23)
		{
			printf("Buon compleanno Roxane, Ginrummy e Charlotte Nusstorte!");
		}
		if (giorno == 24)
		{
			printf("Buon compleanno Kyrricane, Miss Monday e Gild Tesoro!");
		}
		if (giorno == 25)
		{
			printf("Buon compleanno Jora!");
		}
		if (giorno == 26)
		{
			printf("Buon compleanno Nero!");
		}
		if (giorno == 27)
		{
			printf("Buon compleanno Charlotte Laura e Charlotte Chiffon!");
		}
		if (giorno == 28)
		{
			printf("Buon compleanno Manshelly!");
		}
		if (giorno == 29)
		{
			printf("Buon compleanno Kin'emon!");
		}
		if (giorno == 30)
		{
			printf("Buon compleanno Domo, Viola e Suleiman!");
		}
		if (giorno == 31)
		{
			printf("Buon compleanno Ipponmatsu, An Zengaiina e Aladin!");
		}
		if (giorno > 31)
		{
			printf("La stupidità risiede in te signore.");
		}
	}

	if (strcmp(mese, feb) == 0)
	{
		if (giorno == 1)
		{
			printf("Buon compleanno Brogi e Doma!");
		}
		if (giorno == 2)
		{
			printf("Buon compleanno Carrot, Nefertari D Vivi e Killer!");
		}
		if (giorno == 3)
		{
			printf("Buon compleanno Bizarre, Chadros Higelyges, Fuza e Sasaki!");
		}
		if (giorno == 4)
		{
			printf("Buon compleanno Halta, Nyon, Fukaboshi e Fujin!");
		}
		if (giorno == 5)
		{
			printf("Buon compleanno Fuga, Vista e Bramenko!");
		}
		if (giorno == 6)
		{
			printf("Buon compleanno Nico Robin, Nico Olvia e Blondie!");
		}
		if (giorno == 7)
		{
			printf("Buon compleanno Buchi!");
		}
		if (giorno == 8)
		{
			printf("Buon compleanno Chikin, Gonbe e Onigumo!");
		}
		if (giorno == 9)
		{
			printf("Buon compleanno Carne, Orso Bartholomew, Genbo e Wadatsumi!");
		}
		if (giorno == 10)
		{
			printf("Buon compleanno Mikazuki e Page One!");
		}
		if (giorno == 11)
		{
			printf("Buon compleanno Charlotte Flambè!");
		}
		if (giorno == 12)
		{
			printf("Buon compleanno Little Odr Junior!");
		}
		if (giorno == 13)
		{
			printf("Buon compleanno Nefertari D Cobra!");
		}
		if (giorno == 14)
		{
			printf("Buon compleanno Mikita e Hyogoro!");
		}
		if (giorno == 15)
		{
			printf("Buon compleanno Charlotte LinLin (Bigmom) e Daisy!");
		}
		if (giorno == 16)
		{
			printf("Buon compleanno Bluejam!");
		}
		if (giorno == 17)
		{
			printf("Buon compleanno Ukkari e Clione!");
		}
		if (giorno == 18)
		{
			printf("Buon compleanno Minorva e Gambia!");
		}
		if (giorno == 19)
		{
			printf("Buon compleanno Bobby Funk e Lord!");
		}
		if (giorno == 20)
		{
			printf("Buon compleanno Kumadori!");
		}
		if (giorno == 21)
		{
			printf("Buon compleanno Jigoro, Pashia, Charlotte Dolce e Charlotte Dragée!");
		}
		if (giorno == 22)
		{
			printf("Buon compleanno Hamburg, Jerry e Kozuki Oden!");
		}
		if (giorno == 23)
		{
			printf("Buon compleanno Makino!");
		}
		if (giorno == 24)
		{
			printf("Buon compleanno Mr. Beans e Enishida!");
		}
		if (giorno == 25)
		{
			printf("Buon compleanno Gerd!");
		}
		if (giorno == 26)
		{
			printf("Buon compleanno Raizo!");
		}
		if (giorno == 27)
		{
			printf("Buon compleanno Charlotte Mascarpone e Charlotte Joscarpone!");
		}
		if (giorno == 28)
		{
			printf("Buon compleanno Woop Slap, Charlotte Cracker, Charlotte Custard, Charlotte Angel e Kazekage!");
		}
		if (giorno == 29)
		{
			printf("Buon compleanno Aramaki, Pandaman e Pandawoman!");
		}
		if (giorno > 29)
		{
			printf("Buon compleanno Domo, Viola e Suleiman!");
		}
	}

	if (strcmp(mese, mar) == 0)
	{
		if (giorno == 1)
		{
			printf("Buon compleanno Minorinoceros!");
		}
		if (giorno == 2)
		{
			printf("Buon compleanno San Juan Wolf, Vinsmoke Ichiji, Vinsmoke Niji, Blackleg Sanji e Vinsmoke Yonji!");
		}
		if (giorno == 3)
		{
			printf("Buon compleanno Hina, Galdino (mr 3) e Kurozumi Tama!");
		}
		if (giorno == 4)
		{
			printf("Buon compleanno Mashira e Minotauros!");
		}
		if (giorno == 5)
		{
			printf("Buon compleanno Sady-chan e Minokoala!");
		}
		if (giorno == 6)
		{
			printf("Buon compleanno Hagwor D. Sauro, Salomè, Charlotte Brulee e Charlotte Broyé!");
		}
		if (giorno == 7)
		{
			printf("Buon compleanno Gyor e Minozebra!");
		}
		if (giorno == 8)
		{
			printf("Buon compleanno Battsu e Zanbai!");
		}
		if (giorno == 9)
		{
			printf("Buon compleanno Franky, Shanks e Dracule Mihawk!");
		}
		if (giorno == 10)
		{
			printf("Buon compleanno Sentemaru, Satori e Nola!");
		}
		if (giorno == 11)
		{
			printf("Buon compleanno Palms e Spandam!");
		}
		if (giorno == 12)
		{
			printf("Buon compleanno Paty, Sarutobi e Stelly!");
		}
		if (giorno == 13)
		{
			printf("Buon compleanno Lafitte!");
		}
		if (giorno == 14)
		{
			printf("Buon compleanno Smoker, Albida e Charlotte Perospero!");
		}
		if (giorno == 15)
		{
			printf("ERROR 104!");
		}
		if (giorno == 16)
		{
			printf("Buon compleanno Tom!");
		}
		if (giorno == 17)
		{
			printf("Buon compleanno Ideaman e Hera (homey)!");
		}
		if (giorno == 18)
		{
			printf("Buon compleanno Trebol!");
		}
		if (giorno == 19)
		{
			printf(" Buon compleanno Scratchmen Apoo e Atomos!");
		}
		if (giorno == 20)
		{
			printf("Buon compleanno Sabo e Shiki!");
		}
		if (giorno == 21)
		{
			printf("Buon compleanno Spacey!");
		}
		if (giorno == 22)
		{
			printf(" Buon compleanno Sapy!");
		}
		if (giorno == 23)
		{
			printf("Buon compleanno Miss Katherina e Charlotte Raisin!");
		}
		if (giorno == 24)
		{
			printf("Buon compleanno Satch!");
		}
		if (giorno == 25)
		{
			printf("Buon compleanno Ohm!");
		}
		if (giorno == 26)
		{
			printf("Buon compleanno Tsuru!");
		}
		if (giorno == 27)
		{
			printf("Buon compleanno Barbarosa!");
		}
		if (giorno == 28)
		{
			printf("Buon compleanno Sarù!");
		}
		if (giorno == 29)
		{
			printf("Buon compleanno Fukurokuju, Katarina Devon e Shalulia!");
		}
		if (giorno == 30)
		{
			printf("Buon compleanno Bas e Manboshi!");
		}
		if (giorno == 31)
		{
			printf("Buon compleanno And!");
		}
		if (giorno > 31)
		{
			printf("La stupidità risiede in te signore.");
		}
	}

	if (strcmp(mese, apr) == 0)
	{
		if (giorno == 1)
		{
			printf(" Buon compleanno Usopp, Karsee e Kerville!");
		}
		if (giorno == 2)
		{
			printf("Buon compleanno Jinbe, Shimotsuki Yasuie e Zeff!");
		}
		if (giorno == 3)
		{
			printf("Buon compleanno Brook, Polchemy e Monda!");
		}
		if (giorno == 4)
		{
			printf("Buon compleanno Foxy, Shirahoshi e Sicilian!");
		}
		if (giorno == 5)
		{
			printf("Buon compleanno Yamakaji e ministro della destra");
		}
		if (giorno == 6)
		{
			printf("Buon compleanno Edward Newgate (barbabianca), Speed Jil e Jean Bart!");
		}
		if (giorno == 7)
		{
			printf("Buon compleanno Shachi e Gin!");
		}
		if (giorno == 8)
		{
			printf("Buon compleanno Claíomh D. Clover, Megalo e Buffalo!");
		}
		if (giorno == 9)
		{
			printf("Buon compleanno Peperone, Momu, Yooki, Margaret e Caesar Clown!");
		}
		if (giorno == 10)
		{
			printf("Buon compleanno Cipolla e Ashura Doji!");
		}
		if (giorno == 11)
		{
			printf("Buon compleanno Pekoms!");
		}
		if (giorno == 12)
		{
			printf("Buon compleanno Buckingham Stussy!");
		}
		if (giorno == 13)
		{
			printf("Buon compleanno Morgan!");
		}
		if (giorno == 14)
		{
			printf("Buon compleanno Hody Jones!");
		}
		if (giorno == 15)
		{
			printf("Buon compleanno Fossa!");
		}
		if (giorno == 16)
		{
			printf("Buon compleanno Stronger!");
		}
		if (giorno == 17)
		{
			printf("Buon compleanno Charlotte Anana!");
		}
		if (giorno == 18)
		{
			printf("Buon compleanno Hyozo!");
		}
		if (giorno == 19)
		{
			printf("Buon compleanno Sham!");
		}
		if (giorno == 20)
		{
			printf("Buon compleanno Blueno!");
		}
		if (giorno == 21)
		{
			printf("Buon compleanno Mangia isole e Ucy!");
		}
		if (giorno == 22)
		{
			printf("Buon compleanno Kuro!");
		}
		if (giorno == 23)
		{
			printf("Buon compleanno Califa e Charlotte Mont d'Or!");
		}
		if (giorno == 24)
		{
			printf("Buon compleanno Chome e Stussy (CP0)!");
		}
		if (giorno == 25)
		{
			printf("Buon compleanno Penguin!");
		}
		if (giorno == 26)
		{
			printf("Buon compleanno Chaka!");
		}
		if (giorno == 27)
		{
			printf("Buon compleanno Streusen!");
		}
		if (giorno == 28)
		{
			printf("Buon compleanno Funkfleed!");
		}
		if (giorno == 29)
		{
			printf("Buon compleanno Marianne!");
		}
		if (giorno == 30)
		{
			printf("Buon compleanno Viola!");
		}
		if (giorno > 30)
		{
			printf("La stupidità risiede in te signore.");
		}
	}

	if (strcmp(mese, mag) == 0)
	{
		if (giorno == 1)
		{
			printf("Buon compleanno Kaido e Kapoty!");
		}
		if (giorno == 2)
		{
			printf("Buon compleanno Monkey D. Garp, Coribou e Cosette!");
		}
		if (giorno == 3)
		{
			printf("Buon compleanno Arlong!");
		}
		if (giorno == 4)
		{
			printf("Buon compleanno Victoria Cindry e Ishley!");
		}
		if (giorno == 5)
		{
			printf("Buon compleanno Monkey D. Rufy, Demaro Black e G-5!");
		}
		if (giorno == 6)
		{
			printf("Buon compleanno Ener!");
		}
		if (giorno == 7)
		{
			printf("Buon compleanno Maynard!");
		}
		if (giorno == 8)
		{
			printf(" Buon compleanno Orangutan e Shakuyaku!");
		}
		if (giorno == 9)
		{
			printf("Buon compleanno Sengoku e Kong!");
		}
		if (giorno == 10)
		{
			printf("Buon compleanno Hercules!");
		}
		if (giorno == 11)
		{
			printf("Buon compleanno Polo e Goldberg!");
		}
		if (giorno == 12)
		{
			printf("Buon compleanno Daikoku e Vinsmoke Judge!");
		}
		if (giorno == 13)
		{
			printf("Buon compleanno Kobi e Silvers Rayleigh!");
		}
		if (giorno == 14)
		{
			printf("Buon compleanno Tamago!");
		}
		if (giorno == 15)
		{
			printf("Buon compleanno Baby 5!");
		}
		if (giorno == 16)
		{
			printf("Buon compleanno Columbus!");
		}
		if (giorno == 17)
		{
			printf("Buon compleanno Hoccal e Mr. Thirteen!");
		}
		if (giorno == 18)
		{
			printf("Buon compleanno Gorilla!");
		}
		if (giorno == 19)
		{
			printf("Buon compleanno John Giant, Candré, André e Kozuki Sukiyaki! (Akainu)");
		}
		if (giorno == 20)
		{
			printf("Buon compleanno Konis!");
		}
		if (giorno == 21)
		{
			printf("Buon compleanno Lindbergh!");
		}
		if (giorno == 22)
		{
			printf("Buon compleanno fratelli Decalvan!");
		}
		if (giorno == 23)
		{
			printf("Buon compleanno Pciù!");
		}
		if (giorno == 24)
		{
			printf("Buon compleanno Carrot!");
		}
		if (giorno == 25)
		{
			printf("Buon compleanno Big Pan!");
		}
		if (giorno == 26)
		{
			printf("Buon compleanno Kosa!");
		}
		if (giorno == 27)
		{
			printf("Buon compleanno Kose e Stansen!");
		}
		if (giorno == 28)
		{
			printf("Buon compleanno Nyasha!");
		}
		if (giorno == 29)
		{
			printf("Buon compleanno Diamante!");
		}
		if (giorno == 30)
		{
			printf("Buon compleanno Swuuush!");
		}
		if (giorno == 31)
		{
			printf("Buon compleanno Rakyuba!");
		}
		if (giorno > 31)
		{
			printf("La stupidità risiede in te signore.");
		}
	}

	if (strcmp(mese, giu) == 0)
	{
		if (giorno == 1)
		{
			printf("Buon compleanno Charlos e Moda!");
		}
		if (giorno == 2)
		{
			printf("Buon compleanno Rob Lucci, Ronse e Chimney!");
		}
		if (giorno == 3)
		{
			printf("Buon compleanno Musse!");
		}
		if (giorno == 4)
		{
			printf("Buon compleanno Epoida e Raijin!");
		}
		if (giorno == 5)
		{
			printf("Buon compleanno Jabura e Sicily!");
		}
		if (giorno == 6)
		{
			printf("Buon compleanno Momonga, Karma e Fukuro!");
		}
		if (giorno == 7)
		{
			printf("Buon compleanno Perona!");
		}
		if (giorno == 8)
		{
			printf("Buon compleanno Lacroix e Saldeath!");
		}
		if (giorno == 9)
		{
			printf("Buon compleanno Seppy e Rockstar!");
		}
		if (giorno == 10)
		{
			printf("Buon compleanno Portuguese D. Rouge e Dorton!");
		}
		if (giorno == 11)
		{
			printf("Buon compleanno Shiryu!");
		}
		if (giorno == 12)
		{
			printf("Buon compleanno Disco e Senior Pink!");
		}
		if (giorno == 13)
		{
			printf("Buon compleanno Rippah!");
		}
		if (giorno == 14)
		{
			printf("Buon compleanno Kawamatsu!");
		}
		if (giorno == 15)
		{
			printf("Buon compleanno Roshio e Belo Betty!");
		}
		if (giorno == 16)
		{
			printf("Buon compleanno Pedro!");
		}
		if (giorno == 17)
		{
			printf("Buon compleanno Genzo, Tamachibi e Toto!");
		}
		if (giorno == 18)
		{
			printf("Buon compleanno Rica!");
		}
		if (giorno == 19)
		{
			printf("Buon compleanno Rokkaku, Babe e Tibbany!");
		}
		if (giorno == 20)
		{
			printf("Buon compleanno Amadob!");
		}
		if (giorno == 21)
		{
			printf("Buon compleanno Lindbergh!");
		}
		if (giorno == 22)
		{
			printf("Buon compleanno fratelli Decalvan!");
		}
		if (giorno == 23)
		{
			printf("Buon compleanno Pciù!");
		}
		if (giorno == 24)
		{
			printf("Buon compleanno Carrot!");
		}
		if (giorno == 25)
		{
			printf("Buon compleanno Big Pan!");
		}
		if (giorno == 26)
		{
			printf("Buon compleanno Kosa!");
		}
		if (giorno == 27)
		{
			printf("Buon compleanno Kose e Stansen!");
		}
		if (giorno == 28)
		{
			printf("Buon compleanno Nyasha!");
		}
		if (giorno == 29)
		{
			printf("Buon compleanno Diamante!");
		}
		if (giorno == 30)
		{
			printf("Buon compleanno Swuuush!");
		}
		if (giorno > 30)
		{
			printf("La stupidità risiede in te signore.");
		}
	}

	if (strcmp(mese, lug) == 0)
	{
		if (giorno == 1)
		{
			printf("Buon compleanno Nako!");
		}
		if (giorno == 2)
		{
			printf("Buon compleanno ministro della sinistra!");
		}
		if (giorno == 3)
		{
			printf("Buon compleanno Nami e Nettuno!");
		}
		if (giorno == 4)
		{
			printf("Buon compleanno Caribou!");
		}
		if (giorno == 5)
		{
			printf("Buon compleanno Vergo!");
		}
		if (giorno == 6)
		{
			printf("Buon compleanno Lucky Lou, Namyuul e Sheepshead!");
		}
		if (giorno == 7)
		{
			printf("Buon compleanno Laki!");
		}
		if (giorno == 8)
		{
			printf("Buon compleanno Pauly e Daruma!");
		}
		if (giorno == 9)
		{
			printf("Buon compleanno Vinsmoke Sora!");
		}
		if (giorno == 10)
		{
			printf("Buon compleanno Kamakiri e Lamba!");
		}
		if (giorno == 11)
		{
			printf("Buon compleanno Pearl e Blufan!");
		}
		if (giorno == 12)
		{
			printf("Buon compleanno Cirkeys!");
		}
		if (giorno == 13)
		{
			printf("Buon compleanno King Baum e Scien!");
		}
		if (giorno == 14)
		{
			printf("Buon compleanno Bastille e Morgan!");
		}
		if (giorno == 15)
		{
			printf("Buon compleanno Donquijote Rosinante!");
		}
		if (giorno == 16)
		{
			printf("Buon compleanno Hermeppo e Set!");
		}
		if (giorno == 17)
		{
			printf("Buon compleanno Hammond!");
		}
		if (giorno == 18)
		{
			printf("Buon compleanno Nugire Yainu, Michael, Hoichael, Wire e Smiley!");
		}
		if (giorno == 19)
		{
			printf("Buon compleanno Yu e Prometheus!");
		}
		if (giorno == 20)
		{
			printf("Buon compleanno Ham Burger e Giovanni!");
		}
		if (giorno == 21)
		{
			printf("Buon compleanno Kurozumi Kanjuro!");
		}
		if (giorno == 22)
		{
			printf("Buon compleanno Charlotte Prim e Charlotte Praline!");
		}
		if (giorno == 23)
		{
			printf("Buon compleanno Richi!");
		}
		if (giorno == 24)
		{
			printf("Buon compleanno Leo!");
		}
		if (giorno == 25)
		{
			printf("Buon compleanno Nojiko!");
		}
		if (giorno == 26)
		{
			printf("Buon compleanno Gem!");
		}
		if (giorno == 27)
		{
			printf("Buon compleanno Taras Lucas e Kikyo!");
		}
		if (giorno == 28)
		{
			printf("Buon compleanno Flapper!");
		}
		if (giorno == 29)
		{
			printf("Buon compleanno Kadal!");
		}
		if (giorno == 30)
		{
			printf("Buon compleanno Zala!");
		}
		if (giorno == 31)
		{
			printf("Buon compleanno Sally Qualcunietta!");
		}
		if (giorno > 31)
		{
			printf("La stupidità risiede in te signore.");
		}
	}

	if (strcmp(mese, ago) == 0)
	{
		if (giorno == 1)
		{
			printf("Buon compleanno Urouge, Aphelandra e Bishamon!");
		}
		if (giorno == 2)
		{
			printf("Buon compleanno Yassop e Époni!");
		}
		if (giorno == 3)
		{
			printf("Buon compleanno Marshall D. Teach, Inazuma e Hanzo!");
		}
		if (giorno == 4)
		{
			printf("Buon compleanno Amazon, Capoccia del sottosuolo e Rebecca!");
		}
		if (giorno == 5)
		{
			printf("Buon compleanno Vasco Shot, Gaimon e Octopako!");
		}
		if (giorno == 6)
		{
			printf("Buon compleanno Blenheim, Sodoma, Gomorra e Gladius!");
		}
		if (giorno == 7)
		{
			printf("Buon compleanno Bellamy e Kaku!");
		}
		if (giorno == 8)
		{
			printf("Buon compleanno Buggy, Hacchan e Yazaemon!");
		}
		if (giorno == 9)
		{
			printf("Buon compleanno Wapol, Vegapunk e Hack!");
		}
		if (giorno == 10)
		{
			printf("Buon compleanno Gedatsu, Hattori e Issho!");
		}
		if (giorno == 11)
		{
			printf("Buon compleanno Duval e Dellinger!");
		}
		if (giorno == 12)
		{
			printf("ERROR 104!");
		}
		if (giorno == 13)
		{
			printf("Buon compleanno Machvise e Sai!");
		}
		if (giorno == 14)
		{
			printf("Buon compleanno Jean Ango, Bomba e Giberson!");
		}
		if (giorno == 15)
		{
			printf("Buon compleanno Bentham e Tsukimi!");
		}
		if (giorno == 16)
		{
			printf("Buon compleanno Sakazuki (Akainu)!");
		}
		if (giorno == 17)
		{
			printf("Buon compleanno Pagaya!");
		}
		if (giorno == 18)
		{
			printf("Buon compleanno Wiper!");
		}
		if (giorno == 19)
		{
			printf("Buon compleanno Kurozumi Higurashi e Motobaro!");
		}
		if (giorno == 20)
		{
			printf("Buon compleanno Boo!");
		}
		if (giorno == 21)
		{
			printf("Buon compleanno Holdem e Pound!");
		}
		if (giorno == 22)
		{
			printf("Buon compleanno Van Der Decken IX!");
		}
		if (giorno == 23)
		{
			printf("Buon compleanno Kurozumi Semimaru e Pell!");
		}
		if (giorno == 24)
		{
			printf("Buon compleanno Kaya!");
		}
		if (giorno == 25)
		{
			printf("Buon compleanno Coogy!");
		}
		if (giorno == 26)
		{
			printf("Buon compleanno Gats!");
		}
		if (giorno == 27)
		{
			printf("Buon compleanno Mone!");
		}
		if (giorno == 28)
		{
			printf("Buon compleanno Hannyabal e Daigin!");
		}
		if (giorno == 29)
		{
			printf("Buon compleanno Farul!");
		}
		if (giorno == 30)
		{
			printf("Buon compleanno Curly Dadan!");
		}
		if (giorno == 31)
		{
			printf("Buon compleanno Cavendish!");
		}
		if (giorno > 31)
		{
			printf("La stupidità risiede in te signore.");
		}
	}

	if (strcmp(mese, set) == 0)
	{
		if (giorno == 1)
		{
			printf("Buon compleanno Jewelry Bonney, Delacuaji e Kiwi!");
		}
		if (giorno == 2)
		{
			printf("Buon compleanno Boa Hancock!");
		}
		if (giorno == 3)
		{
			printf("Buon compleanno Brandnew, Boa Sandersonia e McGuy!");
		}
		if (giorno == 4)
		{
			printf("Buon compleanno Wanze e Kumacy!");
		}
		if (giorno == 5)
		{
			printf("Buon compleanno Crocodile e Boa Marigold!");
		}
		if (giorno == 6)
		{
			printf("Buon compleanno Gekko Moria, Macro e Squardo!");
		}
		if (giorno == 7)
		{
			printf("Buon compleanno Motzel!");
		}
		if (giorno == 8)
		{
			printf("Buon compleanno Kabaji e Rakuyou!");
		}
		if (giorno == 9)
		{
			printf("Buon compleanno Basil Hawkins, Shirley e Kikunojo!");
		}
		if (giorno == 10)
		{
			printf("Buon compleanno T-Bone e Verygood!");
		}
		if (giorno == 11)
		{
			printf("Buon compleanno Montblanc Cricket e Morley!");
		}
		if (giorno == 12)
		{
			printf("Buon compleanno Curiel!");
		}
		if (giorno == 13)
		{
			printf("Buon compleanno Whally!");
		}
		if (giorno == 14)
		{
			printf("Buon compleanno Sea Beast (quella che ha magnato Shanks)!");
		}
		if (giorno == 15)
		{
			printf("Buon compleanno Spoil e Tsurujo!");
		}
		if (giorno == 16)
		{
			printf("Buon compleanno Lindow e Loboon!");
		}
		if (giorno == 17)
		{
			printf("Buon compleanno Shimotsuki Kuina!");
		}
		if (giorno == 18)
		{
			("Buon compleanno Devil Dias e Karasu!");
		}
		if (giorno == 19)
		{
			printf("Buon compleanno Creek!");
		}
		if (giorno == 20)
		{
			printf("Buon compleanno Shura!");
		}
		if (giorno == 21)
		{
			printf("Buon compleanno Kuzan e Pappagu!");
		}
		if (giorno == 22)
		{
			printf("Buon compleanno Kyros!");
		}
		if (giorno == 23)
		{
			printf("Buon compleanno Hanger, Kurozumi Orochi e Umit!");
		}
		if (giorno == 24)
		{
			printf("Buon compleanno Suu, Jean Goen e Black Maria!");
		}
		if (giorno == 25)
		{
			printf("Buon compleanno Terracotta!");
		}
		if (giorno == 26)
		{
			printf("Buon compleanno Cosmos e Dagama!");
		}
		if (giorno == 27)
		{
			printf("Buon compleanno Mr. Nine!");
		}
		if (giorno == 28)
		{
			printf("Buon compleanno Stalker e Jack!");
		}
		if (giorno == 29)
		{
			printf("Buon compleanno Drug Peclo, Charlotte Opera, Charlotte Counter, Charlotte Cadenza, Charlotte Cabaletta e Charlotte Gala!");
		}
		if (giorno == 30)
		{
			printf("Buon compleanno Avalo Pizarro!");
		}
		if (giorno > 30)
		{
			printf("La stupidità risiede in te signore.");
		}
	}

	if (strcmp(mese, ott) == 0)
	{
		if (giorno == 1)
		{
			printf("Buon compleanno Moji, Comir e Uta!");
		}
		if (giorno == 2)
		{
			printf("Buon compleanno Dori e Tonjit!");
		}
		if (giorno == 3)
		{
			printf("Buon compleanno Yama!");
		}
		if (giorno == 4)
		{
			printf("Buon compleanno Calgara e Odr!");
		}
		if (giorno == 5)
		{
			printf("Buon compleanno Monkey D. Dragon, Van Ooger, Kokoro, Marco e Toko!");
		}
		if (giorno == 6)
		{
			printf("Buon compleanno Tashigi, Trafalgar D. Water Law e Bartolomeo!");
		}
		if (giorno == 7)
		{
			printf("Buon compleanno Kozuki Momonosuke e Lao G!");
		}
		if (giorno == 8)
		{
			printf("Buon compleanno Doberman, Hatcha e Pierre!");
		}
		if (giorno == 9)
		{
			printf("Buon compleanno Montblanc Noland, Magellan e Sbam!");
		}
		if (giorno == 10)
		{
			printf("Buon compleanno Den!");
		}
		if (giorno == 11)
		{
			printf("Buon compleanno Cane-tempesta!");
		}
		if (giorno == 12)
		{
			printf("Buon compleanno Charlotte Smoothie, Charlotte Citron e Charlotte Cinnamon!");
		}
		if (giorno == 13)
		{
			printf("Buon compleanno Izo!");
		}
		if (giorno == 14)
		{
			printf("Buon compleanno Haredas!");
		}
		if (giorno == 15)
		{
			printf("Buon compleanno Mornin, Charlotte Compote e Charlotte Yuan!");
		}
		if (giorno == 16)
		{
			printf("Buon compleanno Taroimo!");
		}
		if (giorno == 17)
		{
			printf("Buon compleanno Marin e Lord Coccodrillo!");
		}
		if (giorno == 18)
		{
			printf("Buon compleanno Doc Q e Jigoku Benten!");
		}
		if (giorno == 19)
		{
			printf("Buon compleanno Charlotte Galette, Charlotte Poire e Charlotte Anglaise!");
		}
		if (giorno == 20)
		{
			printf("Buon compleanno Tirannosauro!");
		}
		if (giorno == 21)
		{
			printf("Buon compleanno Sam e Vito!");
		}
		if (giorno == 22)
		{
			printf("Buon compleanno Sugar!");
		}
		if (giorno == 23)
		{
			printf("Buon compleanno Donquijote Do Flamingo e Shinobu!");
		}
		if (giorno == 24)
		{
			printf("Buon compleanno X Drake!");
		}
		if (giorno == 25)
		{
			printf("Buon compleanno Guernica, Kuroobi e Koala!");
		}
		if (giorno == 26)
		{
			printf("Buon compleanno Belladonna e Denjiro!");
		}
		if (giorno == 27)
		{
			printf("ERROR 104!");
		}
		if (giorno == 28)
		{
			printf("Buon compleanno Scarlet!");
		}
		if (giorno == 29)
		{
			printf("Buon compleanno Turco e Charlotte Snack!");
		}
		if (giorno == 30)
		{
			printf("Buon compleanno Domino e Magura!");
		}
		if (giorno == 31)
		{
			printf("Buon compleanno Whitey Bay e Shelly!");
		}
		if (giorno > 31)
		{
			printf("La stupidità risiede in te signore.");
		}
	}

	if (strcmp(mese, nov) == 0)
	{
		if (giorno == 1)
		{
			printf("Buon compleanno Dalmata e Wanda!");
		}
		if (giorno == 2)
		{
			printf("Buon compleanno Shimotsuki Ushimaru, Marie, Judy e Concelot!");
		}
		if (giorno == 3)
		{
			printf("Buon compleanno Kayme e Yamato!");
		}
		if (giorno == 4)
		{
			printf("Buon compleanno Kashi!");
		}
		if (giorno == 5)
		{
			printf("Buon compleanno Fisher Tiger!");
		}
		if (giorno == 6)
		{
			printf("Buon compleanno Shimotsuki Ryuma!");
		}
		if (giorno == 7)
		{
			printf("Buon compleanno Holy e Cocoa!");
		}
		if (giorno == 8)
		{
			printf("Buon compleanno Karl e Shamba!");
		}
		if (giorno == 9)
		{
			printf("Buon compleanno Ben Beckman, Albion e Jalmack!");
		}
		if (giorno == 10)
		{
			printf("Buon compleanno Yosaku!");
		}
		if (giorno == 11)
		{
			printf("Buon compleanno Roronoa Zoro, Jaws e Zeo!");
		}
		if (giorno == 12)
		{
			printf("Buon compleanno Johnny!");
		}
		if (giorno == 13)
		{
			printf("Buon compleanno Kingdew!");
		}
		if (giorno == 14)
		{
			printf("Buon compleanno Shimotsuki Kozaburo, Maria Orsedano e Raindeen!");
		}
		if (giorno == 15)
		{
			printf("Buon compleanno Ririca!");
		}
		if (giorno == 16)
		{
			printf("Buon compleanno Polluce!");
		}
		if (giorno == 17)
		{
			printf("Buon compleanno Moody, Charlotte Mobile, Charlotte Marble, Charlotte Myukuru e Charlotte Maple!");
		}
		if (giorno == 18)
		{
			printf("Buon compleanno Higuma!");
		}
		if (giorno == 19)
		{
			printf("Buon compleanno Onimaru!");
		}
		if (giorno == 20)
		{
			printf("Buon compleanno Bepo!");
		}
		if (giorno == 21)
		{
			printf("Buon compleanno Mamy Me e Mr. Eleven!");
		}
		if (giorno == 22)
		{
			printf("Buon compleanno Gatto-vipera!");
		}
		if (giorno == 23)
		{
			printf("Buon compleanno Uzuki Tempura, Borsalino e Lucetto!");
		}
		if (giorno == 24)
		{
			printf("Buon compleanno Ran!");
		}
		if (giorno == 25)
		{
			printf("Buon compleanno Charlotte Katakuri, Charlotte Daifuku e Charlotte Oven!");
		}
		if (giorno == 26)
		{
			printf("Buon compleanno Goro!");
		}
		if (giorno == 27)
		{
			printf("Buon compleanno Blue Gilly!");
		}
		if (giorno == 28)
		{
			printf("Buon compleanno Tank Lepanto!");
		}
		if (giorno == 29)
		{
			printf("Buon compleanno Cerbero, Bacura e Agyo!");
		}
		if (giorno == 30)
		{
			printf("Buon compleanno Domino e Magura!");
		}
		if (giorno > 30)
		{
			printf("Buon compleanno Vinsmoke Reiju!");
		}
	}

	if (strcmp(mese, dic) == 0)
	{
		if (giorno == 1)
		{
			printf("Buon compleanno Heat e Arbel");
		}
		if (giorno == 2)
		{
			printf("Buon compleanno Charlotte Newgo, Napoleon e Kaneshiro!");
		}
		if (giorno == 3)
		{
			printf("Buon compleanno Bellamere!");
		}
		if (giorno == 4)
		{
			printf("Buon compleanno Jorl!");
		}
		if (giorno == 5)
		{
			printf("Buon compleanno Indigo!");
		}
		if (giorno == 6)
		{
			printf("Buon compleanno Igaram!");
		}
		if (giorno == 7)
		{
			printf("Buon compleanno Narvalo!");
		}
		if (giorno == 8)
		{
			printf("Buon compleanno Jarl!");
		}
		if (giorno == 9)
		{
			printf("Buon compleanno Pakky e Tacos!");
		}
		if (giorno == 10)
		{
			printf("Buon compleanno Edward Weeble, Charlotte Amande, Charlotte Hachée e Charlotte Effilée!");
		}
		if (giorno == 11)
		{
			printf("Buon compleanno Mr. Shimizu, Rock, Scotch (yeti) e Speed!");
		}
		if (giorno == 12)
		{
			printf("Buon compleanno Nezumi e Chinjao!");
		}
		if (giorno == 13)
		{
			printf("Buon compleanno Faust e Donquijote Myosgard!");
		}
		if (giorno == 14)
		{
			printf("Buon compleanno Pica!");
		}
		if (giorno == 15)
		{
			printf("Buon compleanno Nerine e Charlotte Noisette!");
		}
		if (giorno == 16)
		{
			printf("Buon compleanno Inuppe, Charlotte Moscato, Charlotte Mash e Charlotte Cornstarch!");
		}
		if (giorno == 17)
		{
			printf("Buon compleanno Banchina e Yuki!");
		}
		if (giorno == 18)
		{
			printf("Buon compleanno Byron e Zunisha!");
		}
		if (giorno == 19)
		{
			printf("Buon compleanno Dogura e Hogback!");
		}
		if (giorno == 20)
		{
			printf("Buon compleanno Louis Arnote, Charlotte Mozart e Charlotte Marnier!");
		}
		if (giorno == 21)
		{
			printf("Buon compleanno Carmel!");
		}
		if (giorno == 22)
		{
			printf("Buon compleanno Gan Forr e Miyagi!");
		}
		if (giorno == 23)
		{
			printf("Buon compleanno Kozuki Hiyori!");
		}
		if (giorno == 24)
		{
			printf("Buon compleanno Tony Tony Chopper!");
		}
		if (giorno == 25)
		{
			printf("Buon compleanno Jesus Burgess!");
		}
		if (giorno == 26)
		{
			printf("Buon compleanno Mashikaku!");
		}
		if (giorno == 27)
		{
			printf("Buon compleanno Linz e Akumai!");
		}
		if (giorno == 28)
		{
			printf("Buon compleanno Jango!");
		}
		if (giorno == 29)
		{
			printf("ERROR 104!");
		}
		if (giorno == 30)
		{
			printf("Buon compleanno Absalom!");
		}
		if (giorno == 31)
		{
			printf("Buon compleanno Gol D. Roger!");
		}
		if (giorno > 31)
		{
			printf("La stupidità risiede in te signore.");
		}
	}

	Sleep(1000);
	printf("\n\nVolete riavviare l'applicazione? ");
	scanf("%s", riavvio);

	if (strcmp(riavvio, "Si") == 0 || strcmp(riavvio, "si") == 0)
	{
		system("cls");
		main();
	}
	else
	{
		printf("Grazie di avermi usato!");
		Sleep(4000);
	}
}