// sub_0807A41C at 0x0807A41C (thumb)

undefined4 sub_0807A41C(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  undefined4 in_lr;
  int local_2c;
  undefined4 local_28;
  uint local_24;
  
  local_24 = (uint)*(byte *)(param_1 + 0xe);
  if (local_24 == 0) {
    sub_0801CF00(param_1,0xb102);
    sub_08001D30(&DAT_08c45090,(DAT_0202e1e8 - 0x2a0) * 0x20 + 0x10000);
    sub_08002208(&DAT_08c4509c,(DAT_0202dfe8 - 6) * 0x20 + 0x200);
    sub_08001D30(&DAT_08c450a4,(DAT_0202e1ea - 0x2b0) * 0x20 + 0x10000);
    sub_08002208(&DAT_08c450b0,(DAT_0202dfea - 6) * 0x20 + 0x200);
    *(undefined *)(param_1 + 0x12) = 0x9b;
    sub_08002B10(0x1a8);
    *(undefined *)(param_1 + 0xf) = (undefined)local_24;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  bVar1 = *(byte *)(param_1 + 0xf);
  if (bVar1 == 1) {
    if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != -0x4efd) {
      return in_lr;
    }
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    sub_0801CF00(param_1,0xb101);
    sub_0801CFF0(param_1);
    *(undefined *)(param_1 + 0x12) = 0x60;
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) {
      return in_lr;
    }
    if (*(byte *)(param_1 + 0x12) < 0x24) {
      *(undefined *)(param_1 + 0xd6) = 1;
    }
    else {
      if (((DAT_0202e918 & 8) == 0) &&
         (*(int *)(DAT_0202dbf0 + 0x54) < *(int *)(param_1 + 0x54) + -0x2000)) {
        *(int *)(DAT_0202dbf0 + 0x1bc) = *(int *)(DAT_0202dbf0 + 0x1bc) + 0x100;
      }
      if ((*(byte *)(param_1 + 0x12) & 3) == 0) {
        if ((*(byte *)(param_1 + 0x12) >> 2 & 1) == 0) {
          uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
          DAT_0202dc38 = uVar3 & 0x7fffffff;
          cVar2 = sub_08128A9C(uVar3 * 2 >> 0x11,0x30);
          cVar2 = -cVar2;
        }
        else {
          uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
          DAT_0202dc38 = uVar3 & 0x7fffffff;
          cVar2 = sub_08128A9C(uVar3 * 2 >> 0x11,0x30);
        }
        sub_080E3D14(param_1,1,cVar2 + -0x80);
      }
    }
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) {
      return in_lr;
    }
    sub_0801CF00(param_1,0xb103);
    sub_08002B10(0x152);
    sub_0801CFF0(param_1);
    local_2c = *(int *)(param_1 + 0x54) + -0x800;
    local_28 = *(undefined4 *)(param_1 + 0x58);
    sub_080AE358(param_1,&local_2c,0,0);
    sub_080AE358(param_1,&local_2c,0,1);
    sub_080AE358(param_1,&local_2c,0,2);
    *(undefined *)(param_1 + 0x12) = 0x3c;
  }
  else {
    if (bVar1 != 2) {
      if (bVar1 != 3) {
        return in_lr;
      }
      if (*(char *)(param_1 + 0xd7) != '\0') {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xd) = 3;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0xd6) = 0;
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  return in_lr;
}

