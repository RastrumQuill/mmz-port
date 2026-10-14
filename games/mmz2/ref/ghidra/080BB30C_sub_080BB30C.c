// sub_080BB30C at 0x080BB30C (thumb)

undefined4 sub_080BB30C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = 0;
  do {
    iVar1 = sub_08006B84(DAT_0202f084);
    if (iVar1 != 0) {
      *(undefined *)(iVar1 + 0x25) = 1;
      *(undefined *)(iVar1 + 9) = 0x36;
      *(undefined4 *)(iVar1 + 0x14) = 0x80bb371;
      *(undefined2 *)(iVar1 + 0x20) = 0;
      *(undefined *)(iVar1 + 0x22) = 0;
      *(undefined *)(iVar1 + 0x10) = 0;
      *(char *)(iVar1 + 0x11) = (char)iVar2;
      *(undefined4 *)(iVar1 + 0x28) = param_1;
      *(undefined4 *)(iVar1 + 0x54) = *param_2;
      *(undefined4 *)(iVar1 + 0x58) = param_2[1];
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  return in_lr;
}

