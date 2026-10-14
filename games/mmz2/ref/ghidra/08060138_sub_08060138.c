// sub_08060138 at 0x08060138 (thumb)

undefined4 sub_08060138(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  byte *pbVar4;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xab00);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      local_14 = *(int *)(param_1 + 0x54) + -0xd00;
    }
    else {
      local_14 = *(int *)(param_1 + 0x54) + 0xd00;
    }
    local_10 = *(int *)(param_1 + 0x58) + -0x2000;
    sub_080B7F60(&local_14,3,0);
    *(undefined *)(param_1 + 0x12) = 0x7c;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  pbVar4 = (byte *)(param_1 + 0xbe);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8) + (short)(&DAT_080ef450)[*pbVar4] * 8;
  *pbVar4 = *pbVar4 + 1;
  bVar2 = *(byte *)(param_1 + 0x12);
  if (bVar2 == 0x30) {
    bVar2 = 2;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      bVar2 = 3;
    }
  }
  else {
    if (bVar2 < 0x31) {
      if (bVar2 == 0x20) {
        uVar3 = 4;
        if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
          uVar3 = 5;
        }
        sub_080A5C74(param_1,0,uVar3);
        sub_080032EC(0x38);
      }
      goto LAB_08060214;
    }
    if (bVar2 != 0x40) goto LAB_08060214;
    bVar2 = *(byte *)(param_1 + 10) >> 4 & 1;
  }
  sub_080A5C74(param_1,0,bVar2);
  sub_080032EC(0x38);
LAB_08060214:
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x12) = 0x30;
  }
  return in_lr;
}

