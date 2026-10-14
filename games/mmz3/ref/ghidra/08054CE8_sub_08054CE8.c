// sub_08054CE8 at 0x08054CE8 (thumb)

undefined4 sub_08054CE8(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  byte *pbVar4;
  char *pcVar5;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_0800471C(0x96);
    sub_08007390(param_1 + 0x74,&DAT_083602c0);
    *(undefined *)(param_1 + 0x24) = 0x80;
    sub_08017700(param_1,0x5401);
    pcVar5 = (char *)(param_1 + 0xbe);
    if (*pcVar5 != '\0') {
      sub_08004230(*pcVar5);
      *pcVar5 = '\0';
    }
    bVar1 = *(byte *)(param_1 + 0xbc);
    iVar2 = sub_08017B8C(param_1);
    sub_080040A8((uint)bVar1 * 0x20000 + 0xf50000 >> 0x10,(uint)(iVar2 << 0x18) >> 0x13 | 0x200);
    *pcVar5 = *(byte *)(param_1 + 0xbc) * '\x02' + -0xb;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    sub_080041E4(*(undefined *)(param_1 + 0xbe));
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x71) == '\x01') {
      puVar3 = &DAT_083602d8;
LAB_08054e3a:
      sub_08007390(param_1 + 0x74,puVar3);
    }
    break;
  case 2:
    *(undefined *)(param_1 + 0x24) = 0;
    sub_08017700(param_1,0x5402);
    pcVar5 = (char *)(param_1 + 0xbe);
    if (*pcVar5 != '\0') {
      sub_08004230(*pcVar5);
      *pcVar5 = '\0';
    }
    bVar1 = *(byte *)(param_1 + 0xbc);
    iVar2 = sub_08017B8C(param_1);
    sub_080040A8((ushort)bVar1 * -2 + 0xf7,(uint)(iVar2 << 0x18) >> 0x13 | 0x200);
    *pcVar5 = *(byte *)(param_1 + 0xbc) * -2 + -9;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    sub_080041E4(*(undefined *)(param_1 + 0xbe));
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x71) == '\x01') {
      puVar3 = &DAT_083602c0;
      goto LAB_08054e3a;
    }
    break;
  case 4:
    sub_08017700(param_1,0x5400);
    pcVar5 = (char *)(param_1 + 0xbe);
    if (*pcVar5 != '\0') {
      sub_08004230();
      *pcVar5 = '\0';
    }
    pbVar4 = (byte *)(param_1 + 0xbc);
    bVar1 = *pbVar4;
    iVar2 = sub_08017B8C(param_1);
    sub_080040A8((ushort)bVar1 * -2 + 0xf6,(uint)(iVar2 << 0x18) >> 0x13 | 0x200);
    *pcVar5 = *pbVar4 * -2 + -10;
    sub_080041E4(*pcVar5);
    sub_080177F4(param_1);
    *pbVar4 = *pbVar4 ^ 1;
    *(undefined *)(param_1 + 0xd) = 5;
    *(undefined *)(param_1 + 0xe) = 0;
  default:
    goto switchD_08054d00_caseD_5;
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
switchD_08054d00_caseD_5:
  return in_lr;
}

