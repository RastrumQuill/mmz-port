// sub_08002250 at 0x08002250 (thumb)

undefined4 sub_08002250(undefined *param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  undefined4 local_20;
  int local_1c;
  int local_18;
  undefined local_14;
  undefined local_13;
  undefined local_12;
  undefined local_11;
  
  bVar1 = param_1[3];
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          return in_lr;
        }
        if (*(short *)(param_1 + 6) == 0) {
          *(ushort *)(param_1 + 4) = (ushort)bVar1;
          *(undefined2 *)(param_1 + 6) = 1;
          param_1[3] = 1;
          return in_lr;
        }
        if (DAT_02000d5c == 0) {
          DAT_02000d5c = 1;
        }
        *param_1 = 0;
        *(undefined2 *)(param_1 + 2) = 0;
        return in_lr;
      }
      uVar4 = 0x820;
      if (*(uint *)(param_1 + 0x18) < 0x821) {
        param_1[3] = 3;
        uVar4 = *(uint *)(param_1 + 0x18);
      }
      iVar3 = sub_080EF0DC(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),uVar4);
      if (iVar3 == 0) {
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 0x820;
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 0x820;
        *(uint *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - uVar4;
        return in_lr;
      }
      sVar2 = *(short *)(param_1 + 4);
      *(short *)(param_1 + 4) = sVar2 + -1;
      if ((short)(sVar2 + -1) != 0) {
        param_1[3] = 1;
        return in_lr;
      }
      goto LAB_0800234c;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    *(undefined2 *)(param_1 + 4) = 3;
    *(ushort *)(param_1 + 6) = (ushort)bVar1;
    param_1[3] = 1;
  }
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 8);
  *(uint *)(param_1 + 0x10) =
       ((uint)*(ushort *)(param_1 + 6) * 6 + (uint)(byte)param_1[1]) * 0xaaa + 0xe000000;
  local_18 = *(int *)(param_1 + 0x14);
  *(int *)(param_1 + 0x18) = local_18;
  local_20 = 0x49544e49;
  local_1c = 0;
  local_12 = param_1[1];
  for (iVar3 = local_18; iVar3 != 0; iVar3 = iVar3 + -1) {
    local_1c = local_1c + (uint)**(byte **)(param_1 + 0xc);
    *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  }
  local_14 = 1;
  local_13 = 6;
  local_11 = 1;
  iVar3 = sub_080EF0DC(&local_20,*(undefined4 *)(param_1 + 0x10),0x10);
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 8);
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 0x10;
    param_1[3] = 2;
    return in_lr;
  }
  sVar2 = *(short *)(param_1 + 4);
  *(short *)(param_1 + 4) = sVar2 + -1;
  if ((short)(sVar2 + -1) != 0) {
    return in_lr;
  }
LAB_0800234c:
  DAT_02000d5c = 0xffff;
  param_1[3] = 3;
  return in_lr;
}

