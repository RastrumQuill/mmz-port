// sub_0803DE30 at 0x0803DE30 (thumb)

undefined8 sub_0803DE30(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0xb4);
  if (((*(ushort *)(iVar3 + 0x252) & 0x8000) == 0) && ((*(ushort *)(iVar3 + 200) & 2) != 0)) {
    if ((*(char *)(iVar3 + 0xc0) == '\0') && ((*(uint *)(iVar3 + 600) & 0x2000) != 0)) {
      if (*(char *)(param_1 + 0x13) == '\0') {
        uVar2 = 0;
LAB_0803dea6:
        cVar1 = sub_0803A434(iVar3,uVar2);
        if ((cVar1 == '\x02') && (*(char *)(iVar3 + 0x165) == '\0')) {
          sub_0803B2B0(iVar3,param_1,6);
          *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
        }
      }
    }
    else {
      if ((*(char *)(iVar3 + 0xc1) != '\0') || ((*(uint *)(iVar3 + 600) & 0x8000) == 0))
      goto LAB_0803ded4;
      if (*(char *)(param_1 + 0x13) == '\0') {
        uVar2 = 1;
        goto LAB_0803dea6;
      }
    }
    uVar2 = 1;
  }
  else {
LAB_0803ded4:
    uVar2 = 0;
  }
  return CONCAT44(in_lr,uVar2);
}

