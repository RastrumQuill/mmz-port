// sub_0807CFD8 at 0x0807CFD8 (thumb)

undefined4 sub_0807CFD8(int param_1)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08007390(param_1 + 0x74,&DAT_083643ac);
    sub_08017700(param_1,0x4314);
    bVar1 = *(byte *)(param_1 + 0x11);
    uVar2 = bVar1 & 1;
    *(uint *)(param_1 + 0x5c) = uVar2 * 0x2c0 + -0x160;
    *(uint *)(param_1 + 0x60) = (((uint)bVar1 << 0x18) >> 0x19 & 1) * 0x2c0 + -0x160;
    if ((bVar1 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(char *)(param_1 + 0x4c) = (char)uVar2;
    pbVar3 = (byte *)(param_1 + 0x4a);
    *pbVar3 = *pbVar3 & 0xef | (byte)(uVar2 << 4);
    bVar1 = *(byte *)(param_1 + 0x11) >> 1;
    uVar2 = bVar1 & 1;
    if ((bVar1 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xdf;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x20;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(char *)(param_1 + 0x4d) = (char)uVar2;
    *pbVar3 = *pbVar3 & 0xdf | (byte)(uVar2 << 5);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  sub_080177F4(param_1);
  uVar2 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54);
  if (0x1000 < uVar2) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}

