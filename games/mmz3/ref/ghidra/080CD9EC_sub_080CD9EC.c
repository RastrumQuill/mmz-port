// sub_080CD9EC at 0x080CD9EC (thumb)

undefined4 sub_080CD9EC(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        iVar6 = sub_08017B8C(param_1);
        sub_080040A8(0x46,(uint)(iVar6 << 0x18) >> 0x13 | 0x200);
        *(char *)(param_1 + 0x25) = *(char *)(param_1 + 0x12) * '\x04' + '\x16';
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
        *(undefined4 *)(param_1 + 0x60) = 0xfffffd00;
        *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) | 0xc;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      iVar3 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      *(int *)(param_1 + 0x58) = iVar3;
      iVar6 = *(int *)(param_1 + 0xb4) + -0x1c00;
      if (iVar3 < iVar6) {
        *(int *)(param_1 + 0x58) = iVar6;
        *(undefined *)(param_1 + 0xd) = 1;
        *(undefined *)(param_1 + 0xe) = 0;
      }
      sub_080041E4(0x46);
      sub_080177F4(param_1);
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
    *(undefined **)(param_1 + 0x30) = &DAT_0836ca00;
    *(undefined2 *)(param_1 + 0x26) = 1;
    if (*(char *)(param_1 + 0x13) == '\0') {
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(DAT_0202f5c0 + 0x54);
      if (*(char *)(param_1 + 0x12) == '\0') {
        sub_08017700(param_1,0x4b00);
        iVar3 = *(int *)(param_1 + 0x54);
        iVar5 = -0x3000;
      }
      else {
        sub_08017700(param_1,0x4b01);
        iVar3 = *(int *)(param_1 + 0x54);
        iVar5 = 0x3000;
      }
      *(int *)(param_1 + 0x54) = iVar3 + iVar5;
      *(int *)(param_1 + 0xb8) = iVar3;
    }
    else {
      if (*(char *)(param_1 + 0x12) == '\0') {
        sub_08017700(param_1,0x4b00);
        iVar3 = *(int *)(iVar6 + 0xb8);
        iVar5 = -0x8800;
      }
      else {
        sub_08017700(param_1,0x4b01);
        iVar3 = *(int *)(iVar6 + 0xb8);
        iVar5 = 0x8800;
      }
      *(int *)(param_1 + 0x54) = iVar3 + iVar5;
      *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(iVar6 + 0xb8);
    }
    *(undefined *)(param_1 + 0x13) = 0xc;
    uVar4 = sub_0800A104(*(undefined4 *)(iVar6 + 0xb8),*(undefined4 *)(iVar6 + 0xbc));
    *(undefined4 *)(param_1 + 0x58) = uVar4;
    *(undefined4 *)(param_1 + 0xb4) = uVar4;
    sub_080BEF04(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),0);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x2000;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  cVar2 = *(char *)(param_1 + 0x13) + -1;
  *(char *)(param_1 + 0x13) = cVar2;
  if (cVar2 == '\0') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

