// sub_0805A904 at 0x0805A904 (thumb)

undefined4 sub_0805A904(int param_1)

{
  byte bVar1;
  undefined uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08017700(param_1,0xb404);
    *(undefined *)(*(int *)(param_1 + 0x2c) + 0xe) = 1;
    *(undefined2 *)(*(int *)(param_1 + 0x2c) + 0xbc) = 0x6404;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    sub_0800471C(0x91);
    sub_0801ACF8(4,param_1 + 0x54);
  }
  sub_080177F4(param_1);
  bVar1 = *(byte *)(param_1 + 0x12);
  *(byte *)(param_1 + 0x12) = bVar1 + 1;
  if ((bVar1 & 0xf) == 0) {
    sub_080C13B8(param_1 + 0x54,0,1,0x118,(uint)*(byte *)(param_1 + 0x12) * -4 + -0x40);
    sub_080C13B8(param_1 + 0x54,0,1,0xfffffee8,(uint)*(byte *)(param_1 + 0x12) * -4 + -0x40);
  }
  if (*(char *)(param_1 + 0x12) != '0') {
    return in_lr;
  }
  if (*(char *)(param_1 + 0xc5) == '\0') {
    if (*(byte *)(param_1 + 0xc6) < 2) {
      uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar3 & 0x7fffffff;
      if ((uVar3 * 2 >> 0x11 & 7) != 0) {
        uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
        DAT_0202f608 = uVar3 & 0x7fffffff;
        if ((uVar3 * 2 >> 0x11 & 1) != 0) {
          *(undefined *)(param_1 + 0xd) = 7;
          *(undefined *)(param_1 + 0xe) = 1;
          return in_lr;
        }
        *(undefined *)(param_1 + 0xd) = 4;
        *(undefined *)(param_1 + 0xe) = 1;
        uVar2 = 0xd;
        goto LAB_0805aa48;
      }
      uVar2 = 2;
    }
    else if (((int)*(short *)(param_1 + 0xa4) < (int)*(char *)(param_1 + 0xd0) / 2) &&
            (4 < *(byte *)(DAT_02030160 + 1))) {
      uVar2 = 10;
    }
    else {
      uVar2 = 7;
    }
    *(undefined *)(param_1 + 0xd) = uVar2;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  else {
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 1;
    uVar2 = 5;
LAB_0805aa48:
    *(undefined *)(param_1 + 0xf) = uVar2;
  }
  return in_lr;
}

