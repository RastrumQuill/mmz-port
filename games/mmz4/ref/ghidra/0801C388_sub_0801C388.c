// sub_0801C388 at 0x0801C388 (thumb)

undefined4 sub_0801C388(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    (&DAT_02000a04)[*(uint *)(param_1 + 0x5c) >> 4] =
         (&DAT_02000a04)[*(uint *)(param_1 + 0x5c) >> 4] & 0xfffc | 3;
    *(undefined4 *)(param_1 + 0x6c) = 0;
    uVar1 = sub_08103A78(0,0,0);
    *(undefined4 *)(param_1 + 0x68) = uVar1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(int *)(param_1 + 0x6c) == 0) {
    uVar1 = sub_08103A78(0,0,1);
    *(undefined4 *)(param_1 + 0x6c) = uVar1;
  }
  *(uint *)(param_1 + 0x50) = 0x3c - (DAT_0202daf4 >> 6);
  return in_lr;
}

