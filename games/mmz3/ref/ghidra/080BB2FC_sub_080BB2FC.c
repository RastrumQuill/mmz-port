// sub_080BB2FC at 0x080BB2FC (thumb)

void sub_080BB2FC(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = sub_080070D8(DAT_0203062c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 1;
    *(undefined *)(iVar1 + 9) = 0x21;
    *(undefined4 *)(iVar1 + 0x14) = 0x80bb435;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(undefined *)(iVar1 + 0x10) = 0;
    *(undefined4 *)(iVar1 + 0x28) = param_1;
  }
  return;
}

