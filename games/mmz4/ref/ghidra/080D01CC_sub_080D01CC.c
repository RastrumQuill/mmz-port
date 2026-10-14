// sub_080D01CC at 0x080D01CC (thumb)

undefined4 sub_080D01CC(undefined4 *param_1,byte param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = sub_08005500(DAT_0202ed94);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 8;
    *(undefined *)(iVar1 + 9) = 0x41;
    *(undefined4 *)(iVar1 + 0x14) = 0x80d0235;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    uVar2 = param_1[1];
    *(undefined4 *)(iVar1 + 0x54) = *param_1;
    *(undefined4 *)(iVar1 + 0x58) = uVar2;
    *(byte *)(iVar1 + 0x10) = param_2;
    *(undefined4 *)(iVar1 + 0x28) = param_3;
    if (param_2 < 8) {
      sub_080D01CC(param_1,param_2 + 1,param_3);
    }
  }
  return in_lr;
}

