// sub_08118DB8 at 0x08118DB8 (thumb)

undefined4 sub_08118DB8(int param_1)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  undefined4 uVar4;
  ushort uVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 in_lr;
  
  iVar9 = *(int *)(param_1 + 0x63a8);
  pcVar6 = (char *)(param_1 + 0xdf7);
  if (*pcVar6 == '\0') {
    *(undefined *)(param_1 + 0xdcd) = 0;
    *pcVar6 = *pcVar6 + '\x01';
  }
  bVar1 = *(byte *)(param_1 + 0xdcd);
  if ((DAT_02000766 & 0x10) == 0) {
    if (((DAT_02000766 & 0x20) != 0) && ((bVar1 & 3) != 0)) {
      cVar2 = -1;
      goto LAB_08118e1a;
    }
  }
  else if ((bVar1 & 3) != 3) {
    cVar2 = '\x01';
LAB_08118e1a:
    *(byte *)(param_1 + 0xdcd) = bVar1 + cVar2;
  }
  if ((DAT_02000766 & 0x80) == 0) {
    if ((DAT_02000766 & 0x40) != 0) {
      if (3 < *(byte *)(param_1 + 0xdcd)) {
        cVar2 = *(byte *)(param_1 + 0xdcd) - 4;
        goto LAB_08118e54;
      }
    }
  }
  else if (*(byte *)(param_1 + 0xdcd) < 4) {
    cVar2 = *(byte *)(param_1 + 0xdcd) + 4;
LAB_08118e54:
    *(char *)(param_1 + 0xdcd) = cVar2;
  }
  if (bVar1 != *(byte *)(param_1 + 0xdcd)) {
    sub_08002B10(1);
  }
  iVar7 = *(int *)(param_1 + 0xdec);
  *(uint *)(iVar7 + 0x74) = ((*(byte *)(param_1 + 0xdcd) & 3) * 0x18 + 0x80) * 0x100;
  if ((*(byte *)(param_1 + 0xdcd) & 1) == 0) {
    uVar4 = 0x3800;
  }
  else {
    uVar4 = 0x3000;
  }
  *(undefined4 *)(iVar7 + 0x78) = uVar4;
  if (3 < *(byte *)(param_1 + 0xdcd)) {
    *(int *)(*(int *)(param_1 + 0xdec) + 0x78) = *(int *)(*(int *)(param_1 + 0xdec) + 0x78) + 0x1000
    ;
  }
  uVar8 = DAT_02000764 & 1;
  if ((DAT_02000764 & 1) == 0) {
    if ((DAT_02000764 & 2) != 0) {
      sub_08002B10(3);
      iVar7 = *(int *)(param_1 + 0xdec);
      *(uint *)(iVar7 + 0x74) = uVar8;
      *(uint *)(iVar7 + 0x78) = uVar8;
      *(char *)(param_1 + 3) = (char)uVar8;
      *(char *)(param_1 + 0xdf7) = (char)uVar8;
    }
    goto LAB_08118f8c;
  }
  if ((int)((uint)*(ushort *)(iVar9 + 0xca) & 1 << (uint)*(byte *)(param_1 + 0xdcd)) >>
      (uint)*(byte *)(param_1 + 0xdcd) == 0) {
    sub_08002B10(4);
    goto LAB_08118f8c;
  }
  sub_08002B10(2);
  uVar5 = *(ushort *)(iVar9 + 200);
  uVar8 = (uint)*(byte *)(param_1 + 0xdcd);
  if ((int)((uint)uVar5 & 1 << uVar8) >> uVar8 != 0) {
    *(ushort *)(iVar9 + 200) = uVar5 & ~(ushort)(1 << uVar8);
    goto LAB_08118f8c;
  }
  if (uVar8 == 0) {
    uVar5 = uVar5 & 0xfff9;
    uVar3 = 0xfff7;
LAB_08118f46:
    *(ushort *)(iVar9 + 200) = uVar5 & uVar3;
  }
  else {
    if (uVar8 == 1) {
      uVar5 = uVar5 & 0xfffa;
      uVar3 = 0xfff7;
      goto LAB_08118f46;
    }
    if (uVar8 == 2) {
      uVar5 = uVar5 & 0xfffc;
      uVar3 = 0xfff7;
      goto LAB_08118f46;
    }
    if (uVar8 == 3) {
      uVar5 = uVar5 & 0xfffc;
      uVar3 = 0xfffb;
      goto LAB_08118f46;
    }
  }
  *(ushort *)(iVar9 + 200) = (ushort)(1 << *(sbyte *)(param_1 + 0xdcd)) | *(ushort *)(iVar9 + 200);
LAB_08118f8c:
  uVar8 = (uint)*(byte *)(param_1 + 0xdcd);
  if ((int)((uint)*(ushort *)(iVar9 + 0xca) & 1 << uVar8) >> uVar8 == 0) {
    sub_0810D214(&DAT_0886ac7d,1,0x10);
  }
  else {
    sub_0810D214(&DAT_0886a17c + (ushort)(&DAT_08869ac0)[uVar8 + 0x82],1,0x10);
  }
  return in_lr;
}

