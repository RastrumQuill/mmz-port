// sub_0804063C at 0x0804063C (thumb)

undefined4 sub_0804063C(int param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined4 in_lr;
  
  iVar5 = *(int *)(DAT_0202f5c0 + 0x54) - *(int *)(param_1 + 0x54);
  if (iVar5 < 0) {
    iVar5 = -iVar5;
  }
  pbVar6 = (byte *)(param_1 + 0xc5);
  pbVar7 = (byte *)(param_1 + 0xc4);
  do {
    uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar3 & 0x7fffffff;
    uVar3 = uVar3 * 2 >> 0x11 & 0xf;
    if (iVar5 < 0x5000) {
      pbVar4 = &DAT_0835e7f4 + uVar3;
    }
    else if (iVar5 < 0x9000) {
      pbVar4 = &DAT_0835e804 + uVar3;
    }
    else {
      pbVar4 = &DAT_0835e814 + uVar3;
    }
    bVar1 = *pbVar4;
    uVar3 = (uint)bVar1;
  } while ((*pbVar7 == uVar3) && (1 < *pbVar6));
  if (*pbVar7 == uVar3) {
    bVar2 = *pbVar6 + 1;
  }
  else {
    bVar2 = 0;
    *pbVar7 = bVar1;
  }
  *pbVar6 = bVar2;
  *(undefined *)(param_1 + 0xd) = (&DAT_0835e824)[uVar3];
  if (uVar3 < 2) {
    *(byte *)(param_1 + 0x12) = bVar1;
  }
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}

