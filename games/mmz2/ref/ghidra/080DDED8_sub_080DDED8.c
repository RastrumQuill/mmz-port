// sub_080DDED8 at 0x080DDED8 (thumb)

undefined4 sub_080DDED8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if ((*(char *)(iVar1 + 6) == '\0') || (2 < *(byte *)(iVar1 + 9))) {
    *(undefined *)(param_1 + 0xd) = 3;
    sub_080DDF14(param_1);
  }
  else {
    *(uint *)(param_1 + 0x54) =
         *(int *)(&DAT_0834c3f8 + (uint)*(byte *)(param_1 + 0x11) * 8) +
         (uint)*(byte *)(iVar1 + 8) * 0x1000;
  }
  return in_lr;
}

