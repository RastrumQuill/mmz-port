// sub_080661A4 at 0x080661A4 (thumb)

undefined4 sub_080661A4(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 in_lr;
  
  sVar1 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x40);
  if (sVar1 == 0) {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  iVar2 = sub_08065A24(param_1);
  if (iVar2 != 0) {
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

