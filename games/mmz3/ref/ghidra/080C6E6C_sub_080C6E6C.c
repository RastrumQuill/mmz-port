// sub_080C6E6C at 0x080C6E6C (thumb)

undefined4 sub_080C6E6C(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 in_lr;
  
  sub_080177F4();
  bVar1 = *(byte *)(param_1 + 0x11);
  if (bVar1 == 1) {
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 0x74) + (short)(&DAT_080fe64c)[*(byte *)(param_1 + 0x12)] * -0x20;
    iVar3 = *(int *)(param_1 + 0x78) +
            *(short *)((int)&DAT_080fe64c + ((*(byte *)(param_1 + 0x12) + 0x40) * 0x1000000 >> 0x17)
                      ) * 4 + (0x80 - (uint)*(byte *)(param_1 + 0x13)) * 0x200;
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) goto LAB_080c6f54;
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 0x74) + (short)(&DAT_080fe64c)[*(byte *)(param_1 + 0x12)] * 0x20;
    iVar3 = *(int *)(param_1 + 0x78) +
            *(short *)((int)&DAT_080fe64c + ((*(byte *)(param_1 + 0x12) + 0x40) * 0x1000000 >> 0x17)
                      ) * 4 + (0x80 - (uint)*(byte *)(param_1 + 0x13)) * 0x200;
  }
  else {
    if (bVar1 == 2) {
      iVar3 = *(int *)(param_1 + 0x74) + (short)(&DAT_080fe64c)[*(byte *)(param_1 + 0x12)] * 0x18;
    }
    else {
      if (bVar1 != 3) goto LAB_080c6f54;
      iVar3 = *(int *)(param_1 + 0x74) + (short)(&DAT_080fe64c)[*(byte *)(param_1 + 0x12)] * -0x18;
    }
    *(int *)(param_1 + 0x54) = iVar3;
    iVar3 = *(int *)(param_1 + 0x78) +
            *(short *)((int)&DAT_080fe64c + ((*(byte *)(param_1 + 0x12) + 0x40) * 0x1000000 >> 0x17)
                      ) * -4 + (0x80 - (uint)*(byte *)(param_1 + 0x13)) * -0x400;
  }
  *(int *)(param_1 + 0x58) = iVar3;
LAB_080c6f54:
  if ((byte)(*(char *)(param_1 + 0x12) + 0xbfU) < 0x7f) {
    *(undefined *)(param_1 + 0x25) = 0x11;
    cVar2 = *(char *)(param_1 + 0x13) + -1;
  }
  else {
    *(undefined *)(param_1 + 0x25) = 0xf;
    cVar2 = *(char *)(param_1 + 0x13) + '\x01';
  }
  *(char *)(param_1 + 0x13) = cVar2;
  cVar2 = *(char *)(param_1 + 0x12);
  *(char *)(param_1 + 0x12) = cVar2 + '\b';
  if (cVar2 == -8) {
    sub_0800471C(0x23);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 8);
    sub_080C6FB8(param_1);
  }
  return in_lr;
}

