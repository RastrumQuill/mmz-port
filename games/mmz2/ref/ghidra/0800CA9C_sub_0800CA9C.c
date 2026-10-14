// sub_0800CA9C at 0x0800CA9C (thumb)

undefined4 sub_0800CA9C(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x68) = 0xf;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  uVar1 = (uint)(byte)DAT_0202e030;
  if (uVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x68);
    uVar1 = iVar2 + 1;
    *(uint *)(param_1 + 0x68) = uVar1;
    if (uVar1 < 0x19) {
      return in_lr;
    }
    uVar1 = iVar2 - 8;
  }
  *(uint *)(param_1 + 0x68) = uVar1;
  return in_lr;
}

