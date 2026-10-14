// sub_080C4E84 at 0x080C4E84 (thumb)

undefined4 sub_080C4E84(int param_1)

{
  short sVar1;
  char cVar2;
  int iVar3;
  int iVar4;
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
      *(undefined4 *)(param_1 + 0x68) = 0xffffca00;
      iVar3 = *(int *)(*(int *)(param_1 + 0x28) + 0x54) + -0x3600;
      *(int *)(param_1 + 100) = iVar3;
      *(int *)(param_1 + 0x54) = iVar3 + *(int *)(param_1 + 0x74);
      *(int *)(param_1 + 0x58) =
           *(int *)(*(int *)(param_1 + 0x28) + 0x58) + *(int *)(param_1 + 0x78) + 0x700;
      *(uint *)(param_1 + 0x60) = (uint)*(byte *)(param_1 + 0x11) * 0x2a & 0xff;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    else if (*(char *)(param_1 + 0xe) != '\x01') {
      return in_lr;
    }
    iVar3 = *(int *)(param_1 + 0x68) + ((0xe00 - *(int *)(param_1 + 0x68)) * 0x20 >> 8);
    *(int *)(param_1 + 0x68) = iVar3;
    *(int *)(param_1 + 100) = iVar3 + *(int *)(*(int *)(param_1 + 0x28) + 0x54);
    *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + (*(int *)(param_1 + 0x78) * -0x14 >> 8);
    iVar4 = *(int *)(param_1 + 0x60);
    iVar3 = iVar4 + 10;
    *(int *)(param_1 + 0x60) = iVar3;
    if (0xff < iVar3) {
      *(int *)(param_1 + 0x60) = iVar4 + -0xf5;
    }
    sVar1 = *(short *)((int)&DAT_080fe64c +
                      ((uint)((*(int *)(param_1 + 0x60) + 0x40) * 0x1000000) >> 0x17));
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 100) +
         ((*(int *)(param_1 + 0x78) *
           (int)*(short *)((int)&DAT_080fe64c + ((uint)(*(int *)(param_1 + 0x60) << 0x18) >> 0x17))
          >> 8) * 0x70 >> 8);
    *(int *)(param_1 + 0x58) =
         *(int *)(*(int *)(param_1 + 0x28) + 0x58) +
         (*(int *)(param_1 + 0x78) * (int)sVar1 >> 8) + 0x700;
    iVar3 = *(int *)(param_1 + 0x5c) + ((0x20 - *(int *)(param_1 + 0x5c)) * 0x10 >> 8);
    *(int *)(param_1 + 0x5c) = iVar3;
    *(short *)(param_1 + 0x50) = (short)iVar3;
    *(short *)(param_1 + 0x52) = (short)*(undefined4 *)(param_1 + 0x5c);
    if ((*(char *)(param_1 + 0x12) == '\0') ||
       (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 == '\0')) {
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

