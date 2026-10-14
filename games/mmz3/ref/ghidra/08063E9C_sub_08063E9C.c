// sub_08063E9C at 0x08063E9C (thumb)

undefined4 sub_08063E9C(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 in_lr;
  
  sVar1 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x40);
  if (sVar1 == 0) {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  iVar2 = sub_08063614(param_1);
  if (iVar2 != 0) {
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

