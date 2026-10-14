// sub_080BA5EC at 0x080BA5EC (thumb)

undefined4 sub_080BA5EC(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  int local_10;
  int local_c;
  
  bVar1 = *(byte *)(param_1 + 0xf);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        sub_0801CF00(param_1,0xbd06);
        *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      sub_0801CFF0(param_1);
      if (*(char *)(param_1 + 0x73) != '\x03') {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xd) = 5;
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xf) = 0;
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0xb4) = 0;
    local_10 = *(int *)(param_1 + 0x54) + ((*(byte *)(param_1 + 10) >> 4 & 1) * 2 + -1) * 0x800;
    local_c = *(int *)(param_1 + 0x58) + -0x2600;
    sub_080BA8AC(param_1,&local_10,0,0);
    sub_08005784(param_1 + 0x74,&DAT_08860ff4);
    sub_0801CF00(param_1,0xbd04);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0xb4) == '\0') {
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  return in_lr;
}

