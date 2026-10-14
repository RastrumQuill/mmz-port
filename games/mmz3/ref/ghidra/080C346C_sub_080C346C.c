// sub_080C346C at 0x080C346C (thumb)

undefined4 sub_080C346C(undefined4 param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_0800710C(DAT_0203062c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 1;
    *(undefined *)(iVar1 + 9) = 0x40;
    *(undefined4 *)(iVar1 + 0x14) = 0x80c3711;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(undefined4 *)(iVar1 + 0x28) = param_1;
    *(undefined *)(iVar1 + 0x10) = 0;
  }
  return in_lr;
}

