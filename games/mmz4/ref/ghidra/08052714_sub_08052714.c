// sub_08052714 at 0x08052714 (thumb)

undefined4 sub_08052714(int param_1)

{
  bool bVar1;
  byte bVar2;
  undefined uVar3;
  char cVar4;
  short sVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 *puVar9;
  byte *pbVar10;
  uint uVar11;
  undefined4 in_lr;
  int local_1c;
  undefined4 local_18;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0xa117);
    sub_08002B10(0xeb);
    sub_08005784(param_1 + 0x74,&DAT_08854918);
    *(undefined *)(param_1 + 0x4d) = 0;
    pbVar10 = (byte *)(param_1 + 0x4a);
    *pbVar10 = *pbVar10 & 0xdf;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xdf;
    puVar9 = (undefined4 *)(param_1 + 0xb4);
    if (*(int *)(DAT_0202dbf0 + 0x54) < *(int *)(param_1 + 0xc4)) {
      iVar6 = sub_08008868(*puVar9,*(undefined4 *)(param_1 + 0xb8));
      iVar6 = iVar6 + -0x2000;
    }
    else {
      iVar6 = sub_08008988(*puVar9,*(undefined4 *)(param_1 + 0xb8));
      iVar6 = iVar6 + 0x2000;
    }
    *(int *)(param_1 + 0x54) = iVar6;
    uVar7 = sub_08008748(*puVar9,*(undefined4 *)(param_1 + 0xb8));
    *(undefined4 *)(param_1 + 0x58) = uVar7;
    iVar6 = DAT_0202dbf0;
    *(bool *)(param_1 + 0x4c) = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202dbf0 + 0x54);
    bVar1 = *(int *)(param_1 + 0x54) < *(int *)(iVar6 + 0x54);
    *pbVar10 = *pbVar10 & 0xef | bVar1 << 4;
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(undefined4 *)(param_1 + 0x60) = 0x80;
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined *)(param_1 + 0xf) = 0;
  }
  bVar2 = *(byte *)(param_1 + 0xf);
  if (bVar2 == 1) {
    cVar4 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar4;
    if (cVar4 != -1) goto LAB_08052972;
  }
  else {
    if (bVar2 < 2) {
      if (bVar2 != 0) goto LAB_08052972;
      bVar2 = *(byte *)(param_1 + 0x12);
      *(byte *)(param_1 + 0x12) = bVar2 + 1;
      if ((bVar2 & 3) < 2) {
        iVar6 = *(int *)(param_1 + 0x54) + 0x100;
      }
      else {
        iVar6 = *(int *)(param_1 + 0x54) + -0x100;
      }
      *(int *)(param_1 + 0x54) = iVar6;
      iVar6 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      *(int *)(param_1 + 0x58) = iVar6;
      if ((*(byte *)(param_1 + 0x12) & 1) != 0) {
        local_1c = *(int *)(param_1 + 0x54);
        local_18 = sub_08008748(local_1c,iVar6);
        uVar8 = DAT_0202dc38 * 0x343fd + 0x269ec3;
        uVar11 = uVar8 & 0x7fffffff;
        local_1c = local_1c + 0x1000 + (uVar8 * 2 >> 0x11 & 0x1f) * -0x100;
        if ((*(byte *)(param_1 + 0x12) & 3) == 1) {
          uVar8 = uVar11 * 0x343fd + 0x269ec3;
          DAT_0202dc38 = uVar8 & 0x7fffffff;
          sub_080D4898(&local_1c,&DAT_08854c7c,0,(uVar8 * 2 >> 0x11 & 1) << 4);
        }
        else {
          uVar8 = uVar11 * 0x343fd + 0x269ec3;
          DAT_0202dc38 = uVar8 & 0x7fffffff;
          sub_080D4898(&local_1c,&DAT_08854c60,0,(uVar8 * 2 >> 0x11 & 1) << 4);
        }
      }
      sVar5 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x1700);
      if (sVar5 != 0) goto LAB_08052972;
      sub_0801CF00(param_1,0xa113);
      sub_08002B10(0xea);
      *(undefined4 *)(param_1 + 0x60) = 0;
      uVar3 = 8;
    }
    else {
      if (bVar2 != 2) {
        if ((bVar2 == 3) && (*(char *)(param_1 + 0x73) == '\x03')) {
          *(undefined *)(param_1 + 0xd) = 4;
          *(undefined *)(param_1 + 0xe) = 0;
        }
        goto LAB_08052972;
      }
      iVar6 = *(int *)(param_1 + 0x60) + 0x20;
      *(int *)(param_1 + 0x60) = iVar6;
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar6;
      sVar5 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54));
      if (sVar5 == 0) goto LAB_08052972;
      sub_0801CFC8(param_1,0xa10d,1,3);
      uVar7 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(undefined4 *)(param_1 + 0x58) = uVar7;
      uVar3 = 0x10;
    }
    *(undefined *)(param_1 + 0x12) = uVar3;
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
LAB_08052972:
  sub_0801CFF0(param_1);
  return in_lr;
}

