// sub_0803F1C0 at 0x0803F1C0 (thumb)

undefined4 sub_0803F1C0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
  if (*(char *)(param_1 + 0x11) == '\x01') {
    *(undefined *)(param_1 + 0xd) = 1;
    sub_0803F214(param_1);
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)((&DAT_08336060)[*(byte *)(param_1 + 9)] + 0x10);
    iVar2 = *(int *)(param_1 + 0x28);
    iVar1 = *(int *)(param_1 + 0x2c);
    *(int *)(iVar2 + 0x2c) = iVar1;
    if (iVar1 != 0) {
      *(int *)(iVar1 + 0x28) = iVar2;
    }
  }
  return in_lr;
}

