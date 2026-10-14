// sub_080A5980 at 0x080A5980 (thumb)

undefined8 sub_080A5980(undefined4 param_1,undefined param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_0800710C(DAT_020305f8);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 8;
    *(undefined *)(iVar1 + 9) = 0x16;
    *(undefined4 *)(iVar1 + 0x14) = 0x80a5c7d;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(undefined *)(iVar1 + 0x10) = 0;
    *(undefined4 *)(iVar1 + 0x28) = param_1;
    *(undefined *)(iVar1 + 0xb6) = 0;
    *(undefined *)(iVar1 + 0xb5) = param_2;
  }
  return CONCAT44(in_lr,iVar1);
}

