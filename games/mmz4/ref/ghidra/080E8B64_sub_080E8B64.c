// sub_080E8B64 at 0x080E8B64 (thumb)

undefined4 sub_080E8B64(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x12) == '\0') {
    sub_0801CC9C(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 4);
    sub_0801CF00(param_1,0xf706);
    *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x58) + -0x1e00;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x400;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x1900;
    *(undefined *)(param_1 + 0xd) = 2;
    sub_08002B10(0x1c5);
    sub_080E88D0(param_1);
  }
  else {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  return in_lr;
}

