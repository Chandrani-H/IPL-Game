/**
 * @author  Manojkumar V
 */
#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<string.h>
#include<stdlib.h>
void showteam(int d);
class player {
	public:
	int number,choice,total;
	char s1[30],s2[30],s3[30],s4[30],s5[30],s6[30],s7[30],s8[30],s9[30],s10[30],s11[30];
	void selectteam();
	void showteam(int d);
	void assign();
	void showplayers();
	void play();
}
;
void player::assign() {
	if(this->choice==1) {
		strcpy(this->s1,"MURALI VIJAY");
		strcpy(this->s2,"MICHAEL HUSSEY");
		strcpy(this->s3,"SURESH RAINA");
		strcpy(this->s4,"M S DHONI");
		strcpy(this->s5,"RAVICHANDRA JADEJA");
		strcpy(this->s6,"SUBRAMANIAN BADRINATH");
		strcpy(this->s7,"DWAYNE BRAVO");
		strcpy(this->s8,"ALBIE MORKEL");
		strcpy(this->s9,"RAVICHANDRAN ASHWIN");
		strcpy(this->s10,"DIRK NANNES");
		strcpy(this->s11,"BEN HILFENHAUS");
	} else if(this->choice==2) {
		strcpy(this->s1,"SACHIN TENDULKAR");
		strcpy(this->s2,"HARBHAJAN SINGH");
		strcpy(this->s3,"RICKY PONTING");
		strcpy(this->s4,"LASITH MALINGA");
		strcpy(this->s5,"ROHIT SHARMA");
		strcpy(this->s6,"KIERON POLLARD");
		strcpy(this->s7,"DINESH KARTHICK");
		strcpy(this->s8,"AMBATI RAYUDU");
		strcpy(this->s9,"MUNAF PATEL");
		strcpy(this->s10,"ASHISH NEHRA");
		strcpy(this->s11,"DWAYNE SMITH");
	} else if(this->choice==3) {
		strcpy(this->s1,"GAUTAM GAMBHIR");
		strcpy(this->s2,"JACQUES KALLIS");
		strcpy(this->s3,"YUSUF PATHAN");
		strcpy(this->s4,"BRETT LEE");
		strcpy(this->s5,"SUNIL NARINE");
		strcpy(this->s6,"BRENDEN MCCULLUM");
		strcpy(this->s7,"MANOJ TIWARY");
		strcpy(this->s8,"LAKSHMIPATHI BALAJI");
		strcpy(this->s9,"EOIN MORGAN");
		strcpy(this->s10,"RAJAT BHATIA");
		strcpy(this->s11,"BRAD HADDIN");
	} else if(this->choice==4) {
		strcpy(this->s1,"VIRAT KOHLI");
		strcpy(this->s2,"CHRIS GAYLE");
		strcpy(this->s3,"AB DE VILLIERS");
		strcpy(this->s4,"ZAHEER KHAN");
		strcpy(this->s5,"VINAY KUMAR");
		strcpy(this->s6,"DANIEL VETTORI");
		strcpy(this->s7,"TILLAKARATNE DILSHAN");
		strcpy(this->s8,"MUTTIAH MURALIDHARAN");
		strcpy(this->s9,"R P SINGH");
		strcpy(this->s10,"MURALI KARTHICK");
		strcpy(this->s11,"SAURABH TIWARY");
	}
}
void player::selectteam() {
	cout<<"\n\n\t\tENTER THE CHOICE OF PLAYER "<<this->number<<":";
	cin>>choice;
	showteam(choice);
	if(choice!=1 && choice!=2 && choice!=3 && choice!=4) {
		this->selectteam();
	}
}
void player::showteam(int d) {
	if(d==1) {
		cout<<"\n\t\tCHENNAI SUPER KINGS";
	} else if(d==2) {
		cout<<"\n\t\tMUMBAI INDIANS";
	} else if(d==3) {
		cout<<"\n\t\tKOLKATTA KNIGHT RIDERS";
	} else if(d==4) {
		cout<<"\n\t\tROYAL CHALLENGERS BANGALORE";
	} else {
		cout<<"\n\t\tINVALID CHOICE";
	}
}
void check(player p1,player p2) {
	if(p2.choice==p1.choice) {
		cout<<"\n\n\t\tTHE SAME TEAM HAS BEEN SELECTED BY PLAYER 1";
		p2.selectteam();
		check(p1,p2);
	}
}
void player::showplayers() {
	cout<<"\tTHE TEAM FOR PLAYER "<<this->number;
	delay(600);
	cout<<"\n\n\t"<<this->s1;
	delay(600);
	cout<<"\n\n\t"<<this->s2;
	delay(600);
	cout<<"\n\n\t"<<this->s3;
	delay(600);
	cout<<"\n\n\t"<<this->s4;
	delay(600);
	cout<<"\n\n\t"<<this->s5;
	delay(600);
	cout<<"\n\n\t"<<this->s6;
	delay(600);
	cout<<"\n\n\t"<<this->s7;
	delay(600);
	cout<<"\n\n\t"<<this->s8;
	delay(600);
	cout<<"\n\n\t"<<this->s9;
	delay(600);
	cout<<"\n\n\t"<<this->s10;
	delay(600);
	cout<<"\n\n\t"<<this->s11;
	delay(500);
	clrscr();
	delay(500);
	cout<<"\tTHE TEAM FOR PLAYER "<<this->number;
	cout<<"\n\n\t"<<this->s1<<"\n\n\t"<<this->s2<<"\n\n\t"<<this->s3<<"\n\n\t"<<this->s4<<"\n\n\t"<<this->s5<<"\n\n\t"<<this->s6<<"\n\n\t"<<this->s7<<"\n\n\t"<<this->s8<<"\n\n\t"<<this->s9<<"\n\n\t"<<this->s10<<"\n\n\t"<<this->s11;
	delay(500);
	clrscr();
	delay(500);
	cout<<"\tTHE TEAM FOR PLAYER "<<this->number;
	cout<<"\n\n\t"<<this->s1<<"\n\n\t"<<this->s2<<"\n\n\t"<<this->s3<<"\n\n\t"<<this->s4<<"\n\n\t"<<this->s5<<"\n\n\t"<<this->s6<<"\n\n\t"<<this->s7<<"\n\n\t"<<this->s8<<"\n\n\t"<<this->s9<<"\n\n\t"<<this->s10<<"\n\n\t"<<this->s11;
	delay(500);
	clrscr();
	delay(500);
	cout<<"\tTHE TEAM FOR PLAYER "<<this->number;
	cout<<"\n\n\t"<<this->s1<<"\n\n\t"<<this->s2<<"\n\n\t"<<this->s3<<"\n\n\t"<<this->s4<<"\n\n\t"<<this->s5<<"\n\n\t"<<this->s6<<"\n\n\t"<<this->s7<<"\n\n\t"<<this->s8<<"\n\n\t"<<this->s9<<"\n\n\t"<<this->s10<<"\n\n\t"<<this->s11;
	delay(500);
}
void player::play() {
	clrscr();
	this->total=0;
	int u,v,cr,r,sp;
	cout<<"\n\n\t\t\tPRESS ENTER TO PLAY";
	getch();
	clrscr();
	cout<<"\n\n\n\t\t\tPRESS ENTER TO BAT";
	for (int i=0;i<10;i++) {
		getch();
		clrscr();
		cout<<"\n\n\n\t\tBALL "<<i+1<<"\n";
		srand(time(NULL));
		v=(rand()%(160-80))+80;
		cout<<"\n\t\tTHE SPEED OF THE BALL IS: "<<v;
		sleep(2);
		for (int j=0;j<5000;j++) {
			clrscr();
			//if(this->number==2 && this->total>p1.total)
			//{
			//break;
			//}
			sp=(j%100);
			if(sp>50) {
				sp=sp-50;
				sp=50-sp;
			}
			if(sp==50) {
				sp=49;
			}
			cout<<"\n\n\n\t\tPRESS ENTER TO SELECT THE SPEED OF THE BAT:  "<<sp;
			u=sp;
			cout<<"\n\n\n\n\n\t\t";
			for (int m=0;m<sp;m++) {
				//if(m%2==0) {
					cout<<"*";
				}
				//else {
					//cout<<" ";
				}
			}
			delay(20);
			if(kbhit())
			break;
			if(j==4999) {
				cout<<"\n\n\t\t\t\tTIME OUT";
				u=0;
				sleep(1);
				break;
			}
		}
		clrscr();
		cout<<"\n\n\t\tBALL "<<i+1;
		cout<<"\n\n\t\tTHE SPEED OF THE BALL IS: "<<v;
		cout<<"\n\n\t\tTHE SPEED OF THE BAT IS: "<<u;
		cr=(u*v);
		if(cr>=0 && cr<1000) {
			cout<<"\n\n\t\tWICKET DROP";
			r=0;
		} else if(cr>=1000 && cr<2000) {
			r=0;
			this->total=this->total+0;
		} else if(cr>=2000 && cr<3000) {
			r=1;
			this->total=this->total+1;
		} else if(cr>=3000 && cr<4000) {
			r=2;
			this->total=this->total+2;
		} else if(cr>=4000 && cr<5000) {
			r=3;
			this->total=this->total+3;
		} else if(cr>=5000 && cr<6000) {
			r=4;
			this->total=this->total+4;
		} else if(cr>=6000 && cr<=9000) {
			r=6;
			this->total=this->total+6;
		}
		cout<<"\n\n\t\tTHE SCORE FOR BALL "<<i+1<<" IS "<<r;
		cout<<"\n\n\t\tTHE TOTAL SCORE IS "<<this->total;
		sleep(3);
	}
	sleep(3);
	clrscr();
	cout<<"\n\n\t\t\tTHE TURN OF PLAYER "<<this->number<<" IS OVER";
	cout<<"\n\n\t\t\tTHE TOTAL SCORE OF PLAYER "<<this->number<<" IS "<<this->total;
	sleep(2);
}
void main() {
	player p1,p2;
	p1.number=1,p2.number=2;
	char a[100]="WELCOME TO THE ANNA UNIVERSITY SOFTWARE CRICKET COMPETITION!!!";
	clrscr();
	cout<<"\n\n\n\t";
	for (int i=0;i<100;i++) {
		if(a[i]=='\0') {
			break;
		}
		if(kbhit()) {
			clrscr();
			cout<<"\n\n\n\t";
			for (i=0;i<100;i++) {
				if(a[i]=='\0') {
					break;
				}
				cout<<a[i];
			}
		}
		cout<<a[i];
		delay(50);
	}
	sleep(2);
	clrscr();
	char b[100]="THE GAME BEGINS NOW";
	cout<<"\n\n\t\t\t\t";
	for (i=0;i<100;i++) {
		if(b[i]=='\0') {
			break;
		}
		if(kbhit()) {
			clrscr();
			cout<<"\n\n\t\t\t\t";
			for (i=0;i<100;i++) {
				if(b[i]=='\0') {
					break;
				}
				cout<<b[i];
			}
		}
		cout<<b[i];
		delay(50);
	}
	sleep(1);
	clrscr();
	cout<<"\n\n\t\t\t\t";
	char c[100]="SELECT THE TEAM";
	for (i=0;i<100;i++) {
		if(c[i]=='\0') {
			break;
		}
		cout<<c[i];
		delay(50);
	}
	sleep(1);
	cout<<"\n\n\t\t\t1.CSK\t2.MI\t3.KKR\t4.RCB\n";
	p1.selectteam();
	p1.assign();
	p2.selectteam();
	check(p1,p2);
	p2.assign();
	sleep(1);
	clrscr();
	cout<<"\n\n\n\t\t\t\t";
	char e[100]="THE GAME STARTS";
	for (i=0;i<100;i++) {
		if(e[i]=='\0') {
			break;
		}
		if(kbhit()) {
			clrscr();
			cout<<"\n\n\n\t\t\t\t";
			for (i=0;i<100;i++) {
				if(e[i]=='\0') {
					break;
				}
				cout<<e[i];
			}
		}
		cout<<e[i];
		delay(150);
	}
	sleep(2);
	clrscr();
	cout<<"\n\n\n   SELECT HIGHER VALUE FOR THE SPEED OF THE BAT TO GET MORE NUMBER OF RUNS";
	sleep(4);
	clrscr();
	cout<<"\n\n\t\t\tTHE STRIKE OF PLAYER 1";
	sleep(3);
	clrscr();
	p1.showplayers();
	sleep(2);
	clrscr();
	p1.play();
	clrscr();
	cout<<"\n\n\t\t\tTHE STRIKE  OF PLAYER 2";
	sleep(3);
	clrscr();
	p2.showplayers();
	sleep(2);
	clrscr();
	p2.play();
	clrscr();
	cout<<"\n\n\t\t\t\tMATCH SUMMARY";
	cout<<"\n\n\t\t\tTHE SCORE OF PLAYER 1 IS "<<p1.total<<"\n\n\t\t\tTHE SCORE OF PLAYER 2 IS "<<p2.total;
	sleep(3);
	if(p1.total>p2.total) {
		cout<<"\n\n\t\t\t\tPLAYER 1 WINS";
	} else if(p1.total<p2.total) {
		cout<<"\n\n\t\t\t\tPLAYER 2 WINS";
	} else {
		cout<<"\n\n\t\t\t\tMATCH DRAW";
	}
	sleep(2);
	cout<<"\n\n\n\n\t\t\t   PRESS ENTER TO EXIT";
	getch();
	getch();
}
