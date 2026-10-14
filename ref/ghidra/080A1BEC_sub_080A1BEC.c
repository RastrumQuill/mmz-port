// sub_080A1BEC at 0x080A1BEC (thumb)

undefined4 sub_080A1BEC(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0x100;
  }
  sub_0809C980(param_1);
  iVar1 = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  *(int *)(param_1 + 0x50) = iVar1;
  if (*(int *)(param_1 + 0xc0) + 0x3000 < iVar1) {
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}

