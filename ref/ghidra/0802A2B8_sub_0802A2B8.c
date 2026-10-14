// sub_0802A2B8 at 0x0802A2B8 (thumb)

undefined4 sub_0802A2B8(int param_1)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08029778(param_1,4);
    sub_0800561C(param_1 + 0x74,&DAT_082accd4);
    *(undefined *)(param_1 + 0xb9) = 2;
    *(undefined *)(param_1 + 0xbb) = 1;
    sub_08089880((undefined *)(param_1 + 0xbb),param_1 + 0x4c);
    *(undefined4 *)(param_1 + 0x54) = 0x200;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    sub_080297C0(param_1);
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0x54);
    sub_0801412C(1,param_1 + 0x4c);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) {
      return in_lr;
    }
    sub_0800561C(param_1 + 0x74,&DAT_082acc9c);
    *(undefined *)(param_1 + 0xbb) = 0;
    sub_08029778(param_1,3);
    *(undefined *)(param_1 + 0xb9) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 2:
    sub_080297C0(param_1);
    sub_0801412C(1,param_1 + 0x4c);
    iVar3 = *(int *)(param_1 + 0x54) * 7 >> 3;
    *(int *)(param_1 + 0x54) = iVar3;
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) - iVar3;
    if (iVar3 != 0) {
      return in_lr;
    }
    sub_08029778(param_1,1);
    *(undefined *)(param_1 + 0xb9) = 1;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    sub_080297C0(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    sub_08029778(param_1,2);
    sub_0800561C(param_1 + 0x74,&DAT_082accb8);
    break;
  case 4:
    sub_080297C0(param_1);
    if (*(char *)(param_1 + 0x71) != '\t') {
      return in_lr;
    }
    sub_08076EE8(param_1,(undefined *)(param_1 + 0xbd),(undefined *)(param_1 + 0xba));
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(undefined *)(param_1 + 0xba) = 0;
    *(undefined *)(param_1 + 0xbd) = 1;
    break;
  case 5:
    iVar3 = *(byte *)(param_1 + 0x12) - 1;
    *(char *)(param_1 + 0x12) = (char)iVar3;
    *(char *)(param_1 + 0xba) = (char)(-((short)(&DAT_080c8ea4)[iVar3 * 4] + 0x100) >> 4);
    sub_080297C0(param_1);
    if (*(char *)(param_1 + 0x12) != '\0') {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 0x14;
    *(undefined *)(param_1 + 0xbd) = 2;
    sub_08001EAC(0x2f);
    break;
  case 6:
    sub_080297C0(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 0x40;
    *(undefined4 *)(param_1 + 0x54) = 0x30;
    uVar2 = sub_08001EAC(0xf);
    *(undefined2 *)(param_1 + 0xbe) = uVar2;
    *(undefined *)(param_1 + 0xbd) = 3;
    break;
  case 7:
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0x54);
    *(char *)(param_1 + 0xba) =
         (char)((short)(&DAT_080c8ea4)[(uint)*(byte *)(param_1 + 0x12) * 2] + 0x100 >> 4) + -0x20;
    sub_080297C0(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0x54) = 0;
    sub_08029778(param_1,3);
    sub_08001EE8((int)*(short *)(param_1 + 0xbe));
    *(undefined *)(param_1 + 0xbd) = 0;
    break;
  case 8:
    sub_080297C0(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    sub_08029778(param_1,4);
    *(undefined *)(param_1 + 0xb9) = 2;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 9:
    sub_080297C0(param_1);
    if (*(char *)(param_1 + 0x73) != '\x04') {
      return in_lr;
    }
    *(undefined *)(param_1 + 0xbb) = 1;
    sub_08089880((undefined *)(param_1 + 0xbb),param_1 + 0x4c);
    sub_08001EAC(0x12);
    sub_0800561C(param_1 + 0x74,&DAT_082accd4);
    sub_0801412C(3,param_1 + 0x4c);
    *(undefined *)(param_1 + 0x12) = 0x3f;
    break;
  case 10:
    sub_080297C0(param_1);
    sub_0801412C(1,param_1 + 0x4c);
    if (*(int *)(param_1 + 0x54) < 0x200) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x20;
    }
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0x54);
    return in_lr;
  default:
    goto switchD_0802a2cc_caseD_b;
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0802a2cc_caseD_b:
  return in_lr;
}

