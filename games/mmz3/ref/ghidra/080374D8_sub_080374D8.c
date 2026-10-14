// sub_080374D8 at 0x080374D8 (thumb)

undefined4 sub_080374D8(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0xb4);
  sub_0801749C(param_1);
  sub_080176EC(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_08017700(param_1,0x8600);
  sub_0800471C(0x1a);
  uVar4 = 0;
  if (*(char *)(param_1 + 0xc1) == '\x01') {
    uVar4 = ((*(ushort *)(iVar3 + 0xc6) & 2) << 0x10) >> 0x11;
  }
  bVar1 = *(byte *)(param_1 + 10);
  if ((bVar1 & 0x10) == 0) {
    *(undefined4 *)(param_1 + 0x5c) = 0xfffffa00;
  }
  else {
    *(undefined4 *)(param_1 + 0x5c) = 0x600;
  }
  if (uVar4 == 0) {
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  else if ((bVar1 & 0x20) == 0) {
    *(undefined4 *)(param_1 + 0x60) = 0xfffffe80;
  }
  else {
    *(undefined4 *)(param_1 + 0x60) = 0x180;
  }
  *(byte *)(param_1 + 10) = bVar1 | 4;
  sub_0800736C(param_1 + 0x74,&DAT_0835b69c,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  cVar2 = sub_08034668(iVar3);
  sub_080073A0(param_1 + 0x74,&DAT_0835b69c,cVar2 + '\x06',0xffffffff,0xffffffff,0xffffffff);
  return in_lr;
}

