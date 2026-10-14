// sub_0807CE98 at 0x0807CE98 (thumb)

undefined4 sub_0807CE98(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08007390(param_1 + 0x74,&DAT_083643ac);
    bVar1 = *(byte *)(param_1 + 0x11);
    if (bVar1 < 2) {
      sub_08017700(param_1,0x4313);
      if (*(byte *)(param_1 + 0x11) == 0) {
        bVar1 = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        bVar1 = *(byte *)(param_1 + 10) | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar1;
      uVar2 = *(byte *)(param_1 + 0x11) & 1;
      *(char *)(param_1 + 0x4c) = (char)uVar2;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar2 << 4);
      *(uint *)(param_1 + 0x5c) = (uint)*(byte *)(param_1 + 0x11) * 0x400 + -0x200;
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
    else {
      uVar2 = bVar1 & 1;
      if ((bVar1 & 1) == 0) {
        bVar1 = *(byte *)(param_1 + 10) & 0xdf;
      }
      else {
        bVar1 = *(byte *)(param_1 + 10) | 0x20;
      }
      *(byte *)(param_1 + 10) = bVar1;
      *(char *)(param_1 + 0x4d) = (char)uVar2;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xdf | (byte)(uVar2 << 5);
      sub_08017700(param_1,0x4312);
      *(undefined4 *)(param_1 + 0x5c) = 0;
      *(uint *)(param_1 + 0x60) = (*(byte *)(param_1 + 0x11) & 1) * 0x400 + -0x200;
    }
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

