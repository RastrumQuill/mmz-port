// sub_080610DC at 0x080610DC (thumb)

undefined4 sub_080610DC(int param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x20);
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_080033F0(param_1 + 0x6c,0);
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3 | 8;
    *(undefined *)(param_1 + 0x1f) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_080055FC(param_1 + 0x74,&DAT_082b0574,param_1 + 0x4c,0xff);
    *(int *)(param_1 + 0xb4) = param_1;
    *(undefined4 *)(param_1 + 0xb0) = 0;
    *(undefined *)(param_1 + 0xba) = 0;
    *(undefined *)(param_1 + 0xbb) = 0;
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  bVar1 = *(byte *)(iVar4 + 10) >> 4;
  *(byte *)(param_1 + 0x44) = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  if (*(int *)(*(int *)(param_1 + 0x20) + 0xbc) + 0x6400 < *(int *)(param_1 + 0x50)) {
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) | 0xc;
  }
  else {
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3 | 8;
  }
  if ((*(byte *)(iVar4 + 10) & 0x10) == 0) {
    iVar2 = *(int *)(iVar4 + 0x4c) + -0x1000;
  }
  else {
    iVar2 = *(int *)(iVar4 + 0x4c) + 0x1000;
  }
  *(int *)(param_1 + 0x4c) = iVar2;
  pbVar3 = (byte *)(param_1 + 0xb9);
  *(int *)(param_1 + 0x50) = *(int *)(iVar4 + 0x50) + (short)(&DAT_080c8e24)[*pbVar3] * 4;
  *pbVar3 = *pbVar3 + 2;
  return in_lr;
}

