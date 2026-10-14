// sub_08053A64 at 0x08053A64 (thumb)

undefined4 sub_08053A64(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  undefined4 local_14;
  int local_10;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_0800561C(param_1 + 0x74,&DAT_082af644);
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    sub_080033F0(param_1 + 0x6c,2);
    *(undefined *)(param_1 + 0x12) = 8;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_08053a7e_caseD_2:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
      cVar1 = *(char *)(param_1 + 0xe) + '\x01';
LAB_08053b5a:
      *(char *)(param_1 + 0xe) = cVar1;
    }
    break;
  case 2:
    goto switchD_08053a7e_caseD_2;
  case 3:
    sub_080033F0(param_1 + 0x6c,3);
    *(undefined *)(param_1 + 0x12) = 0x10;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 4:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\x04') {
      local_14 = *(undefined4 *)(param_1 + 0x4c);
      local_10 = *(int *)(param_1 + 0x50) + -0x1400;
      iVar2 = (uint)*(byte *)(param_1 + 0x13) * 4;
      sub_08077998(&local_14,
                   *(int *)(&DAT_082af6e4 + iVar2) -
                   (*(byte *)(param_1 + 10) >> 4 & 1) * *(int *)(&DAT_082af6e4 + iVar2) * 2,
                   *(undefined4 *)(&DAT_082af6f0 + iVar2));
      sub_08001EAC(0x7c);
    }
    if (*(char *)(param_1 + 0x12) == '\0') {
      cVar1 = *(char *)(param_1 + 0x13) + '\x01';
      *(char *)(param_1 + 0x13) = cVar1;
      if (cVar1 == '\x03') {
        *(undefined *)(param_1 + 0xd) = 3;
        *(undefined *)(param_1 + 0xe) = 0;
        break;
      }
      cVar1 = '\x01';
      goto LAB_08053b5a;
    }
    break;
  default:
    goto switchD_08053a7e_caseD_5;
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
switchD_08053a7e_caseD_5:
  return in_lr;
}

