// sub_081038AC at 0x081038AC (thumb)

undefined4 sub_081038AC(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = (uint)*(byte *)(param_1 + 0xe);
  if (uVar1 == 0) {
    sub_0801CF00(param_1,0xde01);
    DAT_0202cacc = 0x3c0000;
    DAT_0202cad0 = 0x280000;
    DAT_0202cac4 = uVar1;
    DAT_0202cac8 = uVar1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (((*(uint *)(param_1 + 0x8c) & 4) == 0) || ((*(uint *)(DAT_0202dbf0 + 0xc) & 0xffff00) != 0)) {
LAB_08103974:
    sub_0801CFF0(param_1);
    if (*(short *)(param_1 + 0xb4) == 0x1ae) {
      sub_08002B10(0x19e);
      *(short *)(param_1 + 0xb4) = 0x19e;
    }
  }
  else {
    if ((*(byte *)(param_1 + 0x11) == 0) || ((DAT_0202e914 & 0x40) == 0)) {
      if ((3 < *(byte *)(param_1 + 0x11)) || ((DAT_0202e914 & 0x80) == 0)) goto LAB_08103974;
      *(undefined4 *)(param_1 + 0x60) = 0x200;
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x60) = 0xfffffe00;
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    sub_0810380C(param_1);
  }
  return in_lr;
}

