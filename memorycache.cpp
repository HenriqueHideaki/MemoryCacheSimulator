#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define max 10000


using namespace std;

int retorna_binario(int *ptr)
{
    int dec,aux,tag[]= {0},cache[]= {0},word[]= {0};

    unsigned int binario[16],binario1[16];
    for(int i=0; i<1; i++)
    {
        dec = ptr[i];
    }

    for(aux=16; aux>=0; aux--)
    {
        binario[aux] = (dec%2)==0? 0 : 1;
        dec = dec/2;

    }
    printf("\n");
    for(aux=1; aux<=16; aux++)
    {

        binario1[aux] = binario[aux];
        printf("%d",binario1[aux]);
    }


}




int main()
{

    int endereco[]= {19383,45886,12777,1915,12793,48335,10386,60492,11649,11421,22362,50027,53690,55059,62763,28926,50540,13426,19172,10736,35211,35368,57567,36429,25782,31530,2862,55123,44067,53135,23929,49802,34022,23058,38069,33167,6393,48456,15011,18042,46229,37373,54421,34919,13784,38537,50198,64324,38315,4370,61413,8526,26091,53980,44956,51873,6862,34170,41996,37281,22305,925,22084,56327,10336,46505,10846,16729,16313,25857,21124,48895,49582,10545,18814,63367,35434,55364,49043,8750,46087,31808,17276,7178,20788,48584,45403,27651,17754,22399,64932,40060,9676,8368,17739,20012,41226,28586,23094,57539,40795,30570,41434,25378,27467,46601,10097,62902,23317,45492,6652,55756,12301,10280,49286,19441,58865,29689,33444,11619,38440,19729,38031,48117,28097,55771,54481,55675,5709,63927,34567,32856,29497,62353,44586,56965,30306,54683,41219,53624,21528,47871,30732,33829,44503,15019,53270,38368,44708,21715,36340,18149,27796,60723,52618,42245,37846,28451,32921,43555,27379,2488,62764,43228,64841,42350,35193,16500,32034,62764,5124,39914,31987,35856,8743,11491,37227,48365,49859,16936,56432,7551,21437,19228,3275,60407,61474,41121,23858,29395,6029,51237,18235,3793,15818,4428,46143,51011,20928,64529,48776,12404,39443,15763,34613,34538,13606,6840,17904,49818,10128,60688,57369,17917,14917,46996,13324,62743,9470,37183,13490,15499,9772,31725,5644,25590,22505,38139,62954,29786,37669,33082,28542,63464,35197,49507,19355,48804,56348,23611,33622,52828,19299,12343,5746,20568,59340,5422,18311,3810,42605,31801,5661,38730,49878,11305,64320,58736,49444,48626,23522,8465,16708,38416,58282,38258,22924,12637,22062,624,22600,42036,53452,41899,54379,45550,62468,35071,50973,2131,38881,14930,33933,30894,53660,5163,42199,52981,63899,12996,22959,8773,7813,39668,47190,1095,12926,56466,84,21340,57090,22684,63376,45542,50936,39107,12445,34756,9179,63418,36887,34412,13348,57172,51659,2009,62336,15210,41342,47587,28206,64301,42713,22372,25321,11255,9819,24599,2721,9904,45939,59811,18940,30667,26705,56228,56127,39150,25984,51658,23920,49224,7422,37269,41396,59081,25630,25084,9292,1972,7672,23850,52625,50385,46222,64299,61640,56042,23898,50713,52298,56190,45524,57590,8209,58581,48819,64336,32732,61155,50994,43004,45379,44769,15273,21776,38850,27255,46860,48142,15579,40884,6993,3205,12621,39567,2504,60613,16961,12754,46326,4259,3944,13202,48202,63506,6784,32021,62842,25868,14528,35189,3872,59908,14958,5498,3036,53808,32753,36248,23303,48333,12133,16648,37890,24754,42567,26746,20368,59529,39500,53046,63788,29797,1249,46990,28303,8033,363,12497,20253,14892,47686,24125,61152,48996,15975,64188,24157,48729,35436,47460,18414,33921,50460,56304,45028,28027,18050,51748,22556,43902,39794,7697,8699,41043,41039,37002,35428,41403,49500,55681,42647,18538,1159,25151,2535,17134,24339,26692,52215,46127,60504,5629,15049,45964,48285,46429,60343,1335,33177,17900,45238,7971,11949,40289,35367,52988,12292,5795,15743,48144,47829,58390,1682,35340,18541,55569,38826,29232,17261,26042,10360,64117,18023,11761,45081,1309,58190,40425,53996,26367,44677,34234,20690,56626,9524,56057,44614,8168,48205,60358,56312,17386,40100,44346,52726,44994,34916,26552,60578,38529,38946,57290,37647,56970,4051,4080,44631,48593,30857,33627,61312,61886,54214,3355,53512,50090,59412,19479,44610,28969,1189,22274,46355,27641,1620,20433,58987,22888,33338,54566,47770,7284,46856,20417,50606,37260,10849,30237,7205,28059,50217,3518,24945,25783,6873,13458,10873,52637,19289,55483,16607,20478,12757,49314,34471,729,56100,28459,23618,24438,18025,6388,18074,51233,13157,3681,23493,10358,20270,30699,38417,56839,20569,63363,17622,13794,63173,14847,1431,17462,56682,4390,24292,55791,40057,45115,56521,31157,8574,1491,41947,12951,59231,60021,50537,58740,50054,9030,4098,5325,26081,42516,48516,33002,27231,1139,46796,25404,2338,34580,29218,59021,38970,39862,49812,379,19977,27685,31536,14904,29176,8483,14207,9759,54857,64744,3499,39911,60127,58950,45236,7560,22818,15105,40563,50049,16244,8711,61805,4934,43291,12375,63955,3614,38589,48768,3993,44918,62805,21882,59822,26982,16717,9030,23093,6574,60126,26593,46486,55253,20543,13074,62814,29713,28179,38377,14762,30775,47088,62919,35710,11732,10294,21017,15346,35235,56137,5691,15153,53943,27573,61328,15925,44291,56710,39018,37217,51836,51963,5055,42090,58858,18130,39904,23571,32661,64633,24685,49789,33073,22604,6851,44805,19250,27868,46503,54485,19006,52195,4639,7949,1120,967,10226,31763,57677,35596,3981,30865,22560,9036,7955,2770,13518,34211,26342,32532,20196,37379,17321,53270,59984,24172,19427,14234,52040,52283,55072,57398,25830,46063,347,26950,47030,10573,58714,26059,32522,49047,56924,55082,44435,51232,44204,57954,20443,56898,25486,40640,29278,29159,15262,24262,39683,21041,24848,26723,8324,1272,19122,34154,47335,5821,47457,29365,2747,41171,41776,35269,25218,33701,11703,4653,19933,55907,48959,26728,47806,60797,53720,12084,11308,55334,22698,50991,11376,33898,12715,6052,35171,18189,26559,17506,24010,9016,33224,13109,36539,10000,48378,48109,30053,60081,39114,36338,50989,9426,63067,20147,5223,51787,32231,16532,42122,41281,53875,39850,10179,1590,32254,45350,6131,58813,62857,16494,54181,31081,29603,25720,27433,12982,60181,57487,59415,34296,28825,45404,43722,26892,551,35297,32,19134,38181,28506,60415,27057,54708,5595,14999,21962,37297,7483,15776,35154,23977,56309,52587,39932,3382,15021,39266,63563,58860,33682,19211,22685,14086,49285,35930,990,19583,22314,6476,44116,50820,1892,57525,40528,58839,7525,62490,31136,1360,64618,52643,25337,55928,26582,51621,59310,27955,25888,44225,21815,59570,63437,30853,60008,47722,1783,47350,53657,24097,53827,19126,61269,42071,11651,23149,35910,5528,20639,53398,6888,6610,27393,18577,48890,53976,5199,29552,16931,31087,8777,25099,25657,58566,55952,7017,27641,57735,54368,16298,3184,43195,21776,50805,20266,33428,8954,42528,25308,29593,17278,32197,22555,44672,50774,6445,20000,42325,35997,23283,8412,31127,48382,20421};
    int n = sizeof(endereco)/sizeof(int);
    int dec,aux;
    unsigned int binario[16],binario1[16];
    int tag[7];
    int cache[6];
    int word[3];
    int *ptr = endereco;

    for(int i=0; i<n; i++)
    {
        retorna_binario(ptr+i);
    }






   


    return 0;
}
