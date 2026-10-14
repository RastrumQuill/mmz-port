// sub_080B4620 at 0x080B4620 (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_080B4620(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 in_lr;
  
  iVar7 = *(int *)(param_1 + 0x28);
  if ((1 < *(byte *)(iVar7 + 0xc)) && (0xf < *(byte *)(param_1 + 0x12))) {
    *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) & 0xf;
  }
  uVar3 = *(byte *)(param_1 + 0x12) - 1;
  *(char *)(param_1 + 0x12) = (char)uVar3;
  if ((_DAT_020305d8 & 0xff00ff) != 1) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0xc) = 3;
    uVar2 = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 0xc);
    goto LAB_080b47b4;
  }
  uVar5 = (uint)*(byte *)(param_1 + 0x78) << 0x18;
  if ((uVar5 >> 0x19 < (uVar3 & 0xff)) ||
     (((uVar5 >> 0x1a < (uVar3 & 0xff) && ((uVar3 & 1) == 0)) || ((uVar3 & 3) == 0)))) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  }
  if ((*(char *)(iVar7 + 8) == '\x02') || (*(char *)(iVar7 + 9) == '\r')) {
    *(int *)(param_1 + 0x54) = *(int *)(iVar7 + 0x54) + *(int *)(param_1 + 0x74);
LAB_080b478a:
    iVar1 = *(int *)(iVar7 + 0x58) + *(int *)(param_1 + 0x78);
LAB_080b4790:
    *(int *)(param_1 + 0x58) = iVar1;
  }
  else {
    uVar3 = (uint)*(byte *)(iVar7 + 10);
    if ((*(byte *)(iVar7 + 10) & 0x40) == 0) {
      if (((uVar3 & 0x30) >> 4 & 1) == 0) {
        iVar1 = *(int *)(iVar7 + 0x54) + *(int *)(param_1 + 0x74);
      }
      else {
        iVar1 = *(int *)(iVar7 + 0x54) - *(int *)(param_1 + 0x74);
      }
      *(int *)(param_1 + 0x54) = iVar1;
      if (((*(byte *)(iVar7 + 10) & 0x30) >> 4 & 2) == 0) goto LAB_080b478a;
      iVar1 = *(int *)(iVar7 + 0x58) - *(int *)(param_1 + 0x78);
      goto LAB_080b4790;
    }
    iVar8 = (int)*(short *)((int)&DAT_080fe64c +
                           ((0xff - (uint)*(byte *)(iVar7 + 0x24)) * 0x1000000 >> 0x17));
    iVar1 = (int)*(short *)((int)&DAT_080fe64c +
                           ((0x3f - (uint)*(byte *)(iVar7 + 0x24)) * 0x1000000 >> 0x17));
    if (((uVar3 & 0x30) >> 4 & 1) == 0) {
      iVar6 = *(int *)(param_1 + 0x74);
    }
    else {
      iVar6 = -*(int *)(param_1 + 0x74);
    }
    if (((uVar3 & 0x30) >> 4 & 2) == 0) {
      iVar4 = *(int *)(param_1 + 0x78);
    }
    else {
      iVar4 = -*(int *)(param_1 + 0x78);
    }
    *(int *)(param_1 + 0x54) = *(int *)(iVar7 + 0x54) + (iVar6 * iVar1 >> 8) + (iVar4 * iVar8 >> 8);
    *(int *)(param_1 + 0x58) =
         (*(int *)(iVar7 + 0x58) - (iVar6 * iVar8 >> 8)) + (iVar4 * iVar1 >> 8);
  }
  sub_080177F4(param_1);
  if ((*(char *)(param_1 + 0x12) != '\0') && (*(byte *)(iVar7 + 0xc) < 3)) {
    return in_lr;
  }
  *(undefined4 *)(param_1 + 0xc) = 2;
  uVar2 = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 8);
LAB_080b47b4:
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  return in_lr;
}

