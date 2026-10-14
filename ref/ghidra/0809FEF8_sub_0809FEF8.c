// sub_0809FEF8 at 0x0809FEF8 (thumb)

undefined4 sub_0809FEF8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar1 + 0x4c);
  *(int *)(param_1 + 0x50) = *(int *)(iVar1 + 0x50) + -0x5000;
  if (*(char *)(iVar1 + 0xd) == '\x04') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_0809F9A4(param_1);
  }
  return in_lr;
}

