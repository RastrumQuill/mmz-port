// sub_08046F44 at 0x08046F44 (thumb)

undefined4 sub_08046F44(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa502);
    *(undefined *)(*(int *)(param_1 + 0xc0) + 0x11) = 1;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar1 = 0x180;
    }
    else {
      uVar1 = 0xfffffe80;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar1;
    *(undefined4 *)(param_1 + 0x60) = 0xfffffc00;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  iVar3 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar3;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  uVar2 = *(int *)(param_1 + 0x58) + iVar3;
  *(uint *)(param_1 + 0x58) = uVar2;
  if (*(uint *)(param_1 + 0xd4) < uVar2) {
    *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0xd4);
    *(undefined *)(param_1 + 0xd) = 0xd;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

