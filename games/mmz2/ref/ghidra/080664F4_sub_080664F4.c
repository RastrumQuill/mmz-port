// sub_080664F4 at 0x080664F4 (thumb)

undefined4 sub_080664F4(int param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        sub_080128D4(param_1);
        cVar2 = *(char *)(param_1 + 0x12) + -1;
        *(char *)(param_1 + 0x12) = cVar2;
        if (cVar2 == '\0') {
          sub_08006E08(param_1 + 0x74,&DAT_0833db44);
          sub_080127E4(param_1,0x6d00);
          *(undefined *)(param_1 + 0xd) = 0;
          *(undefined *)(param_1 + 0xe) = 0;
        }
      }
      goto LAB_08066588;
    }
    if (bVar1 != 0) goto LAB_08066588;
    sub_080127E4(param_1,0x6d02);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    sub_080127E4(param_1,0x6d03);
    sub_08006E08(param_1 + 0x74,&DAT_0833db74);
    sub_080032EC(0x3a);
    *(undefined *)(param_1 + 0x12) = 0x40;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
LAB_08066588:
  sVar3 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x40);
  if (sVar3 != 0) {
    uVar4 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar4;
  }
  return in_lr;
}

