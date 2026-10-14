// sub_08049248 at 0x08049248 (thumb)

undefined4 sub_08049248(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 in_lr;
  undefined4 local_14;
  int local_10;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08017700(param_1,0xa701);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0804925e_caseD_1:
    sub_080177F4(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) != 0) {
LAB_08049468:
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
switchD_0804925e_caseD_c:
    return in_lr;
  case 1:
    goto switchD_0804925e_caseD_1;
  case 2:
    sub_08017700(param_1,0xa702);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    sub_080177F4(param_1);
    if ((*(uint *)(param_1 + 0x70) & 0xffff00) == 0x10600) {
      sub_0800471C(0x5b);
    }
LAB_0804945e:
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    goto LAB_08049468;
  case 4:
    sub_08017700(param_1,0xa703);
    local_14 = *(undefined4 *)(param_1 + 0x54);
    local_10 = *(int *)(param_1 + 0x58) + -0x2000;
    iVar3 = sub_080BCE88(&local_14,1,0);
    *(int *)(param_1 + 0x2c) = iVar3;
    if (iVar3 != 0) {
      *(undefined *)(iVar3 + 0x74) = 0x10;
      *(undefined *)(iVar3 + 0x75) = 6;
      *(undefined *)(iVar3 + 0x76) = 0x18;
      *(undefined4 *)(iVar3 + 0x78) = 0;
    }
    *(undefined *)(param_1 + 0x12) = 0x1e;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    iVar3 = -*(int *)(param_1 + 0x5c);
    iVar5 = iVar3 + 0x4000;
    if (iVar5 < 0) {
      iVar5 = iVar3 + 0x400f;
    }
    iVar3 = *(int *)(param_1 + 0x5c) + (iVar5 >> 4);
    *(int *)(param_1 + 0x5c) = iVar3;
    if (*(int *)(param_1 + 0x2c) != 0) {
      iVar5 = iVar3;
      if (iVar3 < 0) {
        iVar5 = iVar3 + 7;
      }
      *(uint *)(*(int *)(param_1 + 0x2c) + 0x78) =
           iVar3 + (iVar5 >> 3) * (*(byte *)(param_1 + 0x12) & 1);
    }
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == '\0') {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    sub_080177F4(param_1);
    return in_lr;
  case 6:
    sub_08017700(param_1,0xa704);
    iVar3 = sub_08017B8C(param_1);
    sub_080040A8(0x29,(uint)(iVar3 << 0x18) >> 0x13 | 0x200);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 7:
    if (*(int *)(param_1 + 0x2c) != 0) {
      iVar5 = *(int *)(param_1 + 0x5c);
      iVar3 = iVar5;
      if (iVar5 < 0) {
        iVar3 = iVar5 + 7;
      }
      *(uint *)(*(int *)(param_1 + 0x2c) + 0x78) =
           iVar5 + (iVar3 >> 3) * (*(byte *)(param_1 + 0x12) & 1);
    }
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
    uVar4 = 0x29;
LAB_08049454:
    sub_080041E4(uVar4);
    sub_080177F4(param_1);
    goto LAB_0804945e;
  case 8:
    sub_08017700(param_1,0xa705);
    sub_08004230(0x29);
    iVar3 = sub_08017B8C(param_1);
    sub_080040A8(0x2a,(uint)(iVar3 << 0x18) >> 0x13 | 0x200);
    sub_0800471C(0x45);
    sub_080BD5C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 9:
    iVar5 = *(int *)(param_1 + 0x5c);
    iVar3 = -iVar5;
    if (0 < iVar5) {
      iVar3 = iVar3 + 0xf;
    }
    iVar5 = iVar5 + (iVar3 >> 4);
    *(int *)(param_1 + 0x5c) = iVar5;
    if (*(int *)(param_1 + 0x2c) != 0) {
      iVar3 = iVar5;
      if (iVar5 < 0) {
        iVar3 = iVar5 + 7;
      }
      *(uint *)(*(int *)(param_1 + 0x2c) + 0x78) =
           iVar5 + (iVar3 >> 3) * (*(byte *)(param_1 + 0x12) & 1);
    }
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
    uVar4 = 0x2a;
    goto LAB_08049454;
  case 10:
    if (*(int *)(param_1 + 0x2c) != 0) {
      *(undefined *)(*(int *)(param_1 + 0x2c) + 0x77) = 1;
    }
    sub_08004230(0x2a);
    sub_08017700(param_1,0xa706);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0xb:
    sub_080177F4(param_1);
    bVar1 = DAT_020301b2 & 1;
    if ((DAT_020301b2 & 1) == 0) {
      *(undefined *)(param_1 + 0xd) = 1;
      *(byte *)(param_1 + 0xe) = bVar1;
    }
  default:
    goto switchD_0804925e_caseD_c;
  }
}

