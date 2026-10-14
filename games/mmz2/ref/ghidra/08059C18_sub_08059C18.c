// sub_08059C18 at 0x08059C18 (thumb)

undefined4 sub_08059C18(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08006E08(param_1 + 0x74,&DAT_0833c9d8);
    sub_080127E4(param_1,0xa71e);
    *(undefined4 *)(param_1 + 0x68) = 0;
    uVar2 = 0xffffffd0;
    *(undefined4 *)(param_1 + 100) = 0xffffffd0;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      uVar2 = 0x30;
    }
    *(undefined4 *)(param_1 + 100) = uVar2;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  iVar1 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
  *(int *)(param_1 + 0x5c) = iVar1;
  if (0x3a0 < iVar1) {
    *(undefined4 *)(param_1 + 0x5c) = 0x3a0;
  }
  if (*(int *)(param_1 + 0x5c) < -0x3a0) {
    *(undefined4 *)(param_1 + 0x5c) = 0xfffffc60;
  }
  iVar3 = *(int *)(param_1 + 0x5c);
  iVar1 = iVar3;
  if (iVar3 < 0) {
    iVar1 = -iVar3;
  }
  iVar1 = *(int *)(param_1 + 0x68) + iVar1;
  *(int *)(param_1 + 0x68) = iVar1;
  if (0xc000 < iVar1) {
    *(undefined *)(param_1 + 0xd) = 0x11;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar3;
  sub_080128D4(param_1);
  return in_lr;
}

