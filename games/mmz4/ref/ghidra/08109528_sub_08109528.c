// sub_08109528 at 0x08109528 (thumb)

undefined4 sub_08109528(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0xb4);
  iVar2 = *(int *)(param_1 + 0xb8);
  sub_0801CC9C(param_1);
  sub_0801CEEC(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined *)(param_1 + 0x22) = 0xf;
  sub_0801CF00(param_1,0x7f00);
  *(byte *)(param_1 + 0x4c) = *(byte *)(iVar6 + 10) >> 4 & 1;
  bVar1 = *(byte *)(iVar6 + 10) >> 4;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((bVar1 & 1) << 4);
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  sub_0801CFF0(param_1);
  if (*(char *)(iVar6 + 0xf5) == '\x01') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    puVar4 = &DAT_088694b8;
  }
  else if (*(char *)(iVar6 + 0xf5) == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    puVar4 = &DAT_08869488;
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    puVar4 = &DAT_08869458;
  }
  sub_08005760(param_1 + 0x74,puVar4,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  uVar5 = *(undefined4 *)(iVar2 + 0x58);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar2 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = uVar5;
  uVar3 = sub_0803AD90(param_1,0);
  uVar3 = uVar3 & 0xff;
  if ((uVar3 != 0) && (uVar3 != 0x80)) {
    *(int *)(param_1 + 0x5c) =
         *(short *)((int)&DAT_08128c10 + ((uVar3 + 0x40) * 0x1000000 >> 0x17)) * 6;
    iVar2 = (short)(&DAT_08128c10)[uVar3] * 6;
    goto LAB_081096fe;
  }
  if (*(char *)(iVar6 + 0xd) == '\x02') {
    if (CONCAT11(*(undefined *)(iVar6 + 0x1e),*(undefined *)(iVar6 + 0x70)) == 0x500) {
      if (*(char *)(iVar6 + 0x71) < '\x03') goto LAB_081096e8;
      *(byte *)(param_1 + 0x4c) = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
      uVar3 = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar3 << 4);
      if (uVar3 == 0) goto LAB_081096e0;
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      *(byte *)(param_1 + 0x4c) = (*(byte *)(iVar6 + 10) >> 4 ^ 1) & 1;
      uVar3 = (*(byte *)(iVar6 + 10) >> 4 ^ 1) & 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar3 << 4);
      if (uVar3 == 0) {
LAB_081096e0:
        bVar1 = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        bVar1 = *(byte *)(param_1 + 10) | 0x10;
      }
    }
    *(byte *)(param_1 + 10) = bVar1;
  }
LAB_081096e8:
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    uVar5 = 0xfffffa00;
  }
  else {
    uVar5 = 0x600;
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar5;
  iVar2 = 0;
LAB_081096fe:
  *(int *)(param_1 + 0x60) = iVar2;
  return in_lr;
}

