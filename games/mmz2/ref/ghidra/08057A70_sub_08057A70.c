// sub_08057A70 at 0x08057A70 (thumb)

ulonglong sub_08057A70(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0xbc) + -0x8000;
  if ((DAT_020011d0 & 0x7f) == 7) {
    uVar1 = sub_0800E964(*(undefined4 *)(param_1 + 0x54),iVar2);
  }
  else {
    uVar1 = sub_08011768(*(undefined4 *)(param_1 + 0x54),iVar2);
  }
  return CONCAT44(in_lr,uVar1) & 0xffffffff000000ff;
}

