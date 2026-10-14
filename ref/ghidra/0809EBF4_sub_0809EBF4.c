// sub_0809EBF4 at 0x0809EBF4 (thumb)

undefined4 sub_0809EBF4(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if ((1 < *(byte *)(iVar1 + 0xc)) && (*(char *)(param_1 + 0x13) != '\0')) {
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  sub_0809C980(param_1);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0xbc);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x50) - *(int *)(param_1 + 0xc0);
  *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0x4c);
  *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0x50);
  if (*(char *)(iVar1 + 0xd) == '\0') {
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0x87;
    *(undefined *)(param_1 + 0xd) = 0;
  }
  else if (*(char *)(param_1 + 0xd) == '\0') {
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
    *(undefined **)(param_1 + 0x28) = &DAT_082b56b0;
    *(undefined *)(param_1 + 0xd) = 1;
  }
  return in_lr;
}

