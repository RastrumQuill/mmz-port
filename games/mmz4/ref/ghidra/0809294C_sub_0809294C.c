// sub_0809294C at 0x0809294C (thumb)

undefined4 sub_0809294C(int param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 in_lr;
  
  bVar1 = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202dbf0 + 0x54);
  if (bVar1) {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(bool *)(param_1 + 0x4c) = bVar1;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
  iVar8 = *(int *)(DAT_0202dbf0 + 0x54) - *(int *)(param_1 + 0x54);
  iVar6 = (*(int *)(DAT_0202dbf0 + 0x58) + -0x1800) - *(int *)(param_1 + 0x58);
  iVar3 = iVar8 >> 8;
  iVar4 = iVar6 >> 8;
  iVar3 = sub_081284F8(iVar3 * iVar3 + iVar4 * iVar4);
  uVar7 = (uint)(iVar3 << 0x10) >> 8;
  iVar3 = FUN_081288bc(iVar8 * 0x100,uVar7);
  iVar4 = FUN_081288bc(iVar6 * 0x100,uVar7);
  if (*(char *)(param_1 + 0x10) == '\x01') {
    iVar3 = iVar3 * 0x180;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    iVar3 = iVar3 >> 8;
    iVar4 = iVar4 * 0x180;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    iVar4 = iVar4 >> 8;
  }
  else {
    iVar3 = iVar3 << 2;
    iVar4 = iVar4 << 2;
  }
  if ((iVar3 == 0) && (iVar4 == 0)) {
    uVar7 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar7 & 0x7fffffff;
    if ((uVar7 * 2 >> 0x11 & 1) == 0) {
      uVar5 = 0xfffffe80;
    }
    else {
      uVar5 = 0x180;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar5;
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  else {
    *(int *)(param_1 + 0x5c) = iVar3;
    *(int *)(param_1 + 0x60) = iVar4;
  }
  return in_lr;
}

