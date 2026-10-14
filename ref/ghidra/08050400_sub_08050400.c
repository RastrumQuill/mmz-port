// sub_08050400 at 0x08050400 (thumb)

undefined4 sub_08050400(int param_1)

{
  short sVar1;
  ushort uVar2;
  byte bVar3;
  char cVar4;
  undefined uVar5;
  int *piVar6;
  uint uVar7;
  ushort *puVar8;
  short *psVar9;
  int iVar10;
  int iVar11;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080033F0(param_1 + 0x6c,0);
    *(undefined *)(param_1 + 0x12) = 0x28;
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  iVar11 = *(int *)(DAT_0202286c + 0x4c) - *(int *)(param_1 + 0x4c);
  *(bool *)(param_1 + 0x44) = 0 < iVar11;
  if (0 < iVar11) {
    bVar3 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar3 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar3;
  if (iVar11 < 0) {
    iVar11 = -iVar11;
  }
  if (*(char *)(param_1 + 0x13) == '\0') {
    piVar6 = (int *)sub_08048BC4(param_1);
    if (piVar6 != (int *)0x0) {
      iVar10 = *(int *)(param_1 + 0x4c) - *piVar6;
      if (iVar10 < 0) {
        iVar10 = *piVar6 - *(int *)(param_1 + 0x4c);
      }
      if (iVar10 < 0x1800) {
        uVar7 = DAT_02022890 * 0x343fd + 0x269ec3;
        DAT_02022890 = uVar7 & 0x7fffffff;
        if ((uVar7 * 2 >> 0x11 & 0xf) < 0xc) {
          *(undefined *)(param_1 + 0xd) = 3;
          *(undefined *)(param_1 + 0xe) = 0;
          sub_08003458(param_1 + 0x6c);
          *(undefined *)(param_1 + 0x46) =
               *(undefined *)
                (*(char *)(param_1 + 0x71) * 4 +
                *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
          return in_lr;
        }
        cVar4 = '\x18';
        goto LAB_080504fe;
      }
    }
  }
  else {
    cVar4 = *(char *)(param_1 + 0x13) + -1;
LAB_080504fe:
    *(char *)(param_1 + 0x13) = cVar4;
  }
  cVar4 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar4;
  if (cVar4 != '\0') goto LAB_08050612;
  uVar7 = DAT_02022890 * 0x343fd + 0x269ec3;
  DAT_02022890 = uVar7 & 0x7fffffff;
  uVar7 = uVar7 * 2 >> 0x11 & 0xf;
  if (iVar11 < 0x4000) {
    if (uVar7 < 2) {
      *(undefined *)(param_1 + 0xd) = 0;
    }
    else {
      if (0xc < uVar7) goto LAB_08050568;
      uVar5 = 5;
LAB_0805056a:
      *(undefined *)(param_1 + 0xd) = uVar5;
    }
  }
  else {
    if (1 < uVar7) {
LAB_08050568:
      uVar5 = 4;
      goto LAB_0805056a;
    }
    *(undefined *)(param_1 + 0xd) = 0;
  }
  *(undefined *)(param_1 + 0xe) = 0;
  puVar8 = (ushort *)(param_1 + 0xc0);
  if (*puVar8 == (ushort)*(byte *)(param_1 + 0xd)) {
    psVar9 = (short *)(param_1 + 0xc2);
    sVar1 = *psVar9;
    *psVar9 = sVar1 + 1;
    if ((short)(sVar1 + 1) == 4) {
      uVar2 = *puVar8;
      do {
        uVar7 = DAT_02022890 * 0x343fd + 0x269ec3;
        DAT_02022890 = uVar7 & 0x7fffffff;
        uVar7 = sub_080C8CB0(uVar7 * 2 >> 0x11,3);
      } while (uVar2 == (byte)(&DAT_082af41c)[uVar7 & 0xff]);
      *(undefined *)(param_1 + 0xd) = (&DAT_082af41c)[uVar7 & 0xff];
      *psVar9 = 0;
    }
  }
  else {
    *(undefined2 *)(param_1 + 0xc2) = 0;
  }
  *puVar8 = (ushort)*(byte *)(param_1 + 0xd);
LAB_08050612:
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  return in_lr;
}

