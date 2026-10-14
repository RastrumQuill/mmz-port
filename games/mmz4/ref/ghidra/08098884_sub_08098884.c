// sub_08098884 at 0x08098884 (thumb)

undefined4 sub_08098884(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    if (*(char *)(param_1 + 0xe) == '\0') {
      if (*(char *)(param_1 + 0xbd) == '\0') {
        if ((*(uint *)(param_1 + 0x8c) & 0x10000) == 0) {
          *(undefined *)(param_1 + 0xd) = 0;
        }
        else {
          *(undefined *)(param_1 + 0xd) = 1;
        }
      }
      else {
        *(undefined *)(param_1 + 0xd) = 2;
      }
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    sub_08128884(param_1,*(undefined4 *)(&DAT_0885d674 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  else {
    sub_08098900(param_1);
  }
  return in_lr;
}

