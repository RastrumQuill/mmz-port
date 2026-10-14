// sub_08001D30 at 0x08001D30 (thumb)

undefined4 sub_08001D30(int *param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 in_lr;
  undefined auStack_38 [32];
  
  uVar2 = param_1[1] & 0x3fffff;
  if (uVar2 != 0) {
    param_2 = param_2 + (uint)(*(ushort *)((int)param_1 + 6) >> 6) *
                        (*(ushort *)((int)param_1 + 10) & 0x7f8);
    bVar1 = *(byte *)((int)param_1 + 10);
    if ((bVar1 & 1) == 0) {
      if ((bVar1 & 2) == 0) {
        if ((*(byte *)((int)param_1 + 0xb) & 0x10) == 0) {
          sub_081284E4((int)param_1 + *param_1,param_2 + 0x6000000,uVar2 >> 2);
        }
        else {
          sub_081284F4((int)param_1 + *param_1,param_2 + 0x6000000);
        }
      }
      else {
        sub_081284EC((int)param_1 + *param_1,param_2 + 0x6000000);
      }
    }
    else {
      puVar3 = (uint *)((int)param_1 + *param_1);
      if ((bVar1 & 2) == 0) {
        if ((*(byte *)((int)param_1 + 0xb) & 0x10) == 0) {
          if (uVar2 != 0) {
            do {
              sub_081284E4(puVar3,param_2 + 0x6000000,*(ushort *)(param_1 + 2) >> 2);
              param_2 = param_2 + (((uint)*(ushort *)((int)param_1 + 10) << 0x15) >> 0x18) * 0x100;
              puVar3 = (uint *)((int)puVar3 + (uint)*(ushort *)(param_1 + 2));
              uVar2 = uVar2 - *(ushort *)(param_1 + 2);
            } while (0 < (int)uVar2);
          }
        }
        else if (uVar2 != 0) {
          do {
            if ((int)*puVar3 < 0) {
              sub_081284F4(puVar3 + 1,param_2 + 0x6000000);
            }
            else {
              sub_081284E4(puVar3 + 1,param_2 + 0x6000000,*(ushort *)(param_1 + 2) >> 2);
            }
            param_2 = param_2 + (((uint)*(ushort *)((int)param_1 + 10) << 0x15) >> 0x18) * 0x100;
            uVar2 = uVar2 - (*puVar3 & 0x7fffffff);
            puVar3 = (uint *)((int)puVar3 + (*puVar3 & 0x7fffffff));
          } while (0 < (int)uVar2);
        }
      }
      else if (uVar2 != 0) {
        do {
          if ((int)*puVar3 < 0) {
            sub_081284E4(param_2 + *(ushort *)(param_1 + 2) + 0x6000000,auStack_38,8);
            sub_081284EC(puVar3 + 1,param_2 + 0x6000000);
            sub_081284E4(auStack_38,param_2 + *(ushort *)(param_1 + 2) + 0x6000000,8);
          }
          else {
            sub_081284E4(puVar3 + 1,param_2 + 0x6000000,*(ushort *)(param_1 + 2) >> 2);
          }
          param_2 = param_2 + (((uint)*(ushort *)((int)param_1 + 10) << 0x15) >> 0x18) * 0x100;
          uVar2 = uVar2 - (*puVar3 & 0x7fffffff);
          puVar3 = (uint *)((int)puVar3 + (*puVar3 & 0x7fffffff));
        } while (0 < (int)uVar2);
      }
    }
  }
  return in_lr;
}

