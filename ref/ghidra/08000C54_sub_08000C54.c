// sub_08000C54 at 0x08000C54 (thumb)

undefined4 sub_08000C54(void)

{
  short sVar1;
  byte *pbVar2;
  undefined4 in_lr;
  
  do {
    DAT_03001790 = 0;
    pbVar2 = &DAT_03001748;
    do {
      if ((*pbVar2 & 9) == 0) {
        if (((*pbVar2 & 4) != 0) &&
           ((sVar1 = *(short *)(pbVar2 + 2), *(short *)(pbVar2 + 2) == 0 ||
            (*(short *)(pbVar2 + 2) = sVar1 + -1, (short)(sVar1 + -1) == 0)))) {
          *pbVar2 = 2;
        }
        if (*pbVar2 == 2) {
          if (pbVar2[1] != 0) {
            FUN_08000d10(DAT_03001790,*(undefined4 *)(pbVar2 + 4));
          }
          sub_080002DC(pbVar2,*(undefined4 *)(pbVar2 + 4),*(undefined4 *)(pbVar2 + 8),0x2000000);
        }
      }
      DAT_03001790 = DAT_03001790 + 1;
      pbVar2 = pbVar2 + 0x18;
    } while (DAT_03001790 < 3);
    DAT_03001740 = DAT_03001740 + 1;
  } while (DAT_03001744 != 0);
  return in_lr;
}

