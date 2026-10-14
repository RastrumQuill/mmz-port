// sub_08061628 at 0x08061628 (thumb)

undefined4 sub_08061628(int param_1)

{
  char cVar1;
  undefined2 uVar2;
  char extraout_var;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 in_lr;
  
  iVar8 = *(int *)(param_1 + 0x20);
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_080033F0(param_1 + 0x6c,1);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined *)(param_1 + 0x12) = 0x10;
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3 | 8;
    *(byte *)(param_1 + 0xbc) = *(byte *)(iVar8 + 10) >> 4 & 1;
    sub_0800561C(param_1 + 0x74,&DAT_082b0590);
    uVar2 = sub_08001EAC(0xb5);
    *(undefined2 *)(param_1 + 0xc0) = uVar2;
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  pcVar4 = (char *)(param_1 + 0xba);
  *(char *)(param_1 + 0x1f) = *pcVar4;
  pcVar5 = (char *)(param_1 + 0xbb);
  *pcVar4 = *pcVar4 + *pcVar5;
  switch(*(undefined *)(param_1 + 0xf)) {
  case 0:
    if (*(char *)(param_1 + 0xbc) == '\0') {
      cVar1 = -0x1f;
    }
    else {
      cVar1 = '\x1e';
    }
    *pcVar5 = cVar1;
    iVar7 = *(int *)(param_1 + 0x4c);
    iVar3 = sub_080C8AD0(*(int *)(iVar8 + 0x4c) - iVar7,*(undefined *)(param_1 + 0x12));
    iVar7 = iVar7 + iVar3;
    *(int *)(param_1 + 0x4c) = iVar7;
    iVar3 = *(int *)(param_1 + 0x50);
    iVar8 = sub_080C8AD0(*(int *)(iVar8 + 0x50) - iVar3,*(undefined *)(param_1 + 0x12));
    *(int *)(param_1 + 0x50) = iVar3 + iVar8;
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
      iVar8 = *(int *)(DAT_0202286c + 0x4c);
      iVar3 = sub_08008360(iVar8,*(undefined4 *)(DAT_0202286c + 0x50));
      sub_080C88E8((iVar8 - iVar7) * 0x10 >> 0x10,(iVar3 - *(int *)(param_1 + 0x50)) * 0x10 >> 0x10)
      ;
      *(char *)(param_1 + 0x13) = extraout_var + '@';
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
      *(undefined *)(param_1 + 0x12) = 0x10;
      sub_08001EE8((int)*(short *)(param_1 + 0xc0));
      *(short *)(param_1 + 0xc0) = -1;
      sub_0800561C(param_1 + 0x74,&DAT_082b0574);
    }
    break;
  case 1:
    *pcVar4 = *(char *)(param_1 + 0x13);
    *pcVar5 = '\0';
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      *(undefined *)(param_1 + 0x12) = 0x60;
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
      uVar2 = sub_08001EAC(0xb5);
      *(undefined2 *)(param_1 + 0xc0) = uVar2;
      sub_0800561C(param_1 + 0x74,&DAT_082b0590);
    }
    break;
  case 2:
    uVar6 = *(byte *)(param_1 + 0x13) + 0xc0 & 0xff;
    iVar8 = (short)(&DAT_080c8e24)[uVar6 + 0x40] * 0x280;
    if (iVar8 < 0) {
      iVar8 = iVar8 + 0xff;
    }
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + (iVar8 >> 8);
    iVar8 = (short)(&DAT_080c8e24)[uVar6] * 0x280;
    if (iVar8 < 0) {
      iVar8 = iVar8 + 0xff;
    }
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + (iVar8 >> 8);
    if (*(char *)(param_1 + 0xbc) == '\0') {
      cVar1 = -0x1f;
    }
    else {
      cVar1 = '\x1e';
    }
    *pcVar5 = cVar1;
    if (*(int *)(*(int *)(param_1 + 0x20) + 0xbc) + 0x7800 < *(int *)(param_1 + 0x50)) {
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
      *(undefined *)(param_1 + 0x12) = 0x40;
    }
    break;
  case 3:
    if (*(char *)(param_1 + 0xbc) == '\0') {
      cVar1 = -0x1f;
    }
    else {
      cVar1 = '\x1e';
    }
    *pcVar5 = cVar1;
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      *(undefined *)(param_1 + 0x12) = 0x30;
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
    break;
  case 4:
    if ((*(byte *)(iVar8 + 10) & 0x10) == 0) {
      *pcVar5 = -0x1f;
      iVar3 = *(int *)(iVar8 + 0x4c) + -0x1000;
    }
    else {
      *pcVar5 = '\x1e';
      iVar3 = *(int *)(iVar8 + 0x4c) + 0x1000;
    }
    iVar7 = *(int *)(param_1 + 0x4c);
    iVar3 = sub_080C8AD0(iVar3 - iVar7,*(undefined *)(param_1 + 0x12));
    *(int *)(param_1 + 0x4c) = iVar7 + iVar3;
    iVar3 = *(int *)(param_1 + 0x50);
    iVar8 = sub_080C8AD0(*(int *)(iVar8 + 0x50) - iVar3,*(undefined *)(param_1 + 0x12));
    *(int *)(param_1 + 0x50) = iVar3 + iVar8;
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 1;
      *(undefined *)(param_1 + 0xb8) = 0;
      sub_08001EE8((int)*(short *)(param_1 + 0xc0));
      *(short *)(param_1 + 0xc0) = -1;
    }
  }
  return in_lr;
}

