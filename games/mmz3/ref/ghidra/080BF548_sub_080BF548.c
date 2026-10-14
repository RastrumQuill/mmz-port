// sub_080BF548 at 0x080BF548 (thumb)

undefined4 sub_080BF548(int param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) | 0xc;
    sub_08017700(param_1,*(undefined2 *)(&DAT_0836b8da + (uint)*(byte *)(param_1 + 0x12) * 2));
    if (*(char *)(param_1 + 0x13) == '\0') {
      uVar2 = DAT_0202f608 * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar2 & 0x7fffffff;
      *(uint *)(param_1 + 0x60) = -0x480 - (uVar2 * 2 >> 0x11 & 0xff);
    }
    else {
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_080177F4(param_1);
  iVar3 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar3;
  if (0x700 < iVar3) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  if (*(char *)(param_1 + 0x13) == '\0') {
    if (*(int *)(param_1 + 0x60) < 1) {
      return in_lr;
    }
  }
  else {
    sVar1 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54));
    if (sVar1 == 0) {
      return in_lr;
    }
    sub_080BEF04(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),1);
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
  *(undefined4 *)(param_1 + 0xc) = 3;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 0xc);
  return in_lr;
}

