// sub_080B0E3C at 0x080B0E3C (thumb)

undefined4 sub_080B0E3C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x40);
  if ((*(ushort *)(param_1 + 0x1a) & 1) != 0) {
    *(bool *)(iVar1 + 0xc4) =
         *(int *)(iVar1 + 0x4c) < *(int *)(*(int *)(*(int *)(param_1 + 0x10) + 0x40) + 0x4c);
    *(undefined *)(iVar1 + 0xd) = 5;
    *(undefined *)(iVar1 + 0xe) = 1;
  }
  return in_lr;
}

