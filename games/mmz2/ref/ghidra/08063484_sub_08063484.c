// sub_08063484 at 0x08063484 (thumb)

undefined4 sub_08063484(int param_1)

{
  undefined uVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  undefined4 in_lr;
  
  sub_080128D4();
  if (*(byte *)(param_1 + 0xc2) < 2) {
    if (*(byte *)(param_1 + 0xc2) != 1) {
      uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3;
      DAT_0202e188 = uVar3 & 0x7fffffff;
      if ((uVar3 * 2 >> 0x11 & 1) == 0) {
        uVar1 = 5;
      }
      else {
        uVar1 = 8;
      }
      *(undefined *)(param_1 + 0xd) = uVar1;
      *(undefined *)(param_1 + 0xcf) = *(undefined *)(param_1 + 0xd);
      goto LAB_08063518;
    }
    uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar3 & 0x7fffffff;
    if ((uVar3 * 2 >> 0x11 & 1) == 0) {
      if (*(char *)(param_1 + 0xcf) == '\b') {
        *(undefined *)(param_1 + 0xd) = 5;
      }
      else {
        *(undefined *)(param_1 + 0xd) = 8;
      }
      goto LAB_08063518;
    }
  }
  *(undefined *)(param_1 + 0xd) = 9;
LAB_08063518:
  pbVar4 = (byte *)(param_1 + 0xc2);
  bVar2 = sub_080EF1E8(*pbVar4 + 1,3);
  *pbVar4 = bVar2;
  if (*(char *)(param_1 + 0xd) == '\t') {
    *pbVar4 = 0;
  }
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}

