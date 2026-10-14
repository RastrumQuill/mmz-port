// sub_080A4D80 at 0x080A4D80 (thumb)

undefined4 sub_080A4D80(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 in_lr;
  byte abStack_10 [4];
  
  bVar1 = *(byte *)(param_1 + 0x11);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08128B5C(abStack_10,&DAT_08129658,4);
    sub_08005784(param_1 + 0x74,&DAT_0885eb14 + (uint)abStack_10[bVar1] * 0x18);
    if ((DAT_0202cac0 & 0xf) == 2) {
      uVar2 = 0xb4;
    }
    else {
      uVar2 = 0x78;
    }
    *(undefined4 *)(param_1 + 0xb8) = uVar2;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  uVar3 = *(uint *)(param_1 + 0xb8) - 1;
  *(uint *)(param_1 + 0xb8) = uVar3;
  if (uVar3 == 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080A4E3C(param_1);
  }
  else {
    if ((int)uVar3 < 0x1e) {
      if ((uVar3 & 1) == 0) {
        bVar1 = *(byte *)(param_1 + 10) & 0xfe;
      }
      else {
        bVar1 = *(byte *)(param_1 + 10) | 1;
      }
      *(byte *)(param_1 + 10) = bVar1;
    }
    sub_0801CFF0(param_1);
  }
  return in_lr;
}

