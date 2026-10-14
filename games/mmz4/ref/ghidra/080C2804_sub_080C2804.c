// sub_080C2804 at 0x080C2804 (thumb)

undefined4 sub_080C2804(int param_1)

{
  undefined4 in_lr;
  undefined4 local_14 [2];
  
  local_14[0] = 0x4800;
  local_14[1] = 0x4900;
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_0801CF00(param_1,*(undefined2 *)(local_14 + *(byte *)(param_1 + 0x11)));
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if (*(char *)(param_1 + 0xb6) == '\0') {
    sub_0801CFF0(param_1);
    if (*(char *)(param_1 + 0xb4) != '\0') {
      *(char *)(param_1 + 0xb4) = '\0';
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xf) = 0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 8);
    sub_080C2B48(param_1);
  }
  return in_lr;
}

