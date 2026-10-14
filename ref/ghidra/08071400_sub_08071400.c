// sub_08071400 at 0x08071400 (thumb)

undefined4 sub_08071400(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_0800561C(param_1 + 0x74,&DAT_082b121c);
    sub_080033F0(param_1 + 0x6c,7);
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    sub_08070660(param_1,0,*(undefined4 *)(param_1 + 0x58));
    iVar2 = *(int *)(param_1 + 0x58) + 0x40;
    *(int *)(param_1 + 0x58) = iVar2;
    if (0x700 < iVar2) {
      *(undefined4 *)(param_1 + 0x58) = 0x700;
    }
    if (*(char *)(param_1 + 0x73) == '\x03') {
LAB_080714bc:
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    break;
  case 2:
    sub_080033F0(param_1 + 0x6c,8);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    sub_08070660(param_1,0,*(undefined4 *)(param_1 + 0x58));
    iVar2 = *(int *)(param_1 + 0x58) + 0x40;
    *(int *)(param_1 + 0x58) = iVar2;
    if (0x700 < iVar2) {
      *(undefined4 *)(param_1 + 0x58) = 0x700;
    }
    cVar1 = sub_08070640(param_1);
    if (cVar1 != '\0') goto LAB_080714bc;
    break;
  case 4:
    sub_080033F0(param_1 + 0x6c,0xe);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    sub_08003458(param_1 + 0x6c);
    *(undefined *)(param_1 + 0x46) =
         *(undefined *)
          (*(char *)(param_1 + 0x71) * 4 +
          *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
    sub_08070660(param_1,0,*(undefined4 *)(param_1 + 0x58));
    iVar2 = *(int *)(param_1 + 0x58) + 0x40;
    *(int *)(param_1 + 0x58) = iVar2;
    if (0x700 < iVar2) {
      *(undefined4 *)(param_1 + 0x58) = 0x700;
    }
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  default:
    goto switchD_08071418_caseD_6;
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
switchD_08071418_caseD_6:
  return in_lr;
}

