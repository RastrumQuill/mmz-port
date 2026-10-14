// sub_0803243C at 0x0803243C (thumb)

undefined4 sub_0803243C(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xf) = 1;
  sub_08002B10(10);
  if ((*(byte *)(param_1 + 10) >> 4 & 1) == (*(byte *)(param_1 + 0x142) & 1)) {
    sub_0801CF00(param_1,0x4a00);
  }
  else {
    sub_0801CF00(param_1,0x4b00);
  }
  if (*(char *)(param_1 + 0xc5) == '\n') {
    bVar1 = *(byte *)(param_1 + 0x142);
    uVar2 = bVar1 & 0x40;
    if ((bVar1 & 0x40) == 0) {
      *(uint *)(param_1 + 0x5c) = uVar2;
    }
    else {
      *(byte *)(param_1 + 0x142) = bVar1 & 0xbf;
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x128) >> 2;
      uVar2 = *(int *)(param_1 + 300) >> 2;
    }
    *(uint *)(param_1 + 0x60) = uVar2;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x142);
    if ((bVar1 & 0x40) != 0) {
      *(byte *)(param_1 + 0x142) = bVar1 & 0xbf;
      *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x128);
      *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 300);
      *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(param_1 + 0x128);
      *(undefined *)(param_1 + 0xf) = 2;
      sub_080325AC(param_1);
      return in_lr;
    }
    if ((bVar1 & 1) == 0) {
      uVar3 = 0x100;
    }
    else {
      uVar3 = 0xffffff00;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x134) = 0;
  *(undefined2 *)(param_1 + 0x138) = 0;
  if (*(char *)(param_1 + 0x1b9) == '\0') {
    *(undefined *)(param_1 + 0xf) = 2;
    sub_080325AC(param_1);
  }
  else {
    *(undefined *)(param_1 + 0xf) = 1;
    sub_08032534(param_1);
  }
  return in_lr;
}

