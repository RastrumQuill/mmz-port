// sub_08076F48 at 0x08076F48 (thumb)

undefined4 sub_08076F48(int param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = sub_0800710C(DAT_020305e8);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 0x18;
    *(undefined *)(iVar1 + 9) = 0x18;
    *(undefined4 *)(iVar1 + 0x14) = 0x8077159;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(byte *)(iVar1 + 0xb) = *(byte *)(iVar1 + 0xb) | 0x10;
    *(undefined *)(iVar1 + 0x1d) = *(undefined *)(iVar1 + 0x1c);
    *(undefined *)(iVar1 + 0x10) = 2;
    *(int *)(iVar1 + 0x54) = param_2;
    *(int *)(iVar1 + 0x58) = param_3;
    if (param_4 == '\0') {
      *(int *)(iVar1 + 0x54) = param_2 + -0x200;
      iVar2 = 0x800;
    }
    else {
      *(int *)(iVar1 + 0x54) = param_2 + 0x200;
      iVar2 = 0x700;
    }
    *(int *)(iVar1 + 0x58) = param_3 + iVar2;
    *(char *)(iVar1 + 0x12) = param_4;
    if (param_1 != 0) {
      *(char *)(param_1 + 0xb8) = *(char *)(param_1 + 0xb8) + '\x01';
    }
    *(int *)(iVar1 + 0x28) = param_1;
  }
  return in_lr;
}

