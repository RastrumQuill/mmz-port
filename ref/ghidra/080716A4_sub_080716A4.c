// sub_080716A4 at 0x080716A4 (thumb)

undefined4 sub_080716A4(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_0800561C(param_1 + 0x74,&DAT_082b1238);
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined *)(param_1 + 0x12) = 0x1e;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    iVar4 = *(int *)(DAT_0202286c + 0x4c);
    iVar3 = iVar4 - *(int *)(param_1 + 0x4c);
    *(bool *)(param_1 + 0x44) = 0 < iVar3;
    if (iVar4 == *(int *)(param_1 + 0x4c) || iVar3 < 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    sub_080706E4(param_1,0,*(undefined4 *)(param_1 + 0x58));
    iVar4 = *(int *)(param_1 + 0x58) + 0x10;
    *(int *)(param_1 + 0x58) = iVar4;
    if (0x1c0 < iVar4) {
      *(undefined4 *)(param_1 + 0x58) = 0x1c0;
    }
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == '\0') {
      *(undefined *)(param_1 + 0xd) = 9;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    break;
  case 2:
    uVar5 = 10;
    goto LAB_080717cc;
  case 3:
  case 7:
    goto switchD_080716bc_caseD_3;
  case 4:
    sub_080033F0(param_1 + 0x6c,0xb);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    sub_08070660(param_1,0,*(undefined4 *)(param_1 + 0x58));
    iVar4 = *(int *)(param_1 + 0x58) + 0x40;
    *(int *)(param_1 + 0x58) = iVar4;
    if (0x700 < iVar4) {
      *(undefined4 *)(param_1 + 0x58) = 0x700;
    }
    cVar2 = sub_08070640(param_1);
    if (cVar2 != '\0') {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    break;
  case 6:
    sub_0800561C(param_1 + 0x74,&DAT_082b121c);
    uVar5 = 0xf;
LAB_080717cc:
    sub_080033F0(param_1 + 0x6c,uVar5);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_080716bc_caseD_3:
    sub_080706E4(param_1,0,*(undefined4 *)(param_1 + 0x58));
    iVar4 = *(int *)(param_1 + 0x58) + 0x10;
    *(int *)(param_1 + 0x58) = iVar4;
    if (0x1c0 < iVar4) {
      *(undefined4 *)(param_1 + 0x58) = 0x1c0;
    }
    sub_08003458(param_1 + 0x6c);
    *(undefined *)(param_1 + 0x46) =
         *(undefined *)
          (*(char *)(param_1 + 0x71) * 4 +
          *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    return in_lr;
  case 8:
    sub_080033F0(param_1 + 0x6c,0xb);
    *(undefined *)(param_1 + 0x12) = 0x1e;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 9:
    sub_080706E4(param_1,0,*(undefined4 *)(param_1 + 0x58));
    iVar4 = *(int *)(param_1 + 0x58) + 0x10;
    *(int *)(param_1 + 0x58) = iVar4;
    if (0x1c0 < iVar4) {
      *(undefined4 *)(param_1 + 0x58) = 0x1c0;
    }
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == '\0') {
      *(undefined *)(param_1 + 0xd) = 0xb;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    break;
  default:
    goto switchD_080716bc_caseD_a;
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
switchD_080716bc_caseD_a:
  return in_lr;
}

