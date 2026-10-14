// sub_080A1014 at 0x080A1014 (thumb)

undefined8 sub_080A1014(undefined4 param_1,undefined4 *param_2,undefined param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = sub_0800710C(DAT_020305f8);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 8;
    *(undefined *)(iVar1 + 9) = 0xf;
    *(undefined4 *)(iVar1 + 0x14) = 0x80a1071;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(undefined *)(iVar1 + 0x10) = 4;
    *(undefined *)(iVar1 + 0xb5) = param_3;
    uVar2 = param_2[1];
    *(undefined4 *)(iVar1 + 0x54) = *param_2;
    *(undefined4 *)(iVar1 + 0x58) = uVar2;
    *(undefined4 *)(iVar1 + 0x28) = param_1;
  }
  return CONCAT44(in_lr,iVar1);
}

