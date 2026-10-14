// sub_080B8F50 at 0x080B8F50 (thumb)

undefined4 sub_080B8F50(undefined4 param_1,undefined4 *param_2,undefined param_3,char param_4)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08006B84(DAT_0202f084);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 1;
    *(undefined *)(iVar1 + 9) = 0x2e;
    *(undefined4 *)(iVar1 + 0x14) = 0x80b9239;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(undefined4 *)(iVar1 + 0x54) = *param_2;
    *(undefined4 *)(iVar1 + 0x58) = param_2[1];
    *(undefined4 *)(iVar1 + 0x28) = param_1;
    *(undefined *)(iVar1 + 0x10) = 7;
    *(char *)(iVar1 + 0x11) = param_4;
    *(undefined *)(iVar1 + 0x12) = param_3;
    if (param_4 == '\0') {
      sub_080B8F50(param_1,param_2,param_3,1);
    }
  }
  return in_lr;
}

