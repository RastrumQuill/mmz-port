// sub_080A0EDC at 0x080A0EDC (thumb)

undefined4 sub_080A0EDC(undefined4 param_1,undefined4 *param_2,undefined param_3,undefined param_4)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08006B50(DAT_0202f07c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 8;
    *(undefined *)(iVar1 + 9) = 0x1c;
    *(undefined4 *)(iVar1 + 0x14) = 0x80a1105;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(undefined *)(iVar1 + 0x10) = 0;
    *(undefined *)(iVar1 + 0x11) = param_4;
    *(undefined4 *)(iVar1 + 0x54) = *param_2;
    *(undefined4 *)(iVar1 + 0x58) = param_2[1];
    *(undefined4 *)(iVar1 + 0x5c) = *param_2;
    *(undefined4 *)(iVar1 + 0x60) = param_2[1];
    *(undefined *)(iVar1 + 0xb4) = param_3;
    *(undefined4 *)(iVar1 + 0x28) = param_1;
  }
  return in_lr;
}

