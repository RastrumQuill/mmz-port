// sub_080BFFF4 at 0x080BFFF4 (thumb)

undefined4 sub_080BFFF4(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  sbyte local_20 [4];
  sbyte local_1c [8];
  
  sub_08128B5C(local_20,&DAT_081299e0,3);
  sub_08128B5C(local_1c,&DAT_081299e3,5);
  bVar1 = *(byte *)(*(int *)(param_1 + 0x28) + 10) >> 4;
  uVar3 = bVar1 & 1;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe | 2;
  *(undefined2 *)(param_1 + 0xb4) = 0;
  *(undefined2 *)(param_1 + 0xb6) = 0;
  sub_0801CC9C(param_1);
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)uVar3;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar3 << 4);
  iVar2 = sub_080BFF80(param_1,1,0,0);
  if (iVar2 != 0) {
    *(ushort *)(param_1 + 0xb6) = *(ushort *)(param_1 + 0xb6) | 1;
  }
  iVar2 = sub_080BFF80(param_1,1,1,0);
  if (iVar2 != 0) {
    *(ushort *)(param_1 + 0xb6) = *(ushort *)(param_1 + 0xb6) | 2;
  }
  uVar3 = 0;
  do {
    iVar2 = sub_080BFF80(param_1,2,0,uVar3 & 0xff);
    if (iVar2 != 0) {
      *(ushort *)(param_1 + 0xb6) = (ushort)(1 << local_20[uVar3]) | *(ushort *)(param_1 + 0xb6);
    }
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 3);
  uVar3 = 0;
  do {
    iVar2 = sub_080BFF80(param_1,2,1,uVar3 & 0xff);
    if (iVar2 != 0) {
      *(ushort *)(param_1 + 0xb6) = (ushort)(1 << local_1c[uVar3]) | *(ushort *)(param_1 + 0xb6);
    }
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 5);
  sub_080C0248(param_1);
  return in_lr;
}

