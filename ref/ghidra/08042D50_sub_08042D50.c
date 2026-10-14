// sub_08042D50 at 0x08042D50 (thumb)

ulonglong sub_08042D50(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 10);
  iVar5 = *(int *)(DAT_0202286c + 0x4c) - *(int *)(param_1 + 0x4c);
  iVar3 = *(int *)(DAT_0202286c + 0x50) - *(int *)(param_1 + 0x50);
  iVar6 = iVar5 >> 8;
  iVar4 = iVar3 >> 8;
  iVar3 = sub_080C88E8((int)(short)((uint)iVar5 >> 8),(int)(short)((uint)iVar3 >> 8));
  uVar2 = sub_080C88FC(iVar6 * iVar6 + iVar4 * iVar4);
  uVar2 = sub_080C88FC((uVar2 & 0xffff) * (uVar2 & 0xffff) + -0x19);
  iVar4 = sub_080C88E8((int)(((uVar2 & 0xffff) - (uVar2 & 0xffff) * 2 * (bVar1 >> 4 & 1)) * 0x10000)
                       >> 0x10,0xfffffffb);
  return CONCAT44(in_lr,(((uint)(iVar3 << 0x10) >> 0x18) + 0x80 & 0xff) +
                        ((uint)(iVar4 << 0x10) >> 0x18)) & 0xffffffff000000ff;
}

