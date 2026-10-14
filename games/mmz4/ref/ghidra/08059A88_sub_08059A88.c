// sub_08059A88 at 0x08059A88 (thumb)

ulonglong sub_08059A88(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 10) >> 4;
  iVar5 = *(int *)(DAT_0202dbf0 + 0x54);
  iVar3 = *(int *)(param_1 + 0xb8);
  if (0xa000 < (iVar5 - *(int *)(param_1 + 0xcc)) - 0xa000U) {
    iVar3 = iVar3 + -0x1000;
  }
  uVar2 = sub_0810CCF0(((uint)(*(int *)(param_1 + 0x54) < iVar5) * -2 + 1) *
                       (iVar5 - (*(int *)(param_1 + 0x54) + ((bVar1 & 1) * 2 + -1) * 0xc00)),
                       iVar3 - (*(int *)(param_1 + 0xbc) + -0x2800));
  uVar4 = uVar2 * 0x1000000 + 0x40000000 >> 0x18;
  if (uVar4 < 0x90) {
    uVar2 = 0x50;
  }
  else if (0xa8 < uVar4) {
    uVar2 = 0x68;
  }
  if ((bVar1 & 1) != 0) {
    uVar2 = 0x80 - uVar2 & 0xff;
  }
  return CONCAT44(in_lr,uVar2) & 0xffffffff000000ff;
}

