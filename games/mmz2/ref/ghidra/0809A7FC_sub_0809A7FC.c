// sub_0809A7FC at 0x0809A7FC (thumb)

undefined4 sub_0809A7FC(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  if (((DAT_0202ebbb & 0x20) == 0) && ((DAT_0202ebbb & 1) == 0)) {
    if (*(char *)(param_1 + 0xd) == '\0') {
      sub_080127E4(param_1,0xd06);
      *(undefined *)(param_1 + 0x12) = 0;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
    if ((*(char *)(param_1 + 0xb9) != '\0') &&
       (bVar1 = *(char *)(param_1 + 0x12) + 1, *(byte *)(param_1 + 0x12) = bVar1, bVar1 < 0x24)) {
      return in_lr;
    }
    uVar3 = (uint)(*(ushort *)(param_1 + 0xb4) >> 8);
    local_14 = *(int *)(param_1 + 0x54) + (short)(&DAT_080ef450)[uVar3 + 0x40 & 0xff] * 8;
    local_10 = *(int *)(param_1 + 0x58) + (short)(&DAT_080ef450)[uVar3] * 8;
    sub_080AC60C(2,&local_14);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined4 *)(param_1 + 0xc) = 4;
    uVar2 = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 0x10);
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    uVar2 = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 0xc);
  }
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  return in_lr;
}

