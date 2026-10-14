// sub_080CDB88 at 0x080CDB88 (thumb)

undefined4 sub_080CDB88(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x2c);
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        *(undefined *)(param_1 + 0x13) = 0;
        *(uint *)(param_1 + 0x5c) = (uint)*(byte *)(param_1 + 0x12) * -0x780 + 0x3c0;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) goto LAB_080cdca6;
      *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
      if (((*(char *)(param_1 + 0x12) == '\x01') &&
          (cVar2 = sub_080FE4D8(*(undefined *)(param_1 + 0x13),3), cVar2 == '\0')) &&
         (0x2000 < *(int *)(param_1 + 0x54) - *(int *)(iVar4 + 0x54))) {
        sub_080BEE5C(param_1);
      }
      iVar4 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
      *(int *)(param_1 + 0x54) = iVar4;
      if (*(char *)(param_1 + 0x12) == '\0') {
        iVar3 = *(int *)(param_1 + 0xb8) + -0x300;
        if (iVar3 < iVar4) {
          *(int *)(param_1 + 0x54) = iVar3;
          *(undefined *)(param_1 + 0xd) = 2;
          *(undefined *)(param_1 + 0xe) = 0;
        }
      }
      else {
        iVar3 = *(int *)(param_1 + 0xb8) + 0x300;
        if (iVar4 < iVar3) {
          *(int *)(param_1 + 0x54) = iVar3;
          *(undefined *)(param_1 + 0xd) = 2;
          *(undefined *)(param_1 + 0xe) = 0;
        }
      }
      sub_080041E4(0x47);
      sub_080177F4(param_1);
      goto LAB_080cdca6;
    }
    if (bVar1 != 0) goto LAB_080cdca6;
    sub_0800471C(0x80);
    sub_08004230(0x46);
    iVar4 = sub_08017B8C(param_1);
    sub_080040A8(0x47,(uint)(iVar4 << 0x18) >> 0x13 | 0x200);
    *(undefined *)(param_1 + 0x13) = 0x10;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if ((*(char *)(param_1 + 0x12) == '\x01') &&
     (cVar2 = sub_080FE4D8(*(undefined *)(param_1 + 0x13),3), cVar2 == '\0')) {
    sub_080BEE5C(param_1);
  }
  cVar2 = *(char *)(param_1 + 0x13) + -1;
  *(char *)(param_1 + 0x13) = cVar2;
  if (cVar2 == '\0') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080041E4(0x47);
LAB_080cdca6:
  if (*(char *)(param_1 + 0x12) == '\x01') {
    sub_080CD818(param_1);
  }
  return in_lr;
}

