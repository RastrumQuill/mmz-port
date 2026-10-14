// sub_080CFB98 at 0x080CFB98 (thumb)

undefined4 sub_080CFB98(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(char *)(param_1 + 0xbd) == '\0') {
      if (*(byte *)(param_1 + 0x11) < 6) {
        uVar1 = (&DAT_0836cee4)[*(byte *)(param_1 + 0x11)];
      }
      else {
        uVar1 = 0x7306;
      }
LAB_080cfbd6:
      sub_08017700(param_1,uVar1);
    }
    else {
      if (*(char *)(param_1 + 0xbd) == '\x01') {
        uVar1 = 0x8901;
        goto LAB_080cfbd6;
      }
      sub_08017700(param_1,0x8a01);
    }
    sub_080177F4(param_1);
    *(undefined4 *)(param_1 + 0x60) = 0;
    DAT_0202e494 = 0;
    DAT_0202e498 = 0;
    DAT_0202e49c = 0x3c0000;
    DAT_0202e4a0 = 0x280000;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (((*(uint *)(param_1 + 0x8c) & 4) == 0) || ((*(uint *)(DAT_0202f5c0 + 0xc) & 0xffff00) != 0)) {
LAB_080cfcb4:
    iVar2 = (int)*(short *)(param_1 + 0xbe);
    if (iVar2 != -1) {
      sub_08004768(iVar2);
      *(short *)(param_1 + 0xbe) = -1;
    }
  }
  else {
    if ((*(byte *)(param_1 + 0xc0) < *(byte *)(param_1 + 0x11)) && ((DAT_020301a4 & 0x40) != 0)) {
      *(undefined4 *)(param_1 + 0x60) = 0xfffffe00;
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    else {
      if ((*(byte *)(param_1 + 0xc1) <= *(byte *)(param_1 + 0x11)) || ((DAT_020301a4 & 0x80) == 0))
      goto LAB_080cfcb4;
      *(undefined4 *)(param_1 + 0x60) = 0x200;
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    sub_080CF76C(param_1);
  }
  return in_lr;
}

