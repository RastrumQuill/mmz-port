// sub_0803C3E8 at 0x0803C3E8 (thumb)

undefined8 sub_0803C3E8(int param_1,undefined4 param_2,undefined param_3)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_0800710C(DAT_020305e0);
  if (iVar1 != 0) {
    if (*(char *)(param_1 + 0xe4) == '\x03') {
      *(undefined *)(iVar1 + 9) = 0xc;
      *(undefined4 *)(iVar1 + 0x14) = 0x803c4ad;
      *(byte *)(iVar1 + 0xb) = *(byte *)(iVar1 + 0xb) & 0xbf;
      *(undefined *)(iVar1 + 0x25) = 0x10;
      *(undefined2 *)(iVar1 + 0x20) = 0;
      *(undefined *)(iVar1 + 0x22) = 1;
      sub_08036F90(0,*(undefined *)(param_1 + 0xc2));
    }
    else {
      *(undefined *)(iVar1 + 9) = 0xc;
      *(undefined4 *)(iVar1 + 0x14) = 0x803c4ad;
      *(byte *)(iVar1 + 0xb) = *(byte *)(iVar1 + 0xb) & 0xbf;
      *(undefined *)(iVar1 + 0x25) = 0x10;
      *(undefined2 *)(iVar1 + 0x20) = 0x30;
      *(undefined *)(iVar1 + 0x22) = 1;
      sub_08036F90(1,*(undefined *)(param_1 + 0xc2));
    }
    *(int *)(iVar1 + 0xb4) = param_1;
    *(undefined4 *)(iVar1 + 0x28) = param_2;
    *(undefined *)(iVar1 + 0x10) = param_3;
    *(undefined *)(iVar1 + 0x11) = 0;
  }
  return CONCAT44(in_lr,iVar1);
}

