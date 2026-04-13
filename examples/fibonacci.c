#include "../easternslovak.h"
#include <stdio.h>
#include <stdlib.h>

cifra perša(cifra počet, ľitera **argumenty) začni
    keby (počet nebul 2) začni
        vracšezos 1 abasta
    skonč

    cifra početvposlupnosti budze zľiterdocifry(argumenty kuknido(1)) abasta

    keby (početvposlupnosti bul_meňši_abo_isni_než 0) začni
        vracšezos 1 abasta
    skonč

    vycišnif("Poslupnost:") abasta

    cifra perše budze 0, druhe budze 1 abasta
    dokym (cifra i budze 0 abasta i je_meňši_než početvposlupnosti abasta pridaj i) začni
        vycišnif(" %d", perše) abasta
        cifra nove budze perše ščitaj druhe abasta
        perše budze druhe abasta
        druhe budze nove abasta
    skonč

    vycišnif("%c", amen) abasta
    vracšezos 0 abasta
skonč
