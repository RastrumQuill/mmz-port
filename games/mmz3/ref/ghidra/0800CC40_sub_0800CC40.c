// sub_0800CC40 at 0x0800CC40 (thumb)

undefined4 sub_0800CC40(int param_1)

{
  short sVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080040A8(0x3d,0x300);
    *(undefined2 *)(param_1 + 0x10) = 0;
    *(undefined2 *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sVar1 = *(short *)(param_1 + 0x10) + 1;
  *(short *)(param_1 + 0x10) = sVar1;
  if (sVar1 == 0x90) {
    *(undefined2 *)(param_1 + 0x10) = 0;
  }
  if (*(short *)(param_1 + 0x10) == 0) {
    sub_080CC89C(0x265800,0x11000);
    sub_080CC89C(0x26f800,0x11000);
    sub_080CC89C(0x279800,0x11000);
  }
  sVar1 = *(short *)(param_1 + 0x12) + 1;
  *(short *)(param_1 + 0x12) = sVar1;
  if (sVar1 == 0x60) {
    *(undefined2 *)(param_1 + 0x12) = 0;
  }
  if (*(short *)(param_1 + 0x12) == 0) {
    sub_080CC89C(0x28d800,0x11000);
  }
  if (*(short *)(param_1 + 0x12) == 0x30) {
    sub_080CC89C(0x283800,0x11000);
    sub_080CC89C(0x297800,0x11000);
  }
  sub_080041E4(0x3d);
  return in_lr;
}

