// sub_0804FD84 at 0x0804FD84 (thumb)

undefined4 sub_0804FD84(int param_1)

{
  char cVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined4 in_lr;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0809F624(*(undefined4 *)(param_1 + 200),6);
    *(undefined *)(param_1 + 0xcd) = 2;
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 8;
    sub_080127E4(param_1,0xa40e);
    uVar2 = sub_080032EC(0x87);
    *(undefined2 *)(param_1 + 0xd0) = uVar2;
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    *(undefined *)(param_1 + 0x12) = 10;
    uVar3 = (3 - (uint)(*(byte *)(param_1 + 0x13) >> 1)) * 0x1000000 >> 0x16;
    local_20 = *(int *)(&DAT_0833c100 + uVar3) -
               *(int *)(&DAT_0833c100 + uVar3) * 2 * (*(byte *)(param_1 + 0x13) & 1);
    local_1c = *(undefined4 *)(&DAT_0833c110 + uVar3);
    local_18 = *(undefined4 *)(param_1 + 0x54);
    local_14 = *(int *)(param_1 + 0x58) + -0x2000;
    sub_080A03A4(param_1,&local_18,&local_20);
    cVar1 = *(char *)(param_1 + 0x13) + '\x01';
    *(char *)(param_1 + 0x13) = cVar1;
    if (cVar1 == '\b') {
      *(undefined *)(param_1 + 0xd) = 0xd;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  sub_080128D4(param_1);
  return in_lr;
}

