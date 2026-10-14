// sub_080AEE1C at 0x080AEE1C (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_080AEE1C(int param_1)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 in_lr;
  
  iVar8 = *(int *)(param_1 + 0x28);
  if ((1 < *(byte *)(iVar8 + 0xc)) && (0xf < *(byte *)(param_1 + 0x12))) {
    *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) & 0xf;
  }
  uVar5 = *(byte *)(param_1 + 0x12) - 1;
  *(char *)(param_1 + 0x12) = (char)uVar5;
  if ((_DAT_0202f068 & 0xff00ff) == 2) {
    uVar4 = (uint)*(byte *)(param_1 + 0x78) << 0x18;
    if ((uVar4 >> 0x19 < (uVar5 & 0xff)) ||
       (((uVar4 >> 0x1a < (uVar5 & 0xff) && ((uVar5 & 1) == 0)) || ((uVar5 & 3) == 0)))) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    }
    uVar5 = (uint)*(byte *)(iVar8 + 10);
    if ((*(byte *)(iVar8 + 10) & 0x40) == 0) {
      if (((uVar5 & 0x30) >> 4 & 1) == 0) {
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
      if (((uVar5 & 0x30) >> 4 & 1) == 0) {
        iVar7 = *(int *)(param_1 + 0x74);
      }
      else {
        iVar7 = -*(int *)(param_1 + 0x74);
      }
      if (((uVar5 & 0x30) >> 4 & 2) == 0) {
        iVar6 = *(int *)(param_1 + 0x78);
      }
      else {
        iVar6 = -*(int *)(param_1 + 0x78);
      }
      *(int *)(param_1 + 0x54) =
           *(int *)(iVar8 + 0x54) + (iVar7 * sVar2 >> 8) + (iVar6 * sVar1 >> 8);
      *(int *)(param_1 + 0x58) =
           (*(int *)(iVar8 + 0x58) - (iVar7 * sVar1 >> 8)) + (iVar6 * sVar2 >> 8);
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

