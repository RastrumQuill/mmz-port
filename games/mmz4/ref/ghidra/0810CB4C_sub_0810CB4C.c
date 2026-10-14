// sub_0810CB4C at 0x0810CB4C (thumb)

undefined4 sub_0810CB4C(int param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if (*(char *)(iVar2 + 0xdd1) == '\0') {
    if (*(char *)(param_1 + 0x80) != '\0') {
      sub_080025D8();
    }
    if (*(char *)(iVar2 + 0xdde) == '\x03') {
      *(undefined *)(param_1 + 0xd) = 3;
    }
    if (*(short *)(param_1 + 0x78) == -0x4ffd) {
      bVar1 = *(byte *)(param_1 + 0x12);
      *(byte *)(param_1 + 0x12) = bVar1 + 1;
      if ((bVar1 & 3) == 0) {
        bVar1 = *(byte *)(param_1 + 10) & 0xfe;
      }
      else {
        bVar1 = *(byte *)(param_1 + 10) | 1;
      }
      *(byte *)(param_1 + 10) = bVar1;
    }
    sub_0801CFF0(param_1);
    bVar1 = *(byte *)(param_1 + 0xd);
    if (bVar1 == 1) {
      *(byte *)(param_1 + 0x45) = *(byte *)(param_1 + 0x45) & 0xf3;
    }
    else if (bVar1 < 2) {
      if (bVar1 == 0) {
        *(byte *)(param_1 + 0x45) = *(byte *)(param_1 + 0x45) & 0xf3 | 4;
        pbVar3 = (byte *)(param_1 + 0x7c);
        bVar1 = *pbVar3;
        *pbVar3 = bVar1 + 2;
        if (0xf < (byte)(bVar1 + 2)) {
          *pbVar3 = 0x10;
          *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
        }
      }
    }
    else if (bVar1 == 2) {
      *(byte *)(param_1 + 0x45) = *(byte *)(param_1 + 0x45) & 0xf3 | 4;
      *(undefined *)(param_1 + 0x7c) = 8;
    }
    else if (bVar1 == 3) goto LAB_0810cc2a;
    DAT_02000a42 = *(byte *)(param_1 + 0x7c) & 0x1f |
                   (0x10 - (ushort)*(byte *)(param_1 + 0x7c)) * 0x100;
  }
  else {
LAB_0810cc2a:
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088695c0)[*(byte *)(param_1 + 9)] + 8);
    sub_0810CC68(param_1);
  }
  return in_lr;
}

