// sub_080347F8 at 0x080347F8 (thumb)

undefined4 sub_080347F8(int param_1)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  undefined4 in_lr;
  undefined4 local_10;
  int local_c;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,0xd);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x12) = 0x40;
  }
  sub_080297C0(param_1);
  if (*(char *)(param_1 + 0x12) == '!') {
    local_10 = *(undefined4 *)(param_1 + 0x4c);
    local_c = *(int *)(param_1 + 0x50) + -0x2000;
    sub_080658C4(&local_10,1,*(byte *)(param_1 + 10) >> 4 & 1,param_1);
    if (*(char *)(param_1 + 0x13) == '\x02') {
      sub_08001EAC(0x32);
    }
  }
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == -1) {
    bVar1 = *(int *)(param_1 + 0x4c) < *(int *)(DAT_0202286c + 0x4c);
    *(bool *)(param_1 + 0x44) = bVar1;
    if (bVar1) {
      bVar3 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar3;
    cVar2 = *(char *)(param_1 + 0x13) + -1;
    *(char *)(param_1 + 0x13) = cVar2;
    if (cVar2 == '\0') {
      *(undefined *)(param_1 + 0xd) = 3;
    }
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

