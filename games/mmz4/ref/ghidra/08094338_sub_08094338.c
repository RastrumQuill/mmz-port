// sub_08094338 at 0x08094338 (thumb)

undefined4 sub_08094338(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  bVar1 = *(byte *)(param_1 + 0x11);
  if (*(char *)(param_1 + 0x10) == '\x02') {
    uVar2 = *(uint *)(&DAT_0885d114 + (uint)bVar1 * 4);
    (&DAT_0202e8b4)[(int)uVar2 >> 3] = (byte)(1 << (uVar2 & 7)) | (&DAT_0202e8b4)[(int)uVar2 >> 3];
    uVar2 = *(uint *)(&DAT_0885d114 + (uint)bVar1 * 4);
    (&DAT_02035880)[(int)uVar2 >> 3] = (byte)(1 << (uVar2 & 7)) | (&DAT_02035880)[(int)uVar2 >> 3];
  }
  sub_08002B10(0x2a);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  local_1c = *(int *)(param_1 + 0x54) + ((uVar2 * 2 >> 0x11 & 7) - 3) * 0x100;
  uVar2 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar2 & 0x7fffffff;
  local_18 = *(int *)(param_1 + 0x58) + (uVar2 * 2 >> 0x11 & 7) * 0x100 + -0x1300;
  sub_080D0894(1,&local_1c);
  sub_08094C20(param_1);
  sub_08094CB4(param_1);
  if (DAT_0202e8ec < 9999) {
    DAT_0202e8ec = DAT_0202e8ec + 1;
  }
  sub_0802ABC8(param_1,param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

