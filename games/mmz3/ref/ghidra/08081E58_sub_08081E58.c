// sub_08081E58 at 0x08081E58 (thumb)

undefined8 sub_08081E58(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_0800710C(DAT_020305e8);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 0x18;
    *(undefined *)(iVar1 + 9) = 0x27;
    *(undefined4 *)(iVar1 + 0x14) = 0x80825a5;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(byte *)(iVar1 + 0xb) = *(byte *)(iVar1 + 0xb) | 0x10;
    *(undefined *)(iVar1 + 0x1d) = *(undefined *)(iVar1 + 0x1c);
    *(undefined *)(iVar1 + 0x10) = 0;
    sub_08017528(iVar1);
    *(undefined4 *)(iVar1 + 0x2c) = 0;
    *(int *)(iVar1 + 0x28) = param_1;
    *(undefined4 *)(iVar1 + 0x5c) = 0;
    *(undefined4 *)(iVar1 + 0x60) = 0;
    *(undefined *)(iVar1 + 0xb5) = 1;
    *(undefined *)(iVar1 + 0xb4) = 0;
    *(byte *)(iVar1 + 0xb) = *(byte *)(iVar1 + 0xb) | 0x10;
    *(undefined *)(iVar1 + 0x1d) = *(undefined *)(param_1 + 0x1c);
  }
  return CONCAT44(in_lr,iVar1);
}

