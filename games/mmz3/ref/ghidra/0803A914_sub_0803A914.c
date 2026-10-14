// sub_0803A914 at 0x0803A914 (thumb)

undefined8 sub_0803A914(int param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_0800710C(DAT_020305e0);
  if (iVar1 != 0) {
    if (*(char *)(param_1 + 0xe4) == '\x01') {
      *(undefined *)(iVar1 + 9) = 5;
      *(undefined4 *)(iVar1 + 0x14) = 0x803a9cd;
      *(byte *)(iVar1 + 0xb) = *(byte *)(iVar1 + 0xb) & 0xbf;
      *(undefined *)(iVar1 + 0x25) = 0x10;
      *(undefined2 *)(iVar1 + 0x20) = 0;
    }
    else {
      *(undefined *)(iVar1 + 9) = 5;
      *(undefined4 *)(iVar1 + 0x14) = 0x803a9cd;
      *(byte *)(iVar1 + 0xb) = *(byte *)(iVar1 + 0xb) & 0xbf;
      *(undefined *)(iVar1 + 0x25) = 0x10;
      *(undefined2 *)(iVar1 + 0x20) = 0x30;
    }
    *(undefined *)(iVar1 + 0x22) = 1;
    *(undefined4 *)(iVar1 + 0xb4) = param_2;
    *(int *)(iVar1 + 0xb8) = param_1;
    *(char *)(iVar1 + 0x10) = param_3;
    *(undefined *)(iVar1 + 0x11) = 0;
    if (param_3 == '\0') {
      sub_0803A914(param_1,iVar1,1);
    }
  }
  return CONCAT44(in_lr,iVar1);
}

