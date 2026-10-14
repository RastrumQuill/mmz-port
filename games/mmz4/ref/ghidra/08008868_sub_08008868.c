// sub_08008868 at 0x08008868 (thumb)

undefined8 sub_08008868(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = 0;
  uVar3 = param_1;
  if (DAT_02000c80 == 4) {
    iVar6 = sub_08128954(param_1 - 0xf000,0x3c000);
    uVar3 = iVar6 + 0xf000;
    iVar6 = param_1 - uVar3;
  }
  if ((uint)((int)param_2 >> 0xc) < 0x500) {
    uVar5 = 0;
    uVar4 = uVar3;
    do {
      if ((0x77f < (uint)((int)uVar4 >> 0xc)) ||
         ((uVar2 = (uint)*(ushort *)
                          ((uint)(&DAT_02001290)
                                 [((int)param_2 >> 0xc) * (uint)DAT_02001290 + ((int)uVar4 >> 0xc) +
                                  2] * 2 + DAT_02000c68), uVar2 != 0x800f &&
          (iVar1 = sub_0812888C(param_2 & 0xfff,uVar4 & 0xfff,0xfff,
                                *(undefined4 *)(&DAT_08827c10 + (uVar2 & 0xf) * 4)), iVar1 != 0))))
      {
        if ((int)uVar5 < 0x80) {
          iVar1 = sub_0800816C(uVar4,param_2);
          if (iVar1 < 1) {
            iVar1 = uVar4 + iVar1;
            goto LAB_0800896c;
          }
          iVar1 = 0;
          goto LAB_0800897a;
        }
        break;
      }
      if ((uVar5 & 1) == 0) {
        uVar4 = ((int)(uVar4 + 0x1000) >> 0xc) * 0x1000 - 1;
      }
      else {
        uVar4 = uVar4 + 1;
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < 0x80);
    iVar1 = 0x7fffffff;
LAB_0800896c:
    iVar1 = sub_080097E4(uVar3,param_2,iVar1);
    iVar1 = iVar1 + iVar6;
  }
  else {
    iVar1 = -1;
  }
LAB_0800897a:
  return CONCAT44(in_lr,iVar1);
}

