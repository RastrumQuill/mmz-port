// sub_0803DEA8 at 0x0803DEA8 (thumb)

undefined4 sub_0803DEA8(int param_1)

{
  byte bVar1;
  char cVar2;
  uint *puVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08017700(param_1,0xa00c);
    sub_080177F4(param_1);
    *(uint *)(param_1 + 0xc0) = *(uint *)(param_1 + 0xc0) & 0xfffffffd;
    *(undefined *)(param_1 + 0x12) = 0x78;
    *(undefined *)(param_1 + 200) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    if ((*(byte *)(param_1 + 0x12) & 3) == 0) {
      sub_0803D6C8(param_1,0,1);
    }
    if (*(char *)(param_1 + 0x12) == '\0') {
      *(undefined4 *)(param_1 + 0xc4) = 0;
      *(undefined *)(param_1 + 0x13) = 0;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    else {
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
    }
    sub_0801ACF8(3,param_1 + 0x54);
    break;
  case 2:
    sub_08007390(param_1 + 0x74,&DAT_0835e190);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    pbVar5 = (byte *)(param_1 + 0xbe);
    *(byte *)(param_1 + 0x4c) = (*pbVar5 ^ *(byte *)(param_1 + 0x13)) & 1;
    bVar1 = *pbVar5 ^ *(byte *)(param_1 + 0x13);
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((bVar1 & 1) << 4);
    if ((bVar1 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    iVar4 = *(int *)(param_1 + 0xb4) + 0x3000;
    *(int *)(param_1 + 0x54) = iVar4;
    *(uint *)(param_1 + 0x54) = iVar4 + (uint)(*(byte *)(param_1 + 0x13) ^ *pbVar5) * -0x6000;
    *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8) + (uint)*(byte *)(param_1 + 0x13) * -0xa000
    ;
    *(uint *)(param_1 + 0x60) = (uint)*(byte *)(param_1 + 0x13) * 0x200 + -0x100;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    iVar4 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar4;
    if (*(char *)(param_1 + 0x13) == '\0') {
      if (iVar4 < *(int *)(param_1 + 0xb8) + -0xa000) goto LAB_0803e01e;
    }
    else if (*(int *)(param_1 + 0xb8) < iVar4) {
LAB_0803e01e:
      cVar2 = *(char *)(param_1 + 0xe) + '\x01';
LAB_0803e062:
      *(char *)(param_1 + 0xe) = cVar2;
    }
LAB_0803e064:
    sub_0803D874(param_1);
    break;
  case 4:
    sub_08007390(param_1 + 0x74,&DAT_0835e268);
    if (*(char *)(param_1 + 0x13) != '\0') {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x02';
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 8;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    if (*(char *)(param_1 + 0x12) == '\0') {
      *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
      cVar2 = '\x02';
      goto LAB_0803e062;
    }
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
    goto LAB_0803e064;
  case 6:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined4 *)(param_1 + 0xc4) = 0x78;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 7:
    puVar3 = (uint *)(param_1 + 0xc4);
    if (*puVar3 == 0) {
      sub_08004768(0x10d);
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    else {
      *puVar3 = *puVar3 - 1;
    }
    if ((*puVar3 & 3) == 0) {
      sub_0803D6C8(param_1,1,1);
    }
    sub_0801ACF8(3,param_1 + 0x54);
  default:
    break;
  }
  return in_lr;
}

