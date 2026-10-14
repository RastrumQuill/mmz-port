// sub_080B0070 at 0x080B0070 (thumb)

undefined4 sub_080B0070(int param_1)

{
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0xd) != '\x04') && ((*(uint *)(param_1 + 0x8c) & 0x200) != 0)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080B0114(param_1);
    return in_lr;
  }
  if (*(char *)(param_1 + 0x10) == '\x01') {
    sub_08128884(param_1,*(undefined4 *)(&DAT_0885fd48 + (uint)*(byte *)(param_1 + 0xd) * 4));
LAB_080b0106:
    sub_0801CFF0(param_1);
  }
  else {
    sub_080B0818(param_1);
    if ((*(int *)(param_1 + 0xc0) == 0) || (*(char *)(param_1 + 0xd) == '\x04')) {
      sub_08128884(param_1,*(undefined4 *)(&DAT_0885fd34 + (uint)*(byte *)(param_1 + 0xd) * 4));
      if (*(char *)(param_1 + 0xd) != '\x04') goto LAB_080b0106;
    }
    else {
      sub_080B08C0(param_1);
    }
    sub_0801D1F4(param_1);
  }
  return in_lr;
}

