// sub_080D2884 at 0x080D2884 (thumb)

undefined4 sub_080D2884(int param_1)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_08012580(param_1);
  bVar3 = *(byte *)(param_1 + 10);
  *(byte *)(param_1 + 10) = bVar3 | 3;
  bVar1 = *(byte *)(param_1 + 0x11);
  if (bVar1 == 0) {
    bVar3 = bVar3 & 0xef | 3;
  }
  else {
    bVar3 = bVar3 | 0x13;
  }
  *(byte *)(param_1 + 10) = bVar3;
  *(byte *)(param_1 + 0x4c) = bVar1;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((bVar1 & 1) << 4);
  iVar4 = *(int *)(param_1 + 0x58);
  iVar2 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),iVar4);
  *(int *)(param_1 + 0x58) = iVar2;
  if (iVar2 < iVar4) {
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  else {
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
    sub_080EF118(param_1,*(undefined4 *)(&DAT_08349edc + (uint)*(byte *)(param_1 + 0x10) * 4));
  }
  return in_lr;
}

