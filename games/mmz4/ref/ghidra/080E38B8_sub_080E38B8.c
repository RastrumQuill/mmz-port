// sub_080E38B8 at 0x080E38B8 (thumb)

undefined8 sub_080E38B8(undefined4 *param_1,undefined4 param_2,undefined param_3,byte param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = sub_08005500(DAT_0202ed9c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 1;
    *(undefined *)(iVar1 + 9) = 0x48;
    *(undefined4 *)(iVar1 + 0x14) = 0x80e3945;
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

