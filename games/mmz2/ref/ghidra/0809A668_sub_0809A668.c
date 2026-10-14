// sub_0809A668 at 0x0809A668 (thumb)

undefined4 sub_0809A668(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 0;
  iVar3 = *(int *)(param_1 + 0x28);
  sub_0801260C(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined *)(param_1 + 0x25) = 0x19;
  bVar1 = *(byte *)(iVar3 + 10) >> 4;
  uVar2 = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)uVar2;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar2 << 4);
  *(undefined2 *)(param_1 + 0xb4) = 0x4000;
  sub_0809AC10(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x600;
  *(undefined *)(param_1 + 0xb9) = 0;
  *(undefined *)(param_1 + 0xba) = 0;
  sub_080127E4(param_1,0xd06);
  sub_080128D4(param_1);
  sub_0809A720(param_1);
  return in_lr;
}

