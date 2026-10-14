// sub_080BA8B4 at 0x080BA8B4 (thumb)

undefined4 sub_080BA8B4(int param_1)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  undefined4 in_lr;
  
  pbVar3 = *(byte **)(param_1 + 0x20);
  if (*pbVar3 < 2) {
    bVar1 = *(byte *)(param_1 + 0x12);
    cVar2 = sub_080B4660(*(undefined *)(*(int *)(pbVar3 + 0x10) + 0x180 + (uint)bVar1));
    if (cVar2 < 0) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
      *(uint *)(param_1 + 0x4c) = (uint)bVar1 * 0x1000 + 0xa400 + *(int *)(pbVar3 + 8);
      sub_080033F0(param_1 + 0x6c,(&DAT_082b89a4)[cVar2 * 2]);
      sub_08003458(param_1 + 0x6c);
      *(undefined *)(param_1 + 0x46) =
           *(undefined *)
            (*(char *)(param_1 + 0x71) * 4 +
            *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b85b0)[*(byte *)(param_1 + 9)] + 8);
    sub_080BA9D8(param_1);
  }
  return in_lr;
}

