// sub_080B4C5C at 0x080B4C5C (thumb)

undefined8 sub_080B4C5C(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 in_lr;
  int local_2c;
  int local_28;
  uint local_24;
  
  param_3 = param_3 & 0xff;
  local_24 = sub_080C8CB0(param_3,10);
  local_24 = local_24 & 0xff;
  uVar1 = sub_080C8C38(param_3,10);
  iVar3 = (uVar1 & 0xff) * 10;
  uVar2 = (uint)*(byte *)(iVar3 + *(int *)(&DAT_082b7580 + (param_2 & 0xff) * 4) + local_24);
  iVar8 = 1;
  if ((DAT_02004ca8 & 0x20) != 0) {
    iVar8 = -1;
  }
  do {
    local_24 = local_24 + iVar8;
    if (local_24 < 10) {
      uVar4 = (uint)*(byte *)(iVar3 + *(int *)(&DAT_082b7580 + (param_2 & 0xff) * 4) + local_24);
    }
    else {
      uVar4 = 0xffffffff;
    }
  } while (uVar4 == uVar2);
  if (-1 < (int)uVar4) {
    local_2c = 0;
    local_28 = 0;
    do {
      local_28 = local_28 + iVar8;
      local_2c = local_2c + 1;
      uVar4 = local_24 + local_28;
      iVar3 = 0;
      do {
        uVar4 = uVar4 - iVar8;
        if (uVar4 < 10) {
          iVar7 = 2;
          do {
            uVar5 = (uVar1 & 0xff) + iVar3;
            if (uVar5 < 0x10) {
              iVar6 = uVar5 * 10;
              uVar5 = (uint)*(byte *)(iVar6 + *(int *)(&DAT_082b7580 + (param_2 & 0xff) * 4) + uVar4
                                     );
              if (((uVar5 != uVar2) && (uVar5 - 1 < 0x4e)) &&
                 (((int)(uint)*(byte *)(param_1 + 0x1a4 + ((int)uVar5 >> 3)) >>
                   (uVar5 + ((int)uVar5 >> 3) * -8 & 0xff) & 1U) != 0)) {
                param_3 = uVar4 + iVar6 & 0xff;
                goto LAB_080b4d92;
              }
            }
            iVar3 = -iVar3;
            iVar7 = iVar7 + -1;
          } while ((iVar7 != 0) && (iVar3 != 0));
        }
        iVar3 = iVar3 + 1;
      } while ((uVar4 != local_24) && (iVar3 < 0x10));
    } while (local_2c < 0x19);
  }
LAB_080b4d92:
  return CONCAT44(in_lr,param_3);
}

