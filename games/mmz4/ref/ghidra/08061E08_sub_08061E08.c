// sub_08061E08 at 0x08061E08 (thumb)

undefined4 sub_08061E08(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0xa51c);
    *(undefined4 *)(param_1 + 0x60) = 0xfffffd00;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar1 = 0x1c0;
    }
    else {
      uVar1 = 0xfffffe40;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar1;
    if (*(int *)(param_1 + 0xc0) != 0) {
      *(undefined *)(*(int *)(param_1 + 0xc0) + 0x77) = 1;
      *(undefined4 *)(param_1 + 0xc0) = 0;
    }
    if (*(short *)(param_1 + 0xca) != 0) {
      sub_08002B5C(0x5d);
      *(undefined2 *)(param_1 + 0xca) = 0;
    }
    sub_08002B10(0x121);
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    iVar3 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar3;
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
    if (*(int *)(param_1 + 0xb8) < iVar3) {
      uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar2 & 0x7fffffff;
      if ((uVar2 * 2 >> 0x11 & 1) == 0) {
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8);
        *(undefined *)(param_1 + 0xd) = 6;
        *(undefined *)(param_1 + 0xe) = 0;
      }
      else {
        sub_0801CF00(param_1,0xa503);
        *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0xb8);
        *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
      }
    }
  }
  else if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_0801CFF0(param_1);
  return in_lr;
}

