// sub_080F9E28 at 0x080F9E28 (thumb)

undefined4 sub_080F9E28(int param_1)

{
  undefined4 in_lr;
  
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
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 100);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x68);
    *(int *)(param_1 + 0x40) = param_1 + 0x54;
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_08128884(param_1,*(undefined4 *)(&DAT_08867210 + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

