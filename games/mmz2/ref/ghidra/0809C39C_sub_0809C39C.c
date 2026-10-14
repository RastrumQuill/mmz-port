// sub_0809C39C at 0x0809C39C (thumb)

undefined4 sub_0809C39C(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  ushort uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  ushort *puVar9;
  int iVar10;
  undefined uVar11;
  undefined4 in_lr;
  int local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  iVar4 = *(int *)(param_1 + 0x28);
  local_24 = param_3;
  local_20 = param_4;
  sub_080128D4(param_1);
  if (*(char *)(iVar4 + 0xd) == '\n') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8);
    *(undefined *)(param_1 + 0xd) = 0;
    sub_0809C0C4(param_1);
    return in_lr;
  }
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 1) {
    puVar9 = (ushort *)(param_1 + 0xb8);
    uVar2 = *puVar9;
    *puVar9 = uVar2 + 0x80;
    if (0x4000 < (ushort)(uVar2 + 0x80)) {
      *puVar9 = 0x4000;
    }
    *(char *)(param_1 + 0x24) = (char)(*puVar9 >> 8) + *(char *)(param_1 + 0x24);
    if (*(char *)(iVar4 + 0xc1) == '\0') {
      return in_lr;
    }
    bVar1 = *(byte *)(param_1 + 0x11);
    if (bVar1 == 1) {
      local_2c = *(int *)(iVar4 + 0x54) + *(char *)(param_1 + 0xb4) * 0x1600;
LAB_0809c50a:
      local_28 = *(int *)(iVar4 + 0x58);
LAB_0809c512:
      local_28 = local_28 + -0x1400;
      uVar8 = sub_08038ED4(&local_2c,param_1 + 0x54);
      iVar4 = (short)(&DAT_080ef450)[(uVar8 & 0xff) + 0x40 & 0xff] * 0x140;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 0xff;
      }
      *(int *)(param_1 + 0x5c) = iVar4 >> 8;
      iVar7 = (short)(&DAT_080ef450)[uVar8 & 0xff] * 0x140;
      if (iVar7 < 0) {
        iVar7 = iVar7 + 0xff;
      }
      iVar7 = iVar7 >> 8;
LAB_0809c5f6:
      *(int *)(param_1 + 0x60) = iVar7;
    }
    else if (bVar1 < 2) {
      if (bVar1 == 0) {
        local_2c = *(int *)(iVar4 + 0x54) + *(char *)(param_1 + 0xb4) * -0x1500;
        local_28 = *(int *)(iVar4 + 0x58);
        goto LAB_0809c512;
      }
    }
    else if (bVar1 == 2) {
      local_2c = *(int *)(iVar4 + 0x54) + *(char *)(param_1 + 0xb4) * -0x1500;
      goto LAB_0809c50a;
    }
    *(undefined *)(param_1 + 0x12) = 0x10;
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return in_lr;
      }
      puVar9 = (ushort *)(param_1 + 0xb8);
      uVar2 = *puVar9;
      *puVar9 = uVar2 + 0x80;
      if (0x4000 < (ushort)(uVar2 + 0x80)) {
        *puVar9 = 0x4000;
      }
      *(char *)(param_1 + 0x24) = (char)(*puVar9 >> 8) + *(char *)(param_1 + 0x24);
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      cVar3 = sub_0809C9B8(param_1,0x800);
      if (((cVar3 == '\0') && (cVar3 = sub_0809CA44(param_1,0x800), cVar3 == '\0')) &&
         (*(byte *)(param_1 + 0x12) < 0x19)) {
        return in_lr;
      }
      goto LAB_0809c674;
    }
    if (bVar1 != 2) {
      if (bVar1 != 3) {
        return in_lr;
      }
      puVar9 = (ushort *)(param_1 + 0xb8);
      uVar2 = *puVar9;
      *puVar9 = uVar2 + 0x80;
      if (0x8000 < (ushort)(uVar2 + 0x80)) {
        *puVar9 = 0x8000;
      }
      *(char *)(param_1 + 0x24) = (char)(*puVar9 >> 8) + *(char *)(param_1 + 0x24);
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
      if (*(char *)(param_1 + 0x11) == '\x01') {
        iVar7 = *(int *)(iVar4 + 0x54) + *(char *)(param_1 + 0xb4) * 0x1600;
      }
      else {
        iVar7 = *(int *)(iVar4 + 0x54) + *(char *)(param_1 + 0xb4) * -0x1500;
      }
      iVar10 = *(int *)(iVar4 + 0x58);
      uVar8 = (uint)*(byte *)(param_1 + 0x12);
      *(uint *)(param_1 + 0x54) = iVar7 - uVar8 * *(int *)(param_1 + 0x5c);
      *(uint *)(param_1 + 0x58) = (iVar10 + -0x1400) - uVar8 * *(int *)(param_1 + 0x60);
      if (uVar8 != 0) {
        return in_lr;
      }
      if (*(char *)(param_1 + 0x11) == '\x01') {
        sub_080B4A68(iVar4,iVar4 + 0x54,3,1);
      }
      else {
        sub_080B4A68(iVar4,iVar4 + 0x54,3,0);
      }
      *(char *)(iVar4 + 0xc0) = *(char *)(iVar4 + 0xc0) + '\x01';
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 0xc);
      return in_lr;
    }
    puVar9 = (ushort *)(param_1 + 0xb8);
    uVar2 = *puVar9;
    *puVar9 = uVar2 + 0x80;
    if (0x8000 < (ushort)(uVar2 + 0x80)) {
      *puVar9 = 0x8000;
    }
    *(char *)(param_1 + 0x24) = (char)(*puVar9 >> 8) + *(char *)(param_1 + 0x24);
    iVar10 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar10;
    iVar7 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar7;
    cVar3 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar3;
    if (cVar3 != '\0') {
      return in_lr;
    }
    bVar1 = *(byte *)(param_1 + 0x11);
    if (bVar1 == 1) {
      iVar5 = *(int *)(iVar4 + 0x58);
      uVar11 = 0x14;
      uVar6 = sub_080EF150((*(int *)(iVar4 + 0x54) + *(char *)(param_1 + 0xb4) * 0x1600) - iVar10,
                           0x14);
      *(undefined4 *)(param_1 + 0x5c) = uVar6;
      iVar7 = (iVar5 + -0x1400) - iVar7;
      uVar6 = 0x14;
    }
    else {
      if (bVar1 < 2) {
        if (bVar1 != 0) goto LAB_0809c674;
        iVar5 = *(int *)(iVar4 + 0x58);
        iVar10 = (*(int *)(iVar4 + 0x54) + *(char *)(param_1 + 0xb4) * -0x1500) - iVar10;
        if (iVar10 < 0) {
          iVar10 = iVar10 + 0xf;
        }
        *(int *)(param_1 + 0x5c) = iVar10 >> 4;
        iVar7 = (iVar5 + -0x1400) - iVar7;
        if (iVar7 < 0) {
          iVar7 = iVar7 + 0xf;
        }
        iVar7 = iVar7 >> 4;
        goto LAB_0809c5f6;
      }
      if (bVar1 != 2) goto LAB_0809c674;
      iVar5 = *(int *)(iVar4 + 0x58);
      uVar11 = 0x18;
      uVar6 = sub_080EF150((*(int *)(iVar4 + 0x54) + *(char *)(param_1 + 0xb4) * -0x1500) - iVar10,
                           0x18);
      *(undefined4 *)(param_1 + 0x5c) = uVar6;
      iVar7 = (iVar5 + -0x1400) - iVar7;
      uVar6 = 0x18;
    }
    uVar6 = sub_080EF150(iVar7,uVar6);
    *(undefined4 *)(param_1 + 0x60) = uVar6;
    *(undefined *)(param_1 + 0x12) = uVar11;
  }
LAB_0809c674:
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  return in_lr;
}

