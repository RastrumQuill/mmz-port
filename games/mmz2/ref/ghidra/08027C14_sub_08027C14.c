// sub_08027C14 at 0x08027C14 (thumb)

undefined4 sub_08027C14(int param_1)

{
  undefined2 uVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  undefined uVar9;
  int iVar10;
  int iVar11;
  undefined4 in_lr;
  
  if ((*(int *)(param_1 + 0x2d4) == *(int *)(param_1 + 0x2c4)) &&
     (*(int *)(param_1 + 0x2d8) == *(int *)(param_1 + 0x2c8))) {
    uVar3 = (uint)*(byte *)(param_1 + 0x2c1);
  }
  else {
    uVar3 = sub_08038ED4(param_1 + 0x2d4,param_1 + 0x2c4);
    bVar8 = *(byte *)(param_1 + 0x2c1);
    iVar4 = sub_08032E78((uint)bVar8,uVar3);
    if (iVar4 != 0) {
      uVar3 = (uint)bVar8;
    }
  }
  uVar5 = uVar3 + 0x80 & 0xff;
  if (uVar5 == 0x40) {
    bVar8 = *(byte *)(param_1 + 10) >> 4 & 1;
  }
  else {
    bVar8 = 0;
    if ((uVar3 + 0x40 & 0xff) < 0x80) {
      bVar8 = 1;
    }
  }
  uVar9 = 0xff;
  if (bVar8 == 0) {
    uVar9 = 1;
  }
  *(undefined *)(param_1 + 0x2e6) = uVar9;
  sVar2 = (short)uVar5 * 0x100 + -0x4000;
  *(short *)(param_1 + 0x2e8) = sVar2;
  *(short *)(param_1 + 0x2ec) = sVar2;
  iVar4 = sub_08033154(param_1);
  iVar11 = 1;
  if (iVar4 < 0x668) {
    iVar11 = 4;
  }
  iVar6 = sub_08035F60(param_1,&DAT_08335d18);
  iVar7 = sub_08035F74(param_1,&DAT_08335d18);
  iVar6 = iVar6 - *(int *)(param_1 + 0x2c4);
  iVar7 = iVar7 - *(int *)(param_1 + 0x2c8);
  uVar3 = sub_080EEF7C(iVar6 * iVar6 + iVar7 * iVar7);
  uVar3 = (uVar3 & 0xffff) - 0x1800;
  if ((int)uVar3 < 0x400) {
    uVar3 = 0x400;
  }
  uVar5 = (uint)*(ushort *)(param_1 + 0x2c2);
  if (((int)uVar3 <= (int)uVar5) && (uVar5 = uVar3, (int)uVar3 < 0x400)) {
    uVar5 = 0x400;
  }
  *(short *)(param_1 + 0x2ee) = (short)uVar5;
  *(undefined2 *)(param_1 + 0x2f0) = 0;
  iVar6 = *(int *)(param_1 + 0x60);
  if ((-1 < iVar6) && ((iVar7 = *(int *)(param_1 + 0x5c), iVar7 != 0 || (iVar6 != 0)))) {
    sub_08038E6C(iVar7,iVar6);
    uVar3 = sub_080EEF7C(iVar7 * iVar7 + iVar6 * iVar6);
    iVar6 = (int)((uVar3 & 0xffff) * 0xff) >> 8;
    if (iVar6 != 0) {
      if (uVar5 == 0) {
        sVar2 = sub_080EEF7C(iVar4 * 0x20);
        if (sVar2 == 0) {
          uVar3 = 1;
        }
        else {
          uVar3 = sub_080EEF7C(iVar4 * 0x20);
          uVar3 = uVar3 & 0xffff;
        }
      }
      else {
        iVar10 = uVar5 - ((int)(uVar5 * 0xff) >> 8);
        iVar7 = (int)(uVar5 * 6) >> 8;
        uVar1 = sub_080EEF7C(iVar10 * iVar10 + iVar7 * iVar7);
        uVar3 = sub_080EF150(iVar6 * 0x100,uVar1);
        sVar2 = sub_080EEF7C(iVar4 * 0x20);
        if (sVar2 == 0) {
          uVar5 = 1;
        }
        else {
          uVar5 = sub_080EEF7C(iVar4 * 0x20);
          uVar5 = uVar5 & 0xffff;
        }
        if ((int)uVar5 < (int)uVar3) {
          uVar3 = uVar5;
        }
      }
      *(undefined2 *)(param_1 + 0x2f0) = (short)uVar3;
    }
  }
  *(char *)(param_1 + 0xf) = (char)iVar11;
  sub_080EF118(param_1,*(undefined4 *)(&DAT_08333bf8 + iVar11 * 4));
  return in_lr;
}

