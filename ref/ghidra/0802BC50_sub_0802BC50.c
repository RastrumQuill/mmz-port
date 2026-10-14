// sub_0802BC50 at 0x0802BC50 (thumb)

undefined4 sub_0802BC50(int param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  if (((*(ushort *)(param_1 + 0x90) & 1) != 0) && (*(char *)(param_1 + 0xd6) != '\0')) {
    *(undefined *)(param_1 + 0xd) = 10;
    *(undefined *)(param_1 + 0xe) = 0;
    sub_0802CBD8(param_1);
    return in_lr;
  }
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_0800561C(param_1 + 0x74,&DAT_082ace30);
    bVar1 = *(int *)(param_1 + 0x4c) < *(int *)(DAT_0202286c + 0x4c);
    *(bool *)(param_1 + 0x44) = bVar1;
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    sub_08029778(param_1,1);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    sub_080297C0(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    break;
  case 2:
    sub_08001EAC(0x25);
    sub_080596B8(param_1,4,8);
    *(uint *)(param_1 + 0xcc) = *(uint *)(param_1 + 0xcc) | 8;
    sub_08029778(param_1,2);
    *(undefined4 *)(param_1 + 0x54) = 0xfffffd40;
    uVar5 = 0xfffffd40;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      uVar5 = 0x2c0;
    }
    *(undefined4 *)(param_1 + 0x54) = uVar5;
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    bVar2 = *(char *)(param_1 + 0x12) + 1;
    *(byte *)(param_1 + 0x12) = bVar2;
    if ((bVar2 & 3) == 0) {
      local_14 = *(int *)(param_1 + 0x4c) + 0x2800;
      if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
        local_14 = *(int *)(param_1 + 0x4c) + -0x2800;
      }
      uVar4 = DAT_02022890 * 0x343fd + 0x269ec3;
      DAT_02022890 = uVar4 & 0x7fffffff;
      local_10 = *(int *)(param_1 + 0x50) + ((uVar4 * 2 >> 0x11 & 3) - 4) * -0x100;
      sub_0808827C(3,&local_14);
    }
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
    cVar3 = sub_0802B670(param_1);
    if (cVar3 == '\x01') {
LAB_0802be04:
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    else if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      if (*(int *)(param_1 + 0x4c) - *(int *)(DAT_0202286c + 0x4c) < -0x2000) goto LAB_0802be04;
    }
    else if (0x2000 < *(int *)(param_1 + 0x4c) - *(int *)(DAT_0202286c + 0x4c)) goto LAB_0802be04;
    sub_080297C0(param_1);
    break;
  case 4:
    *(uint *)(param_1 + 0xcc) = *(uint *)(param_1 + 0xcc) & 0xfffffff7;
    sub_08029778(param_1,1);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    sub_080297C0(param_1);
  default:
    break;
  }
  return in_lr;
}

