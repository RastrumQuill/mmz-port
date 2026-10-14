// sub_080D5E28 at 0x080D5E28 (thumb)

undefined4 sub_080D5E28(int param_1,undefined4 *param_2,undefined param_3)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = 0;
  do {
    iVar1 = sub_08005500(DAT_0202ed9c);
    if (iVar1 != 0) {
      *(undefined *)(iVar1 + 0x25) = 1;
      *(undefined *)(iVar1 + 9) = 0x14;
      *(undefined4 *)(iVar1 + 0x14) = 0x80d5ea9;
      *(undefined2 *)(iVar1 + 0x20) = 0;
      *(undefined *)(iVar1 + 0x22) = 0;
      *(undefined *)(iVar1 + 0x10) = 1;
      *(char *)(iVar1 + 0x11) = (char)iVar2;
      *(undefined *)(iVar1 + 0x78) = param_3;
      *(undefined4 *)(iVar1 + 0x74) = *(undefined4 *)(param_1 + 0xb4);
      *(int *)(iVar1 + 0x28) = param_1;
      *(undefined4 *)(iVar1 + 0x54) = *param_2;
      *(undefined4 *)(iVar1 + 0x58) = param_2[1];
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  return in_lr;
}

