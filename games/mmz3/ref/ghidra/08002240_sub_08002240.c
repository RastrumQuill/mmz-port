// sub_08002240 at 0x08002240 (thumb)

undefined4 sub_08002240(void)

{
  short sVar1;
  byte *pbVar2;
  undefined4 in_lr;
  
  do {
    DAT_03002ab0 = 0;
    pbVar2 = &DAT_03002a68;
    do {
      if ((*pbVar2 & 9) == 0) {
        if (((*pbVar2 & 4) != 0) &&
           ((sVar1 = *(short *)(pbVar2 + 2), *(short *)(pbVar2 + 2) == 0 ||
            (*(short *)(pbVar2 + 2) = sVar1 + -1, (short)(sVar1 + -1) == 0)))) {
          *pbVar2 = 2;
        }
        if (*pbVar2 == 2) {
          if (pbVar2[1] != 0) {
            sub_080022FC(DAT_03002ab0,*(undefined4 *)(pbVar2 + 4));
          }
          FUN_080002dc(pbVar2,*(undefined4 *)(pbVar2 + 4),*(undefined4 *)(pbVar2 + 8),0x2000000);
        }
      }
      DAT_03002ab0 = DAT_03002ab0 + 1;
      pbVar2 = pbVar2 + 0x18;
    } while (DAT_03002ab0 < 3);
    DAT_03002a60 = DAT_03002a60 + 1;
  } while (DAT_03002a64 != 0);
  return in_lr;
}

