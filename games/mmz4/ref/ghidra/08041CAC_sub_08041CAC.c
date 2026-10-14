// sub_08041CAC at 0x08041CAC (thumb)

undefined4 sub_08041CAC(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x2c);
  if (*(byte *)(iVar4 + 0xc) < 2) {
    if ((int)((uint)*(byte *)(param_1 + 0x11) * 0x800 + 0xc00) < *(int *)(iVar4 + 0x5c)) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
      sub_0801CFF0(param_1);
      bVar1 = *(byte *)(iVar4 + 10) >> 4;
      uVar3 = bVar1 & 1;
      if ((bVar1 & 1) == 0) {
        bVar1 = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        bVar1 = *(byte *)(param_1 + 10) | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar1;
      *(char *)(param_1 + 0x4c) = (char)uVar3;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar3 << 4);
      uVar3 = (uint)*(byte *)(iVar4 + 0x24);
      *(byte *)(param_1 + 0x24) = *(byte *)(iVar4 + 0x24);
      uVar2 = *(undefined4 *)(iVar4 + 0x68);
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar4 + 100);
      *(undefined4 *)(param_1 + 0x58) = uVar2;
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        iVar4 = *(int *)(param_1 + 0x54) -
                (*(byte *)(param_1 + 0x11) + 1) *
                *(short *)((int)&DAT_08128c10 + ((uVar3 + 0x40) * 0x1000000 >> 0x17)) * 8;
      }
      else {
        iVar4 = *(int *)(param_1 + 0x54) +
                (*(byte *)(param_1 + 0x11) + 1) *
                *(short *)((int)&DAT_08128c10 + ((uVar3 + 0x40) * 0x1000000 >> 0x17)) * 8;
      }
      *(int *)(param_1 + 0x54) = iVar4;
      *(uint *)(param_1 + 0x58) =
           *(int *)(param_1 + 0x58) -
           (short)(&DAT_08128c10)[uVar3] * 8 * (*(byte *)(param_1 + 0x11) + 1);
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

