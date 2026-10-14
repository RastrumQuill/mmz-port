// sub_080AFBE8 at 0x080AFBE8 (thumb)

undefined4 sub_080AFBE8(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    sub_080B2484(3,param_1 + 0x54);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 8);
  }
  else {
    if (*(char *)(param_1 + 0xe) == '\0') {
      sub_0801749C(param_1);
      sub_080176EC(param_1);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 7;
      sub_0800736C(param_1 + 0x74,&DAT_08369dec,param_1 + 0x54,2);
      *(int *)(param_1 + 0xa0) = param_1;
      *(undefined4 *)(param_1 + 0x98) = 0;
      sub_08017700(param_1,0xb800);
      *(undefined4 *)(param_1 + 0x60) = 0;
      *(undefined4 *)(param_1 + 0x5c) = 0xfffffb00;
      *(undefined *)(param_1 + 0x12) = 0x78;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    else if (*(char *)(param_1 + 0xe) != '\x01') {
      return in_lr;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    sub_080177F4(param_1);
  }
  return in_lr;
}

