// sub_0801FFE0 at 0x0801FFE0 (thumb)

undefined8
sub_0801FFE0(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,int param_6,
            int param_7,int param_8,undefined4 param_9,int param_10,int param_11)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  int local_28;
  uint local_24;
  
  local_24 = 0;
  if (param_7 != 0) {
    local_28 = *param_1;
    do {
      iVar5 = param_7;
      if (0xfff < param_7) {
        iVar5 = 0x1000;
      }
      local_28 = local_28 + param_5 * iVar5;
      iVar2 = sub_08008EA4(local_28,param_4);
      iVar6 = local_28;
      if ((iVar2 == 0) && (uVar3 = sub_08008354(local_28,param_4), (uVar3 & 0xf) != 0)) {
        do {
          iVar4 = iVar6 + param_5 * -0x100;
          iVar5 = iVar5 + -0x100;
          if (iVar5 < 1) break;
          iVar2 = sub_08008EA4(iVar4,param_4);
          iVar6 = iVar4;
        } while (iVar2 == 0);
      }
      if (iVar2 < 0) {
        iVar5 = sub_080227C8(iVar6,param_4,-param_5,iVar5,param_4 - param_8);
        if (iVar5 < 1) {
          if ((param_10 == 0) && (iVar5 < 0)) {
            param_7 = 0;
          }
        }
        else {
          iVar6 = iVar6 + -param_5 * iVar5;
          iVar5 = sub_08008EA4(iVar6,param_4);
          uVar1 = sub_08008D80(iVar6,param_4 + iVar5 + 1);
          iVar5 = sub_080226A8(param_1,param_2,iVar6,param_4,param_6,param_8,param_9,param_11,iVar5,
                               uVar1,0x1400,0xc01);
          if (iVar5 == 0) {
            iVar5 = sub_08022934(param_1,param_2,iVar6,param_4,param_6,param_11,uVar1);
            if (iVar5 < 0) {
              param_11 = 0;
              iVar5 = param_4 + iVar5 + 1;
              uVar3 = sub_08008D80(iVar6,iVar5);
              sub_080220D8(param_3,2,iVar6,iVar5,uVar3 & 0xffff);
              if (local_24 == 0) {
                local_24 = uVar3 & 0xffff;
              }
            }
          }
          else {
            iVar2 = param_4 + iVar5 + 1;
            uVar1 = sub_08008D80(iVar6,iVar2);
            uVar3 = sub_080201C0(iVar6,iVar2,uVar1);
            if (param_11 != 0) {
              param_1[1] = (param_4 + iVar5) - param_6;
              param_11 = 0;
            }
            sub_080220D8(param_3,2,iVar6,iVar2,uVar3 & 0xffff);
            if (local_24 == 0) {
              local_24 = uVar3 & 0xffff;
            }
          }
        }
      }
      else if (0 < iVar2) {
        param_7 = 0;
      }
      param_7 = param_7 + -0x1000;
    } while (0 < param_7);
  }
  return CONCAT44(in_lr,local_24);
}

