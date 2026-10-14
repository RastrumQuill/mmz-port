// sub_080C04FC at 0x080C04FC (thumb)

undefined4 sub_080C04FC(int param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x28);
  bVar2 = *(byte *)(iVar6 + 10) >> 4;
  uVar7 = bVar2 & 1;
  uVar3 = (uint)*(byte *)(param_1 + 0xb4);
  if (*(byte *)(iVar6 + 0xc) < 2) {
    if (*(char *)(param_1 + 0xd) != *(char *)(iVar6 + 0xd)) {
      *(char *)(param_1 + 0xd) = *(char *)(iVar6 + 0xd);
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xf) = 0;
    }
    if (*(char *)(param_1 + 0x11) == '\0') {
      if ((bVar2 & 1) == 0) {
        bVar1 = *(byte *)(iVar6 + 10);
        iVar5 = *(int *)(iVar6 + 0x54);
        if ((bVar1 & 0x10) == 0) {
          iVar4 = 0x8dff;
        }
        else {
          iVar4 = 0x61ff;
        }
        iVar4 = iVar5 - (DAT_0202ea30 + iVar4);
      }
      else {
        bVar1 = *(byte *)(iVar6 + 10);
        iVar5 = *(int *)(iVar6 + 0x54);
        if ((bVar1 & 0x10) == 0) {
          iVar4 = -0x6200;
        }
        else {
          iVar4 = -0x8e00;
        }
        iVar4 = (DAT_0202ea30 + iVar4) - iVar5;
      }
      if (0 < iVar4) {
        uVar3 = uVar3 + (iVar4 >> 0xf);
      }
      iVar4 = uVar3 * 0x8000 * (uVar7 * 2 + -1);
      if ((bVar1 & 0x10) == 0) {
        iVar4 = iVar4 + -0x1600;
      }
      else {
        iVar4 = iVar4 + 0x1600;
      }
      *(int *)(param_1 + 0x54) = iVar5 + iVar4;
      *(int *)(param_1 + 0x58) = *(int *)(iVar6 + 0x58) + -0x3200;
    }
    else {
      iVar5 = DAT_0202ea34 - (*(int *)(iVar6 + 0x58) + 0x2800);
      if (0 < iVar5) {
        iVar5 = FUN_081288bc(iVar5,0x3000);
        uVar3 = uVar3 + iVar5;
      }
      *(uint *)(param_1 + 0x54) = *(int *)(iVar6 + 0x54) + (uVar7 * 2 + -1) * 0x3000 * uVar3;
      *(uint *)(param_1 + 0x58) = *(int *)(iVar6 + 0x58) + uVar3 * 0x3000 + -0x2800;
    }
    if ((bVar2 & 1) == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(char *)(param_1 + 0x4c) = (char)uVar7;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar7 << 4);
    sub_08128884(param_1,*(undefined4 *)(&DAT_08861ba4 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 8);
    sub_080C0890(param_1);
  }
  return in_lr;
}

