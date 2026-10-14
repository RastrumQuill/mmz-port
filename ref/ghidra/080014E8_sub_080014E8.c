// sub_080014E8 at 0x080014E8 (thumb)

undefined4 sub_080014E8(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  uVar1 = param_1[1] & 0x3fffff;
  if (uVar1 != 0) {
    param_2 = param_2 + (uint)(*(ushort *)((int)param_1 + 6) >> 6) *
                        (*(ushort *)((int)param_1 + 10) & 0x7f8);
    if ((*(byte *)((int)param_1 + 10) & 2) == 0) {
      if ((*(byte *)((int)param_1 + 10) & 1) == 0) {
        FUN_080c88ec((int)param_1 + *param_1,param_2 + 0x6000000,uVar1 >> 2);
      }
      else {
        iVar2 = (int)param_1 + *param_1;
        if (uVar1 != 0) {
          do {
            FUN_080c88ec(iVar2,param_2 + 0x6000000,*(ushort *)(param_1 + 2) >> 2);
            param_2 = param_2 + (((uint)*(ushort *)((int)param_1 + 10) << 0x15) >> 0x18) * 0x100;
            iVar2 = iVar2 + (uint)*(ushort *)(param_1 + 2);
            uVar1 = uVar1 - *(ushort *)(param_1 + 2);
          } while (0 < (int)uVar1);
        }
      }
    }
    else {
      sub_080C88F4((int)param_1 + *param_1,param_2 + 0x6000000);
    }
  }
  return in_lr;
}

