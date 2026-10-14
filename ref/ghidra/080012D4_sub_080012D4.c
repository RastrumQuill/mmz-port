// sub_080012D4 at 0x080012D4 (thumb)

undefined4 sub_080012D4(undefined *param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  bVar1 = param_1[3];
  if (bVar1 == 1) {
LAB_080012fc:
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x14);
    iVar3 = ((uint)(byte)param_1[1] + (uint)*(ushort *)(param_1 + 6) * 6) * 0xaaa + 0xe000000;
    *(int *)(param_1 + 0x10) = iVar3;
    sub_080C8924(iVar3,&DAT_02000008,0x10);
    if (DAT_02000008 == 0x49544e49) {
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 0x10;
      param_1[3] = 2;
    }
    else {
      sVar2 = *(short *)(param_1 + 4);
      *(short *)(param_1 + 4) = sVar2 + -1;
      if ((short)(sVar2 + -1) == 0) {
        DAT_02004cfe = -1;
        param_1[3] = 3;
      }
    }
    return in_lr;
  }
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      return in_lr;
    }
    *(undefined2 *)(param_1 + 4) = 3;
    *(undefined2 *)(param_1 + 6) = 0;
    param_1[3] = 1;
    goto LAB_080012fc;
  }
  if (bVar1 == 2) {
    uVar4 = 0x820;
    if (*(uint *)(param_1 + 0x18) < 0x821) {
      param_1[3] = 3;
      uVar4 = *(uint *)(param_1 + 0x18);
    }
    sub_080C8924(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0xc),uVar4);
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 0x820;
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 0x820;
    *(uint *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - uVar4;
    return in_lr;
  }
  if (bVar1 != 3) {
    return in_lr;
  }
  if (DAT_02004cfe == 0) {
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 8);
    for (iVar3 = *(int *)(param_1 + 0x14); iVar3 != 0; iVar3 = iVar3 + -1) {
      DAT_0200000c = DAT_0200000c - (uint)**(byte **)(param_1 + 0xc);
      *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
    }
    if (DAT_0200000c != 0) {
      sVar2 = *(short *)(param_1 + 4);
      *(short *)(param_1 + 4) = sVar2 + -1;
      if ((short)(sVar2 + -1) != 0) {
        param_1[3] = 1;
        return in_lr;
      }
      DAT_02004cfe = -1;
    }
    if (DAT_02004cfe != 0) goto LAB_08001406;
  }
  else {
LAB_08001406:
    if (*(short *)(param_1 + 6) == 0) {
      DAT_02004cfe = *(short *)(param_1 + 6);
      *(undefined2 *)(param_1 + 4) = 3;
      *(undefined2 *)(param_1 + 6) = 1;
      param_1[3] = 1;
      return in_lr;
    }
    if (DAT_02004cfe != 0) goto LAB_08001428;
  }
  DAT_02004cfe = 1;
LAB_08001428:
  *param_1 = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  return in_lr;
}

