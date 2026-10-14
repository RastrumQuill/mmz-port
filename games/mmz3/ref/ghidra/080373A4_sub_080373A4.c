// sub_080373A4 at 0x080373A4 (thumb)

undefined4 sub_080373A4(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  char cVar6;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0xb4);
  sub_0801749C(param_1);
  sub_080176EC(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  if (DAT_0200247d == '\x02') {
    uVar4 = 0x8502;
  }
  else {
    if (DAT_0200247d != '\x01') {
      sub_08017700(param_1,0x8500);
      goto LAB_08037402;
    }
    uVar4 = 0x8501;
  }
  sub_08017700(param_1,uVar4);
LAB_08037402:
  sub_0800471C(0x16);
  uVar5 = 0;
  if (*(char *)(param_1 + 0xc1) == '\x01') {
    uVar5 = ((*(ushort *)(iVar3 + 0xc6) & 2) << 0x10) >> 0x11;
  }
  bVar1 = *(byte *)(param_1 + 10);
  if ((bVar1 & 0x10) == 0) {
    *(undefined4 *)(param_1 + 0x5c) = 0xfffffb40;
  }
  else {
    *(undefined4 *)(param_1 + 0x5c) = 0x4c0;
  }
  if (uVar5 == 0) {
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  else if ((bVar1 & 0x20) == 0) {
    *(undefined4 *)(param_1 + 0x60) = 0xfffffed0;
  }
  else {
    *(undefined4 *)(param_1 + 0x60) = 0x130;
  }
  *(byte *)(param_1 + 10) = bVar1 | 4;
  sub_0800736C(param_1 + 0x74,&DAT_0835b66c,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  cVar6 = '\x02';
  if ((*(uint *)(*(int *)(param_1 + 0xb4) + 0xc) & 0xffff00) == 0x20000) {
    cVar6 = '\x03';
  }
  cVar2 = sub_08034668(iVar3);
  sub_080073A0(param_1 + 0x74,&DAT_0835b66c,cVar6 + cVar2,0xffffffff,0xffffffff,0xffffffff);
  return in_lr;
}

