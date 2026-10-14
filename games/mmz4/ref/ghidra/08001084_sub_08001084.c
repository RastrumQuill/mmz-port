// sub_08001084 at 0x08001084 (thumb)

undefined4 sub_08001084(void)

{
  ushort uVar1;
  undefined2 *puVar2;
  short sVar3;
  short sVar4;
  undefined2 *puVar5;
  undefined4 in_lr;
  
  uVar1 = DAT_04000006;
  if ((uVar1 < 0xa0) || (uVar1 == 0xe3)) {
    puVar5 = DAT_03001714;
    sVar4 = DAT_03001730;
    puVar2 = DAT_03001738;
    sVar3 = DAT_03001754;
    if (DAT_03001730 != 0) {
      do {
        *puVar5 = *DAT_0300171c;
        puVar5 = puVar5 + DAT_0300172e;
        DAT_0300171c = DAT_0300171c + DAT_0300172c;
        sVar4 = sVar4 + -1;
        puVar2 = DAT_03001738;
        sVar3 = DAT_03001754;
      } while (sVar4 != 0);
    }
    for (; sVar3 != 0; sVar3 = sVar3 + -1) {
      *puVar2 = *DAT_03001740;
      DAT_03001740 = DAT_03001740 + DAT_03001750;
      puVar2 = puVar2 + DAT_03001752;
    }
  }
  return in_lr;
}

