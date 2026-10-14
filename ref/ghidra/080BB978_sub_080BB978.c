// sub_080BB978 at 0x080BB978 (thumb)

void sub_080BB978(undefined param_1,undefined4 param_2,undefined param_3)

{
  int iVar1;
  
  iVar1 = sub_08005458(DAT_02023210);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x2f;
    *(undefined4 *)(iVar1 + 0x14) = 0x80bb869;
    *(undefined2 *)(iVar1 + 0x1c) = 0x350;
    *(undefined *)(iVar1 + 0x1e) = 5;
    *(undefined *)(iVar1 + 0x10) = param_1;
    *(undefined4 *)(iVar1 + 0x20) = param_2;
    *(undefined *)(iVar1 + 0x11) = param_3;
  }
  return;
}

