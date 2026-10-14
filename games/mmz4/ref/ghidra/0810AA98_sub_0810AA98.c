// sub_0810AA98 at 0x0810AA98 (thumb)

undefined4 sub_0810AA98(undefined4 param_1,undefined param_2,undefined param_3)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005500(DAT_0202edb4);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 0x10;
    *(undefined *)(iVar1 + 9) = 5;
    *(undefined4 *)(iVar1 + 0x14) = 0x810aae9;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(undefined4 *)(iVar1 + 0x28) = param_1;
    *(undefined *)(iVar1 + 0x10) = param_2;
    *(undefined *)(iVar1 + 0x11) = param_3;
  }
  return in_lr;
}

