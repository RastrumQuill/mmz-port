// sub_080DCF18 at 0x080DCF18 (thumb)

undefined4 sub_080DCF18(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    bVar2 = 8;
    bVar1 = DAT_0200243a;
  }
  else {
    bVar2 = 0x80;
    bVar1 = DAT_0200243c;
  }
  if ((bVar2 & bVar1) == 0) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  else if (*(char *)(param_1 + 0x10) == '\0') {
    sub_080DCFCC(param_1);
  }
  else {
    sub_080DD0B0(param_1);
  }
  return in_lr;
}

