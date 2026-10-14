// sub_0803DA14 at 0x0803DA14 (thumb)

undefined4 sub_0803DA14(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0800471C(0x10d);
    *(undefined *)(param_1 + 0x12) = 0x20;
    uVar1 = DAT_0202f608 * 0x343fd + 0x269ec3;
    *(byte *)(param_1 + 0xbe) = (byte)(uVar1 * 2 >> 0x11) & 1;
    uVar1 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar1 & 0x7fffffff;
    *(byte *)(param_1 + 0xbf) = (byte)(uVar1 * 2 >> 0x11) & 1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  if ((*(byte *)(param_1 + 0x12) & 3) == 0) {
    sub_0803D6C8(param_1,0,0);
  }
  if (*(char *)(param_1 + 0x12) == '\0') {
    *(uint *)(param_1 + 0xc0) = *(uint *)(param_1 + 0xc0) | 1;
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  else {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  sub_0801ACF8(3,param_1 + 0x54);
  return in_lr;
}

