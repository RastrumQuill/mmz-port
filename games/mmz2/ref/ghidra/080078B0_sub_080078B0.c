// sub_080078B0 at 0x080078B0 (thumb)

undefined8 sub_080078B0(int param_1,uint param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined4 in_lr;
  
  param_2 = param_2 & 0xff;
  bVar2 = *(byte *)(param_1 + 0x3b) | *(byte *)(*(int *)(param_1 + 4) + 9);
  if (((DAT_030032e0 & 0x80) == 0) && (*(char *)(param_1 + 0x20) == '\0')) {
    if ((bVar2 & 0x10) != 0) {
      param_2 = (param_2 << 0x19) >> 0x18;
    }
    if ((bVar2 & 4) != 0) {
      param_2 = sub_080EF150(param_2 << 1,3);
      param_2 = param_2 & 0xff;
    }
    if (param_2 == 0) {
      param_2 = 1;
    }
    if ((bVar2 & 2) == 0) {
      iVar3 = *(ushort *)(param_1 + 0x30) - param_2;
      *(short *)(param_1 + 0x30) = (short)iVar3;
      if (iVar3 * 0x10000 < 1) {
        *(ushort *)(param_1 + 0x30) = bVar2 & 2;
        *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x200;
      }
      cVar1 = *(char *)(*(int *)(param_1 + 4) + 2);
      if ((cVar1 == '\x01') || (cVar1 == '\x02')) {
        *(char *)(param_1 + 0x20) = 'Z';
      }
    }
  }
  else {
    param_2 = 0;
  }
  return CONCAT44(in_lr,param_2);
}

