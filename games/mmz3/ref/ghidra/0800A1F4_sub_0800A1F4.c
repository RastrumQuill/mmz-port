// sub_0800A1F4 at 0x0800A1F4 (thumb)

undefined8 sub_0800A1F4(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  uVar2 = (int)param_2 >> 0xc;
  uVar3 = 0;
  do {
    if (0x4ff < uVar2) {
LAB_0800a296:
      if ((int)uVar3 < 0x80) {
        iVar1 = sub_08009BE4(param_1,param_2);
        if (iVar1 < 1) {
          iVar1 = param_2 + iVar1;
        }
        else {
          iVar1 = 0;
        }
        goto LAB_0800a2bc;
      }
      break;
    }
    uVar2 = (uint)*(ushort *)
                   ((uint)(&DAT_02002c60)[uVar2 * DAT_02002c60 + ((int)param_1 >> 0xc) + 2] * 2 +
                   DAT_02002638);
    iVar1 = sub_080FE2C8(param_1 & 0xfff,param_2 & 0xfff,0xfff,
                         *(undefined4 *)(&DAT_083355c0 + (uVar2 & 0xf) * 4));
    if ((iVar1 != 0) && (uVar2 != 0x800f)) goto LAB_0800a296;
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
LAB_0800a2bc:
  return CONCAT44(in_lr,iVar1);
}

