/*
 * Queue.h
 *
 *  Created on: 29 Oct 2018
 *      Author: The Engineer
 */

#ifndef QUEUE_H_
#define QUEUE_H_

struct Cola{
	Cola(int);
	int TAMANIO, contador,*frente,*fin;
};

bool isEmpty(const Cola&);
Cola& enqueue(Cola&,const int);
Cola& dequeue(Cola&,int&);
void impresion(const Cola&);
Cola& vaciar(Cola&);



#endif /* QUEUE_H_ */
