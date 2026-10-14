// sub_080BB4D0 at 0x080BB4D0 (thumb)

void sub_080BB4D0(undefined param_1,undefined4 param_2,undefined param_3)

{
  int iVar1;
  
  iVar1 = sub_08005458(DAT_02023210);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 8;
    *(undefined4 *)(iVar1 + 0x14) = 0x80bb239;
    *(undefined2 *)(iVar1 + 0x1c) = 0x390;
    *(undefined *)(iVar1 + 0x1e) = 6;
    *(undefined *)(iVar1 + 0x10) = 0;
    *(undefined *)(iVar1 + 0x11) = param_1;
    *(undefined4 *)(iVar1 + 0x20) = param_2;
    *(undefined *)(iVar1 + 0x12) = param_3;
  }
  return;
}

