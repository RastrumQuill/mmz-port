// sub_080A18D8 at 0x080A18D8 (thumb)

undefined4 sub_080A18D8(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  bVar1 = *(char *)(param_1 + 0x13) + 1;
  *(byte *)(param_1 + 0x13) = bVar1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xfe;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 1;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 4;
  iVar4 = *(int *)(param_1 + 0x28);
  iVar3 = *(int *)(param_1 + 100);
  iVar2 = sub_080EF150((uint)*(byte *)(param_1 + 0x12) * (*(int *)(iVar4 + 0x54) - iVar3),5);
  *(int *)(param_1 + 0x54) = iVar3 + iVar2;
  iVar3 = *(int *)(param_1 + 0x68);
  iVar2 = sub_080EF150((uint)*(byte *)(param_1 + 0x12) * (*(int *)(iVar4 + 0x58) - iVar3),5);
  *(int *)(param_1 + 0x58) = iVar3 + iVar2;
  if (1 < *(byte *)(iVar4 + 0xc)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  sub_08012A14(param_1);
  return in_lr;
}

