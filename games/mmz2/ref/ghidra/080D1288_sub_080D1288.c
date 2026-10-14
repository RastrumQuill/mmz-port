// sub_080D1288 at 0x080D1288 (thumb)

undefined4 sub_080D1288(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  undefined4 in_lr;
  
  sub_080128D4();
  bVar1 = *(byte *)(param_1 + 0xf);
  *(byte *)(param_1 + 0xf) = bVar1 + 1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xfe;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 1;
  }
  *(byte *)(param_1 + 10) = bVar1;
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 100);
    pbVar6 = (byte *)(param_1 + 0xb8);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x68) + (short)(&DAT_080ef450)[*pbVar6] * 8;
    *pbVar6 = *pbVar6 + 2;
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) {
      return in_lr;
    }
    break;
  case 1:
    iVar5 = *(int *)(param_1 + 0x58) + 0x80;
    *(int *)(param_1 + 0x58) = iVar5;
    if (iVar5 <= *(int *)(*(int *)(*(int *)(param_1 + 0x18) + 4) + 0x58)) {
      return in_lr;
    }
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x58);
    *(undefined *)(param_1 + 0xb8) = 0;
    break;
  case 2:
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 100);
    pbVar6 = (byte *)(param_1 + 0xb8);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x68) + (short)(&DAT_080ef450)[*pbVar6] * 8;
    *pbVar6 = *pbVar6 + 2;
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 2) == 0) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 0xc0;
    iVar5 = *(int *)(*(int *)(param_1 + 0x18) + 4);
    uVar3 = sub_080EF150(*(int *)(iVar5 + 0x54) - *(int *)(param_1 + 0x54),0xc0);
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
    uVar3 = sub_080EF150(*(int *)(iVar5 + 0x58) - *(int *)(param_1 + 0x58),0xc0);
    *(undefined4 *)(param_1 + 0x60) = uVar3;
    break;
  case 3:
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    iVar4 = *(int *)(param_1 + 0x60);
    iVar7 = *(int *)(param_1 + 0x58) + iVar4;
    *(int *)(param_1 + 0x58) = iVar7;
    iVar5 = *(int *)(*(int *)(*(int *)(param_1 + 0x18) + 4) + 0x58);
    iVar8 = iVar7 - iVar5;
    if (iVar8 < 0) {
      iVar5 = iVar5 - iVar7;
      if (iVar5 + iVar4 * -2 < 0 != SBORROW4(iVar5,iVar4 * 2)) goto LAB_080d13ae;
    }
    else if (iVar8 + iVar4 * -2 < 0 != SBORROW4(iVar8,iVar4 * 2)) {
LAB_080d13ae:
      *(undefined4 *)(param_1 + 0x58) =
           *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x18) + 4) + 0x58);
    }
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) {
      return in_lr;
    }
    break;
  case 4:
    iVar5 = *(int *)(*(int *)(param_1 + 0x18) + 4);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar5 + 0x54);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar5 + 0x58);
  default:
    goto switchD_080d12be_caseD_5;
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080d12be_caseD_5:
  return in_lr;
}

