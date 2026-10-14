// sub_080C34B0 at 0x080C34B0 (thumb)

undefined4 sub_080C34B0(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xd) == '\0') {
    if (1 < *(byte *)(iVar3 + 0xc)) {
      *(undefined *)(param_1 + 0xd) = 1;
    }
    sub_0801CFF0(param_1);
    *(byte *)(param_1 + 0xb6) = *(byte *)(param_1 + 0xb5);
    pbVar2 = (byte *)(param_1 + 0xb4);
    *(byte *)(param_1 + 0xb5) = *pbVar2;
    bVar1 = *(byte *)(iVar3 + 0xb6);
    *pbVar2 = bVar1;
    if (bVar1 != 0) {
      *(int *)(param_1 + 0x54) =
           *(int *)(param_1 + 0x54) +
           (*(short *)((int)&DAT_08128c10 + ((bVar1 + 0x40) * 0x1000000 >> 0x17)) * 7 >> 1);
      *(int *)(param_1 + 0x58) =
           *(int *)(param_1 + 0x58) + ((short)(&DAT_08128c10)[*pbVar2] * 7 >> 1);
    }
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

