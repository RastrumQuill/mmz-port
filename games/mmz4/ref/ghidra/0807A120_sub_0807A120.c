// sub_0807A120 at 0x0807A120 (thumb)

undefined4 sub_0807A120(int param_1)

{
  byte bVar1;
  undefined uVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 in_lr;
  int local_28;
  int local_24;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0xb102);
    sub_08002B10(0x151);
    uVar4 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar4 & 0x7fffffff;
    uVar2 = sub_08128A9C(uVar4 * 2 >> 0x11,6);
    *(undefined *)(param_1 + 0x13) = uVar2;
    DAT_0202e0c8 = 0x3b8;
    DAT_0202dec8 = 9;
    sub_08001D30(&DAT_08c44550,0x13700);
    sub_08002208(&DAT_08c4455c,(DAT_0202dec8 - 4) * 0x20 + 0x200);
    sub_08001D30(&DAT_08c450cc,(DAT_0202e1ee - 0x2a0) * 0x20 + 0x10000);
    sub_08002208(&DAT_08c450d8,(DAT_0202dfee - 6) * 0x20 + 0x200);
    local_28 = DAT_0202ea30 +
               *(int *)(&DAT_08859f34 +
                       (uint)(byte)(&DAT_08859f28)[(uint)*(byte *)(param_1 + 0x13) * 2] * 4) +
               -0x7800;
    local_24 = DAT_0202ea34 +
               *(int *)(&DAT_08859f44 +
                       (uint)(byte)(&DAT_08859f28)[(uint)*(byte *)(param_1 + 0x13) * 2] * 4) +
               -0x5000;
    sub_080E3CBC(&local_28,0,0);
    local_28 = DAT_0202ea30 +
               *(int *)(&DAT_08859f34 +
                       (uint)(byte)(&DAT_08859f29)[(uint)*(byte *)(param_1 + 0x13) * 2] * 4) +
               -0x7800;
    local_24 = DAT_0202ea34 +
               *(int *)(&DAT_08859f44 +
                       (uint)(byte)(&DAT_08859f29)[(uint)*(byte *)(param_1 + 0x13) * 2] * 4) +
               -0x5000;
    sub_080E3CBC(&local_28,0,0);
    sub_0800249C(0x88,0x2c0);
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  sub_080025D8(0x88);
  bVar1 = *(byte *)(param_1 + 0xf);
  if (bVar1 == 1) {
    if ((CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) == -0x4efd) &&
       (*(char *)(param_1 + 0x73) == '\x03')) {
      sub_0801CF00(param_1,0xb101);
      sub_0801CFF0(param_1);
    }
    cVar3 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar3;
    if (cVar3 != -1) {
      return in_lr;
    }
    local_28 = DAT_0202ea30 +
               *(int *)(&DAT_08859f34 +
                       (uint)(byte)(&DAT_08859f28)[(uint)*(byte *)(param_1 + 0x13) * 2] * 4) +
               -0x7800;
    local_24 = DAT_0202ea34 +
               *(int *)(&DAT_08859f44 +
                       (uint)(byte)(&DAT_08859f28)[(uint)*(byte *)(param_1 + 0x13) * 2] * 4) +
               -0x5000;
    uVar5 = sub_0809636C(&local_28,0,0);
    *(undefined4 *)(param_1 + 200) = uVar5;
    local_28 = DAT_0202ea30 +
               *(int *)(&DAT_08859f34 +
                       (uint)(byte)(&DAT_08859f29)[(uint)*(byte *)(param_1 + 0x13) * 2] * 4) +
               -0x7800;
    local_24 = DAT_0202ea34 +
               *(int *)(&DAT_08859f44 +
                       (uint)(byte)(&DAT_08859f29)[(uint)*(byte *)(param_1 + 0x13) * 2] * 4) +
               -0x5000;
    uVar5 = sub_0809636C(&local_28,0,0);
    *(undefined4 *)(param_1 + 0xcc) = uVar5;
    uVar2 = 0x78;
  }
  else {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      cVar3 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar3;
      if (cVar3 != -1) {
        return in_lr;
      }
      sub_08002624(0x88);
      *(undefined *)(param_1 + 0xd) = 3;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    sub_0801CF00(param_1,0xb103);
    sub_0801CFF0(param_1);
    uVar2 = 0x1e;
  }
  *(undefined *)(param_1 + 0x12) = uVar2;
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  return in_lr;
}

