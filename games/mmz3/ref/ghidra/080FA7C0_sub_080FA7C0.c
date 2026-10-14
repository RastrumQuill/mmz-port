// sub_080FA7C0 at 0x080FA7C0 (thumb)

undefined8 sub_080FA7C0(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  short *psVar6;
  short *psVar7;
  undefined4 in_lr;
  undefined auStack_50 [8];
  undefined auStack_48 [12];
  int local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  int *local_24;
  
  psVar7 = (short *)(param_1 + 0xdcc);
  *(int *)(param_1 + 0xde4) = *(int *)(param_1 + 0xde4) + 1;
  piVar4 = (int *)(param_1 + 0xdc4);
  *piVar4 = *piVar4 + *(int *)(param_1 + 0xe00);
  iVar2 = *(int *)(param_1 + 0xdfc) + *(int *)(param_1 + 0xe00);
  *(int *)(param_1 + 0xdfc) = iVar2;
  if (0x3bfff < iVar2) {
    *piVar4 = *piVar4 + -0x3c000;
    *(int *)(param_1 + 0xdfc) = *(int *)(param_1 + 0xdfc) + -0x3c000;
    *(int *)(*(int *)(param_1 + 0xde0) + 0x54) =
         *(int *)(*(int *)(param_1 + 0xde0) + 0x54) + -0x3c000;
  }
  *(bool *)(param_1 + 0xdd9) = 0x3bfff < iVar2;
  *psVar7 = *psVar7 + 1;
  local_24 = (int *)(param_1 + 0xdec);
  if (((*(byte *)(*(int *)(param_1 + 0xde0) + 0xc) < 2) &&
      (iVar2 = sub_080FE390((int)*psVar7,(int)*(short *)(param_1 + 6)), iVar2 == 0)) &&
     (*(int *)(param_1 + 0xdfc) < 0x36600)) {
    uVar5 = DAT_0203710c * 0x41c64e6d + 0x3039;
    DAT_0203710c = uVar5;
    sVar1 = sub_080FE4D8(uVar5 >> 0x10,0x28);
    *(short *)(param_1 + 6) = sVar1 + 100;
    local_3c = *(int *)(DAT_0202f5c0 + 0x54) + 64000;
    DAT_0203710c = uVar5 * 0x41c64e6d + 0x3039;
    local_38 = ((DAT_0203710c >> 0x10 & 0x1f) - 0x10) * 0x100 + 0xd000;
    iVar2 = 0;
    piVar4 = local_24;
    do {
      if (*piVar4 == 0) {
        iVar3 = sub_0809AAE4(psVar7,&local_3c,0,0);
        if (iVar3 != 0) {
          *(undefined *)(iVar3 + 0x25) = 0x17;
          *piVar4 = iVar3;
          *(undefined2 *)(param_1 + 0xdf4 + iVar2 * 2) = 300;
        }
        break;
      }
      piVar4 = piVar4 + 1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < 2);
  }
  psVar6 = (short *)(param_1 + 0xdf4);
  piVar4 = local_24;
  do {
    if (*piVar4 != 0) {
      if (*(byte *)(*piVar4 + 0xc) < 2) {
        if ((*psVar6 == 0) || (sVar1 = *psVar6 + -1, *psVar6 = sVar1, sVar1 == 0)) {
          iVar2 = *piVar4;
          *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xfc;
          *(undefined4 *)(iVar2 + 0x8c) = 0;
          *(undefined4 *)(iVar2 + 0x90) = 0;
          *(undefined *)(iVar2 + 0x94) = 0;
          *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xfb;
          *(undefined4 *)(iVar2 + 0xc) = 3;
          *(undefined4 *)(iVar2 + 0x14) =
               *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(iVar2 + 9) * 4) + 0xc);
        }
      }
      else {
        *piVar4 = 0;
        *psVar6 = 0;
      }
    }
    piVar4 = piVar4 + 1;
    psVar6 = psVar6 + 1;
  } while ((int)piVar4 <= (int)(local_24 + 1));
  if (*(byte *)(*(int *)(param_1 + 0xde0) + 0xc) < 2) {
    sVar1 = sub_080FE390((int)*psVar7,0xdc);
    if (sVar1 == 0) {
      local_34 = *(int *)(DAT_0202f5c0 + 0x54) + 0x11800;
      local_30 = 0xf000;
      sub_080B1410(psVar7,&local_34,0);
    }
    if ((*(byte *)(*(int *)(param_1 + 0xde0) + 0xc) < 2) &&
       (sVar1 = sub_080FE390((int)*psVar7,0xa0), sVar1 == 0)) {
      local_2c = *(int *)(DAT_0202f5c0 + 0x54) + 0x11800;
      DAT_0203710c = DAT_0203710c * 0x41c64e6d + 0x3039;
      local_28 = ((DAT_0203710c >> 0x10 & 0x1f) - 0x10) * 0x100 + 0xd000;
      sub_080B146C(psVar7,&local_2c,0);
    }
  }
  sub_080FE598(auStack_50,"SCORE",6);
  sub_080E97D4(auStack_50,1,0);
  uVar5 = (uint)*(ushort *)(param_1 + 0xdda) * 3 + (uint)*(ushort *)(param_1 + 0xe04) * 5;
  sub_080E9824(uVar5,10,0);
  if ((*(uint *)(param_1 + 0xe08) < uVar5) &&
     (*(uint *)(param_1 + 0xe08) = uVar5, *(short *)(param_1 + 0xe06) == 0)) {
    *(undefined2 *)(param_1 + 0xe06) = 1;
    sub_0800471C(0x138);
  }
  sub_080FE598(auStack_48,"HI-SCORE",9);
  sub_080E97D4(auStack_48,0xf,0);
  sub_080E9824(*(undefined4 *)(param_1 + 0xe08),0x1b,0);
  if (*(char *)(param_1 + 0xdd8) == '\0') {
    *(short *)(param_1 + 0xdd0) = *(short *)(param_1 + 0xdd0) + 1;
    *(undefined2 *)(param_1 + 0xdd2) = 0;
  }
  return CONCAT44(in_lr,1);
}

