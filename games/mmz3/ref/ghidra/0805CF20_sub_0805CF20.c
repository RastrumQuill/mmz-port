// sub_0805CF20 at 0x0805CF20 (thumb)

undefined4 sub_0805CF20(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08017700(param_1,0xb514);
    sub_0800471C(0x4e);
    *(undefined4 *)(param_1 + 0x60) = 0x300;
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080177F4(param_1);
  if (*(char *)(param_1 + 0xf) == '\0') {
    if ('\x02' < *(char *)(param_1 + 0x71)) {
      *(undefined *)(param_1 + 0xf) = 1;
    }
  }
  else {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
    if ((*(uint *)(param_1 + 0x8c) & 4) == 0) {
      sVar1 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54));
      if (sVar1 != 0) {
        uVar2 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
        *(undefined4 *)(param_1 + 0x58) = uVar2;
        *(undefined *)(param_1 + 0xd) = 7;
        *(undefined *)(param_1 + 0xe) = 0;
      }
    }
    else {
      *(undefined *)(param_1 + 0xd) = 0x18;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

