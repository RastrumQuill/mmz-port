// sub_080AEB60 at 0x080AEB60 (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_080AEB60(int param_1)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 in_lr;
  
  iVar8 = *(int *)(param_1 + 0x28);
  if ((1 < *(byte *)(iVar8 + 0xc)) && (0xf < *(byte *)(param_1 + 0x12))) {
    *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) & 0xf;
  }
  uVar4 = *(byte *)(param_1 + 0x12) - 1;
  *(char *)(param_1 + 0x12) = (char)uVar4;
  if ((_DAT_0202f068 & 0xff00ff) == 1) {
    uVar6 = (uint)*(byte *)(param_1 + 0x78) << 0x18;
    if ((uVar6 >> 0x19 < (uVar4 & 0xff)) ||
       (((uVar6 >> 0x1a < (uVar4 & 0xff) && ((uVar4 & 1) == 0)) || ((uVar4 & 3) == 0)))) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    }
    uVar4 = (uint)*(byte *)(iVar8 + 10);
    if ((*(byte *)(iVar8 + 10) & 0x40) == 0) {
      if (((uVar4 & 0x30) >> 4 & 1) == 0) {
        iVar7 = *(int *)(iVar8 + 0x54) + *(int *)(param_1 + 0x74);
      }
      else {
        iVar7 = *(int *)(iVar8 + 0x54) - *(int *)(param_1 + 0x74);
      }
      *(int *)(param_1 + 0x54) = iVar7;
      if (((*(byte *)(iVar8 + 10) & 0x30) >> 4 & 2) == 0) {
        iVar8 = *(int *)(iVar8 + 0x58) + *(int *)(param_1 + 0x78);
      }
      else {
        iVar8 = *(int *)(iVar8 + 0x58) - *(int *)(param_1 + 0x78);
      }
      *(int *)(param_1 + 0x58) = iVar8;
    }
    else {
      sVar1 = (&DAT_080ef450)[0xff - *(byte *)(iVar8 + 0x24) & 0xff];
      sVar2 = (&DAT_080ef450)[0x13f - *(byte *)(iVar8 + 0x24) & 0xff];
      if (((uVar4 & 0x30) >> 4 & 1) == 0) {
        iVar7 = *(int *)(param_1 + 0x74);
      }
      else {
        iVar7 = -*(int *)(param_1 + 0x74);
      }
      if (((uVar4 & 0x30) >> 4 & 2) == 0) {
        iVar5 = *(int *)(param_1 + 0x78);
      }
      else {
        iVar5 = -*(int *)(param_1 + 0x78);
      }
      *(int *)(param_1 + 0x54) =
           *(int *)(iVar8 + 0x54) + (iVar7 * sVar2 >> 8) + (iVar5 * sVar1 >> 8);
      *(int *)(param_1 + 0x58) =
           (*(int *)(iVar8 + 0x58) - (iVar7 * sVar1 >> 8)) + (iVar5 * sVar2 >> 8);
    }
    sub_080128D4(param_1);
    if (*(char *)(param_1 + 0x12) != '\0') {
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0xc) = 2;
    uVar3 = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 8);
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0xc) = 3;
    uVar3 = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 0xc);
  }
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  return in_lr;
}

