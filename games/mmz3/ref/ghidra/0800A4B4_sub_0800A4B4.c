// sub_0800A4B4 at 0x0800A4B4 (thumb)

undefined4 sub_0800A4B4(uint param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = (int)param_1 >> 0xc;
  if ((uint)((int)param_2 >> 0xc) < 0x500) {
    uVar5 = 0;
    uVar4 = param_1;
    do {
      if ((0x77f < uVar3) ||
         ((uVar3 = (uint)*(ushort *)
                          ((uint)(&DAT_02002c60)
                                 [((int)param_2 >> 0xc) * (uint)DAT_02002c60 + uVar3 + 2] * 2 +
                          DAT_02002638), uVar3 != 0x800f &&
          (iVar1 = sub_080FE2C8(param_2 & 0xfff,~uVar4 & 0xfff,0xfff,
                                *(undefined4 *)(&DAT_08335680 + (uVar3 & 0xf) * 4)), iVar1 != 0))))
      {
        if ((int)uVar5 < 0x80) {
          iVar1 = sub_08009F80(uVar4,param_2);
          if (-1 < iVar1) {
            uVar2 = sub_0800B2DC(param_1,param_2,uVar4 + iVar1);
            return uVar2;
          }
          return 0x7fffffff;
        }
        break;
      }
      if ((uVar5 & 1) == 0) {
        uVar4 = ((int)uVar4 >> 0xc) << 0xc;
      }
      else {
        uVar4 = uVar4 - 1;
      }
      uVar3 = (int)uVar4 >> 0xc;
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < 0x80);
    uVar2 = sub_0800B2DC(param_1,param_2,0);
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

