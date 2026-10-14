// sub_08008534 at 0x08008534 (thumb)

undefined4 sub_08008534(uint param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (DAT_02000c80 == 4) {
    iVar1 = sub_08128954(param_1 - 0xf000,0x3c000);
    param_1 = iVar1 + 0xf000;
  }
  uVar3 = (int)param_2 >> 0xc;
  if ((uint)((int)param_1 >> 0xc) < 0x780) {
    uVar5 = 0;
    uVar4 = param_2;
    do {
      if (0x4ff < uVar3) {
LAB_0800860e:
        if ((int)uVar5 < 0x80) {
          iVar1 = sub_08007DB4(param_1,uVar4);
          if (0 < iVar1) {
            return 0;
          }
          iVar1 = uVar4 + iVar1;
          goto LAB_08008630;
        }
        break;
      }
      uVar3 = (uint)*(ushort *)
                     ((uint)(&DAT_02001290)[uVar3 * DAT_02001290 + ((int)param_1 >> 0xc) + 2] * 2 +
                     DAT_02000c68);
      iVar1 = sub_0812888C(param_1 & 0xfff,uVar4 & 0xfff,0xfff,
                           *(undefined4 *)(&DAT_08827b90 + (uVar3 & 0xf) * 4));
      if ((iVar1 != 0) && (uVar3 != 0x800f)) goto LAB_0800860e;
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
LAB_08008630:
    uVar2 = sub_08009688(param_1,param_2,iVar1);
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

