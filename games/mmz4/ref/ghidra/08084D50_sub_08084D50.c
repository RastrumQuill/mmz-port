// sub_08084D50 at 0x08084D50 (thumb)

undefined4 sub_08084D50(int param_1)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08005784(param_1 + 0x74,&DAT_0885b60c);
    bVar1 = *(byte *)(param_1 + 0x11);
    if (bVar1 < 2) {
      sub_0801CF00(param_1,0x1913);
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
      sub_0801CF00(param_1,0x1912);
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
  sub_0801CFF0(param_1);
  puVar3 = (uint *)(param_1 + 0x8c);
  if ((*puVar3 & 4) == 0) {
    uVar2 = sub_0801FB14(&DAT_0202e9f8,param_1 + 0x54);
    if (uVar2 < 0x1001) {
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *puVar3 = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
  }
  else {
    sub_080D0894(2,param_1 + 0x54);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *puVar3 = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  *(undefined4 *)(param_1 + 0xc) = 3;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  return in_lr;
}

