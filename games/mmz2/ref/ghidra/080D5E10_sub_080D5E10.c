// sub_080D5E10 at 0x080D5E10 (thumb)

undefined8 sub_080D5E10(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 in_lr;
  int local_2c;
  int local_28;
  int local_24;
  
  iVar1 = sub_080EF330(param_3,10);
  uVar2 = sub_080EF2B8(param_3,10);
  iVar4 = uVar2 * 5;
  uVar3 = (uint)*(byte *)(uVar2 * 10 + *(int *)(&DAT_0834a85c + param_2 * 4) + iVar1);
  local_28 = 1;
  if ((DAT_02000d14 & 0x40) != 0) {
    local_28 = -1;
  }
  do {
    iVar4 = iVar4 + local_28 * 5;
    uVar2 = uVar2 + local_28;
    if (uVar2 < 0x10) {
      uVar5 = (uint)*(byte *)(iVar4 * 2 + *(int *)(&DAT_0834a85c + param_2 * 4) + iVar1);
    }
    else {
      uVar5 = 0xffffffff;
    }
  } while (uVar5 == uVar3);
  if (-1 < (int)uVar5) {
    local_2c = 0;
    local_24 = 0;
    do {
      local_24 = local_24 + local_28;
      local_2c = local_2c + 1;
      uVar5 = local_24 + uVar2;
      iVar4 = 0;
      do {
        uVar5 = uVar5 - local_28;
        if (uVar5 < 0x10) {
          iVar8 = 2;
          do {
            uVar7 = iVar1 + iVar4;
            if (uVar7 < 10) {
              uVar6 = (uint)*(byte *)(uVar5 * 10 + *(int *)(&DAT_0834a85c + param_2 * 4) + uVar7);
              if (((uVar6 != uVar3) && (uVar6 - 1 < 0x51)) &&
                 (((int)(uint)*(byte *)(param_1 + 0x228 + ((int)uVar6 >> 3)) >>
                   (uVar6 + ((int)uVar6 >> 3) * -8 & 0xff) & 1U) != 0)) {
                uVar2 = (uVar7 + uVar5 * 10) * 0x1000000;
                goto LAB_080d5f50;
              }
            }
            iVar4 = -iVar4;
            iVar8 = iVar8 + -1;
          } while ((iVar8 != 0) && (iVar4 != 0));
        }
        iVar4 = iVar4 + 1;
      } while ((uVar5 != uVar2) && (iVar4 < 10));
    } while (local_2c < 0x19);
  }
  uVar2 = param_3 << 0x18;
LAB_080d5f50:
  return CONCAT44(in_lr,uVar2 >> 0x18);
}

