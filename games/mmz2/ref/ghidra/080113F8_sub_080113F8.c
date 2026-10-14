// sub_080113F8 at 0x080113F8 (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_080113F8(void)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = _DAT_0202e03c;
  if (_DAT_0202e03c != 0) {
    *(byte *)(_DAT_0202e03c + 10) = *(byte *)(_DAT_0202e03c + 10) & 0xfc;
    *(undefined4 *)(iVar1 + 0x8c) = 0;
    *(undefined4 *)(iVar1 + 0x90) = 0;
    *(undefined *)(iVar1 + 0x94) = 0;
    *(byte *)(iVar1 + 10) = *(byte *)(iVar1 + 10) & 0xfb;
    *(undefined4 *)(iVar1 + 0xc) = 3;
    *(undefined4 *)(iVar1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(iVar1 + 9) * 4) + 0xc);
  }
  return in_lr;
}

