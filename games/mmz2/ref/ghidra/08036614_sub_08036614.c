// sub_08036614 at 0x08036614 (thumb)

undefined8
sub_08036614(int param_1,int *param_2,int *param_3,undefined4 param_4,undefined4 param_5,
            char *param_6,char *param_7,uint *param_8,undefined4 *param_9,int *param_10)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined uVar7;
  undefined4 in_lr;
  byte abStack_41 [5];
  uint local_3c [3];
  int *local_30;
  int *local_2c;
  int local_28;
  int local_24;
  
  abStack_41[1] = *param_6;
  abStack_41[2] = *param_7;
  local_3c[0] = *param_8;
  local_3c[1] = *param_9;
  if ((abStack_41[1] != -1) || (abStack_41[2] != -1)) {
    local_28 = *param_10;
    iVar6 = 1;
    if (abStack_41[1] != abStack_41[2]) {
      iVar6 = 2;
    }
    do {
      iVar4 = iVar6 + -1;
      uVar2 = (uint)abStack_41[iVar6];
      if (uVar2 != 0xff) {
        uVar3 = local_3c[iVar4];
        local_24 = uVar2 * 2;
        uVar5 = (uint)(ushort)(&DAT_020011da)[uVar2 * 0xc];
        local_3c[2] = param_1;
        local_30 = param_2;
        local_2c = param_3;
        if (param_3[1] - ((*(int *)(&DAT_020011e8 + uVar2 * 0x18) + 1) - uVar5) < uVar5 << 5) {
          if (*param_3 < (int)(&DAT_020011e4)[uVar2 * 6]) {
            iVar6 = (&DAT_020011dc)[uVar2 * 6] - (uint)(ushort)(&DAT_020011d8)[uVar2 * 0xc];
          }
          else {
            iVar6 = (&DAT_020011dc)[uVar2 * 6] + -1 + (uint)(ushort)(&DAT_020011d8)[uVar2 * 0xc];
          }
          if ((local_28 != 0) && (cVar1 = sub_080369CC(param_1,uVar3), cVar1 != '\0')) {
            *local_30 = iVar6;
            uVar3 = sub_08036994(local_3c[2],local_30,uVar3);
            if (uVar2 == 0xff) {
              uVar2 = 0xffffffff;
            }
            else {
              uVar2 = (uint)*(ushort *)(&DAT_020011d4 + (local_24 + uVar2) * 8);
            }
            *(uint *)(local_3c[2] + 0x2e0) = uVar2;
          }
          *(undefined *)(local_3c[2] + 0x2e4) = 1;
          uVar3 = uVar3 & 0xffff;
        }
        else {
          if (param_3[1] < *(int *)(&DAT_020011e8 + uVar2 * 0x18) + 1) {
            iVar6 = ((&DAT_020011e0)[uVar2 * 6] + 1) - uVar5;
            uVar7 = 1;
          }
          else {
            iVar6 = (&DAT_020011e0)[uVar2 * 6] + uVar5;
            uVar7 = 0xff;
          }
          if ((local_28 != 0) && (cVar1 = sub_080369CC(param_1,uVar3), cVar1 != '\0')) {
            local_30[1] = iVar6;
            uVar3 = sub_08036994(local_3c[2],local_30,uVar3);
            if (uVar2 == 0xff) {
              uVar2 = 0xffffffff;
            }
            else {
              uVar2 = (uint)*(ushort *)(&DAT_020011d4 + (local_24 + uVar2) * 8);
            }
            *(uint *)(local_3c[2] + 0x2e0) = uVar2;
          }
          *(undefined *)(local_3c[2] + 0x2e5) = uVar7;
          uVar3 = uVar3 * 0x10000;
        }
        goto LAB_080367c8;
      }
      iVar6 = iVar4;
    } while (iVar4 != 0);
  }
  uVar3 = 0;
LAB_080367c8:
  return CONCAT44(in_lr,uVar3);
}

