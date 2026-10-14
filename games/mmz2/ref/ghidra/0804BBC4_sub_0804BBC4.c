// sub_0804BBC4 at 0x0804BBC4 (thumb)

undefined4 sub_0804BBC4(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080032EC(0x69);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (((((*(uint *)(param_1 + 0x8c) & 0x800) != 0) &&
       (iVar2 = *(int *)(*(int *)(param_1 + 0x84) + 0x2c), *(char *)(iVar2 + 8) == '\0')) &&
      ((*(uint *)(iVar2 + 0x8c) & 0x200) == 0)) && (*(short *)(iVar2 + 0xa4) != 0)) {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar1 = *(int *)(param_1 + 0x54) + -0xe00;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x54) + 0xe00;
    }
    *(int *)(iVar2 + 0x54) = iVar1;
    *(int *)(iVar2 + 0x58) = *(int *)(param_1 + 0x58) + -0x800;
    sub_0802311C(iVar2,0,~(*(byte *)(param_1 + 10) >> 4) & 1,0);
  }
  iVar2 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar2;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -0x40;
  if (iVar2 < *(int *)(param_1 + 0xcc) + -0x2000) {
    *(undefined *)(param_1 + 0xd) = 0x16;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

