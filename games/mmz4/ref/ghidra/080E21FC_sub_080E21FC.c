// sub_080E21FC at 0x080E21FC (thumb)

undefined4 sub_080E21FC(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  undefined4 local_20 [4];
  
  local_20[0] = 0x2801;
  local_20[1] = 0x2802;
  local_20[2] = 0x2803;
  local_20[3] = 0x2804;
  bVar1 = *(byte *)(param_1 + 0x11);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  iVar2 = *(int *)(param_1 + 0x74) *
          (int)*(short *)((int)&DAT_08128c10 +
                         ((*(byte *)(param_1 + 0x78) + 0x40) * 0x1000000 >> 0x17));
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  *(int *)(param_1 + 0x5c) = iVar2 >> 8;
  iVar2 = *(int *)(param_1 + 0x74) * (int)(short)(&DAT_08128c10)[*(byte *)(param_1 + 0x78)];
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  *(int *)(param_1 + 0x60) = iVar2 >> 8;
  sub_0801CC9C(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  sub_0801CF00(param_1,*(undefined2 *)(local_20 + bVar1));
  sub_080E22B4(param_1);
  return in_lr;
}

