// sub_080AE968 at 0x080AE968 (thumb)

undefined4 sub_080AE968(undefined4 *param_1,undefined param_2,undefined param_3,undefined2 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = sub_08006B84(DAT_0202f084);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 1;
    *(undefined *)(iVar1 + 9) = 8;
    *(undefined4 *)(iVar1 + 0x14) = 0x80ae9c9;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    uVar2 = param_1[1];
    *(undefined4 *)(iVar1 + 0x54) = *param_1;
    *(undefined4 *)(iVar1 + 0x58) = uVar2;
    *(undefined *)(iVar1 + 0x11) = param_2;
    *(undefined *)(iVar1 + 0x74) = param_3;
    *(undefined2 *)(iVar1 + 0x78) = param_4;
  }
  return in_lr;
}

