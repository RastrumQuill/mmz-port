// sub_08061200 at 0x08061200 (thumb)

undefined4 sub_08061200(int param_1)

{
  char cVar1;
  undefined uVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  char *pcVar7;
  int iVar8;
  undefined4 in_lr;
  byte abStack_20 [4];
  
  iVar4 = *(int *)(param_1 + 0x20);
  sub_080C8D70(abStack_20,&DAT_080c92d4,4);
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_080033F0(param_1 + 0x6c,1);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined *)(param_1 + 0x12) = 0x10;
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3 | 8;
    *(byte *)(param_1 + 0xbc) = *(byte *)(iVar4 + 10) >> 4 & 1;
    sub_0800561C(param_1 + 0x74,&DAT_082b0590);
    uVar3 = sub_08001EAC(0xb5);
    *(undefined2 *)(param_1 + 0xc0) = uVar3;
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  pbVar6 = (byte *)(param_1 + 0xba);
  *(byte *)(param_1 + 0x1f) = *pbVar6;
  pcVar7 = (char *)(param_1 + 0xbb);
  *pbVar6 = *pbVar6 + *pcVar7;
  switch(*(undefined *)(param_1 + 0xf)) {
  case 0:
    if (*(char *)(param_1 + 0xbc) == '\0') {
      cVar1 = -0x1f;
    }
    else {
      cVar1 = '\x1e';
    }
    *pcVar7 = cVar1;
    iVar8 = *(int *)(param_1 + 0x4c);
    iVar5 = sub_080C8AD0(*(int *)(iVar4 + 0x4c) - iVar8,*(undefined *)(param_1 + 0x12));
    iVar8 = iVar8 + iVar5;
    *(int *)(param_1 + 0x4c) = iVar8;
    iVar5 = *(int *)(param_1 + 0x50);
    iVar4 = sub_080C8AD0(*(int *)(iVar4 + 0x50) - iVar5,*(undefined *)(param_1 + 0x12));
    *(int *)(param_1 + 0x50) = iVar5 + iVar4;
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
      if (*(char *)(param_1 + 0xbc) == '\0') {
        if (iVar8 - *(int *)(DAT_0202286c + 0x4c) < 0x4001) {
          *(undefined *)(param_1 + 0x13) = 0;
        }
        else {
          *(undefined *)(param_1 + 0x13) = 2;
        }
        cVar1 = -0x1f;
      }
      else {
        if (*(int *)(DAT_0202286c + 0x4c) - iVar8 < 0x4001) {
          uVar2 = 1;
        }
        else {
          uVar2 = 3;
        }
        *(undefined *)(param_1 + 0x13) = uVar2;
        cVar1 = '\x1e';
      }
      *pcVar7 = cVar1;
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
      *(undefined *)(param_1 + 0x12) = 0x10;
      sub_08001EE8((int)*(short *)(param_1 + 0xc0));
      *(short *)(param_1 + 0xc0) = -1;
      sub_0800561C(param_1 + 0x74,&DAT_082b0574);
    }
    break;
  case 1:
    *pbVar6 = abStack_20[*(byte *)(param_1 + 0x13)];
    *pcVar7 = '\0';
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      *(undefined *)(param_1 + 0x12) = 0x60;
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
      uVar3 = sub_08001EAC(0xb5);
      *(undefined2 *)(param_1 + 0xc0) = uVar3;
      sub_0800561C(param_1 + 0x74,&DAT_082b0590);
    }
    break;
  case 2:
    iVar5 = (int)*(short *)(iVar4 + 0xc2) *
            (int)(short)(&DAT_080c8e24)
                        [(abStack_20[*(byte *)(param_1 + 0x13)] + 0xc0 & 0xff) + 0x40];
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + (iVar5 >> 8);
    iVar4 = (int)*(short *)(iVar4 + 0xc2) *
            (int)(short)(&DAT_080c8e24)[abStack_20[*(byte *)(param_1 + 0x13)] + 0xc0 & 0xff];
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + (iVar4 >> 8);
    if (*(char *)(param_1 + 0xbc) == '\0') {
      cVar1 = -0x1f;
    }
    else {
      cVar1 = '\x1e';
    }
    *pcVar7 = cVar1;
    if (*(int *)(param_1 + 0x50) <= *(int *)(*(int *)(param_1 + 0x20) + 0xbc) + 0x7800) {
      return in_lr;
    }
    goto LAB_0806148c;
  case 3:
    if (*(char *)(param_1 + 0xbc) == '\0') {
      cVar1 = -0x1f;
    }
    else {
      cVar1 = '\x1e';
    }
    *pcVar7 = cVar1;
    if (*(char *)(iVar4 + 0xd) != '\x06') {
      return in_lr;
    }
    if (*(byte *)(param_1 + 0x13) < 3) {
      uVar2 = 0x40;
    }
    else {
      uVar2 = 0x20;
    }
    *(undefined *)(param_1 + 0x12) = uVar2;
LAB_0806148c:
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    break;
  case 4:
    if ((*(byte *)(iVar4 + 10) & 0x10) == 0) {
      *pcVar7 = -0x1f;
      iVar5 = *(int *)(iVar4 + 0x4c) + -0x1000;
    }
    else {
      *pcVar7 = '\x1e';
      iVar5 = *(int *)(iVar4 + 0x4c) + 0x1000;
    }
    iVar8 = *(int *)(param_1 + 0x4c);
    iVar5 = sub_080C8AD0(iVar5 - iVar8,*(undefined *)(param_1 + 0x12));
    *(int *)(param_1 + 0x4c) = iVar8 + iVar5;
    iVar5 = *(int *)(param_1 + 0x50);
    iVar4 = sub_080C8AD0(*(int *)(iVar4 + 0x50) - iVar5,*(undefined *)(param_1 + 0x12));
    *(int *)(param_1 + 0x50) = iVar5 + iVar4;
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 1;
      *(undefined *)(param_1 + 0xb8) = 0;
      sub_08001EE8((int)*(short *)(param_1 + 0xc0));
      *(short *)(param_1 + 0xc0) = -1;
    }
  }
  return in_lr;
}

