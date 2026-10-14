// sub_08040904 at 0x08040904 (thumb)

undefined4 sub_08040904(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(iVar5 + 10) >> 4;
  uVar4 = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)uVar4;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(iVar5 + 0x54);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(iVar5 + 0x58);
  if (*(char *)(param_1 + 0xd) == '\0') {
    pbVar2 = (byte *)(iVar5 + 0x14f);
    if (*pbVar2 == 0xff) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 0xc);
    }
    else if (*(char *)(iVar5 + 0xfa) == '\x02') {
      if (*(char *)(param_1 + 0xe) != '\0') {
        sub_0801CFC8(param_1,*(undefined2 *)(&DAT_088520cc + (uint)*pbVar2 * 2),
                     (short)*(char *)(param_1 + 0x71),(short)*(char *)(param_1 + 0x72));
        sub_0801CFF0(param_1);
      }
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        iVar3 = *(int *)(iVar5 + 0x54) - *(int *)(&DAT_088520e0 + (uint)*pbVar2 * 4);
      }
      else {
        iVar3 = *(int *)(iVar5 + 0x54) + *(int *)(&DAT_088520e0 + (uint)*pbVar2 * 4);
      }
      *(int *)(param_1 + 0x54) = iVar3;
      *(int *)(param_1 + 0x58) =
           *(int *)(iVar5 + 0x58) + *(int *)(&DAT_08852104 + (uint)*pbVar2 * 4);
    }
    else {
      sub_0801CC9C(param_1);
      sub_0801CEEC(param_1);
      *(undefined2 *)(param_1 + 0x20) = 0;
      *(undefined *)(param_1 + 0x22) = 1;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
      if (*(char *)(param_1 + 0x11) == '\0') {
        sub_0801CF00(param_1,0x7e00);
      }
      else {
        sub_0801CF00(param_1,0x7e01);
      }
      sub_0801CFF0(param_1);
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(int *)(param_1 + 0x40) = param_1 + 0x54;
      *(undefined *)(param_1 + 0x25) = 0;
      sub_0801D3D0(param_1,0xe);
      sub_08002B10(0x26);
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
  }
  else {
    sub_0801CFF0(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 8)
      ;
      sub_08040AE4(param_1);
    }
  }
  return in_lr;
}

