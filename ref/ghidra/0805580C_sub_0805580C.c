// sub_0805580C at 0x0805580C (thumb)

undefined4 sub_0805580C(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar1 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  *(int *)(param_1 + 0x50) = iVar1 + -0x700;
  uVar2 = sub_080065AC(*(undefined4 *)(param_1 + 0x4c));
  iVar4 = (int)(((uint)(byte)(&DAT_082afac4)[uVar2 & 0xf] - (uint)*(byte *)(param_1 + 0x12)) *
               0x1000000) >> 0x18;
  iVar1 = iVar4;
  if (iVar4 < 0) {
    iVar1 = -iVar4;
  }
  if (0x7f < iVar1) {
    iVar4 = iVar4 + -0x100;
  }
  iVar1 = (uint)*(byte *)(param_1 + 0x12) + (iVar4 >> 1);
  uVar3 = (undefined)iVar1;
  if (0xfb < iVar1 * 0x1000000 + 0xfe000000U >> 0x18) {
    uVar3 = 0;
  }
  *(undefined *)(param_1 + 0x1f) = uVar3;
  *(undefined *)(param_1 + 0x12) = uVar3;
  return in_lr;
}

