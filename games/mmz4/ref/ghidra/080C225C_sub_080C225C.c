// sub_080C225C at 0x080C225C (thumb)

undefined4 sub_080C225C(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(iVar2 + 10);
  if ((*(byte *)(param_1 + 0x12) & 0x1f) == 0) {
    sub_08002B10(0xb7);
  }
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  iVar7 = *(int *)(iVar2 + 0x54);
  if ((*(byte *)(iVar2 + 10) & 0x10) == 0) {
    iVar6 = -0xc00;
  }
  else {
    iVar6 = 0xc00;
  }
  iVar3 = *(int *)(iVar2 + 0x58);
  pbVar4 = (byte *)(param_1 + 0xbe);
  if (*pbVar4 == 0) {
    *(char *)(param_1 + 0xbc) = *(char *)(param_1 + 0xbc) + '\b';
    if ((*(byte *)(param_1 + 0x12) & 3) == 0) {
      sub_080C20C0(param_1);
    }
  }
  else {
    *pbVar4 = *pbVar4 - 1;
    if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
      sub_080C20C0(param_1);
    }
  }
  iVar5 = (0x10 - (uint)*pbVar4) * *(int *)(param_1 + 0xc0);
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0xf;
  }
  iVar5 = iVar5 >> 4;
  if (iVar5 == 0) {
    iVar5 = 1;
  }
  iVar8 = (short)(&DAT_08128c10)[*(byte *)(param_1 + 0xbc)] * 0x18 + -0x1800 + iVar5;
  iVar5 = FUN_081288bc((0x10 - (uint)*pbVar4) * 0x200 * iVar8,iVar5);
  *(uint *)(param_1 + 0xb4) = iVar5 * ((bVar1 >> 4 & 1) * 2 + -1) + iVar7 + iVar6;
  *(int *)(param_1 + 0xb8) = iVar3 + -0x2000 + iVar8;
  if ((*(byte *)(iVar2 + 10) & 0x10) == 0) {
    iVar7 = -0xc00;
  }
  else {
    iVar7 = 0xc00;
  }
  iVar6 = *(int *)(iVar2 + 0x58);
  *(int *)(param_1 + 0x54) = *(int *)(iVar2 + 0x54) + iVar7;
  *(int *)(param_1 + 0x58) = iVar6 + -0x2000;
  return in_lr;
}

