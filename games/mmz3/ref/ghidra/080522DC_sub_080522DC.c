// sub_080522DC at 0x080522DC (thumb)

void sub_080522DC(int param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08007390(param_1 + 0x74,&DAT_0836009c);
    *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) | 0x800;
    sub_08017700(param_1,0x4d0f);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    sub_080041E4(*(undefined *)(param_1 + 0xb8));
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
      cVar1 = *(char *)(param_1 + 0xe) + '\x01';
LAB_08052444:
      *(char *)(param_1 + 0xe) = cVar1;
    }
    break;
  case 2:
    sub_0800471C(0xe5);
    *(undefined *)(param_1 + 0x12) = 0x28;
    sub_080BFE0C(param_1);
    pcVar2 = (char *)(param_1 + 0xb8);
    if (*pcVar2 != '\0') {
      sub_08004230(*pcVar2);
      *pcVar2 = '\0';
    }
    iVar3 = sub_08017B8C(param_1);
    sub_080040A8(0x58,(uint)(iVar3 << 0x18) >> 0x13 | 0x200);
    *pcVar2 = 'X';
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    sub_080041E4(*(undefined *)(param_1 + 0xb8));
    sub_080177F4(param_1);
    break;
  case 4:
    sub_0800471C(0x2c);
    sub_080A5634(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) & 0xfffff7ff;
    pcVar2 = (char *)(param_1 + 0xb8);
    if (*pcVar2 != '\0') {
      sub_08004230(*pcVar2);
      *pcVar2 = '\0';
    }
    iVar3 = sub_08017B8C(param_1);
    sub_080040A8(0x59,(uint)(iVar3 << 0x18) >> 0x13 | 0x200);
    *pcVar2 = 'Y';
    sub_08017700(param_1,0x4d11);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    sub_080041E4(*(undefined *)(param_1 + 0xb8));
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') break;
    cVar1 = '\0';
    *(undefined *)(param_1 + 0xd) = 0;
    goto LAB_08052444;
  default:
    break;
  }
                    /* WARNING: Could not recover jumptable at 0x0805244a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

