// sub_0806A1AC at 0x0806A1AC (thumb)

undefined4 sub_0806A1AC(int param_1,undefined4 *param_2,char param_3)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined4 in_lr;
  
  if (param_3 == '\0') {
    iVar1 = sub_08006B84(DAT_0202f078);
    if (iVar1 != 0) {
      *(undefined *)(iVar1 + 0x25) = 0x18;
      *(undefined *)(iVar1 + 9) = 8;
      *(undefined4 *)(iVar1 + 0x14) = 0x806a28d;
      *(undefined2 *)(iVar1 + 0x20) = 0;
      *(undefined *)(iVar1 + 0x22) = 0;
      *(byte *)(iVar1 + 0xb) = *(byte *)(iVar1 + 0xb) | 0x10;
      *(undefined *)(iVar1 + 0x1d) = *(undefined *)(iVar1 + 0x1c);
      uVar2 = param_2[1];
      *(undefined4 *)(iVar1 + 0x54) = *param_2;
      *(undefined4 *)(iVar1 + 0x58) = uVar2;
      *(undefined *)(iVar1 + 0x10) = 0;
    }
  }
  else if ((param_3 == '\x01') && (param_1 != 0)) {
    bVar3 = 0;
    do {
      iVar1 = sub_08006B84(DAT_0202f078);
      if (iVar1 != 0) {
        *(undefined *)(iVar1 + 0x25) = 0x18;
        *(undefined *)(iVar1 + 9) = 8;
        *(undefined4 *)(iVar1 + 0x14) = 0x806a28d;
        *(undefined2 *)(iVar1 + 0x20) = 0;
        *(undefined *)(iVar1 + 0x22) = 0;
        *(byte *)(iVar1 + 0xb) = *(byte *)(iVar1 + 0xb) | 0x10;
        *(undefined *)(iVar1 + 0x1d) = *(undefined *)(iVar1 + 0x1c);
        *(int *)(iVar1 + 0x28) = param_1;
        uVar2 = param_2[1];
        *(undefined4 *)(iVar1 + 0x54) = *param_2;
        *(undefined4 *)(iVar1 + 0x58) = uVar2;
        *(undefined *)(iVar1 + 0x10) = 1;
        *(byte *)(iVar1 + 0xb6) = bVar3 * 'U';
      }
      bVar3 = bVar3 + 1;
    } while (bVar3 < 3);
  }
  return in_lr;
}

