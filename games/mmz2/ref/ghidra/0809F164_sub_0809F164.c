// sub_0809F164 at 0x0809F164 (thumb)

undefined4 sub_0809F164(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  sub_08012580(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127E4(param_1,0x3205);
  sub_080128D4(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08006DE4(param_1 + 0x74,&DAT_08343e54,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 4;
  if (*(char *)(param_1 + 0x11) == '\0') {
    *(undefined4 *)(param_1 + 100) = 0x500;
    uVar3 = 0xe00;
  }
  else {
    *(undefined4 *)(param_1 + 100) = 0xa00;
    uVar3 = 0xb00;
  }
  *(undefined4 *)(param_1 + 0x68) = uVar3;
  bVar1 = *(byte *)(iVar2 + 10);
  if ((bVar1 & 0x10) == 0) {
    *(byte *)(param_1 + 0xbe) = bVar1 & 0x10;
    *(undefined *)(param_1 + 0xbc) = 0x80;
    *(undefined *)(param_1 + 0xbd) = 0x10;
  }
  else {
    *(undefined *)(param_1 + 0xbe) = 1;
    *(undefined *)(param_1 + 0xbc) = 0;
    *(undefined *)(param_1 + 0xbd) = 0;
  }
  *(undefined *)(param_1 + 0xbf) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 4);
  sub_0809F104(param_1);
  return in_lr;
}

