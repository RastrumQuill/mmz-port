// sub_080EBB90 at 0x080EBB90 (thumb)

undefined4 sub_080EBB90(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 10);
  bVar2 = bVar1 | 2;
  *(byte *)(param_1 + 10) = bVar2;
  if (*(char *)(param_1 + 0x11) == '\0') {
    *(byte *)(param_1 + 10) = bVar1 | 6;
    sub_08005760(param_1 + 0x74,&DAT_0886622c,param_1 + 0x54,0);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0x80ebd61;
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xef;
    *(undefined *)(param_1 + 0x1d) = *(undefined *)(param_1 + 0x1c);
  }
  else {
    sub_080EB97C(param_1,bVar2,0);
  }
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_080EBC00(param_1);
  return in_lr;
}

