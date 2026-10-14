// sub_0804F3E0 at 0x0804F3E0 (thumb)

undefined4 sub_0804F3E0(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x12);
  iVar2 = sub_080C88E8((*(int *)(DAT_0202286c + 0x4c) - *(int *)(param_1 + 0x4c)) * 0x100 >> 0x10,
                       ((*(int *)(DAT_0202286c + 0x50) - *(int *)(param_1 + 0x50)) + -0x1800) *
                       0x100 >> 0x10);
  iVar3 = ((uint)(iVar2 << 0x10) >> 0x18) - (uint)bVar1;
  iVar4 = iVar3 * 0x1000000 >> 0x18;
  iVar2 = iVar4;
  if (iVar4 < 0) {
    iVar2 = -iVar4;
  }
  if (0x7f < iVar2) {
    iVar3 = iVar4;
  }
  uVar5 = (uint)bVar1 + ((uint)(param_2 * (char)iVar3) >> 8);
  uVar6 = uVar5 & 0xff;
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + (short)(&DAT_080c8e24)[uVar6 + 0x40] * 2;
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + (short)(&DAT_080c8e24)[uVar6] * 2;
  *(char *)(param_1 + 0x12) = (char)uVar5;
  return in_lr;
}

