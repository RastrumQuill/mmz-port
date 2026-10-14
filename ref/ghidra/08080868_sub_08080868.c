// sub_08080868 at 0x08080868 (thumb)

undefined4 sub_08080868(int param_1)

{
  char extraout_var;
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x20);
  iVar3 = *(int *)(param_1 + 0x24);
  if ((*(byte *)(iVar2 + 0xc) < 2) && (*(byte *)(iVar3 + 0xc) < 2)) {
    iVar1 = *(int *)(iVar2 + 0x4c) - *(int *)(iVar3 + 0x4c);
    iVar2 = *(int *)(iVar2 + 0x50) - *(int *)(iVar3 + 0x50);
    *(int *)(param_1 + 0x4c) = *(int *)(iVar3 + 0x4c) + (iVar1 >> 1);
    *(int *)(param_1 + 0x50) = *(int *)(iVar3 + 0x50) + (iVar2 >> 1);
    sub_080C88E8(iVar1 * 0x100 >> 0x10,iVar2 * 0x100 >> 0x10);
    *(char *)(param_1 + 0x1f) = extraout_var + -0x40;
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

