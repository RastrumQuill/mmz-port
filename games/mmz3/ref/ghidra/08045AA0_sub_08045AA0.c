// sub_08045AA0 at 0x08045AA0 (thumb)

uint sub_08045AA0(undefined4 param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  undefined2 *puVar6;
  
  if (param_3 == 1) {
    uVar1 = sub_08045B64();
    if (uVar1 == 0) {
      iVar4 = 0;
      puVar6 = &DAT_080fea5e;
      puVar5 = &DAT_080fea5e;
      do {
        if (*puVar5 == param_2) {
          iVar2 = sub_080FE390(iVar4 + 1,5);
          goto LAB_08045b46;
        }
        puVar5 = puVar5 + 1;
        iVar4 = iVar4 + 1;
      } while (iVar4 < 5);
    }
    else {
      iVar4 = 0;
      puVar6 = &DAT_080fea68;
      puVar5 = &DAT_080fea68;
      do {
        if (*puVar5 == param_2) {
          iVar2 = sub_080FE390(iVar4 + 1,3);
LAB_08045b46:
          return (uint)(ushort)puVar6[iVar2];
        }
        puVar5 = puVar5 + 1;
        iVar4 = iVar4 + 1;
      } while (iVar4 < 3);
    }
  }
  else {
    uVar1 = sub_08045B64();
    if (uVar1 == 0) {
      iVar4 = 0;
      puVar6 = &DAT_080fea5e;
      puVar5 = &DAT_080fea5e;
      do {
        if (*puVar5 == param_2) {
          iVar2 = iVar4 + 1;
          iVar3 = iVar2;
          if (iVar2 < 0) {
            iVar3 = iVar4 + 4;
          }
          iVar2 = iVar2 + (iVar3 >> 2) * -4;
          goto LAB_08045b46;
        }
        puVar5 = puVar5 + 1;
        iVar4 = iVar4 + 1;
      } while (iVar4 < 4);
    }
    else {
      iVar4 = 0;
      puVar6 = &DAT_080fea68;
      puVar5 = &DAT_080fea68;
      do {
        if (*puVar5 == param_2) {
          iVar2 = sub_080FE390(iVar4 + 1,3);
          goto LAB_08045b46;
        }
        puVar5 = puVar5 + 1;
        iVar4 = iVar4 + 1;
      } while (iVar4 < 3);
    }
  }
  return uVar1;
}

