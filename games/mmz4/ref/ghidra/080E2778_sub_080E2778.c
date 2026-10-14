// sub_080E2778 at 0x080E2778 (thumb)

undefined4 sub_080E2778(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar2 & 0x7fffffff;
  sub_0801CF00(param_1,uVar2 * 2 >> 0x11 & 1 | 0x940e);
  uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  *(uint *)(param_1 + 0x5c) = (uVar2 * 0x80 >> 0x17) - 0xff;
  uVar2 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar2 & 0x7fffffff;
  iVar1 = ((uVar2 * 2 >> 0x11 & 0x27f) + 0x100) * -0x100;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xff;
  }
  *(int *)(param_1 + 0x60) = iVar1 >> 8;
  *(undefined *)(param_1 + 0xd) = 2;
  return in_lr;
}

