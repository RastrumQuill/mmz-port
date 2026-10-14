// sub_0803B7D8 at 0x0803B7D8 (thumb)

undefined8 sub_0803B7D8(int param_1,int param_2,undefined param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = sub_0800710C(DAT_020305e0);
  if (iVar1 != 0) {
    if (*(char *)(param_1 + 0xe4) == '\0') {
      *(undefined *)(iVar1 + 9) = 9;
      *(undefined4 *)(iVar1 + 0x14) = 0x803b895;
      *(byte *)(iVar1 + 0xb) = *(byte *)(iVar1 + 0xb) & 0xbf;
      *(undefined *)(iVar1 + 0x25) = 0x10;
      *(undefined2 *)(iVar1 + 0x20) = 0;
    }
    else {
      *(undefined *)(iVar1 + 9) = 9;
      *(undefined4 *)(iVar1 + 0x14) = 0x803b895;
      *(byte *)(iVar1 + 0xb) = *(byte *)(iVar1 + 0xb) & 0xbf;
      *(undefined *)(iVar1 + 0x25) = 0x10;
      *(undefined2 *)(iVar1 + 0x20) = 0x30;
    }
    *(undefined *)(iVar1 + 0x22) = 1;
    *(int *)(iVar1 + 0x28) = param_1;
    *(int *)(iVar1 + 0x2c) = param_2;
    uVar2 = *(undefined4 *)(param_2 + 0x58);
    *(undefined4 *)(iVar1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
    *(undefined4 *)(iVar1 + 0x58) = uVar2;
    *(undefined *)(iVar1 + 0x10) = param_3;
    *(undefined *)(iVar1 + 0x11) = 0;
    *(int *)(iVar1 + 0x54) = *(int *)(iVar1 + 0x54) + param_4;
    *(int *)(iVar1 + 0x58) = *(int *)(iVar1 + 0x58) + param_5;
  }
  return CONCAT44(in_lr,iVar1);
}

