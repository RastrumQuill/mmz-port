// sub_080FC4B0 at 0x080FC4B0 (thumb)

undefined4 sub_080FC4B0(undefined4 param_1,undefined *param_2)

{
  uint uVar1;
  byte *pbVar2;
  undefined4 in_lr;
  undefined8 uVar3;
  
  if (2 < (byte)param_2[2]) {
    for (pbVar2 = *(byte **)(param_2 + 0x20); pbVar2 != (byte *)0x0;
        pbVar2 = *(byte **)(pbVar2 + 0x34)) {
      if ((*pbVar2 & 199) != 0) {
        *pbVar2 = *pbVar2 | 0x40;
      }
      sub_080FC400(pbVar2);
    }
    *param_2 = 0;
    return in_lr;
  }
  *(int *)(param_2 + (uint)(byte)param_2[2] * 4 + 0x44) = *(int *)(param_2 + 0x40) + 4;
  param_2[2] = param_2[2] + '\x01';
  uVar1 = (uint)*(byte *)(uint3 *)(*(int *)(param_2 + 0x40) + 1);
  uVar3 = sub_080FC468((uint)*(uint3 *)(*(int *)(param_2 + 0x40) + 1) << 8);
  *(uint *)((int)((ulonglong)uVar3 >> 0x20) + 0x40) = (uint)uVar3 | uVar1;
  return in_lr;
}

