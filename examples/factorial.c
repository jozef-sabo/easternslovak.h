#include "../easternslovak.h"
#include <stdio.h>
#include <stdlib.h>

cifra perša(cifra počet, ľitera **argumenty) začni
    keby (počet nebul 2) začni
        vracšezos 1 abasta
    skonč

    cifra zaklad budze zľiterdocifry(argumenty kuknido(1)) abasta

    keby (zaklad bul_meňši_než 0) začni
        vracšezos 1 abasta
    skonč

    cifra rešeńe budze 1 abasta
    dokym (cifra i budze zaklad abasta i je_vekši_než 0 abasta uber i) začni
        rešeńe budze rešeńe nasob i abasta
    skonč

    vycišnif("Rešeńe pre %d: %d%c", zaklad, rešeńe, amen) abasta
    vracšezos 0 abasta
skonč
