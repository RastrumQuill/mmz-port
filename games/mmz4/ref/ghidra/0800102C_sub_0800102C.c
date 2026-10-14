// sub_0800102C at 0x0800102C (thumb)

undefined4 sub_0800102C(void)

{
  ushort uVar1;
  short sVar2;
  undefined2 *puVar3;
  undefined4 in_lr;
  
  uVar1 = DAT_04000006;
  if (((uVar1 < 0xa0) || (uVar1 == 0xe3)) &&
     (puVar3 = DAT_03001738, sVar2 = DAT_03001754, DAT_03001754 != 0)) {
    do {
      *puVar3 = *DAT_03001740;
      puVar3 = puVar3 + DAT_03001752;
      DAT_03001740 = DAT_03001740 + DAT_03001750;
      sVar2 = sVar2 + -1;
    } while (sVar2 != 0);
  }
  return in_lr;
}

