// sub_080C4CE8 at 0x080C4CE8 (thumb)

undefined4 sub_080C4CE8(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(byte *)(*(int *)(param_1 + 0x28) + 0xc) < 2) {
    if (*(char *)(param_1 + 0xe) == '\0') {
      sub_080175BC(param_1);
      *(undefined2 *)(param_1 + 0x50) = 0x100;
      *(undefined2 *)(param_1 + 0x52) = 0x100;
      *(undefined *)(param_1 + 0x24) = 0;
      sub_080176EC(param_1);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
      sub_08017700(param_1,0xb801);
      *(undefined *)(param_1 + 0x12) = 0x10;
      *(undefined4 *)(param_1 + 0x5c) = 0x100;
      *(int *)(param_1 + 0x54) =
           *(int *)(*(int *)(param_1 + 0x28) + 0x54) + *(int *)(param_1 + 100) + 0xe00;
      *(int *)(param_1 + 0x58) =
           *(int *)(*(int *)(param_1 + 0x28) + 0x58) + *(int *)(param_1 + 0x68) + 0x700;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    else if (*(char *)(param_1 + 0xe) != '\x01') {
      return in_lr;
    }
    iVar2 = *(int *)(*(int *)(param_1 + 0x28) + 0x58);
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 0x54) +
         (((*(int *)(*(int *)(param_1 + 0x28) + 0x54) + 0xe00) - *(int *)(param_1 + 0x54)) * 0x20 >>
         8);
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0x58) + (((iVar2 + 0x700) - *(int *)(param_1 + 0x58)) * 0x20 >> 8);
    iVar2 = *(int *)(param_1 + 0x5c) + ((0x20 - *(int *)(param_1 + 0x5c)) * 0x10 >> 8);
    *(int *)(param_1 + 0x5c) = iVar2;
    *(short *)(param_1 + 0x50) = (short)iVar2;
    *(short *)(param_1 + 0x52) = (short)*(undefined4 *)(param_1 + 0x5c);
    if ((*(char *)(param_1 + 0x12) == '\0') ||
       (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == '\0')) {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 8)
      ;
    }
    sub_080177F4(param_1);
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

