// sub_08109890 at 0x08109890 (thumb)

undefined4 sub_08109890(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0xb4);
  iVar6 = *(int *)(param_1 + 0xb8);
  sub_0801CC9C(param_1);
  sub_0801CEEC(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined *)(param_1 + 0x22) = 1;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xfb;
  sub_0801CF00(param_1,1);
  *(byte *)(param_1 + 0x4c) = *(byte *)(iVar6 + 10) >> 4 & 1;
  bVar2 = *(byte *)(iVar6 + 10) >> 4;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((bVar2 & 1) << 4);
  if ((bVar2 & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  sub_0801CFF0(param_1);
  cVar1 = *(char *)(iVar3 + 0xf5);
  if (cVar1 == '\x02') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    puVar4 = &DAT_088695a8;
  }
  else if (cVar1 == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    puVar4 = &DAT_08869590;
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    puVar4 = &DAT_08869578;
  }
  sub_08005760(param_1 + 0x74,puVar4,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  uVar5 = *(undefined4 *)(iVar6 + 0x58);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar6 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = uVar5;
  sub_08002B10(0x27);
  return in_lr;
}

