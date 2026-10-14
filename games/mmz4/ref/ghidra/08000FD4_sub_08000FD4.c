// sub_08000FD4 at 0x08000FD4 (thumb)

undefined4 sub_08000FD4(void)

{
  ushort uVar1;
  short sVar2;
  undefined2 *puVar3;
  undefined4 in_lr;
  
  uVar1 = DAT_04000006;
  if (((uVar1 < 0xa0) || (uVar1 == 0xe3)) &&
     (puVar3 = DAT_03001714, sVar2 = DAT_03001730, DAT_03001730 != 0)) {
    do {
      *puVar3 = *DAT_0300171c;
      puVar3 = puVar3 + DAT_0300172e;
      DAT_0300171c = DAT_0300171c + DAT_0300172c;
      sVar2 = sVar2 + -1;
    } while (sVar2 != 0);
  }
  return in_lr;
}

