// sub_080B4B04 at 0x080B4B04 (thumb)

undefined8 sub_080B4B04(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 in_lr;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  param_3 = param_3 & 0xff;
  uVar1 = sub_080C8CB0(param_3,10);
  uVar1 = uVar1 & 0xff;
  uVar2 = sub_080C8C38(param_3,10);
  uVar2 = uVar2 & 0xff;
  iVar6 = uVar2 * 5;
  uVar3 = (uint)*(byte *)(uVar2 * 10 + *(int *)(&DAT_082b7580 + (param_2 & 0xff) * 4) + uVar1);
  local_2c = 1;
  if ((DAT_02004ca8 & 0x40) != 0) {
    local_2c = -1;
  }
  do {
    iVar6 = iVar6 + local_2c * 5;
    uVar2 = uVar2 + local_2c;
    if (uVar2 < 0x10) {
      uVar4 = (uint)*(byte *)(iVar6 * 2 + *(int *)(&DAT_082b7580 + (param_2 & 0xff) * 4) + uVar1);
    }
    else {
      uVar4 = 0xffffffff;
    }
  } while (uVar4 == uVar3);
  if (-1 < (int)uVar4) {
    local_30 = 0;
    local_28 = 0;
    do {
      local_28 = local_28 + local_2c;
      local_30 = local_30 + 1;
      uVar4 = local_28 + uVar2;
      iVar6 = 0;
      do {
        uVar4 = uVar4 - local_2c;
        if (uVar4 < 0x10) {
          local_24 = 2;
          do {
            uVar7 = uVar1 + iVar6;
            if (uVar7 < 10) {
              uVar5 = (uint)*(byte *)(uVar4 * 10 + *(int *)(&DAT_082b7580 + (param_2 & 0xff) * 4) +
                                     uVar7);
              if (((uVar5 != uVar3) && (uVar5 - 1 < 0x4e)) &&
                 (((int)(uint)*(byte *)(param_1 + 0x1a4 + ((int)uVar5 >> 3)) >>
                   (uVar5 + ((int)uVar5 >> 3) * -8 & 0xff) & 1U) != 0)) {
                param_3 = uVar7 + uVar4 * 10 & 0xff;
                goto LAB_080b4c4c;
              }
            }
            iVar6 = -iVar6;
            local_24 = local_24 + -1;
          } while ((local_24 != 0) && (iVar6 != 0));
        }
        iVar6 = iVar6 + 1;
      } while ((uVar4 != uVar2) && (iVar6 < 10));
    } while (local_30 < 0x19);
  }
LAB_080b4c4c:
  return CONCAT44(in_lr,param_3);
}

