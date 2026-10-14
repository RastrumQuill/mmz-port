// sub_080375C0 at 0x080375C0 (thumb)

undefined4 sub_080375C0(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0xb4);
  sub_0801749C(param_1);
  sub_080176EC(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_08017700(param_1,0x8800);
  sub_0800471C(0x1a);
  uVar6 = 0;
  if (*(char *)(param_1 + 0xc1) == '\x01') {
    uVar6 = ((*(ushort *)(iVar3 + 0xc6) & 2) << 0x10) >> 0x11;
  }
  bVar1 = *(byte *)(param_1 + 10);
  uVar4 = uVar6;
  if ((bVar1 & 0x10) == 0) {
    *(undefined4 *)(param_1 + 0x5c) = 0xfffff900;
    if (uVar6 != 0) {
      if ((bVar1 & 0x20) == 0) {
        uVar4 = 0xfffffe40;
      }
      else {
        uVar4 = 0x1c0;
      }
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x5c) = 0x700;
    if (uVar6 != 0) {
      if ((bVar1 & 0x20) == 0) {
        uVar4 = 0xfffffe40;
      }
      else {
        uVar4 = 0x1c0;
      }
    }
  }
  *(uint *)(param_1 + 0x60) = uVar4;
  *(byte *)(param_1 + 10) = bVar1 | 4;
  iVar5 = param_1 + 0x74;
  sub_0800736C(iVar5,&DAT_0835b6cc,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  cVar2 = sub_08034668(iVar3);
  if (uVar6 == 0) {
    sub_080073A0(iVar5,&DAT_0835b6cc,cVar2 + '\f',(&DAT_0835b666)[*(byte *)(param_1 + 0xc1)],
                 0xffffffff,0xffffffff);
  }
  else {
    sub_080073A0(iVar5,&DAT_0835b78c,cVar2 + '\f',(&DAT_0835b666)[*(byte *)(param_1 + 0xc1)],
                 0xffffffff,0xffffffff);
  }
  return in_lr;
}

