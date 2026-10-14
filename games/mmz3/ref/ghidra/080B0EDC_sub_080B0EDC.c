// sub_080B0EDC at 0x080B0EDC (thumb)

undefined4 sub_080B0EDC(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_0800710C(DAT_020305f8);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 8;
    *(undefined *)(iVar1 + 9) = 0x2b;
    *(undefined4 *)(iVar1 + 0x14) = 0x80b0f39;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(undefined4 *)(iVar1 + 0x54) = *param_1;
    *(undefined4 *)(iVar1 + 0x58) = param_1[1];
    *(int *)(iVar1 + 0x5c) = param_2;
    *(bool *)(iVar1 + 0x12) = 0 < param_2;
    *(undefined *)(iVar1 + 0x10) = 0;
  }
  return in_lr;
}

