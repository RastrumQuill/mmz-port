// sub_080B0304 at 0x080B0304 (thumb)

undefined4 sub_080B0304(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  undefined4 in_lr;
  
  uVar3 = 0;
  bVar1 = *(byte *)(*(int *)(param_1 + 0x28) + 0xb7);
  if ((bVar1 & 1) != 0) {
    do {
      uVar3 = uVar3 + 1 & 0xff;
    } while (((int)(uint)bVar1 >> uVar3 & 1U) != 0);
  }
  pbVar2 = (byte *)(*(int *)(param_1 + 0x28) + 0xb7);
  *pbVar2 = (byte)(1 << uVar3) | *pbVar2;
  *(char *)(param_1 + 0x11) = (char)uVar3;
  *(int *)(param_1 + 0x5c) =
       (int)*(short *)((int)&DAT_08128c10 +
                      (((byte)(&DAT_0885fe90)[uVar3] + 0x40) * 0x1000000 >> 0x17));
  *(int *)(param_1 + 0x60) = (int)(short)(&DAT_08128c10)[(byte)(&DAT_0885fe90)[uVar3]];
  *(undefined *)(param_1 + 0x25) = 0x19;
  *(undefined *)(param_1 + 0x12) = 0x1e;
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,&DAT_0885fe60,param_1 + 0x54,2);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x80b0211;
  sub_0801CF00(param_1,0xb20a);
  return in_lr;
}

