// sub_080D87B8 at 0x080D87B8 (thumb)

undefined4 sub_080D87B8(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 in_lr;
  undefined4 local_1c;
  undefined4 local_18;
  
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    sub_080D0894(2,param_1 + 0x54);
    uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar2 & 0x7fffffff;
    uVar2 = uVar2 * 2 >> 0x11 & 3;
    local_1c = *(undefined4 *)(param_1 + 0x54);
    local_18 = *(undefined4 *)(param_1 + 0x58);
    sub_080D8678(&local_1c,*(byte *)(param_1 + 10) >> 4 & 1,0x1f0b,uVar2,0);
    sub_080D8678(&local_1c,*(byte *)(param_1 + 10) >> 4 & 1,0x1f0c,uVar2,0);
    sub_080D8678(&local_1c,*(byte *)(param_1 + 10) >> 4 & 1,0x1f0d,uVar2,0);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 8);
  }
  else {
    if (*(char *)(param_1 + 0xe) == '\0') {
      *(undefined *)(param_1 + 0x12) = 0x1e;
      *(undefined4 *)(param_1 + 0x60) = 0xfffffe00;
      sub_0801CF00(param_1,*(byte *)(param_1 + 0x10) + 0x1f09);
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    else if (*(char *)(param_1 + 0xe) != '\x01') {
      return in_lr;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) * 0xe0 >> 8;
    sub_0801CFF0(param_1);
  }
  return in_lr;
}

