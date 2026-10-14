// sub_08040510 at 0x08040510 (thumb)

undefined8 sub_08040510(uint param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  undefined4 in_lr;
  
  if (param_3 == 1) {
    iVar3 = 0;
    puVar4 = &DAT_080fe932;
    do {
      if (*puVar4 == param_2) {
        iVar1 = sub_080FE390(iVar3 + 1,5);
LAB_0804055a:
        param_1 = (uint)(ushort)(&DAT_080fe932)[iVar1];
        break;
      }
      puVar4 = puVar4 + 1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 5);
  }
  else {
    iVar3 = 0;
    puVar4 = &DAT_080fe932;
    do {
      if (*puVar4 == param_2) {
        iVar1 = iVar3 + 1;
        iVar2 = iVar1;
        if (iVar1 < 0) {
          iVar2 = iVar3 + 4;
        }
        iVar1 = iVar1 + (iVar2 >> 2) * -4;
        goto LAB_0804055a;
      }
      puVar4 = puVar4 + 1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 4);
  }
  return CONCAT44(in_lr,param_1);
}

