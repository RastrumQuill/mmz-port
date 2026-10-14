// sub_08054BD4 at 0x08054BD4 (thumb)

undefined4 sub_08054BD4(int param_1)

{
  undefined uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(undefined4 *)(param_1 + 0xb8) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    uVar1 = sub_080FE124(0xaaa);
    *(undefined *)(param_1 + 0x12) = uVar1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 0x18;
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == '\0') {
LAB_08054c6a:
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    break;
  case 2:
    uVar3 = sub_080FE124(0xaaa);
    *(uint *)(param_1 + 0x5c) = (uVar3 & 0xffff) * 0x18;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    uVar3 = *(uint *)(param_1 + 0xb8) + *(int *)(param_1 + 0x5c);
    *(uint *)(param_1 + 0xb8) = uVar3;
    if (0x307ff < uVar3) goto LAB_08054c6a;
    break;
  case 4:
    uVar1 = sub_080FE124(0xaaa);
    *(undefined *)(param_1 + 0x12) = uVar1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    iVar4 = *(int *)(param_1 + 0x5c) + -0x18;
    *(int *)(param_1 + 0x5c) = iVar4;
    *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + iVar4;
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == '\0') {
      *(undefined *)(param_1 + 0xd) = 4;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    sub_080177F4(param_1);
  default:
    goto switchD_08054be6_caseD_6;
  }
  sub_080177F4(param_1);
switchD_08054be6_caseD_6:
  if (*(char *)(param_1 + 0xbc) == '\0') {
    cVar2 = (char)((uint)*(undefined4 *)(param_1 + 0xb8) >> 8);
  }
  else {
    cVar2 = -(char)((uint)*(undefined4 *)(param_1 + 0xb8) >> 8);
  }
  *(char *)(param_1 + 0x24) = cVar2;
  return in_lr;
}

