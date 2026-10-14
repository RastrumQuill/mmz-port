// sub_08081970 at 0x08081970 (thumb)

undefined4 sub_08081970(int param_1)

{
  int iVar1;
  byte bVar2;
  undefined uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x6601);
    sub_08081F98(param_1,0);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  pbVar8 = (byte *)(param_1 + 0x71);
  bVar2 = *pbVar8;
  sub_080128D4(param_1);
  if ((int)(char)*pbVar8 != (uint)bVar2) {
    sub_08081F98(param_1,*pbVar8);
  }
  iVar1 = DAT_0202e130;
  if (((*(uint *)(param_1 + 0x8c) & 4) == 0) || (DAT_0202e130 == 0)) {
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    sub_080032EC(0x36);
    uVar3 = 2;
  }
  else {
    *(undefined *)(param_1 + 0xb5) = 1;
    sub_08081F98(param_1,*(undefined *)(param_1 + 0xb4));
    iVar4 = DAT_0202e130;
    *(byte *)(param_1 + 0xbe) = *(byte *)(DAT_0202e130 + 10) >> 4 & 1;
    iVar7 = *(int *)(iVar4 + 0x54);
    if (iVar7 < *(int *)(param_1 + 0xc0)) {
      *(undefined *)(param_1 + 0xbf) = 1;
    }
    else {
      if (*(int *)(param_1 + 0xc0) < iVar7) {
        bVar2 = 0;
      }
      else {
        bVar2 = (*(byte *)(iVar4 + 10) >> 4 ^ 1) & 1;
      }
      *(byte *)(param_1 + 0xbf) = bVar2;
    }
    pbVar8 = (byte *)(param_1 + 0xbc);
    *pbVar8 = 3;
    iVar6 = *(int *)(DAT_0202e130 + 0x54);
    iVar4 = *(int *)(DAT_0202e130 + 0x58);
    iVar7 = *(int *)(param_1 + 0x54) - iVar6;
    *(int *)(param_1 + 100) = iVar7;
    if (iVar7 < 0x401) {
      if (iVar7 < -0x400) {
        *(undefined4 *)(param_1 + 100) = 0xfffffc00;
      }
    }
    else {
      *(undefined4 *)(param_1 + 100) = 0x400;
    }
    iVar4 = (*(int *)(param_1 + 0x58) + -0xd00 + (uint)*pbVar8 * -0x800) - iVar4;
    *(int *)(param_1 + 0x68) = iVar4;
    uVar5 = 0x400;
    if ((0x400 < iVar4) || (uVar5 = 0xfffffa00, iVar4 < -0x600)) {
      *(undefined4 *)(param_1 + 0x68) = uVar5;
    }
    sub_0802311C(iVar1,0,*(byte *)(param_1 + 0xbe),0,iVar6);
    *(int *)(iVar1 + 0x54) = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 100);
    *(uint *)(iVar1 + 0x58) =
         (*(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x68)) + -0xd00 + (uint)*pbVar8 * -0x800;
    uVar3 = 9;
  }
  *(undefined *)(param_1 + 0xd) = uVar3;
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}

