// sub_0802CA30 at 0x0802CA30 (thumb)

undefined4 sub_0802CA30(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_0800561C(param_1 + 0x74,&DAT_082acdf8);
    sub_08029778(param_1,0x10);
    *(undefined *)(param_1 + 0x12) = 8;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
      sub_0802D520(param_1);
    }
    sub_080297C0(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    break;
  case 2:
    sub_080596B8(param_1,6,0x20);
    *(uint *)(param_1 + 0xcc) = *(uint *)(param_1 + 0xcc) | 0x20;
    sub_08029778(param_1,0x11);
    uVar2 = sub_080C8AD0(*(int *)(param_1 + 200) - *(int *)(param_1 + 0x4c),0x18);
    *(undefined4 *)(param_1 + 0x54) = uVar2;
    *(undefined4 *)(param_1 + 0x60) = 0x55;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    iVar3 = sub_08008360();
    if (iVar3 < *(int *)(param_1 + 0x50)) {
      *(int *)(param_1 + 0x50) = iVar3;
    }
    if (*(char *)(param_1 + 0x73) == '\x03') {
LAB_0802cb8e:
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
LAB_0802cb94:
    sub_080297C0(param_1);
    break;
  case 4:
    *(uint *)(param_1 + 0xcc) = *(uint *)(param_1 + 0xcc) & 0xffffffdf;
    sub_08001EAC(0x25);
    sub_08029778(param_1,0x12);
    *(undefined *)(param_1 + 0x12) = 8;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    iVar3 = sub_08008360();
    if (iVar3 < *(int *)(param_1 + 0x50)) {
      *(int *)(param_1 + 0x50) = iVar3;
      iVar3 = param_1 + 0x4c;
      sub_0801412C(8,iVar3);
      sub_08077F60(iVar3,0);
      sub_08077F60(iVar3,1);
      sub_08001EAC(0x21);
      goto LAB_0802cb8e;
    }
    goto LAB_0802cb94;
  case 6:
    sub_080297C0(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
      sub_08077F60(param_1 + 0x4c,0);
      sub_08077F60(param_1 + 0x4c,1);
    }
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  default:
    break;
  }
  return in_lr;
}

