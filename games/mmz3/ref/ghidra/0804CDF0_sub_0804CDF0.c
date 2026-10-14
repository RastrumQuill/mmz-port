// sub_0804CDF0 at 0x0804CDF0 (thumb)

undefined8 sub_0804CDF0(uint param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  ushort *puVar3;
  undefined4 in_lr;
  
  if (param_3 == 1) {
    iVar2 = 0;
    puVar3 = &DAT_080feab4;
    do {
      if (*puVar3 == param_2) {
        uVar1 = 6;
LAB_0804ce1e:
        iVar2 = sub_080FE390(iVar2 + 1,uVar1);
        param_1 = (uint)(ushort)(&DAT_080feab4)[iVar2];
        break;
      }
      puVar3 = puVar3 + 1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < 6);
  }
  else {
    iVar2 = 0;
    puVar3 = &DAT_080feab4;
    do {
      if (*puVar3 == param_2) {
        uVar1 = 5;
        goto LAB_0804ce1e;
      }
      puVar3 = puVar3 + 1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < 5);
  }
  return CONCAT44(in_lr,param_1);
}

