// sub_0804E618 at 0x0804E618 (thumb)

undefined4 sub_0804E618(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  byte bVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    DAT_0202e03c = *(char *)(param_1 + 0xe);
    sub_080127E4(param_1,0x310a);
    sub_08006E08(param_1 + 0x74,&DAT_0833b76c);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    uVar1 = sub_080B5244(param_1,0,0);
    *(undefined4 *)(param_1 + 0x28) = uVar1;
    sub_080032EC(0x39);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(int *)(param_1 + 0x5c) < 0x600) {
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 0x10;
  }
  iVar2 = *(int *)(param_1 + 0xb8) + -0x1000;
  if (*(int *)(param_1 + 0x58) < iVar2) {
    iVar2 = *(int *)(param_1 + 0x58) + 0x100;
  }
  *(int *)(param_1 + 0x58) = iVar2;
  bVar3 = *(byte *)(param_1 + 10) & 0x10;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar2 = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar2;
    if (*(int *)(param_1 + 0xc4) + -0x7800 <= iVar2) {
      return in_lr;
    }
    *(undefined *)(*(int *)(param_1 + 0x28) + 0x11) = 1;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar2;
    if (iVar2 <= *(int *)(param_1 + 200) + 0x7800) {
      return in_lr;
    }
    bVar3 = 0;
    *(undefined *)(*(int *)(param_1 + 0x28) + 0x11) = 1;
  }
  *(undefined *)(param_1 + 0xd) = 0xb;
  *(byte *)(param_1 + 0xe) = bVar3;
  return in_lr;
}

