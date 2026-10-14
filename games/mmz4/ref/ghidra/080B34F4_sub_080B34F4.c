// sub_080B34F4 at 0x080B34F4 (thumb)

undefined4 sub_080B34F4(int param_1)

{
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0xd) == '\0') || ((*(uint *)(param_1 + 0x8c) & 0x200) == 0)) {
    sub_080B39AC(param_1);
    if (*(int *)(param_1 + 0x2c) == 0) {
      sub_08128884(param_1,*(undefined4 *)(&DAT_08860204 + (uint)*(byte *)(param_1 + 0xd) * 4));
    }
    else {
      sub_080B3A00(param_1);
    }
    if (*(char *)(param_1 + 0xd) != '\0') {
      sub_0801CFF0(param_1);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080B3568(param_1);
  }
  return in_lr;
}

