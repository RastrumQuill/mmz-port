// sub_080D6BA8 at 0x080D6BA8 (thumb)

undefined4 sub_080D6BA8(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (((*(uint *)(param_1 + 0x14) & 4) != 0) &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c), *(char *)(iVar1 + 8) == '\0')) {
    iVar2 = *(int *)(param_1 + 0x2c);
    *(undefined4 *)(iVar2 + 0xc) = 2;
    *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)((&DAT_0834a1a0)[*(byte *)(iVar2 + 9)] + 8);
    sub_080D61EC(iVar1,*(undefined *)(iVar2 + 0x10));
    sub_080DEF5C(*(undefined2 *)(&DAT_0834b2fc + (uint)*(byte *)(iVar2 + 0x10) * 2),0x5a);
  }
  return in_lr;
}

