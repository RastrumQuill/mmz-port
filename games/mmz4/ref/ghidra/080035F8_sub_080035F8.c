// sub_080035F8 at 0x080035F8 (thumb)

undefined4
sub_080035F8(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  uVar2 = *param_2;
  *param_1 = uVar2;
  uVar1 = param_2[1];
  param_1[1] = uVar1;
  param_1[3] = param_4;
  param_1[4] = param_5;
  param_1[5] = param_6;
  *(ushort *)(param_1 + 2) = (ushort)uVar2 & 0x1ff;
  *(ushort *)((int)param_1 + 10) = (ushort)uVar1 & 0x1ff;
  return in_lr;
}

