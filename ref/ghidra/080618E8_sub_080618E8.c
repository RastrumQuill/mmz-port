// sub_080618E8 at 0x080618E8 (thumb)

undefined4 sub_080618E8(int param_1)

{
  undefined uVar1;
  char cVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 in_lr;
  
  iVar10 = *(int *)(param_1 + 0x20);
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_080033F0(param_1 + 0x6c,1);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined *)(param_1 + 0x12) = 0x10;
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3 | 8;
    *(byte *)(param_1 + 0xbc) = *(byte *)(iVar10 + 10) >> 4 & 1;
    sub_0800561C(param_1 + 0x74,&DAT_082b0590);
    uVar3 = sub_08001EAC(0xb5);
    *(undefined2 *)(param_1 + 0xc0) = uVar3;
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  pcVar6 = (char *)(param_1 + 0xba);
  *(char *)(param_1 + 0x1f) = *pcVar6;
  pcVar7 = (char *)(param_1 + 0xbb);
  *pcVar6 = *pcVar6 + *pcVar7;
  switch(*(undefined *)(param_1 + 0xf)) {
  case 0:
    iVar9 = *(int *)(param_1 + 0x4c);
    iVar5 = sub_080C8AD0(*(int *)(iVar10 + 0x4c) - iVar9,*(undefined *)(param_1 + 0x12));
    *(int *)(param_1 + 0x4c) = iVar9 + iVar5;
    iVar9 = *(int *)(param_1 + 0x50);
    iVar5 = sub_080C8AD0(*(int *)(iVar10 + 0x50) - iVar9,*(undefined *)(param_1 + 0x12));
    *(int *)(param_1 + 0x50) = iVar9 + iVar5;
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != '\0') {
      return in_lr;
    }
    if ((*(byte *)(iVar10 + 10) & 0x10) == 0) {
      uVar1 = 0x88;
    }
    else {
      uVar1 = 0x78;
    }
    *(undefined *)(param_1 + 0x13) = uVar1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    *(undefined *)(param_1 + 0x12) = 0x10;
    sub_08001EE8((int)*(short *)(param_1 + 0xc0));
    *(short *)(param_1 + 0xc0) = -1;
    sub_0800561C(param_1 + 0x74,&DAT_082b0574);
    return in_lr;
  case 1:
    *pcVar6 = *(char *)(param_1 + 0x13);
    *pcVar7 = '\0';
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) {
      return in_lr;
    }
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    uVar3 = sub_08001EAC(0xb5);
    *(undefined2 *)(param_1 + 0xc0) = uVar3;
    sub_0800561C(param_1 + 0x74,&DAT_082b0590);
    return in_lr;
  case 2:
    uVar8 = *(byte *)(param_1 + 0x13) + 0xc0 & 0xff;
    iVar10 = (short)(&DAT_080c8e24)[uVar8 + 0x40] * 0x280;
    if (iVar10 < 0) {
      iVar10 = iVar10 + 0xff;
    }
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + (iVar10 >> 8);
    iVar10 = (short)(&DAT_080c8e24)[uVar8] * 0x280;
    if (iVar10 < 0) {
      iVar10 = iVar10 + 0xff;
    }
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + (iVar10 >> 8);
    if (*(char *)(param_1 + 0xbc) == '\0') {
      cVar2 = -0x1f;
    }
    else {
      cVar2 = '\x1e';
    }
    *pcVar7 = cVar2;
    if (*(int *)(param_1 + 0x50) <= *(int *)(*(int *)(param_1 + 0x20) + 0xbc) + 0x7800) {
      return in_lr;
    }
    uVar1 = 0x20;
    break;
  case 3:
    if (*(char *)(param_1 + 0xbc) == '\0') {
      cVar2 = -0x1f;
    }
    else {
      cVar2 = '\x1e';
    }
    *pcVar7 = cVar2;
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 0x40;
    if ((*(byte *)(iVar10 + 10) & 0x10) == 0) {
      uVar4 = 0xfffffd80;
    }
    else {
      uVar4 = 0x280;
    }
    *(undefined4 *)(param_1 + 0x54) = uVar4;
    goto LAB_08061b8a;
  case 4:
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) {
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0x58) = 0xffffff40;
    uVar1 = 0x20;
    break;
  case 5:
    iVar5 = *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar5;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
    if ((*(byte *)(iVar10 + 10) & 0x10) == 0) {
      iVar5 = iVar5 + 0x28;
    }
    else {
      iVar5 = iVar5 + -0x28;
    }
    *(int *)(param_1 + 0x54) = iVar5;
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) {
      return in_lr;
    }
    uVar1 = 0x34;
    break;
  case 6:
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) {
      return in_lr;
    }
    uVar1 = 0x10;
    break;
  case 7:
    if ((*(byte *)(iVar10 + 10) & 0x10) == 0) {
      *pcVar7 = -0x1f;
      iVar5 = *(int *)(iVar10 + 0x4c) + -0x1000;
    }
    else {
      *pcVar7 = '\x1e';
      iVar5 = *(int *)(iVar10 + 0x4c) + 0x1000;
    }
    iVar9 = *(int *)(param_1 + 0x4c);
    iVar5 = sub_080C8AD0(iVar5 - iVar9,*(undefined *)(param_1 + 0x12));
    *(int *)(param_1 + 0x4c) = iVar9 + iVar5;
    iVar5 = *(int *)(param_1 + 0x50);
    iVar10 = sub_080C8AD0(*(int *)(iVar10 + 0x50) - iVar5,*(undefined *)(param_1 + 0x12));
    *(int *)(param_1 + 0x50) = iVar5 + iVar10;
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == -1) {
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 1;
      *(undefined *)(param_1 + 0xb8) = 0;
      sub_08001EE8((int)*(short *)(param_1 + 0xc0));
      *(short *)(param_1 + 0xc0) = -1;
    }
  default:
    goto switchD_0806198c_caseD_8;
  }
  *(undefined *)(param_1 + 0x12) = uVar1;
LAB_08061b8a:
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
switchD_0806198c_caseD_8:
  return in_lr;
}

