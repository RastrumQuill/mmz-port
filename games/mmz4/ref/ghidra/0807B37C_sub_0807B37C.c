// sub_0807B37C at 0x0807B37C (thumb)

undefined4 sub_0807B37C(int param_1)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  undefined4 in_lr;
  
  bVar1 = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202dbf0 + 0x54);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08854834 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 1;
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined *)(param_1 + 0xbc) = 0xff;
  *(undefined *)(param_1 + 0xbd) = 0;
  *(undefined *)(param_1 + 0xbe) = 0;
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_1 + 0x54);
  *(undefined *)(param_1 + 0xd5) = 0;
  pbVar4 = (byte *)(param_1 + 0xbf);
  *pbVar4 = 0;
  uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar3 & 0x7fffffff;
  if ((uVar3 * 2 >> 0x11 & 1) != 0) {
    *pbVar4 = 2;
  }
  *(undefined2 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  sub_0801CC9C(param_1);
  sub_0801CEEC(param_1);
  *(undefined *)(param_1 + 0x25) = 0x18;
  *(bool *)(param_1 + 0x4c) = bVar1;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
  if (bVar1) {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar2;
  sub_08050408(param_1,&DAT_0885a19c,0x60);
  sub_0807E964(param_1);
  *(undefined *)(param_1 + 0xce) = 0;
  *(undefined *)(param_1 + 0xcf) = 0;
  *pbVar4 = *pbVar4 & 0xfe;
  *(undefined *)(param_1 + 0xd4) = 0;
  sub_0807B4B8(param_1);
  return in_lr;
}

