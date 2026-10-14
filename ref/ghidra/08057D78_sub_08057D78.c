// sub_08057D78 at 0x08057D78 (thumb)

undefined4 sub_08057D78(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x20);
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08048A54(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_080055FC(param_1 + 0x74,&DAT_082af99c,param_1 + 0x4c,0x30);
    *(int *)(param_1 + 0xb4) = param_1;
    *(undefined4 *)(param_1 + 0xb0) = 0x8056959;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_08057d8c_caseD_1:
    sub_0800561C(param_1 + 0x74,&DAT_082af99c);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_08057d8c_caseD_2:
    if ((*(uint *)(iVar2 + 0xbc) & 0x80) != 0) {
      cVar1 = *(char *)(param_1 + 0xe) + '\x01';
LAB_08057e28:
      *(char *)(param_1 + 0xe) = cVar1;
    }
switchD_08057d8c_caseD_5:
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar2 + 0x4c);
    *(int *)(param_1 + 0x50) = *(int *)(iVar2 + 0x50) + -0x900;
    *(undefined *)(param_1 + 0x1f) = *(undefined *)(iVar2 + 0x13);
    sub_08003458(param_1 + 0x6c);
    *(undefined *)(param_1 + 0x46) =
         *(undefined *)
          (*(char *)(param_1 + 0x71) * 4 +
          *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
    return in_lr;
  case 1:
    goto switchD_08057d8c_caseD_1;
  case 2:
    goto switchD_08057d8c_caseD_2;
  case 3:
    sub_0800561C(param_1 + 0x74,&DAT_082af9b8);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 4:
    if ((*(uint *)(iVar2 + 0xbc) & 0x80) != 0) goto switchD_08057d8c_caseD_5;
    cVar1 = '\x01';
    goto LAB_08057e28;
  default:
    goto switchD_08057d8c_caseD_5;
  }
}

