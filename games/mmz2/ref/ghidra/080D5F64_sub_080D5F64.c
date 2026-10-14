// sub_080D5F64 at 0x080D5F64 (thumb)

undefined8 sub_080D5F64(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 in_lr;
  int local_28;
  int local_24;
  
  uVar1 = sub_080EF330(param_3,10);
  iVar2 = sub_080EF2B8(param_3,10);
  uVar3 = (uint)*(byte *)(iVar2 * 10 + *(int *)(&DAT_0834a85c + param_2 * 4) + uVar1);
  iVar9 = 1;
  if ((DAT_02000d14 & 0x20) != 0) {
    iVar9 = -1;
  }
  do {
    uVar1 = uVar1 + iVar9;
    if (uVar1 < 10) {
      uVar4 = (uint)*(byte *)(iVar2 * 10 + *(int *)(&DAT_0834a85c + param_2 * 4) + uVar1);
    }
    else {
      uVar4 = 0xffffffff;
    }
  } while (uVar4 == uVar3);
  if (-1 < (int)uVar4) {
    local_28 = 0;
    local_24 = 0;
    do {
      local_24 = local_24 + iVar9;
      local_28 = local_28 + 1;
      uVar4 = local_24 + uVar1;
      iVar7 = 0;
      do {
        uVar4 = uVar4 - iVar9;
        if (uVar4 < 10) {
          iVar8 = 2;
          do {
            if ((uint)(iVar2 + iVar7) < 0x10) {
              iVar6 = (iVar2 + iVar7) * 10;
              uVar5 = (uint)*(byte *)(iVar6 + *(int *)(&DAT_0834a85c + param_2 * 4) + uVar4);
              if (((uVar5 != uVar3) && (uVar5 - 1 < 0x51)) &&
                 (((int)(uint)*(byte *)(param_1 + 0x228 + ((int)uVar5 >> 3)) >>
                   (uVar5 + ((int)uVar5 >> 3) * -8 & 0xff) & 1U) != 0)) {
                uVar1 = (uVar4 + iVar6) * 0x1000000;
                goto LAB_080d6082;
              }
            }
            iVar7 = -iVar7;
            iVar8 = iVar8 + -1;
          } while ((iVar8 != 0) && (iVar7 != 0));
        }
        iVar7 = iVar7 + 1;
      } while ((uVar4 != uVar1) && (iVar7 < 0x10));
    } while (local_28 < 0x19);
  }
  uVar1 = param_3 << 0x18;
LAB_080d6082:
  return CONCAT44(in_lr,uVar1 >> 0x18);
}

