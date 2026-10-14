// sub_080516C0 at 0x080516C0 (thumb)

undefined4 sub_080516C0(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  char *pcVar5;
  char *pcVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08017700(param_1,0x4d01);
    *(undefined *)(param_1 + 0x12) = 0x46;
    pcVar6 = (char *)(param_1 + 0xb8);
    if (*pcVar6 != '\0') {
      sub_08004230(*pcVar6);
      *pcVar6 = '\0';
    }
    iVar2 = sub_08017B8C(param_1);
    sub_080040A8(0x54,(uint)(iVar2 << 0x18) >> 0x13 | 0x200);
    *pcVar6 = 'T';
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  cVar1 = *(char *)(param_1 + 0xb9);
  if (cVar1 == '\0') {
    if (((*(int *)(param_1 + 0xc0) == 0) && ((*(uint *)(param_1 + 0x8c) & 1) != 0)) &&
       ((bVar4 = *(byte *)(param_1 + 0x97) & 0xf0, bVar4 == 0x10 ||
        ((bVar4 == 0x20 || (bVar4 == 0x30)))))) {
      iVar2 = sub_080253D8(0x15,param_1,&DAT_08360118);
      *(int *)(param_1 + 0xc0) = iVar2;
    }
    else {
      cVar1 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar1;
      if ((cVar1 == '\0') &&
         (((*(uint *)(DAT_0202f5c0 + 0x8c) & 0x200) == 0 && (*(short *)(DAT_0202f5c0 + 0xa4) != 0)))
         ) {
        pcVar6 = (char *)(param_1 + 0xc4);
        do {
          uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
          DAT_0202f608 = uVar3 & 0x7fffffff;
          uVar3 = uVar3 * 2 >> 0x11 & 3;
          if ((&DAT_08360120)[uVar3] != *pcVar6) break;
        } while (1 < *(byte *)(param_1 + 0xc5));
        pcVar5 = &DAT_08360120 + uVar3;
        if (*pcVar5 == *pcVar6) {
          *(char *)(param_1 + 0xc5) = *(char *)(param_1 + 0xc5) + '\x01';
        }
        *pcVar6 = *pcVar5;
        *(char *)(param_1 + 0xd) = *pcVar5;
        *(undefined *)(param_1 + 0xe) = 0;
      }
    }
    sub_08051394(param_1);
    sub_080041E4(*(undefined *)(param_1 + 0xb8));
    sub_080177F4(param_1);
  }
  else {
    *(char *)(param_1 + 0xb9) = cVar1 + -1;
  }
  sub_08007390(param_1 + 0x74,&DAT_0835fe2c);
  return in_lr;
}

