// sub_0802655C at 0x0802655C (thumb)

undefined4 sub_0802655C(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  bVar1 = *(byte *)(param_1 + 0x176);
  if (bVar1 == 0) {
    bVar1 = sub_08034B50(param_1);
  }
  if (bVar1 < 3) {
    if (((bVar1 < 2) && (*(char *)(param_1 + 0x174) == '\0')) &&
       ((*(byte *)(param_1 + 0x198 + (uint)*(byte *)(param_1 + 0x195)) & 1) == 0)) {
      *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
      *(undefined2 *)(param_1 + 0xe) = 2;
      sub_0801E9FC(param_1,0x11);
      sub_080269D0(param_1);
      return in_lr;
    }
    *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
    *(undefined2 *)(param_1 + 0xe) = 1;
    if (*(char *)(param_1 + 0x174) == '\0') {
      sub_0801E9FC(param_1,0xe);
    }
    else {
      sub_0801EA38(param_1,0xe,0,1);
    }
  }
  else {
    *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
    *(undefined2 *)(param_1 + 0xe) = 0x101;
  }
  sub_08026628(param_1);
  return in_lr;
}

