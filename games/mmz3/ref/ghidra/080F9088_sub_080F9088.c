// sub_080F9088 at 0x080F9088 (thumb)

undefined8 sub_080F9088(int param_1)

{
  short sVar1;
  undefined2 uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  short *psVar9;
  undefined4 in_lr;
  undefined auStack_2c [8];
  undefined auStack_24 [12];
  int local_18;
  int local_14;
  
  psVar9 = (short *)(param_1 + 0xdcc);
  *(int *)(param_1 + 0xde4) = *(int *)(param_1 + 0xde4) + 1;
  iVar5 = *(int *)(param_1 + 0xdfc);
  if (0x3bfff < iVar5) {
    *(int *)(param_1 + 0xdc4) = *(int *)(param_1 + 0xdc4) + -0x3c000;
    *(int *)(param_1 + 0xdfc) = *(int *)(param_1 + 0xdfc) + -0x3c000;
    *(int *)(*(int *)(param_1 + 0xde0) + 0x54) =
         *(int *)(*(int *)(param_1 + 0xde0) + 0x54) + -0x3c000;
  }
  *(bool *)(param_1 + 0xdd9) = 0x3bfff < iVar5;
  *psVar9 = *psVar9 + 1;
  if ((*(byte *)(*(int *)(param_1 + 0xde0) + 0xc) < 2) &&
     (iVar5 = sub_080FE390((int)*psVar9,(int)*(short *)(param_1 + 6)), iVar5 == 0)) {
    uVar3 = *(ushort *)(param_1 + 0xdda);
    iVar5 = sub_080FE390(uVar3 + 1,10);
    if (iVar5 == 0) {
      DAT_0203710c = DAT_0203710c * 0x41c64e6d + 0x3039;
      uVar8 = (DAT_0203710c >> 0x10 & 1) + 2;
      *(short *)(param_1 + 8) = (short)uVar8;
      if ((uVar8 & 1) == 0) {
        local_18 = *(int *)(&DAT_0838c1fc + *(short *)(param_1 + 8) * 8) + 0x2df000;
        local_14 = *(int *)(&DAT_0838c200 + *(short *)(param_1 + 8) * 8);
      }
      else {
        local_18 = *(int *)(&DAT_0838c1fc + *(short *)(param_1 + 8) * 8) + 0x2ee000;
        local_14 = *(int *)(&DAT_0838c200 + *(short *)(param_1 + 8) * 8);
      }
      uVar6 = 1;
    }
    else {
      sVar1 = sub_080FE4D8((uint)uVar3,10);
      if (sVar1 != 0) {
        DAT_0203710c = DAT_0203710c * 0x41c64e6d + 0x3039;
        uVar2 = sub_080FE4D8(DAT_0203710c >> 0x10,6);
        *(undefined2 *)(param_1 + 8) = uVar2;
      }
      if ((*(ushort *)(param_1 + 8) & 1) == 0) {
        local_18 = *(int *)(&DAT_0838c1fc + *(short *)(param_1 + 8) * 8) + 0x2df000;
      }
      else {
        local_18 = *(int *)(&DAT_0838c1fc + *(short *)(param_1 + 8) * 8) + 0x2ee000;
      }
      local_14 = *(int *)(&DAT_0838c200 + *(short *)(param_1 + 8) * 8);
      uVar6 = 0;
    }
    local_14 = local_14 + 0xa000;
    iVar5 = sub_0809AA70(psVar9,&local_18,0,uVar6);
    if (iVar5 != 0) {
      if ((*(ushort *)(param_1 + 8) & 1) == 0) {
        iVar4 = *(int *)(&DAT_0838c22c + *(short *)(param_1 + 8) * 8);
        iVar7 = 0x2df000;
      }
      else {
        iVar4 = *(int *)(&DAT_0838c22c + *(short *)(param_1 + 8) * 8);
        iVar7 = 0x2ee000;
      }
      *(int *)(iVar5 + 100) = iVar4 + iVar7;
      *(int *)(iVar5 + 0x68) = *(int *)(&DAT_0838c230 + *(short *)(param_1 + 8) * 8) + 0xa000;
      uVar3 = *(short *)(param_1 + 0xdda) + 1;
      *(ushort *)(param_1 + 0xdda) = uVar3;
      if (uVar3 < 0x14) {
        uVar2 = 0x58;
      }
      else if (uVar3 < 0x28) {
        uVar2 = 0x4c;
      }
      else {
        uVar2 = 0x40;
      }
      *(undefined2 *)(param_1 + 6) = uVar2;
    }
  }
  sub_080FE598(auStack_2c,"SCORE",6);
  sub_080E97D4(auStack_2c,1,0);
  uVar8 = (uint)*(ushort *)(param_1 + 0xe04);
  sub_080E9824(uVar8,10,0);
  if ((*(uint *)(param_1 + 0xe08) < uVar8) &&
     (*(uint *)(param_1 + 0xe08) = uVar8, *(short *)(param_1 + 0xe06) == 0)) {
    *(undefined2 *)(param_1 + 0xe06) = 1;
    sub_0800471C(0x138);
  }
  sub_080FE598(auStack_24,"HI-SCORE",9);
  sub_080E97D4(auStack_24,0xf,0);
  sub_080E9824(*(undefined4 *)(param_1 + 0xe08),0x1b,0);
  if (*(char *)(param_1 + 0xdd8) == '\0') {
    *(short *)(param_1 + 0xdd0) = *(short *)(param_1 + 0xdd0) + 1;
    *(undefined2 *)(param_1 + 0xdd2) = 0;
  }
  return CONCAT44(in_lr,1);
}

