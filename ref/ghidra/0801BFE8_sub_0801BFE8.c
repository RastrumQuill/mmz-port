// sub_0801BFE8 at 0x0801BFE8 (thumb)

undefined8 sub_0801BFE8(undefined4 param_1,uint param_2,char param_3,char param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  undefined4 in_lr;
  
  param_2 = param_2 & 0xff;
  iVar2 = sub_0801901C(param_1,1);
  uVar3 = sub_08019068(param_1,1);
  iVar4 = sub_08019068(param_1,2);
  iVar2 = param_2 * 0x2000 + -0x1000 + iVar2;
  uVar9 = uVar3;
  if ((DAT_02022adf & 0x40) != 0) {
    param_4 = '\0';
  }
  do {
    iVar5 = sub_08019198(param_2,iVar2,uVar9);
    bVar1 = sub_08009B9C(iVar2,uVar3);
    iVar8 = 1;
    if ((param_4 != '\0') && (bVar1 == 0xf)) {
      iVar8 = 0xf;
    }
    bVar1 = bVar1 & 0xf0;
    if (iVar5 == 0) {
LAB_0801c1ac:
      do {
        uVar3 = uVar3 - 0x1000;
        iVar5 = sub_08009CD4(iVar2,uVar3);
        uVar9 = uVar3;
        if (0 < iVar5) {
          uVar9 = (uVar3 + iVar5) - 1;
        }
      } while ((uVar9 == uVar3) && (iVar4 <= (int)uVar9));
    }
    else {
      if ((iVar8 != 0xf) && (((bVar1 == 0 || (bVar1 == 0x10)) || (bVar1 == 0x20)))) {
        if (param_3 == '\0') {
          uVar3 = DAT_02022890 * 0x343fd + 0x269ec3;
          uVar6 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
          DAT_02022890 = uVar6 & 0x7fffffff;
          sub_0808D77C(iVar2 + iVar5 + (((int)((uVar3 * 2 >> 0x11 & 7) + 1) >> 1) + -2) * 0x100,
                       uVar9 + (((int)((uVar6 * 2 >> 0x11 & 7) + 1) >> 1) + -2) * 0x100);
        }
        else {
          sub_0808D5E0(iVar2 + iVar5,uVar9,8,-param_2 >> 0x1f);
        }
        uVar7 = 1;
        goto LAB_0801c1d4;
      }
      if ((iVar5 == 0) || ((iVar8 != 0xf && (((bVar1 == 0 || (bVar1 == 0x10)) || (bVar1 == 0x20)))))
         ) goto LAB_0801c1ac;
      do {
        uVar3 = uVar3 - 0x1000;
        iVar5 = sub_08019198(param_2,iVar2,uVar3);
        uVar9 = uVar3;
        if (iVar5 != 0) {
          bVar1 = sub_08009B9C(iVar2,uVar3);
          iVar5 = 1;
          if ((param_4 != '\0') && (bVar1 == 0xf)) {
            iVar5 = 0xf;
          }
          bVar1 = bVar1 & 0xf0;
          if ((iVar5 != 0xf) && (((bVar1 == 0 || (bVar1 == 0x10)) || (bVar1 == 0x20)))) {
            do {
              uVar9 = uVar9 + 0x100;
              bVar1 = sub_08009B9C(iVar2,uVar9);
              iVar5 = 1;
              if ((param_4 != '\0') && (bVar1 == 0xf)) {
                iVar5 = 0xf;
              }
              bVar1 = bVar1 & 0xf0;
            } while ((iVar5 != 0xf) && (((bVar1 == 0 || (bVar1 == 0x10)) || (bVar1 == 0x20))));
            uVar9 = (uVar9 & 0xffffff00) - 1;
          }
        }
      } while ((uVar9 == uVar3) && (iVar4 <= (int)uVar9));
    }
  } while (((int)uVar3 <= (int)uVar9) && (iVar4 <= (int)uVar9));
  uVar7 = 0;
LAB_0801c1d4:
  return CONCAT44(in_lr,uVar7);
}

