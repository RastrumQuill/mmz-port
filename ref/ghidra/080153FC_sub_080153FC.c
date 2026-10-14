// sub_080153FC at 0x080153FC (thumb)

undefined8 sub_080153FC(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0xc);
  bVar1 = *(byte *)(iVar3 + 1);
  if (bVar1 == 1) {
    sub_080BC808(*(undefined2 *)(iVar3 + 4));
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      sub_080BC818(*(undefined2 *)(iVar3 + 4),*(undefined2 *)(iVar3 + 2));
    }
  }
  else if ((bVar1 == 2) && (DAT_0202365a != 0)) {
    *(int *)(param_1 + 0xc) = iVar3 + -8;
    uVar2 = 1;
    goto LAB_08015442;
  }
  uVar2 = 0;
LAB_08015442:
  return CONCAT44(in_lr,uVar2);
}

