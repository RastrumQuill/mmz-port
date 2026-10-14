// sub_080D1804 at 0x080D1804 (thumb)

undefined4 sub_080D1804(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  sub_08012580();
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) | 0xc;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  iVar1 = *(int *)(param_1 + 0x54) + 0x800;
  *(int *)(param_1 + 0x54) = iVar1;
  uVar2 = sub_080093C4(iVar1,*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  if (*(char *)(param_1 + 0x11) == '\0') {
    *(undefined *)(param_1 + 0xd) = 0;
  }
  else {
    *(undefined *)(param_1 + 0xd) = 3;
  }
  *(undefined *)(param_1 + 0xe) = 0;
  sub_080D1868(param_1);
  return in_lr;
}

