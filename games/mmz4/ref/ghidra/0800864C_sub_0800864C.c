// sub_0800864C at 0x0800864C (thumb)

undefined8 sub_0800864C(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (DAT_02000c80 == 4) {
    iVar1 = sub_08128954(param_1 - 0xf000,0x3c000);
    param_1 = iVar1 + 0xf000;
  }
  uVar2 = (int)param_2 >> 0xc;
  uVar3 = 0;
  do {
    if (0x4ff < uVar2) {
LAB_08008712:
      if ((int)uVar3 < 0x80) {
        iVar1 = sub_08007E98(param_1,param_2);
        if (iVar1 < 1) {
          iVar1 = param_2 + iVar1;
        }
        else {
          iVar1 = 0;
        }
        goto LAB_08008738;
      }
      break;
    }
    uVar2 = (uint)*(ushort *)
                   ((uint)(&DAT_02001290)[uVar2 * DAT_02001290 + ((int)param_1 >> 0xc) + 2] * 2 +
                   DAT_02000c68);
    iVar1 = sub_0812888C(param_1 & 0xfff,param_2 & 0xfff,0xfff,
                         *(undefined4 *)(&DAT_08827b90 + (uVar2 & 0xf) * 4));
    if ((iVar1 != 0) && (uVar2 != 0x800f)) goto LAB_08008712;
    if ((uVar3 & 1) == 0) {
      param_2 = ((int)(param_2 + 0x1000) >> 0xc) * 0x1000 - 1;
    }
    else {
      param_2 = param_2 + 1;
    }
    uVar2 = (int)param_2 >> 0xc;
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 0x80);
  iVar1 = 0x7fffffff;
LAB_08008738:
  return CONCAT44(in_lr,iVar1);
}

