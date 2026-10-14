// sub_0809A438 at 0x0809A438 (thumb)

undefined4 sub_0809A438(int param_1)

{
  byte bVar1;
  ushort uVar2;
  undefined uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  ushort *puVar10;
  undefined4 in_lr;
  
  *(char *)(param_1 + 0x24) = *(char *)(param_1 + 0x12) + -0x40;
  puVar10 = (ushort *)(param_1 + 0xbe);
  if (0x100 < *puVar10) {
    *(undefined *)(param_1 + 0x25) = 0x19;
    sub_0801CFF0(param_1);
    *puVar10 = *puVar10 - 1;
    return in_lr;
  }
  if (*puVar10 < 0xf9) {
    uVar3 = 8;
  }
  else {
    uVar3 = 0x19;
  }
  *(undefined *)(param_1 + 0x25) = uVar3;
  if (*(char *)(param_1 + 0xd) == '\0') {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) - *(int *)(param_1 + 100);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x68);
    cVar4 = *(char *)(param_1 + 0x13) + -1;
    *(char *)(param_1 + 0x13) = cVar4;
    if (cVar4 == -1) {
      sub_0801CF00(param_1,0x6101);
      *(undefined4 *)(param_1 + 100) = 0x100;
      *(undefined *)(param_1 + 0x13) = 1;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
  }
  else {
    iVar9 = *(int *)(param_1 + 100);
    iVar7 = iVar9 * *(short *)((int)&DAT_08128c10 +
                              ((*(byte *)(param_1 + 0x12) + 0xc0) * 0x1000000 >> 0x17)) >> 8;
    *(int *)(param_1 + 0x5c) = iVar7;
    iVar6 = iVar9 * *(short *)((int)&DAT_08128c10 +
                              ((*(byte *)(param_1 + 0x12) + 0x80) * 0x1000000 >> 0x17)) >> 8;
    *(int *)(param_1 + 0x60) = iVar6;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar7;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar6;
    *(int *)(param_1 + 100) = iVar9 + 0x10;
    if (0x300 < iVar9 + 0x10) {
      *(undefined4 *)(param_1 + 100) = 0x300;
    }
    iVar6 = sub_081284E0((*(int *)(param_1 + 0x54) - *(int *)(DAT_0202dbf0 + 0x54)) * 0x100 >> 0x10,
                         ((*(int *)(param_1 + 0x58) + 0x2000) - *(int *)(DAT_0202dbf0 + 0x58)) *
                         0x100 >> 0x10);
    uVar8 = (uint)(iVar6 << 0x10) >> 0x18;
    if (uVar8 != *(byte *)(param_1 + 0x12)) {
      bVar1 = *(byte *)(param_1 + 0x12);
      uVar5 = (uint)bVar1;
      if ((int)(uVar8 - uVar5) < 0) {
        if (0x10 < (int)(uVar5 - uVar8)) goto LAB_0809a566;
LAB_0809a57a:
        cVar4 = '\x01';
      }
      else {
        if ((int)(uVar8 - uVar5) < 0x11) goto LAB_0809a57a;
LAB_0809a566:
        iVar7 = *(int *)(param_1 + 100) + -0x30;
        *(int *)(param_1 + 100) = iVar7;
        if (iVar7 < 0x100) {
          *(undefined4 *)(param_1 + 100) = 0x100;
        }
        cVar4 = '\x02';
      }
      if (iVar6 << 0x10 < 0) {
        if ((*(byte *)(param_1 + 0x12) < uVar8) && ((int)(uVar8 - 0x80) < (int)uVar5)) {
          cVar4 = cVar4 + bVar1;
        }
        else {
          cVar4 = *(byte *)(param_1 + 0x12) - cVar4;
        }
      }
      else if ((uVar8 < *(byte *)(param_1 + 0x12)) && (uVar5 < uVar8 + 0x80)) {
        cVar4 = bVar1 - cVar4;
      }
      else {
        cVar4 = cVar4 + *(byte *)(param_1 + 0x12);
      }
      *(char *)(param_1 + 0x12) = cVar4;
    }
    *(undefined *)(param_1 + 0x13) = 1;
  }
  sub_0801CFF0(param_1);
  puVar10 = (ushort *)(param_1 + 0xbe);
  uVar2 = *puVar10;
  if (uVar2 < 0x3c) {
    if ((uVar2 & 7) != 0) {
      sub_0801D330(param_1);
      goto LAB_0809a5f4;
    }
  }
  else {
    if (0x1d < uVar2) goto LAB_0809a5f4;
    if ((uVar2 & 3) == 0) {
      sub_0801D330(param_1);
      goto LAB_0809a5f4;
    }
  }
  sub_0801D3FC(param_1);
LAB_0809a5f4:
  if (((*(uint *)(param_1 + 0x8c) & 4) != 0) ||
     (uVar2 = *puVar10, *puVar10 = uVar2 - 1, (ushort)(uVar2 - 1) == 0xffff)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_08099CF4(param_1);
  }
  return in_lr;
}

