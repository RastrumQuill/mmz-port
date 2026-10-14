// sub_0803C144 at 0x0803C144 (thumb)

undefined4 sub_0803C144(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0xb4);
  uVar5 = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0835b5d0)[*(byte *)(param_1 + 9)] + 4);
  sub_0801749C(param_1);
  sub_080176EC(param_1);
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xfb;
  *(undefined2 *)(param_1 + 0x20) = 0;
  *(undefined *)(param_1 + 0x22) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_08017700(param_1,0x1d);
    *(undefined *)(param_1 + 0x12) = 0xd;
    cVar1 = sub_080346B0(uVar5);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_0800736C(param_1 + 0x74,&DAT_0835ddf8,param_1 + 0x54,1);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    sub_080073A0(param_1 + 0x74,&DAT_0835ddf8,cVar1 + '\x06',0,0xffffffff,0xffffffff);
  }
  else {
    sub_08017700(param_1,0x1e);
    sub_08017BCC(param_1,1);
    *(undefined *)(param_1 + 0x12) = 0x40;
    cVar1 = sub_080346B0(uVar5);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_0800736C(param_1 + 0x74,&DAT_0835de28,param_1 + 0x54,1);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    sub_080073A0(param_1 + 0x74,&DAT_0835de28,cVar1 + '\x06',3,0x12,0xffffffff);
  }
  bVar2 = *(byte *)(iVar3 + 10) >> 4;
  uVar4 = bVar2 & 1;
  if ((bVar2 & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(char *)(param_1 + 0x4c) = (char)uVar4;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    *(int *)(param_1 + 0x54) = *(int *)(iVar3 + 0x54) + -0x2600;
    uVar5 = 0xfffffa00;
  }
  else {
    *(int *)(param_1 + 0x54) = *(int *)(iVar3 + 0x54) + 0x2600;
    uVar5 = 0x600;
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar5;
  *(int *)(param_1 + 0x58) = *(int *)(iVar3 + 0x58) + -0x1400;
  *(undefined4 *)(param_1 + 0x98) = 0x803c369;
  sub_0803C2F0(param_1);
  return in_lr;
}

