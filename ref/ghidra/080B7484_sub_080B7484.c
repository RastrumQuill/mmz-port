// sub_080B7484 at 0x080B7484 (thumb)

undefined4 sub_080B7484(int param_1)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 in_lr;
  int local_24;
  int local_20;
  
  sub_080B5120(*(undefined4 *)(param_1 + 0x20),param_1 + 0xbc,&local_24,2,0,0xfffff400);
  iVar7 = *(int *)(param_1 + 0x54);
  iVar1 = iVar7;
  if (iVar7 < 0) {
    iVar1 = iVar7 + 7;
  }
  iVar1 = (iVar7 * ((iVar1 >> 3) + 1)) / 2;
  if ((((uint)(iVar1 * 2) < (uint)(local_24 + iVar1)) ||
      ((uint)(iVar1 * 2) < (uint)(local_20 + iVar1))) ||
     (iVar4 = local_24 * local_24 + local_20 * local_20, iVar1 * iVar1 < iVar4)) {
    iVar8 = 8;
    iVar4 = iVar1;
  }
  else {
    iVar8 = -8;
  }
  uVar2 = sub_08025930(local_24,local_20);
  pbVar3 = (byte *)(param_1 + 0xcc);
  iVar6 = uVar2 - *pbVar3;
  iVar5 = iVar6 + 0x3f;
  iVar1 = iVar5;
  if (iVar5 < 0) {
    iVar1 = iVar6 + 0x13e;
  }
  iVar5 = iVar5 + (iVar1 >> 8) * -0x100;
  iVar6 = iVar5 + 0x100;
  iVar1 = iVar6;
  if (iVar6 < 0) {
    iVar1 = iVar5 + 0x1ff;
  }
  if (iVar6 + (iVar1 >> 8) * -0x100 < 0x7f) {
    if ((iVar8 < 0) && (iVar4 <= iVar7 * iVar7)) {
      sub_080B4200(param_1,param_1 + 0xbc,param_1 + 0x54,pbVar3,2,0,0xfffff400);
      return in_lr;
    }
  }
  else if (0 < iVar7) {
    iVar8 = -8;
    uVar2 = (uint)*pbVar3;
  }
  *pbVar3 = (byte)uVar2;
  if (0 < iVar7) {
    *(int *)(param_1 + 0xbc) =
         *(int *)(param_1 + 0xbc) + ((short)(&DAT_080c8e24)[uVar2 + 0x40] * iVar7 >> 8);
    *(int *)(param_1 + 0xc0) =
         *(int *)(param_1 + 0xc0) + ((short)(&DAT_080c8e24)[uVar2] * iVar7 >> 8);
  }
  uVar2 = iVar7 + iVar8;
  if (0x80 < uVar2) {
    if ((int)uVar2 < 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0x80;
    }
  }
  *(uint *)(param_1 + 0x54) = uVar2;
  return in_lr;
}

