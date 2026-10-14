// sub_0807F86C at 0x0807F86C (thumb)

undefined8 sub_0807F86C(char param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = DAT_0202ed84;
  sub_080054C4(DAT_0202ed84);
  iVar2 = *(int *)(*(int *)(iVar1 + 0xc) + 4);
  *(int *)(iVar1 + 0xc) = iVar2;
  while (iVar2 != iVar1 + 0x14) {
    if (*(char *)(iVar2 + 0x10) == param_1) goto LAB_0807f8aa;
    iVar2 = *(int *)(*(int *)(iVar1 + 0xc) + 4);
    *(int *)(iVar1 + 0xc) = iVar2;
  }
  iVar2 = 0;
LAB_0807f8aa:
  return CONCAT44(in_lr,iVar2);
}

