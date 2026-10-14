// sub_080E2D84 at 0x080E2D84 (thumb)

undefined4 sub_080E2D84(int param_1)

{
  undefined4 in_lr;
  undefined4 local_10;
  int local_c;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    sub_080E2C9C(param_1 + 0x54,1,3);
  }
  if (*(char *)(param_1 + 0x11) == '\x01') {
    local_10 = *(undefined4 *)(param_1 + 0x54);
    local_c = *(int *)(param_1 + 0x58) + -0x1400;
    sub_080E2C9C(&local_10,1,2);
    sub_080E2C9C(param_1 + 0x54,1,4);
  }
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 0x10);
  return in_lr;
}

