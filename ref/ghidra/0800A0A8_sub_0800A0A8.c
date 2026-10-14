// sub_0800A0A8 at 0x0800A0A8 (thumb)

undefined4 sub_0800A0A8(int param_1)

{
  ushort *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    DAT_02004f70 = 0x3f48;
    DAT_02004f80 = DAT_02004f80 | 0x4000;
    DAT_02004f8d = 0xff;
    DAT_02004f8e = (DAT_02004f8e | 0xfe) & 0xdf;
    DAT_02004f86 = 0xf0;
    DAT_02004f8a = 0x80;
    *(undefined2 *)(param_1 + 0x60) = 0;
    *(undefined2 *)(param_1 + 100) = 0;
    *(undefined *)(param_1 + 0x68) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  *(short *)(param_1 + 0x60) = *(short *)(param_1 + 0x60) + 3;
  puVar1 = (ushort *)(param_1 + 100);
  uVar2 = *puVar1 + 1;
  *puVar1 = (ushort)uVar2;
  iVar3 = 0x1000;
  if ((uVar2 & 0x200) != 0) {
    iVar3 = 0xc00;
  }
  if (((uVar2 & 0x3e) == 0) && ((1 << (uVar2 * 0x10000 >> 0x16 & 0x1f) & 0x6491a56cU) != 0)) {
    iVar3 = 0;
  }
  if (((*puVar1 - 4 & 0x3f) == 0) && ((1 << (*puVar1 >> 6 & 0x1f) & 0xb58329dfU) != 0)) {
    iVar3 = 0;
  }
  iVar3 = (int)((uint)*(ushort *)(param_1 + 0x66) * 7 + iVar3) >> 3;
  *(ushort *)(param_1 + 0x66) = (ushort)iVar3;
  DAT_02004f72 = (byte)((uint)iVar3 >> 8) & 0x1f | 0x1000;
  if ((*(char *)(param_1 + 0x68) == '\0') && ((DAT_02022ad4 & 0x20) != 0)) {
    sub_080067C4(0x15,4,&DAT_08294864);
    *(char *)(param_1 + 0x68) = '\x01';
  }
  return in_lr;
}

