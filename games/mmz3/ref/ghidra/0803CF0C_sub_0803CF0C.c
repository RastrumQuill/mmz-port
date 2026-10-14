// sub_0803CF0C at 0x0803CF0C (thumb)

undefined4 sub_0803CF0C(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  uVar3 = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0835b5d0)[*(byte *)(param_1 + 9)] + 4);
  sub_0801749C(param_1);
  sub_080176EC(param_1);
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xfb;
  *(undefined2 *)(param_1 + 0x20) = 0;
  *(undefined *)(param_1 + 0x22) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_08017700(param_1,0x1a06,0);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_0800736C(param_1 + 0x74,&DAT_0835deec,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  cVar1 = sub_08034748(uVar3);
  sub_080073A0(param_1 + 0x74,&DAT_0835deec,cVar1 + '\x04',0xffffffff,0xffffffff,0xffffffff);
  if (*(byte *)(param_1 + 0x10) == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  uVar4 = *(byte *)(param_1 + 0x10) & 1;
  *(char *)(param_1 + 0x4c) = (char)uVar4;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
  *(undefined *)(param_1 + 0x12) = 0x20;
  *(undefined4 *)(param_1 + 0x98) = 0x803d085;
  sub_0803D008(param_1);
  return in_lr;
}

