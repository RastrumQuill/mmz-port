// sub_080D949C at 0x080D949C (thumb)

undefined4 sub_080D949C(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  sub_0801CFF0();
  iVar2 = *(int *)(param_1 + 0x5c) - *(int *)(param_1 + 100);
  *(int *)(param_1 + 0x5c) = iVar2;
  iVar1 = *(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x68);
  *(int *)(param_1 + 0x60) = iVar1;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar2;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar1;
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 8);
    sub_080D9124(param_1);
  }
  return in_lr;
}

