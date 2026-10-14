// sub_0809832C at 0x0809832C (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_0809832C(int param_1)

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
  
  iVar8 = *(int *)(param_1 + 0x20);
  if ((1 < *(byte *)(iVar8 + 0xc)) && (0xf < *(byte *)(param_1 + 0x12))) {
    *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) & 0xf;
  }
  uVar4 = *(byte *)(param_1 + 0x12) - 1;
  *(char *)(param_1 + 0x12) = (char)uVar4;
  if ((_DAT_02022e88 & 0xff00ff) == 1) {
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
        iVar7 = *(int *)(iVar8 + 0x4c) + *(int *)(param_1 + 0x74);
      }
      else {
        iVar7 = *(int *)(iVar8 + 0x4c) - *(int *)(param_1 + 0x74);
      }
      *(int *)(param_1 + 0x4c) = iVar7;
      if (((*(byte *)(iVar8 + 10) & 0x30) >> 4 & 2) == 0) {
        iVar8 = *(int *)(iVar8 + 0x50) + *(int *)(param_1 + 0x78);
      }
      else {
        iVar8 = *(int *)(iVar8 + 0x50) - *(int *)(param_1 + 0x78);
      }
      *(int *)(param_1 + 0x50) = iVar8;
    }
    else {
      sVar1 = (&DAT_080c8e24)[0xff - (uint)*(byte *)(iVar8 + 0x1f)];
      sVar2 = (&DAT_080c8e24)[0x13f - (uint)*(byte *)(iVar8 + 0x1f)];
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
      *(int *)(param_1 + 0x4c) =
           *(int *)(iVar8 + 0x4c) + (iVar7 * sVar2 >> 8) + (iVar5 * sVar1 >> 8);
      *(int *)(param_1 + 0x50) =
           (*(int *)(iVar8 + 0x50) - (iVar7 * sVar1 >> 8)) + (iVar5 * sVar2 >> 8);
    }
    sub_08003458(param_1 + 0x6c);
    *(undefined *)(param_1 + 0x46) =
         *(undefined *)
          (*(char *)(param_1 + 0x71) * 4 +
          *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
    if (*(char *)(param_1 + 0x12) != '\0') {
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0xc) = 2;
    uVar3 = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 8);
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0xc) = 3;
    uVar3 = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 0xc);
  }
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  return in_lr;
}

