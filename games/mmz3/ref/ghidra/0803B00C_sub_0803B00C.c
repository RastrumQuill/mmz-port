// sub_0803B00C at 0x0803B00C (thumb)

undefined8
sub_0803B00C(int param_1,undefined4 param_2,undefined4 param_3,undefined param_4,undefined param_5)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_0800710C(DAT_020305e0);
  if (iVar1 != 0) {
    if (*(char *)(param_1 + 0xe4) == '\0') {
      *(undefined *)(iVar1 + 9) = 7;
      *(undefined4 *)(iVar1 + 0x14) = 0x803b0c9;
      *(byte *)(iVar1 + 0xb) = *(byte *)(iVar1 + 0xb) & 0xbf;
      *(undefined *)(iVar1 + 0x25) = 0x10;
      *(undefined2 *)(iVar1 + 0x20) = 0;
    }
    else {
      *(undefined *)(iVar1 + 9) = 7;
      *(undefined4 *)(iVar1 + 0x14) = 0x803b0c9;
      *(byte *)(iVar1 + 0xb) = *(byte *)(iVar1 + 0xb) & 0xbf;
      *(undefined *)(iVar1 + 0x25) = 0x10;
      *(undefined2 *)(iVar1 + 0x20) = 0x30;
    }
    *(undefined *)(iVar1 + 0x22) = 1;
    *(int *)(iVar1 + 0x28) = param_1;
    *(undefined4 *)(iVar1 + 0xb4) = param_2;
    *(undefined4 *)(iVar1 + 0x2c) = param_3;
    *(undefined *)(iVar1 + 0x10) = param_4;
    *(undefined *)(iVar1 + 0x11) = param_5;
  }
  return CONCAT44(in_lr,iVar1);
}

