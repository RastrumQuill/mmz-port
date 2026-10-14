// sub_08005678 at 0x08005678 (thumb)

undefined4 sub_08005678(int *param_1)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 in_lr;
  
  pbVar2 = (byte *)param_1[2];
  bVar1 = *(byte *)(param_1 + 8);
  if ((bVar1 & 0x7f) != 0) {
    *(byte *)(param_1 + 8) = bVar1 & 0x80 | (bVar1 & 0x7f) - 1;
  }
  if (pbVar2[3] != 0) {
    bVar1 = *pbVar2;
    *param_1 = (&DAT_02004fa4)[bVar1];
    (&DAT_02004fa4)[bVar1] = param_1;
  }
  if (pbVar2[0x10] != 0) {
    bVar1 = *pbVar2;
    param_1[1] = (int)(&DAT_02004fb0)[bVar1];
    (&DAT_02004fb0)[bVar1] = param_1;
  }
  *(undefined2 *)((int)param_1 + 0x1e) = *(undefined2 *)(param_1 + 7);
  *(undefined2 *)(param_1 + 7) = 0;
  return in_lr;
}

