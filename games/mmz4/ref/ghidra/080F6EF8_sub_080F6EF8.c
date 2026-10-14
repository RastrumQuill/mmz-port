// sub_080F6EF8 at 0x080F6EF8 (thumb)

undefined4 sub_080F6EF8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0xb8);
  if (iVar1 != 0) {
    *(byte *)(iVar1 + 10) = *(byte *)(iVar1 + 10) & 0xfc;
    *(undefined4 *)(iVar1 + 0x8c) = 0;
    *(undefined4 *)(iVar1 + 0x90) = 0;
    *(undefined *)(iVar1 + 0x94) = 0;
    *(byte *)(iVar1 + 10) = *(byte *)(iVar1 + 10) & 0xfb;
    *(undefined4 *)(iVar1 + 0xc) = 3;
    *(undefined4 *)(iVar1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(iVar1 + 9) * 4) + 0xc);
    iVar1 = 0;
  }
  *(int *)(param_1 + 0xb8) = iVar1;
  return in_lr;
}

