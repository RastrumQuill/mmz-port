// sub_080DACD8 at 0x080DACD8 (thumb)

undefined4 sub_080DACD8(int param_1)

{
  byte bVar1;
  undefined *puVar2;
  byte *pbVar3;
  undefined4 in_lr;
  
  pbVar3 = *(byte **)(param_1 + 0x28);
  if (*pbVar3 < 2) {
    bVar1 = *(byte *)(param_1 + 0x10);
    sub_080EF118(param_1,*(undefined4 *)(&DAT_0834bb58 + (uint)bVar1 * 4));
    if (*(byte *)(param_1 + 0xd) < 2) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      if ((DAT_0202ebb4 & 2) == 0) {
        puVar2 = &DAT_0834bb20;
      }
      else {
        puVar2 = &DAT_0834bae8;
      }
      *(int *)(param_1 + 0x54) = *(int *)(puVar2 + (uint)bVar1 * 8) + *(int *)(pbVar3 + 8);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
      sub_080128D4(param_1);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0834b8b4)[*(byte *)(param_1 + 9)] + 8);
    sub_080DB4CC(param_1);
  }
  return in_lr;
}

