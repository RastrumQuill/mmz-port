// sub_080477A4 at 0x080477A4 (thumb)

undefined4 sub_080477A4(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa508);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar3 = 0xfffff900;
    }
    else {
      uVar3 = 0x700;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
    *(undefined4 *)(param_1 + 0x60) = 0;
    sub_08006E08(param_1 + 0x74,&DAT_0833ab6c);
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (((*(uint *)(param_1 + 0x8c) & 0x2000) != 0) &&
     (cVar2 = *(char *)(param_1 + 0x13) + '\x01', *(char *)(param_1 + 0x13) = cVar2, cVar2 == '\x04'
     )) {
    *(undefined4 *)(param_1 + 0x60) = 0xfffffc80;
  }
  local_14 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = local_14;
  local_10 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = local_10;
  bVar1 = *(byte *)(param_1 + 0x12);
  *(byte *)(param_1 + 0x12) = bVar1 + 1;
  if ((bVar1 & 3) == 0) {
    uVar4 = DAT_0202e188 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar4 & 0x7fffffff;
    local_10 = local_10 + ((uVar4 * 2 >> 0x11 & 0xf) + 0xc) * -0x100;
    sub_080A1A18(&local_14);
    sub_080032EC(0x53);
  }
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    if (*(int *)(param_1 + 0x54) < *(int *)(param_1 + 0xc4) + -0x4000) {
      *(undefined *)(param_1 + 0xd) = 0x1b;
      *(byte *)(param_1 + 0xe) = *(byte *)(param_1 + 10) & 0x10;
    }
  }
  else if (*(int *)(param_1 + 200) + 0x4000 < *(int *)(param_1 + 0x54)) {
    *(undefined *)(param_1 + 0xd) = 0x1b;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

