// sub_0805CFB0 at 0x0805CFB0 (thumb)

undefined4 sub_0805CFB0(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      *(undefined4 *)(param_1 + 0x5c) = 0x180;
      uVar2 = 0x1000;
    }
    else {
      *(undefined4 *)(param_1 + 0x5c) = 0xfffffe80;
      uVar2 = 0xfffff000;
    }
    *(undefined4 *)(param_1 + 100) = uVar2;
    *(undefined4 *)(param_1 + 0x60) = 0xfffffc40;
    sub_080AD018(param_1,3,0);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080177F4(param_1);
  sVar1 = sub_0805D55C(param_1,*(undefined4 *)(param_1 + 100),0);
  if (sVar1 == 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  sVar1 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54));
  if (sVar1 != 0) {
    uVar2 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar2;
    *(undefined *)(param_1 + 0xd) = 7;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

