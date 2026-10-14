// sub_0807D990 at 0x0807D990 (thumb)

undefined4 sub_0807D990(int param_1)

{
  bool bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined4 in_lr;
  
  sub_0801260C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127E4(param_1,0x5c00);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  bVar1 = 1 < *(byte *)(param_1 + 0x11);
  if (bVar1) {
    bVar2 = *(byte *)(param_1 + 10) | 0x20;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) & 0xdf;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(bool *)(param_1 + 0x4d) = bVar1;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xdf | bVar1 << 5;
  *(undefined *)(param_1 + 0x25) = 0x19;
  *(undefined *)(param_1 + 0x13) = (&DAT_08340788)[*(byte *)(param_1 + 0x11)];
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08006DE4(param_1 + 0x74,&DAT_08340758,param_1 + 0x54,0x10);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08006DE4(param_1 + 0x74,&DAT_08340758,param_1 + 0x54,0xff);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x58);
  *(undefined *)(param_1 + 0x12) = 0x80;
  puVar3 = (undefined *)(param_1 + 0xbd);
  do {
    *puVar3 = 0;
    puVar3 = puVar3 + -1;
  } while (param_1 + 0xb4 <= (int)puVar3);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_0807DAAC(param_1);
  return in_lr;
}

