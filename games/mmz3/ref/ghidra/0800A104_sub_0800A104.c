// sub_0800A104 at 0x0800A104 (thumb)

undefined4 sub_0800A104(uint param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = (int)param_2 >> 0xc;
  if ((uint)((int)param_1 >> 0xc) < 0x780) {
    uVar5 = 0;
    uVar4 = param_2;
    do {
      if (0x4ff < uVar3) {
LAB_0800a1b6:
        if ((int)uVar5 < 0x80) {
          iVar1 = sub_08009B28(param_1,uVar4);
          if (0 < iVar1) {
            return 0;
          }
          iVar1 = uVar4 + iVar1;
          goto LAB_0800a1d8;
        }
        break;
      }
      uVar3 = (uint)*(ushort *)
                     ((uint)(&DAT_02002c60)[uVar3 * DAT_02002c60 + ((int)param_1 >> 0xc) + 2] * 2 +
                     DAT_02002638);
      iVar1 = sub_080FE2C8(param_1 & 0xfff,uVar4 & 0xfff,0xfff,
                           *(undefined4 *)(&DAT_083355c0 + (uVar3 & 0xf) * 4));
      if ((iVar1 != 0) && (uVar3 != 0x800f)) goto LAB_0800a1b6;
      if ((uVar5 & 1) == 0) {
        uVar4 = ((int)(uVar4 + 0x1000) >> 0xc) * 0x1000 - 1;
      }
      else {
        uVar4 = uVar4 + 1;
      }
      uVar3 = (int)uVar4 >> 0xc;
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < 0x80);
    iVar1 = 0x7fffffff;
LAB_0800a1d8:
    uVar2 = sub_0800B0C8(param_1,param_2,iVar1);
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

