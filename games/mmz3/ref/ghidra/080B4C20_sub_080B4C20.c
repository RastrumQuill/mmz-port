// sub_080B4C20 at 0x080B4C20 (thumb)

undefined4 sub_080B4C20(int param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x28);
  if ((1 < *(byte *)(iVar6 + 0xc)) && (0xf < *(byte *)(param_1 + 0x12))) {
    *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) & 0xf;
  }
  uVar2 = *(byte *)(param_1 + 0x12) - 1;
  *(char *)(param_1 + 0x12) = (char)uVar2;
  uVar3 = (uint)*(byte *)(param_1 + 0x78) << 0x18;
  if ((uVar3 >> 0x19 < (uVar2 & 0xff)) ||
     (((uVar3 >> 0x1a < (uVar2 & 0xff) && ((uVar2 & 1) == 0)) || ((uVar2 & 3) == 0)))) {
    bVar1 = *(byte *)(param_1 + 10) | 1;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) & 0xfe;
  }
  *(byte *)(param_1 + 10) = bVar1;
  uVar2 = (uint)*(byte *)(iVar6 + 10);
  if ((*(byte *)(iVar6 + 10) & 0x40) == 0) {
    if (((uVar2 & 0x30) >> 4 & 1) == 0) {
      iVar7 = *(int *)(iVar6 + 0x54) + *(int *)(param_1 + 0x74);
    }
    else {
      iVar7 = *(int *)(iVar6 + 0x54) - *(int *)(param_1 + 0x74);
    }
    *(int *)(param_1 + 0x54) = iVar7;
    if (((*(byte *)(iVar6 + 10) & 0x30) >> 4 & 2) == 0) {
      iVar7 = *(int *)(iVar6 + 0x58) + *(int *)(param_1 + 0x78);
    }
    else {
      iVar7 = *(int *)(iVar6 + 0x58) - *(int *)(param_1 + 0x78);
    }
    *(int *)(param_1 + 0x58) = iVar7;
  }
  else {
    iVar8 = (int)*(short *)((int)&DAT_080fe64c +
                           ((0xff - (uint)*(byte *)(iVar6 + 0x24)) * 0x1000000 >> 0x17));
    iVar7 = (int)*(short *)((int)&DAT_080fe64c +
                           ((0x3f - (uint)*(byte *)(iVar6 + 0x24)) * 0x1000000 >> 0x17));
    if (((uVar2 & 0x30) >> 4 & 1) == 0) {
      iVar5 = *(int *)(param_1 + 0x74);
    }
    else {
      iVar5 = -*(int *)(param_1 + 0x74);
    }
    if (((uVar2 & 0x30) >> 4 & 2) == 0) {
      iVar4 = *(int *)(param_1 + 0x78);
    }
    else {
      iVar4 = -*(int *)(param_1 + 0x78);
    }
    *(int *)(param_1 + 0x54) = *(int *)(iVar6 + 0x54) + (iVar5 * iVar7 >> 8) + (iVar4 * iVar8 >> 8);
    *(int *)(param_1 + 0x58) =
         (*(int *)(iVar6 + 0x58) - (iVar5 * iVar8 >> 8)) + (iVar4 * iVar7 >> 8);
  }
  sub_080177F4(param_1);
  if ((*(char *)(param_1 + 0x12) == '\0') || (2 < *(byte *)(iVar6 + 0xc))) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

