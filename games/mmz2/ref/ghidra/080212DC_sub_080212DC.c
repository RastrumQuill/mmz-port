// sub_080212DC at 0x080212DC (thumb)

undefined8 sub_080212DC(int param_1,int param_2,int param_3,int param_4,uint param_5)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar4 = param_2 - param_1;
  param_4 = param_4 - param_3;
  if (iVar4 < 1) {
LAB_0802131c:
    if (0 < param_4) goto LAB_08021322;
  }
  else {
    iVar4 = sub_0800930C(param_1,param_3);
    param_1 = param_1 + iVar4;
    iVar4 = sub_08009190(param_2,param_3);
    param_2 = param_2 + iVar4;
    iVar4 = param_2 - param_1;
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    if (iVar4 < 1) goto LAB_0802131c;
LAB_08021322:
    uVar2 = (uint)DAT_020011d2;
    while ((uVar2 != 0 && ((0 < iVar4 || (0 < param_4))))) {
      uVar2 = uVar2 - 1;
      if ((uVar2 != param_5) && (((&DAT_020011d6)[uVar2 * 0xc] & 0x8000) == 0)) {
        iVar3 = (&DAT_020011dc)[uVar2 * 6] - (uint)(ushort)(&DAT_020011d8)[uVar2 * 0xc];
        iVar5 = (uint)(ushort)(&DAT_020011d8)[uVar2 * 0xc] * 2;
        if ((((uint)(param_1 - (iVar3 - iVar4)) < (uint)(iVar4 + iVar5)) &&
            (param_3 - ((((&DAT_020011e0)[uVar2 * 6] + 1) -
                        (uint)(ushort)(&DAT_020011da)[uVar2 * 0xc]) - param_4) <
             (uint)(ushort)(&DAT_020011da)[uVar2 * 0xc] * 2 + param_4)) && (0 < iVar4)) {
          iVar5 = iVar3 + -1 + iVar5;
          if ((iVar3 <= param_1) || (param_2 <= iVar5)) {
            if (param_1 < iVar5) {
              param_1 = iVar5 + 1;
            }
            if (iVar3 < param_2) {
              param_2 = iVar3 + -1;
            }
            iVar4 = param_2 - param_1;
            if (iVar4 < 0) {
              iVar4 = 0;
            }
          }
        }
      }
    }
    if ((0 < iVar4) || (0 < param_4)) {
      uVar1 = 1;
      goto LAB_080213f2;
    }
  }
  uVar1 = 0;
LAB_080213f2:
  return CONCAT44(in_lr,uVar1);
}

