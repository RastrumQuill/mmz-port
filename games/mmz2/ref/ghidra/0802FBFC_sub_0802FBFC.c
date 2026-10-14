// sub_0802FBFC at 0x0802FBFC (thumb)

undefined4 sub_0802FBFC(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  *(byte *)(param_1 + 0x181) = *(byte *)(param_1 + 0x181) & 0x7f;
  if (*(char *)(param_1 + 0xe) != '\0') {
    if (*(char *)(param_1 + 0xf) == '\x01') goto LAB_0802fc38;
    if (*(char *)(param_1 + 0xf) != '\0') {
      return in_lr;
    }
    if (*(char *)(param_1 + 0xe) != '\x01') {
      return in_lr;
    }
  }
  if (*(char *)(param_1 + 0x174) != '\x01') {
    return in_lr;
  }
LAB_0802fc38:
  cVar1 = sub_08037150(param_1);
  if (-1 < cVar1) {
    *(char *)(param_1 + 0x2b6) = cVar1;
    *(undefined *)(param_1 + 0x17a) = *(undefined *)(param_1 + 0x176);
    *(undefined *)(param_1 + 0x176) = 3;
    *(undefined *)(param_1 + 0x17b) = *(undefined *)(param_1 + 0x177);
    *(undefined *)(param_1 + 0x177) = 0;
    *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
    *(undefined *)(param_1 + 0x178) = 0;
    *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
    *(undefined *)(param_1 + 0x179) = 0;
    *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
    *(undefined2 *)(param_1 + 0xe) = 0x101;
    sub_0802FCBC(param_1);
  }
  return in_lr;
}

