// sub_080DF6BC at 0x080DF6BC (thumb)

undefined4 sub_080DF6BC(int param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  undefined4 in_lr;
  
  bVar2 = DAT_0202f4a4;
  bVar1 = *(byte *)(param_1 + 0xf);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      sub_080177F4(param_1);
      cVar3 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar3;
      if (cVar3 != '\0') {
        return in_lr;
      }
      goto LAB_080df784;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    *(byte *)(param_1 + 0x10) = DAT_0202f4a4;
    if (bVar2 == 0) {
      sub_08017700(param_1,0xd201);
    }
    else {
      sub_08017700(param_1,0xd202);
    }
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_080177F4(param_1);
  if ((*(uint *)(param_1 + 0x8c) & 8) != 0) {
    DAT_0202f4a4 = DAT_0202f4a4 ^ 1;
  }
  if (*(byte *)(param_1 + 0x10) == DAT_0202f4a4) {
    return in_lr;
  }
  if (*(byte *)(param_1 + 0x10) == 0) {
    sub_08017700(param_1,0xd203);
  }
  else {
    sub_08017700(param_1,0xd204);
  }
  *(undefined *)(param_1 + 0x12) = 0x1e;
  cVar3 = *(char *)(param_1 + 0xf) + '\x01';
LAB_080df784:
  *(char *)(param_1 + 0xf) = cVar3;
  return in_lr;
}

