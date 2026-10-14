// sub_08039E84 at 0x08039E84 (thumb)

undefined4 sub_08039E84(int param_1)

{
  byte bVar1;
  int *piVar2;
  byte bVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0xb4);
  if (*(char *)(iVar4 + 0x232) == '\0') {
    if (((*(uint *)(iVar4 + 0x8c) & 0x200) == 0) && (*(short *)(iVar4 + 0xa4) != 0)) {
      if ((*(char *)(param_1 + 0xc2) != '\0') && ((*(uint *)(param_1 + 0x8c) & 0x1000) != 0)) {
        sub_0800471C(0x2b);
        *(undefined *)(param_1 + 0xc2) = 0;
      }
      if (*(char *)(iVar4 + 0xc0) == '\x03') {
        bVar1 = *(byte *)(iVar4 + 0x124);
        bVar3 = 0x10;
      }
      else {
        bVar1 = *(byte *)(iVar4 + 0x124);
        bVar3 = 0x20;
      }
      *(byte *)(iVar4 + 0x124) = bVar1 | bVar3;
      sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0835dad4 + (uint)*(byte *)(param_1 + 0xd) * 4));
      sub_080177F4(param_1);
      if (*(char *)(param_1 + 0xd) != '\x02') {
        return in_lr;
      }
      iVar4 = sub_0803A870(param_1);
      if (iVar4 == 0) {
        return in_lr;
      }
      piVar2 = &DAT_0835b5d0 + *(byte *)(param_1 + 9);
      *(undefined4 *)(param_1 + 0xc) = 2;
    }
    else {
      piVar2 = &DAT_0835b5d0 + *(byte *)(param_1 + 9);
      *(undefined4 *)(param_1 + 0xc) = 2;
    }
  }
  else {
    piVar2 = &DAT_0835b5d0 + *(byte *)(param_1 + 9);
    *(undefined4 *)(param_1 + 0xc) = 2;
  }
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
  return in_lr;
}

