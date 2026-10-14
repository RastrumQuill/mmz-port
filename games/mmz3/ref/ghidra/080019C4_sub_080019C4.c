// sub_080019C4 at 0x080019C4 (thumb)

void sub_080019C4(undefined4 param_1)

{
  ushort uVar1;
  short sVar2;
  
  do {
    sub_080E9384();
    sub_08003F70();
    DAT_03001582 = (ushort)(DAT_03001582 == 0);
    DAT_03001580 = 0;
    sub_08003254();
    do {
      do {
      } while (DAT_030016f4 < DAT_030016f5);
      sVar2 = DAT_04000006;
    } while (sVar2 != 0xa1);
    DAT_030016f4 = 0;
    sub_08003178();
    uVar1 = DAT_04000000;
    DAT_04000000 = uVar1 & 0xff7f;
    sub_080042DC();
    sub_08004474();
    sub_080044F8();
    sub_08004528();
    sub_08004588();
    sub_08001D88();
    sub_080E940C();
    sub_08003CA0();
    sub_08003848();
    if (((((DAT_02002160 == '\0') && (DAT_02030eac != 0)) && ((DAT_02002130 & 0xc) == 0xc)) &&
        (((DAT_02002130 & 1) != 0 && ((DAT_02002130 & 2) != 0)))) &&
       (((DAT_02002134 & 0xc) != 0 || (((DAT_02002134 & 1) != 0 || ((DAT_02002134 & 2) != 0)))))) {
      sub_080023D4(0);
      sub_080023D4(1);
      sub_080EB400(&DAT_02030c40,1);
      sub_080022FC(0,0x80018c9);
    }
    sub_08002374(param_1,1);
  } while( true );
}

