// sub_0806A998 at 0x0806A998 (thumb)

undefined4 sub_0806A998(int param_1)

{
  bool bVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  byte *pbVar10;
  ushort *puVar11;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08006E08(param_1 + 0x74,&DAT_0833e2b0);
    iVar6 = DAT_0202e130;
    if (DAT_0202e130 == 0) {
LAB_0806aa30:
      *(char *)(param_1 + 0xd) = (char)iVar6;
      *(char *)(param_1 + 0xe) = (char)iVar6;
      return in_lr;
    }
    iVar4 = sub_0801EFE8(DAT_0202e130,0);
    iVar5 = sub_0801F004(iVar6,0);
    iVar4 = iVar4 - *(int *)(param_1 + 0x54);
    iVar5 = iVar5 - *(int *)(param_1 + 0x58);
    iVar6 = iVar4 * iVar4;
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xff;
    }
    iVar7 = iVar5 * iVar5;
    if (iVar7 < 0) {
      iVar7 = iVar7 + 0xff;
    }
    uVar9 = sub_080EEF7C((iVar6 >> 8) + (iVar7 >> 8) >> 8);
    iVar6 = (int)(uVar9 & 0xffff) >> 2;
    if (iVar6 == 0) goto LAB_0806aa30;
    uVar8 = sub_080EF150(iVar4,iVar6);
    *(undefined4 *)(param_1 + 0x5c) = uVar8;
    uVar8 = sub_080EF150(iVar5,iVar6);
    *(undefined4 *)(param_1 + 0x60) = uVar8;
    sub_080128AC(param_1,0xa04,(short)*(char *)(param_1 + 0x71),(short)*(char *)(param_1 + 0x72));
    bVar2 = *(byte *)(param_1 + 10);
    bVar1 = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202e130 + 0x54);
    if (bVar1 != (bool)(bVar2 >> 4 & 1)) {
      if (bVar1) {
        bVar2 = bVar2 | 0x10;
      }
      else {
        bVar2 = bVar2 & 0xef;
      }
      *(byte *)(param_1 + 10) = bVar2;
      *(bool *)(param_1 + 0x4c) = bVar1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
      pbVar10 = (byte *)(param_1 + 0xc0);
      *pbVar10 = *pbVar10 ^ 1;
      sub_080128AC(param_1,*(undefined2 *)(&DAT_0833e366 + (uint)*pbVar10 * 10),
                   (short)*(char *)(param_1 + 0x71),(short)*(char *)(param_1 + 0x72));
    }
    *(undefined2 *)(param_1 + 0xb4) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    sub_080128D4(param_1);
    puVar11 = (ushort *)(param_1 + 0xb4);
    uVar3 = *puVar11;
    *puVar11 = uVar3 + 1;
    if ((ushort)(uVar3 + 1) < 3) {
      return in_lr;
    }
    sub_080128AC(param_1,*(undefined2 *)(&DAT_0833e368 + (uint)*(byte *)(param_1 + 0xc0) * 10),
                 (short)*(char *)(param_1 + 0x71),(short)*(char *)(param_1 + 0x72));
    *puVar11 = 0;
    break;
  case 2:
    sub_080128D4(param_1);
    puVar11 = (ushort *)(param_1 + 0xb4);
    uVar3 = *puVar11;
    *puVar11 = uVar3 + 1;
    if ((ushort)(uVar3 + 1) < 0xf) {
      return in_lr;
    }
    sub_080128AC(param_1,*(undefined2 *)(&DAT_0833e36a + (uint)*(byte *)(param_1 + 0xc0) * 10),
                 (short)*(char *)(param_1 + 0x71),(short)*(char *)(param_1 + 0x72));
    *puVar11 = 0;
    break;
  case 3:
    sub_080128D4(param_1);
    uVar3 = *(ushort *)(param_1 + 0xb4) + 1;
    *(ushort *)(param_1 + 0xb4) = uVar3;
    if (uVar3 < 3) {
      return in_lr;
    }
    sub_080032EC(0x4a);
    sub_080128AC(param_1,*(undefined2 *)(&DAT_0833e36c + (uint)*(byte *)(param_1 + 0xc0) * 10),
                 (short)*(char *)(param_1 + 0x71),(short)*(char *)(param_1 + 0x72));
    break;
  case 4:
    sub_080128D4(param_1);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    uVar9 = sub_08015188(&DAT_0202ed18,param_1 + 0x54);
    if (0x2000 < uVar9) goto LAB_0806ac70;
    if ((*(int *)(param_1 + 0x54) - *(int *)(param_1 + 0xb8)) + 0xf000U < 0x1e001) {
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0x60) = 0xfffffe00;
    break;
  case 5:
    sub_080128D4(param_1);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    uVar9 = sub_08015188(&DAT_0202ed18,param_1 + 0x54);
    if (uVar9 < 0x2001) {
      return in_lr;
    }
LAB_0806ac70:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  default:
    goto switchD_0806a9b2_caseD_6;
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0806a9b2_caseD_6:
  return in_lr;
}

