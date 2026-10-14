// sub_0801FC34 at 0x0801FC34 (thumb)

undefined4 sub_0801FC34(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  bVar1 = *(byte *)(param_1 + 0xbe);
  if (bVar1 == 0) {
    bVar1 = sub_08017EC0(param_1);
  }
  if (bVar1 < 3) {
    if (((bVar1 < 2) && (*(char *)(param_1 + 0xbc) == '\0')) &&
       ((*(byte *)((uint)*(byte *)(param_1 + 0x12e) + param_1 + 0x130) & 1) == 0)) {
      *(undefined *)(param_1 + 0xbd) = *(undefined *)(param_1 + 0xe);
      *(undefined2 *)(param_1 + 0xe) = 2;
      sub_08018BE8(param_1,0x11);
      sub_0801FFD4(param_1);
      return in_lr;
    }
    *(undefined *)(param_1 + 0xbd) = *(undefined *)(param_1 + 0xe);
    *(undefined2 *)(param_1 + 0xe) = 1;
    if (*(char *)(param_1 + 0xbc) == '\0') {
      sub_08018BE8(param_1,0xe);
    }
    else {
      sub_08018C20(param_1,0xe,0,1);
    }
  }
  else {
    *(undefined *)(param_1 + 0xbd) = *(undefined *)(param_1 + 0xe);
    *(undefined2 *)(param_1 + 0xe) = 0x101;
  }
  sub_0801FCE4(param_1);
  return in_lr;
}

