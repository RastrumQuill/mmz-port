// sub_0805E938 at 0x0805E938 (thumb)

undefined4 sub_0805E938(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined uVar3;
  int iVar4;
  undefined4 in_lr;
  int local_20;
  int local_1c;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(byte *)(param_1 + 0xc1) = *(byte *)(param_1 + 10) >> 4 & 1;
    iVar4 = *(int *)(DAT_0202286c + 0x4c) - *(int *)(param_1 + 0x4c);
    *(byte *)(param_1 + 0x44) = (byte)((uint)iVar4 >> 0x1f);
    if (iVar4 < 0) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    sub_080033F0(param_1 + 0x6c,*(char *)(param_1 + 0x13) + '\x14');
    *(undefined *)(param_1 + 0x12) = 0xc;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0805e958_caseD_2:
    sub_0805DCB0(param_1,*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if ((cVar1 == '\v') && (*(char *)(param_1 + 0x13) != '\0')) {
      cVar1 = (&DAT_082b0360)[*(byte *)(param_1 + 0x13)];
      bVar2 = *(byte *)(param_1 + 10);
      if ((bVar2 & 0x10) != 0) {
        cVar1 = -0x80 - cVar1;
      }
      if ((bVar2 & 0x20) != 0) {
        cVar1 = -1 - cVar1;
      }
      iVar4 = (*(byte *)(param_1 + 0x13) - 1) * 4;
      local_20 = *(int *)(&DAT_082b0368 + iVar4) + *(int *)(param_1 + 0x4c);
      if ((bVar2 & 0x10) != 0) {
        local_20 = local_20 + *(int *)(&DAT_082b0368 + iVar4) * -2;
      }
      local_1c = *(int *)(&DAT_082b037c + iVar4) + *(int *)(param_1 + 0x50);
      if ((bVar2 & 0x20) != 0) {
        local_1c = local_1c + *(int *)(&DAT_082b037c + iVar4) * -2;
      }
      sub_08001EAC(0xd);
      sub_08076710(&local_20,0x280,cVar1);
    }
    if (*(char *)(param_1 + 0x12) == '\0') {
      cVar1 = *(char *)(param_1 + 0x13) + '\x01';
      *(char *)(param_1 + 0x13) = cVar1;
      if (cVar1 == '\x06') {
        uVar3 = 3;
      }
      else {
        uVar3 = 1;
      }
LAB_0805eb26:
      *(undefined *)(param_1 + 0xe) = uVar3;
    }
    break;
  case 2:
    goto switchD_0805e958_caseD_2;
  case 3:
    sub_080033F0(param_1 + 0x6c,0);
    *(undefined *)(param_1 + 0x12) = 0x18;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 4:
    sub_0805DCB0(param_1,*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
      *(byte *)(param_1 + 0x44) = *(byte *)(param_1 + 0xc1);
      if (*(byte *)(param_1 + 0xc1) == 0) {
        bVar2 = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        bVar2 = *(byte *)(param_1 + 10) | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar2;
      if (*(int *)(param_1 + 0xc4) < 0x50) {
        *(undefined *)(param_1 + 0xd) = 3;
        *(undefined *)(param_1 + 0xe) = 0;
        break;
      }
      bVar2 = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
      *(byte *)(param_1 + 0x44) = bVar2;
      if (bVar2 == 0) {
        bVar2 = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        bVar2 = *(byte *)(param_1 + 10) | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar2;
      uVar3 = 0;
      *(undefined *)(param_1 + 0xd) = 0;
      goto LAB_0805eb26;
    }
    break;
  default:
    goto switchD_0805e958_caseD_5;
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
switchD_0805e958_caseD_5:
  return in_lr;
}

