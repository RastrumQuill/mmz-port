// sub_08054608 at 0x08054608 (thumb)

undefined8 sub_08054608(uint param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  undefined2 *puVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 200) == '\0') {
    if (param_3 == 1) {
      iVar3 = 0;
      puVar5 = &DAT_08360260;
      puVar4 = &DAT_08360260;
      do {
        if (*puVar4 == param_2) {
          iVar2 = iVar3 + 1;
          iVar1 = iVar2;
          if (iVar2 < 0) {
            iVar1 = iVar3 + 4;
          }
          iVar2 = iVar2 + (iVar1 >> 2) * -4;
          goto LAB_0805468a;
        }
        puVar4 = puVar4 + 1;
        iVar3 = iVar3 + 1;
      } while (iVar3 < 4);
    }
    else {
      iVar3 = 0;
      puVar5 = &DAT_08360260;
      puVar4 = &DAT_08360260;
      do {
        if (*puVar4 == param_2) goto LAB_08054682;
        puVar4 = puVar4 + 1;
        iVar3 = iVar3 + 1;
      } while (iVar3 < 4);
    }
  }
  else if (param_3 == 1) {
    iVar3 = 0;
    puVar5 = &DAT_08360268;
    puVar4 = &DAT_08360268;
    do {
      if (*puVar4 == param_2) goto LAB_08054682;
      puVar4 = puVar4 + 1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 3);
  }
  else {
    iVar3 = 0;
    puVar5 = &DAT_08360268;
    puVar4 = &DAT_08360268;
    do {
      if (*puVar4 == param_2) goto LAB_08054682;
      puVar4 = puVar4 + 1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 3);
  }
LAB_080546a6:
  return CONCAT44(in_lr,param_1);
LAB_08054682:
  iVar2 = sub_080FE390(iVar3 + 1,3);
LAB_0805468a:
  param_1 = (uint)(ushort)puVar5[iVar2];
  goto LAB_080546a6;
}

