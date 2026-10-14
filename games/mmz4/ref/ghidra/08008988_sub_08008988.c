// sub_08008988 at 0x08008988 (thumb)

undefined8 sub_08008988(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar7 = 0;
  uVar4 = param_1;
  if (DAT_02000c80 == 4) {
    iVar7 = sub_08128954(param_1 - 0xf000,0x3c000);
    uVar4 = iVar7 + 0xf000;
    iVar7 = param_1 - uVar4;
  }
  if ((uint)((int)param_2 >> 0xc) < 0x500) {
    uVar6 = 0;
    uVar5 = uVar4;
    do {
      uVar1 = (int)uVar5 >> 0xc;
      if ((0x77f < uVar1) ||
         ((uVar3 = (uint)*(ushort *)
                          ((uint)(&DAT_02001290)
                                 [((int)param_2 >> 0xc) * (uint)DAT_02001290 + uVar1 + 2] * 2 +
                          DAT_02000c68), uVar3 != 0x800f &&
          (iVar2 = sub_0812888C(param_2 & 0xfff,~uVar5 & 0xfff,0xfff,
                                *(undefined4 *)(&DAT_08827c50 + (uVar3 & 0xf) * 4)), iVar2 != 0))))
      {
        if ((int)uVar6 < 0x80) {
          iVar2 = sub_0800834C(uVar5,param_2);
          if (-1 < iVar2) {
            iVar2 = uVar5 + iVar2;
            goto LAB_08008a88;
          }
          iVar2 = 0x7fffffff;
          goto LAB_08008a92;
        }
        break;
      }
      if ((uVar6 & 1) == 0) {
        uVar5 = uVar1 << 0xc;
      }
      else {
        uVar5 = uVar5 - 1;
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < 0x80);
    iVar2 = 0;
LAB_08008a88:
    iVar2 = sub_0800989C(uVar4,param_2,iVar2);
    iVar2 = iVar2 + iVar7;
  }
  else {
    iVar2 = -1;
  }
LAB_08008a92:
  return CONCAT44(in_lr,iVar2);
}

