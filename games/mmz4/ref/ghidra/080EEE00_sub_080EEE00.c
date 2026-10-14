// sub_080EEE00 at 0x080EEE00 (thumb)

undefined4 sub_080EEE00(int param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  int local_54 [15];
  int local_18;
  
  sub_08128B5C(local_54,&DAT_08129c78,0x38);
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    *(undefined *)(param_1 + 0x12) = 0x20;
    uVar5 = 0;
    do {
      local_54[14] = *(int *)(param_1 + 0x54);
      local_54[14] = local_54[uVar5 * 2] + *(int *)(param_1 + 0x54);
      local_18 = local_54[uVar5 * 2 + 1] + *(int *)(param_1 + 0x58);
      sub_080ED0DC(local_54 + 0xe,7,1,param_1);
      uVar5 = uVar5 + 1 & 0xff;
    } while (uVar5 < 4);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080eee20_caseD_1:
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == '\0') {
LAB_080ef0ec:
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
switchD_080eee20_caseD_e:
    return in_lr;
  case 1:
    goto switchD_080eee20_caseD_1;
  case 2:
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(undefined *)(param_1 + 0x13) = 1;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 3:
    cVar2 = *(char *)(param_1 + 0x13) + -1;
    *(char *)(param_1 + 0x13) = cVar2;
    if (cVar2 == '\0') {
      uVar5 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar5 & 0x7fffffff;
      *(byte *)(param_1 + 0x13) = ((byte)(uVar5 * 2 >> 0x11) & 3) + 5;
      sub_080ED0DC(param_1 + 0x54,7,0,param_1);
    }
    cVar2 = *(char *)(param_1 + 0x12);
    *(char *)(param_1 + 0x12) = cVar2 + -1;
    if (cVar2 != '\x01') {
      return in_lr;
    }
    goto LAB_080ef0ec;
  case 4:
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
    *(undefined *)(param_1 + 0x12) = 0xd0;
    *(undefined *)(param_1 + 0x13) = 1;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 5:
    bVar1 = *(byte *)(param_1 + 0x12);
    *(byte *)(param_1 + 0x12) = bVar1 + 2;
    sVar3 = FUN_081288bc((int)*(short *)((int)&DAT_08128c10 + ((bVar1 + 0x42) * 0x1000000 >> 0x17)),
                         0x12);
    iVar4 = *(int *)(param_1 + 0x5c) + (int)sVar3;
    *(int *)(param_1 + 0x5c) = iVar4;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar4;
    cVar2 = *(char *)(param_1 + 0x13) + -1;
    *(char *)(param_1 + 0x13) = cVar2;
    if (cVar2 == '\0') {
      uVar5 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar5 & 0x7fffffff;
      *(byte *)(param_1 + 0x13) = ((byte)(uVar5 * 2 >> 0x11) & 3) + 4;
      sub_080ED0DC(param_1 + 0x54,7,0,param_1);
    }
    iVar4 = *(int *)(param_1 + 100) + 1;
    *(int *)(param_1 + 100) = iVar4;
    if (iVar4 < 0x80) {
      return in_lr;
    }
    goto LAB_080ef0ec;
  case 6:
    *(undefined4 *)(param_1 + 100) = 0;
    *(undefined *)(param_1 + 0x12) = 0x80;
    *(undefined *)(param_1 + 0x13) = 1;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 7:
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x02';
    iVar4 = (int)((uint)(ushort)(&DAT_08128c10)[*(byte *)(param_1 + 0x12)] << 0x10) >> 0x14;
    *(int *)(param_1 + 0x5c) = iVar4;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar4;
    cVar2 = *(char *)(param_1 + 0x13) + -1;
    *(char *)(param_1 + 0x13) = cVar2;
    if (cVar2 == '\0') {
      uVar5 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar5 & 0x7fffffff;
      *(byte *)(param_1 + 0x13) = ((byte)(uVar5 * 2 >> 0x11) & 3) + 5;
      sub_080ED0DC(param_1 + 0x54,7,0,param_1);
    }
    iVar4 = *(int *)(param_1 + 100) + 1;
    *(int *)(param_1 + 100) = iVar4;
    if (iVar4 < 0x60) {
      return in_lr;
    }
    goto LAB_080ef0ec;
  case 8:
    *(undefined *)(param_1 + 0x12) = 0x10;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x8000;
    uVar5 = 4;
    do {
      local_54[14] = *(int *)(param_1 + 0x54);
      local_54[14] = *(int *)(param_1 + 0x54) + local_54[uVar5 * 2];
      local_18 = *(int *)(param_1 + 0x58) + local_54[uVar5 * 2 + 1];
      sub_080ED0DC(local_54 + 0xe,7,1,param_1);
      uVar5 = uVar5 + 1 & 0xff;
    } while (uVar5 < 7);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 9:
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != '\0') {
      return in_lr;
    }
    goto LAB_080ef0ec;
  case 10:
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x2000;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
    *(undefined *)(param_1 + 0x13) = 1;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 0xb:
    cVar2 = *(char *)(param_1 + 0x13) + -1;
    *(char *)(param_1 + 0x13) = cVar2;
    if (cVar2 == '\0') {
      uVar5 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar5 & 0x7fffffff;
      *(byte *)(param_1 + 0x13) = ((byte)(uVar5 * 2 >> 0x11) & 3) + 5;
      sub_080ED0DC(param_1 + 0x54,7,0,param_1);
    }
    iVar4 = *(int *)(param_1 + 100) + 1;
    *(int *)(param_1 + 100) = iVar4;
    if (iVar4 < 0x30) {
      return in_lr;
    }
    goto LAB_080ef0ec;
  case 0xc:
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 1;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 0xd:
    if (*(byte *)(param_1 + 0x12) < 0x40) {
      *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) + 1;
    }
    sVar3 = (&DAT_08128c10)[*(byte *)(param_1 + 0x12)];
    *(int *)(param_1 + 0x5c) = sVar3 * 2;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + sVar3 * 2;
    cVar2 = *(char *)(param_1 + 0x13) + -1;
    *(char *)(param_1 + 0x13) = cVar2;
    if (cVar2 == '\0') {
      uVar5 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar5 & 0x7fffffff;
      *(byte *)(param_1 + 0x13) = ((byte)(uVar5 * 2 >> 0x11) & 3) + 5;
      sub_080ED0DC(param_1 + 0x54,7,0,param_1);
    }
  default:
    goto switchD_080eee20_caseD_e;
  }
}

