// sub_0803A700 at 0x0803A700 (thumb)

undefined4 sub_0803A700(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(*(int *)(param_1 + 0x28) + 0xd) == '\x01') {
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(undefined *)(param_1 + 0x13) = 0xd;
      sub_0803A9C0(param_1,9,5,0);
      sub_0803A61C(param_1);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08336060)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

