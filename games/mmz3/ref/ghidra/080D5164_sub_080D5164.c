// sub_080D5164 at 0x080D5164 (thumb)

undefined4 sub_080D5164(int param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  undefined4 local_18;
  int local_14;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    DAT_0202fd8a = 0x2c0;
    DAT_0202f78a = 7;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 1:
    local_18 = *(undefined4 *)(param_1 + 0x54);
    local_14 = sub_0800A104(local_18,*(undefined4 *)(param_1 + 0x58));
    local_14 = local_14 + 1;
    sub_0800A788(0x8000,1,&local_18,&DAT_0836d5d8);
    sVar2 = sub_080D0554(param_1,0xbd00,1);
    if (sVar2 == 0) {
      return in_lr;
    }
    sub_08017700(param_1,0xbd05);
    *(undefined *)(param_1 + 0x12) = 0x14;
    break;
  case 2:
    sub_080177F4(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    sub_08017700(param_1,0xbd09);
    sub_0800471C(0xf7);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_0800736C(param_1 + 0x74,&DAT_0836d538,param_1 + 0x54,1);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined *)(param_1 + 0x12) = 0x14;
    break;
  case 3:
    sub_080177F4(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    sub_08017700(param_1,0xbd0b);
    sub_0800471C(0xf7);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_0800736C(param_1 + 0x74,&DAT_0836d550,param_1 + 0x54,1);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined *)(param_1 + 0x12) = 10;
    break;
  case 4:
    sub_080177F4(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    sub_08017700(param_1,0xbd0c);
    *(undefined *)(param_1 + 0x12) = 10;
    break;
  case 5:
    sub_080177F4(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    sub_08017700(param_1,0xbd14);
    *(undefined *)(param_1 + 0x12) = 0;
    break;
  case 6:
    sub_080177F4(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + '\x01';
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\x14') {
      return in_lr;
    }
    sub_0800471C(0xf7);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_0800736C(param_1 + 0x74,&DAT_0836d568,param_1 + 0x54,1);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    break;
  case 7:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_0800736C(param_1 + 0x74,&DAT_0836d580,param_1 + 0x54,1);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 8:
    sub_080177F4(param_1);
    if ((*(uint *)(param_1 + 0x8c) & 1) == 0) {
      return in_lr;
    }
    sub_08017700(param_1,0xbd10);
    sub_0800471C(0xf6);
    *(undefined4 *)(param_1 + 0x5c) = 0x500;
    *(undefined4 *)(param_1 + 0x60) = 0xfffffec0;
    break;
  case 9:
    sub_080177F4(param_1);
    iVar4 = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar4;
    iVar3 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar3;
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
    iVar4 = sub_08009B28(iVar4,iVar3 + 0x1400);
    if (iVar4 == 0) {
      return in_lr;
    }
    iVar4 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(int *)(param_1 + 0x58) = iVar4 + -0x1400;
    *(undefined4 *)(param_1 + 0x60) = 0;
    break;
  case 10:
    sub_080177F4(param_1);
    iVar4 = *(int *)(param_1 + 0x5c) * 7 >> 3;
    *(int *)(param_1 + 0x5c) = iVar4;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) - iVar4;
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    sub_08017700(param_1,0xbd00);
    *(undefined *)(param_1 + 0x12) = 2;
    break;
  case 0xb:
    sub_080177F4(param_1);
    iVar4 = *(int *)(param_1 + 0x5c) * 7 >> 3;
    *(int *)(param_1 + 0x5c) = iVar4;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) - iVar4;
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    sub_08017700(param_1,0xbd0f);
    break;
  case 0xc:
    sub_080177F4(param_1);
    iVar4 = *(int *)(param_1 + 0x5c) * 7 >> 3;
    *(int *)(param_1 + 0x5c) = iVar4;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) - iVar4;
    if (3 < iVar4) {
      return in_lr;
    }
    break;
  case 0xd:
    sub_080177F4(param_1);
  default:
    goto switchD_080d517a_caseD_e;
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080d517a_caseD_e:
  return in_lr;
}

