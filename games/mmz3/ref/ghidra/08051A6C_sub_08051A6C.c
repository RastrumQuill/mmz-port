// sub_08051A6C at 0x08051A6C (thumb)

undefined4 sub_08051A6C(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  undefined4 local_14;
  int local_10;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_0800471C(0x11a);
    local_14 = *(undefined4 *)(param_1 + 0x54);
    local_10 = *(int *)(param_1 + 0x58) + -0x1000;
    iVar2 = sub_080BCE88(&local_14,1,0);
    *(int *)(param_1 + 0x2c) = iVar2;
    if (iVar2 != 0) {
      *(undefined *)(iVar2 + 0x7c) = 0;
      *(undefined *)(iVar2 + 0x74) = 0;
      *(undefined *)(iVar2 + 0x75) = 0;
      *(undefined *)(iVar2 + 0x76) = 0;
      *(undefined4 *)(iVar2 + 0x78) = 0;
    }
    *(undefined *)(param_1 + 0x12) = 0x32;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    iVar2 = -*(int *)(param_1 + 0x5c);
    iVar4 = iVar2 + 0x5800;
    if (iVar4 < 0) {
      iVar4 = iVar2 + 0x581f;
    }
    iVar4 = *(int *)(param_1 + 0x5c) + (iVar4 >> 5);
    *(int *)(param_1 + 0x5c) = iVar4;
    iVar2 = *(int *)(param_1 + 0x2c);
    if (iVar2 != 0) {
LAB_08051b50:
      iVar3 = iVar4;
      if (iVar4 < 0) {
        iVar3 = iVar4 + 7;
      }
      *(uint *)(iVar2 + 0x78) = iVar4 + (iVar3 >> 3) * (*(byte *)(param_1 + 0x12) & 1);
    }
    break;
  case 2:
    *(undefined *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0xbc);
    sub_08017700(param_1,0x4d00);
    *(undefined *)(param_1 + 0x12) = 0x1e;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    iVar2 = *(int *)(param_1 + 0x2c);
    if (iVar2 != 0) {
      iVar4 = *(int *)(param_1 + 0x5c);
      goto LAB_08051b50;
    }
    break;
  case 4:
    iVar2 = sub_08017B8C(param_1);
    sub_080040A8(0x52,(uint)(iVar2 << 0x18) >> 0x13 | 0x200);
    *(undefined *)(param_1 + 0xb8) = 0x52;
    sub_080041E4();
    *(undefined *)(param_1 + 0x12) = 0x60;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    iVar2 = *(int *)(param_1 + 0x5c) + -0xa0;
    *(int *)(param_1 + 0x5c) = iVar2;
    if (iVar2 < 0) {
      *(undefined4 *)(param_1 + 0x5c) = 0;
    }
    if (*(int *)(param_1 + 0x2c) != 0) {
      iVar4 = *(int *)(param_1 + 0x5c);
      iVar2 = iVar4;
      if (iVar4 < 0) {
        iVar2 = iVar4 + 7;
      }
      *(uint *)(*(int *)(param_1 + 0x2c) + 0x78) =
           iVar4 + (iVar2 >> 3) * (*(byte *)(param_1 + 0x12) & 1);
    }
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    return in_lr;
  case 6:
    *(undefined *)(*(int *)(param_1 + 0x2c) + 0x77) = 1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 7:
    cVar1 = sub_080041E4(*(undefined *)(param_1 + 0xb8));
    if (cVar1 == '\x03') {
      *(undefined *)(param_1 + 0xd) = 3;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    sub_080177F4(param_1);
  default:
    goto switchD_08051a82_caseD_8;
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080177F4(param_1);
switchD_08051a82_caseD_8:
  return in_lr;
}

