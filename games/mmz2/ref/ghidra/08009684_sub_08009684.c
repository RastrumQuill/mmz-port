// sub_08009684 at 0x08009684 (thumb)

undefined4 sub_08009684(uint param_1,uint param_2)

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
                          ((uint)(&DAT_020017e0)
                                 [((int)param_2 >> 0xc) * (uint)DAT_020017e0 + uVar3 + 2] * 2 +
                          DAT_020011b8), uVar3 != 0x800f &&
          (iVar1 = sub_080EF120(param_2 & 0xfff,uVar4 & 0xfff,0xfff,
                                *(undefined4 *)(&DAT_08312c0c + (uVar3 & 0xf) * 4)), iVar1 != 0))))
      {
        if ((int)uVar5 < 0x80) {
          iVar1 = sub_080090D4(uVar4,param_2);
          if (0 < iVar1) {
            return 0;
          }
          iVar1 = uVar4 + iVar1;
          goto LAB_08009758;
        }
        break;
      }
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
LAB_08009758:
    uVar2 = sub_0800A458(param_1,param_2,iVar1);
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

