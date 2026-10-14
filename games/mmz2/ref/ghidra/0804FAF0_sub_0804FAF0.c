// sub_0804FAF0 at 0x0804FAF0 (thumb)

undefined4 sub_0804FAF0(int param_1)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_0809F624(*(undefined4 *)(param_1 + 200),3);
    sub_08006E08(param_1 + 0x74,&DAT_0833bbac);
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 8;
    uVar5 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar5;
    sub_080127E4(param_1,0xa41a);
    *(uint *)(param_1 + 0xc0) = *(uint *)(param_1 + 0xc0) | 1;
    *(undefined *)(param_1 + 0x12) = 8;
    *(undefined *)(param_1 + 0xc4) = 4;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    iVar2 = DAT_0202e130;
    *(bool *)(param_1 + 0x4c) = 0 < *(int *)(DAT_0202e130 + 0x54) - *(int *)(param_1 + 0x54);
    bVar1 = 0 < *(int *)(iVar2 + 0x54) - *(int *)(param_1 + 0x54);
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    if (bVar1) {
      bVar3 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar3;
    if (*(char *)(param_1 + 0x12) == '\0') {
      *(uint *)(param_1 + 0xc0) = *(uint *)(param_1 + 0xc0) | 2;
    }
    else {
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
    }
    if (7 < *(byte *)(param_1 + 0xc4)) {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    if (*(char *)(param_1 + 0x73) == '\x03') {
      uVar5 = 0xa41d;
LAB_0804fcb0:
      sub_080127E4(param_1,uVar5);
    }
    break;
  case 2:
    sub_08006E08(param_1 + 0x74,&DAT_0833bb7c);
    uVar5 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar5;
    sub_080127E4(param_1,0xa417);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    iVar2 = DAT_0202e130;
    *(bool *)(param_1 + 0x4c) = 0 < *(int *)(DAT_0202e130 + 0x54) - *(int *)(param_1 + 0x54);
    bVar1 = 0 < *(int *)(iVar2 + 0x54) - *(int *)(param_1 + 0x54);
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    if (bVar1) {
      bVar3 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar3;
    if (*(char *)(param_1 + 0xc4) == '\x10') {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    if (*(char *)(param_1 + 0x73) == '\x03') {
      uVar5 = 0xa41c;
      goto LAB_0804fcb0;
    }
    break;
  case 4:
    sub_0809F624(*(undefined4 *)(param_1 + 200),5);
    sub_08006E08(param_1 + 0x74,&DAT_0833b99c);
    uVar5 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar5;
    sub_080127E4(param_1,0xa402);
    *(undefined *)(param_1 + 0x12) = 0x1e;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    iVar2 = DAT_0202e130;
    *(bool *)(param_1 + 0x4c) = 0 < *(int *)(DAT_0202e130 + 0x54) - *(int *)(param_1 + 0x54);
    bVar1 = 0 < *(int *)(iVar2 + 0x54) - *(int *)(param_1 + 0x54);
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    if (bVar1) {
      bVar3 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar3;
    cVar4 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar4;
    if (cVar4 == '\0') {
      *(uint *)(param_1 + 0xc0) = *(uint *)(param_1 + 0xc0) & 0xfffffffc;
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    sub_080128D4(param_1);
  default:
    goto switchD_0804fb08_caseD_6;
  }
  sub_080128D4(param_1);
switchD_0804fb08_caseD_6:
  return in_lr;
}

