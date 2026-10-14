// sub_08061610 at 0x08061610 (thumb)

undefined8 sub_08061610(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  undefined4 in_lr;
  
  if (*(short *)(param_1 + 0xa4) < 0x21) {
    iVar3 = 0;
    puVar4 = &DAT_080febd2;
    do {
      if (*puVar4 == param_2) {
        iVar1 = sub_080FE390(iVar3 + 1,5);
LAB_08061662:
        param_1 = (uint)(ushort)(&DAT_080febd2)[iVar1];
        break;
      }
      puVar4 = puVar4 + 1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 5);
  }
  else {
    iVar3 = 0;
    puVar4 = &DAT_080febd2;
    do {
      if (*puVar4 == param_2) {
        iVar1 = iVar3 + 1;
        iVar2 = iVar1;
        if (iVar1 < 0) {
          iVar2 = iVar3 + 4;
        }
        iVar1 = iVar1 + (iVar2 >> 2) * -4;
        goto LAB_08061662;
      }
      puVar4 = puVar4 + 1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 4);
  }
  return CONCAT44(in_lr,param_1);
}

