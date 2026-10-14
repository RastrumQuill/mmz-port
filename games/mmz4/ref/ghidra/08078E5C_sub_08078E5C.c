// sub_08078E5C at 0x08078E5C (thumb)

undefined4 sub_08078E5C(int param_1)

{
  ushort uVar1;
  ushort *puVar2;
  undefined4 in_lr;
  
  puVar2 = (ushort *)(param_1 + 0xd4);
  uVar1 = *puVar2;
  *puVar2 = uVar1 + 1;
  if ((0xe < (ushort)(uVar1 + 1)) || (*(char *)(param_1 + 0xd6) != '\x02')) {
    sub_08002B10(399);
    *(undefined *)(param_1 + 0xd6) = 2;
    *puVar2 = 0;
  }
  return in_lr;
}

