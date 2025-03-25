#include<stdio.h> 
void main() 
{ 
int pq1,pq2,pq3,mf1=6,mf2=10,mf3=12,ef1,ef2,ef3,f,mp=15,ltl1,ltl2,ltl3,q1,q2,q3; 
float tts=15,ttl=8,est1,est2,est3,tt1=32,tt2=64,tt3=80,qwt1,qwt2,qwt3,fst1,fst2,fst3,flt1,flt2,flt3; 
printf("Enter the number of people in each lift queue:\n"); 
printf("Lift 1: "); 
scanf("%d",&pq1); 
printf("Lift 2: "); 
scanf("%d",&pq2); 
printf("Lift 3: "); 
scanf("%d",&pq3); 

q1=pq1/15; 
q2=pq2/15; 
q3=pq3/15; 

printf("Turn in Lift 1: %d\n",q1); 
printf("Turn in Lift 2: %d\n",q2); 
printf("Turn in Lift 3: %d\n",q3); 

qwt1=(q1)*(2)*(tt1); 
qwt2=(q2)*(2)*(tt2); 
qwt3=(q3)*(2)*(tt3); 

printf("Waiting time for Lift 1: %.2f\n",qwt1); 
printf("Waiting time for Lift 2: %.2f\n",qwt2); 
printf("Waiting time for Lift 3: %.2f\n",qwt3); 

printf("Enter the floor: "); 
scanf("%d",&f); 

if(f<mf1){ 
ef1=mf1-f; 
ef2=mf2-f; 
ef3=mf3-f; 
} 

if(f>mf1 && f<mf2){ 
ef1=f-mf1; 
ef2=mf2-f; 
ef3=mf3-f; 
} 

if(f>mf2 && f<mf3){ 
ef1=f-mf1; 
ef2=f-mf2; 
ef3=mf3-f; 
} 

if(f>mf3 && f<=15){ 
ef1=f-mf1; 
ef2=f-mf2; 
ef3=f-mf3; 
} 
if(f==mf1){ 
ef1=0; 
ef2=mf2-f; 
ef3=mf3-f; 
} 

if(f==mf2){ 
ef1=f-mf1; 
ef2=0; 
ef3=mf3-f; 
} 

if(f==mf3){ 
ef1=f-mf1; 
ef2=f-mf2; 
ef3=0; 
} 

printf("Extra floors in Queue 1: %d\n",ef1); 
printf("Extra floors in Queue 2: %d\n",ef2); 
printf("Extra floors in Queue 3: %d\n",ef3); 

fst1=ef1*tts; 
fst2=ef2*tts; 
fst3=ef3*tts; 

printf("Time taken by stairs by Queue 1: %.2f\n",fst1); printf("Time taken by stairs by Queue 2: %.2f\n",fst2); printf("Time taken by stairs by Queue 3: %.2f\n",fst3); 

est1=fst1+qwt1+tt1; 
est2=fst2+qwt2+tt2; 
est3=fst3+qwt3+tt3; 

printf("Estimate time by Lift 1: %.2f\n",est1); 
printf("Estimate time by Lift 2: %.2f\n",est2); 
printf("Estimate time by Lift 3: %.2f\n",est3); 

if(est1<est2 && est1<est3){ 
printf("Fastest option: Lift 1"); 
} 

else if(est2<est3){ 
printf("Fastest option: Lift 2"); 
} 

else{ 
printf("Fastest option: Lift 3"); 
} 

return 0; 
}