// sub_080F5D18 at 0x080F5D18 (thumb)

undefined4 sub_080F5D18(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = 0;
  sub_0801CFF0();
  if ((*(uint *)(param_1 + 0x8c) & 4) == 0) {
    iVar1 = *(int *)(param_1 + 0x58) * 7 + 0x800 + DAT_0202cabc;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 7;
    }
    *(int *)(param_1 + 0x58) = iVar1 >> 3;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x58) * 7 + DAT_0202cabc;
    iVar3 = iVar1 + 0x1000;
    if (iVar3 < 0) {
      iVar3 = iVar1 + 0x1007;
    }
    *(int *)(param_1 + 0x58) = iVar3 >> 3;
    iVar3 = *(int *)(DAT_0202dbf0 + 0x54) - *(int *)(param_1 + 0x54);
  }
  piVar2 = (int *)(param_1 + 0xb4);
  iVar3 = *piVar2 * 7 + iVar3;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 7;
  }
  *piVar2 = iVar3 >> 3;
  *(char *)(param_1 + 0x24) = (char)(iVar3 >> 0xe);
  iVar3 = *piVar2 * (int)*(short *)((int)&DAT_08128c10 + ((uint)((*piVar2 >> 0xb) << 0x18) >> 0x17))
  ;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x58) - ((iVar3 >> 8) + 0x1000);
  return in_lr;
}

