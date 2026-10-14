// sub_080A03E4 at 0x080A03E4 (thumb)

undefined4 sub_080A03E4(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 in_lr;
  int local_20;
  int local_1c;
  
  cVar1 = *(char *)(param_1 + 0x10);
  sub_08002B10(0x2a);
  uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  local_20 = *(int *)(param_1 + 0x54) + ((uVar2 * 2 >> 0x11 & 7) - 3) * 0x100;
  uVar2 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar2 & 0x7fffffff;
  local_1c = *(int *)(param_1 + 0x58) + ((uVar2 * 2 >> 0x11 & 7) - 3) * 0x100;
  sub_080D0894(1,&local_20);
  sub_080A0978(param_1);
  sub_0802AB70(4,4,param_1 + 0x54);
  if ((cVar1 == '\x01') && (DAT_0202e8d6 != '\0')) {
    DAT_0202e8d6 = DAT_0202e8d6 + -1;
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  if (DAT_0202e8ec < 9999) {
    DAT_0202e8ec = DAT_0202e8ec + 1;
  }
  sub_0802ABC8(param_1,param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

