// sub_080661D8 at 0x080661D8 (thumb)

undefined4 sub_080661D8(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined uVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x6d00);
    sub_08006E08(param_1 + 0x74,&DAT_0833db44);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  uVar4 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = uVar4;
  sub_080128D4(param_1);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 != '\0') {
    return in_lr;
  }
  bVar1 = *(byte *)(param_1 + 10) >> 4;
  if (*(uint *)(param_1 + 0xbc) < 0x6000) {
    if ((bVar1 & 1) != 1) {
LAB_0806624c:
      uVar3 = 1;
      goto LAB_08066256;
    }
  }
  else if ((bVar1 & 1) != 0) goto LAB_0806624c;
  uVar3 = 2;
LAB_08066256:
  *(undefined *)(param_1 + 0xd) = uVar3;
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}

