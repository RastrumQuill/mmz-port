// sub_0800958C at 0x0800958C (thumb)

undefined4 sub_0800958C(uint param_1,uint param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = (int)param_2 >> 0xc;
  if ((uint)((int)param_1 >> 0xc) < 0x780) {
    uVar6 = 0;
    uVar5 = param_2;
    do {
      if (0x4ff < uVar4) {
LAB_0800963e:
        if ((int)uVar6 < 0x80) {
          iVar2 = sub_08008F50(param_1,uVar5);
          if (-1 < iVar2) {
            uVar3 = sub_0800A3A0(param_1,param_2,uVar5 + iVar2);
            return uVar3;
          }
          return 0x7fffffff;
        }
        break;
      }
      uVar1 = *(ushort *)
               ((uint)(&DAT_020017e0)[uVar4 * DAT_020017e0 + ((int)param_1 >> 0xc) + 2] * 2 +
               DAT_020011b8);
      iVar2 = sub_080EF11C(param_1 & 0xfff,~uVar5 & 0xfff,
                           *(undefined4 *)(&DAT_08312bcc + (uVar1 & 0xf) * 4));
      if ((iVar2 != 0) && ((uVar1 & 0x8000) == 0)) goto LAB_0800963e;
      if ((uVar6 & 1) == 0) {
        uVar5 = ((int)uVar5 >> 0xc) << 0xc;
      }
      else {
        uVar5 = uVar5 - 1;
      }
      uVar4 = (int)uVar5 >> 0xc;
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < 0x80);
    uVar3 = sub_0800A3A0(param_1,param_2,0);
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

