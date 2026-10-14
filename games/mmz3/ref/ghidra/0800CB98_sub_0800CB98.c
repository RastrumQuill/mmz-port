// sub_0800CB98 at 0x0800CB98 (thumb)

undefined4 sub_0800CB98(int param_1)

{
  ushort uVar1;
  short sVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080040A8(0x3d,0x300);
    *(undefined2 *)(param_1 + 0x10) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sVar2 = *(short *)(param_1 + 0x10) + 1;
  *(short *)(param_1 + 0x10) = sVar2;
  if (sVar2 == 0x90) {
    *(undefined2 *)(param_1 + 0x10) = 0;
  }
  uVar1 = *(ushort *)(param_1 + 0x10);
  sVar2 = sub_080FE4D8(uVar1,0x30);
  if (sVar2 == 0) {
    if (uVar1 < 0x30) {
      sub_080CC89C(0x191800,0x11000);
      sub_080CC89C(0x1a9800,0x11000);
    }
    else if (uVar1 < 0x60) {
      sub_080CC89C(0x199800,0x11000);
      sub_080CC89C(0x1b1800,0x11000);
    }
    else {
      sub_080CC89C(0x1a1800,0x11000);
      sub_080CC89C(0x1b9800,0x11000);
    }
  }
  sub_080041E4(0x3d);
  return in_lr;
}

