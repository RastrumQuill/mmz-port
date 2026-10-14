// sub_080E6578 at 0x080E6578 (thumb)

undefined4 sub_080E6578(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x68);
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_080E67B4(param_1);
  }
  else {
    sub_080E6A8C(param_1);
  }
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x58);
  if (0x100 < (ushort)DAT_020023d0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x20000;
  }
  return in_lr;
}

