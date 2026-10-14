// sub_080AA650 at 0x080AA650 (thumb)

undefined8 sub_080AA650(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if ((*(int *)(DAT_0202dbf0 + 0x58) - *(int *)(param_1 + 0x58) >> 8) - 1U < 0x6f) {
    iVar1 = *(int *)(DAT_0202dbf0 + 0x54) - *(int *)(param_1 + 0x54) >> 8;
    if (iVar1 < 0) {
      iVar1 = -iVar1;
    }
    if (iVar1 < 0x20) {
      uVar2 = 1;
      goto LAB_080aa682;
    }
  }
  uVar2 = 0;
LAB_080aa682:
  return CONCAT44(in_lr,uVar2);
}

