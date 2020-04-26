#include "Patient.h"
#include "PriorityQueue.h"
#include <iostream>
#include <climits>
#include <cstdint>
#include <inttypes.h>
/* TO DO:
 * READ ABOUT MALLOC AND CALLOC
 * DYNAMYCALYY ALOCATE MEMORY
 */

void read(Patient &p) {
    std::cin>>p.firstName>>p.lastName;
}

uint32_t parseLine(std::string line, Patient &p) {
    std::string firstName;
    std::string lastName;
    uint16_t age;
    char gender;
    uint32_t priority;
    
}

int main() {
    PriorityQueue<Patient> pq(0);
    Patient p1;
    char command;
    int i = 0;
    while(scanf("%c",&command) != EOF) {
        i++;
        if(command == '*') {
            return 0;
        }
        if(command == '+') {
            Patient p;
            uint32_t priority;
            std::cin>>p.firstName>>p.lastName;
            scanf("%u %c%u", &p.age, &p.gender, &priority);
            pq.push(p,priority);
        }
        if(command == '-') {
            Patient p = pq.pop();
            std::cout<<p.firstName<<" "<<p.lastName;
            printf(" %u %c\n",p.age,p.gender);
        }
    }
    return 0;
    }

