// sub_08071FA0 at 0x08071FA0 (thumb)

undefined4 sub_08071FA0(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  undefined4 local_10;
  int local_c;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x1a05);
    sub_08006E08(param_1 + 0x74,&DAT_0833efa8);
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
    *(undefined **)(param_1 + 0x30) = &DAT_0833f018;
    *(undefined2 *)(param_1 + 0x26) = 0x801;
    local_10 = *(undefined4 *)(param_1 + 0x54);
    local_c = sub_080093C4(local_10,*(undefined4 *)(param_1 + 0x58));
    local_c = local_c + -0x5000;
    sub_080B3AD8(&local_10,3,0);
    *(undefined *)(param_1 + 0xbd) = 0xc;
    *(undefined *)(param_1 + 0x12) = 0xb;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

