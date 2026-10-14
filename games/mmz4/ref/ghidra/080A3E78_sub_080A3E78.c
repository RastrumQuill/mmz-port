// sub_080A3E78 at 0x080A3E78 (thumb)

undefined4 sub_080A3E78(int param_1)

{
  uint uVar1;
  byte bVar2;
  undefined4 in_lr;
  int local_20;
  int local_1c;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_0801CF00(param_1,0x8716);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  local_20 = *(int *)(param_1 + 0x54);
  local_1c = *(int *)(param_1 + 0x58);
  bVar2 = *(byte *)(param_1 + 0xbc);
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    bVar2 = bVar2 | 0x10;
  }
  sub_080D4898(&local_20,&DAT_0885ea30,0,bVar2);
  uVar1 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar1 & 0x7fffffff;
  bVar2 = *(byte *)(param_1 + 0xbc);
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    bVar2 = bVar2 | 0x10;
  }
  sub_080D4898(&local_20,&UNK_0885ea4c + (uVar1 * 2 >> 0x11 & 1) * 0x1c,0,bVar2);
  uVar1 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  local_20 = local_20 + (8 - (uVar1 * 2 >> 0x11 & 0xf)) * 0x100;
  uVar1 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar1 & 0x7fffffff;
  local_1c = local_1c + (8 - (uVar1 * 2 >> 0x11 & 0xf)) * 0x100;
  sub_080D0894(1,&local_20);
  sub_08002B10(0x2a);
  sub_0802AB70(0,0x2b,param_1 + 0x54);
  if (DAT_0202e8ec < 9999) {
    DAT_0202e8ec = DAT_0202e8ec + 1;
  }
  sub_0802ABC8(param_1,param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

