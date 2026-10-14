// sub_080B2A4C at 0x080B2A4C (thumb)

undefined4 sub_080B2A4C(int param_1)

{
  byte bVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  int local_10 [2];
  
  local_10[0] = -0x10;
  local_10[1] = 0x10;
  uVar3 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x800);
  if ((uVar3 & 0x4000) == 0) {
    if ((uVar3 & 0x2000) == 0) {
      return in_lr;
    }
    bVar1 = 1;
  }
  else {
    bVar1 = 0;
  }
  *(byte *)(param_1 + 0xb6) = bVar1;
  sVar2 = sub_08007C7C(*(int *)(param_1 + 0x54) + local_10[*(byte *)(param_1 + 0xb6)] * 0x100,
                       *(int *)(param_1 + 0x58) + -0x1000);
  if (sVar2 == 0) {
    iVar4 = sub_08008AA4(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x400);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar4;
  }
  return in_lr;
}

