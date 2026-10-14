// sub_080B4500 at 0x080B4500 (thumb)

undefined4 sub_080B4500(int param_1)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  undefined4 in_lr;
  undefined4 local_18;
  int local_14;
  
  bVar1 = *(byte *)(param_1 + 10);
  *(byte *)(param_1 + 10) = bVar1 & 0xfe;
  local_18 = *(undefined4 *)(param_1 + 0x54);
  local_14 = *(int *)(param_1 + 0x58) + -0x800;
  bVar3 = *(byte *)(param_1 + 0xbc);
  if ((bVar1 & 0x10) != 0) {
    bVar3 = bVar3 | 0x10;
  }
  sub_080D4898(&local_18,&DAT_0886037c,0,bVar3);
  if (*(char *)(param_1 + 0x10) == '\0') {
    uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    uVar4 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar4 & 0x7fffffff;
    sub_080D4898(&local_18,&DAT_08860398 + (uVar2 * 2 >> 0x11 & 1) * 0x1c,0,
                 (uVar4 * 2 >> 0x11 & 1) << 4 | (uint)*(byte *)(param_1 + 0xbc));
  }
  else {
    uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    uVar4 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar4 & 0x7fffffff;
    sub_080D4898(&local_18,&DAT_088603d0 + (uVar2 * 2 >> 0x11 & 1) * 0x1c,0,
                 (uVar4 * 2 >> 0x11 & 1) << 4 | (uint)*(byte *)(param_1 + 0xbc));
  }
  sub_080D0894(1,&local_18);
  sub_08002B10(0x2a);
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_0802AB70(3,0x1e,&local_18);
  }
  else {
    sub_0802AB70(3,0x1d,&local_18);
  }
  if (DAT_0202e8ec < 9999) {
    DAT_0202e8ec = DAT_0202e8ec + 1;
  }
  sub_0802ABC8(param_1,param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

