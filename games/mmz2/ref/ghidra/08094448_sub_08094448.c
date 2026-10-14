// sub_08094448 at 0x08094448 (thumb)

undefined8 sub_08094448(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = sub_08008F50(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x1300);
  iVar2 = sub_08008DE8(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  return CONCAT44(in_lr,(uint)(0 < iVar1 && iVar2 < 0));
}

