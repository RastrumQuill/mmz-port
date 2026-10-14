// sub_080B0ACC at 0x080B0ACC (thumb)

undefined8 sub_080B0ACC(undefined4 *param_1,undefined4 param_2,undefined param_3,byte param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = sub_08006B84(DAT_0202f084);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 1;
    *(undefined *)(iVar1 + 9) = 0x10;
    *(undefined4 *)(iVar1 + 0x14) = 0x80b0b55;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    uVar2 = param_1[1];
    *(undefined4 *)(iVar1 + 0x54) = *param_1;
    *(undefined4 *)(iVar1 + 0x58) = uVar2;
    *(undefined *)(iVar1 + 0x10) = param_3;
    *(undefined *)(iVar1 + 0x11) = 0;
    *(byte *)(iVar1 + 0x78) = param_4 >> 4 & 1;
    *(byte *)(iVar1 + 0x79) = param_4 & 1;
    *(undefined4 *)(iVar1 + 0x7c) = param_2;
  }
  return CONCAT44(in_lr,iVar1);
}

