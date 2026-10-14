// sub_080DFDE8 at 0x080DFDE8 (thumb)

undefined4 sub_080DFDE8(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = (uint)DAT_02030104;
  if (((DAT_02030104 & 0x20) == 0) &&
     ((*(char *)(param_1 + 0x10) == '\0' ||
      (*(int *)(param_1 + 0x54) <= *(int *)(DAT_0202f5c0 + 0x54))))) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
    sub_0801749C(param_1);
    sub_08017700(param_1,0xb400);
    *(char *)(param_1 + 0x25) = (char)(uVar1 & 0x20);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_0800736C(param_1 + 0x74,&DAT_0836e198,param_1 + 0x54,0);
    *(int *)(param_1 + 0xa0) = param_1;
    *(uint *)(param_1 + 0x98) = uVar1 & 0x20;
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xef;
    *(undefined *)(param_1 + 0x1d) = *(undefined *)(param_1 + 0x1c);
    sub_0800393C(&DAT_085d8708,(DAT_0202fb78 - 0x200) * 0x20 + 0x10000);
    sub_08003E14(&DAT_085d8714,(DAT_0202f978 - 4) * 0x20 + 0x200);
    if (*(char *)(param_1 + 0x10) == '\0') {
      *(undefined4 *)(param_1 + 0x5c) = 0;
      *(undefined4 *)(param_1 + 0x68) = 0x2000;
      *(undefined4 *)(param_1 + 100) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x5c) = 0x80;
      *(undefined4 *)(param_1 + 0x68) = 0x4000;
      *(undefined4 *)(param_1 + 100) = 3;
    }
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 1;
    *(undefined4 *)(param_1 + 0x60) = 600;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  }
  return in_lr;
}

