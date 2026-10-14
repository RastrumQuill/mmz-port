// sub_08036D50 at 0x08036D50 (thumb)

undefined4 sub_08036D50(int param_1)

{
  undefined uVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  sub_08038AAC();
  iVar3 = *(byte *)(param_1 + 0x12) - 1;
  uVar1 = (undefined)iVar3;
  *(undefined *)(param_1 + 0x12) = uVar1;
  if (iVar3 == 0) {
    if ((*(short *)(param_1 + 0x8c) < 0x30) && (4 < *(byte *)(DAT_02022b20 + 1))) {
      uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
      DAT_02022890 = uVar2 & 0x7fffffff;
      uVar2 = uVar2 * 2 >> 0x11 & 0x1f;
      if (uVar2 < 10) {
        uVar1 = 1;
      }
      else if (uVar2 < 0x11) {
        uVar1 = 3;
      }
      else {
        if (0x17 < uVar2) {
          *(undefined *)(param_1 + 0x10) = 1;
          *(undefined *)(param_1 + 0xd) = uVar1;
          *(undefined2 *)(param_1 + 0xe) = 0;
          return in_lr;
        }
        uVar1 = 4;
      }
      *(undefined *)(param_1 + 0xd) = uVar1;
      *(undefined2 *)(param_1 + 0xe) = 0;
    }
    else {
      uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
      DAT_02022890 = uVar2 & 0x7fffffff;
      uVar2 = uVar2 * 2 >> 0x11 & 0x1f;
      if (uVar2 < 0xe) {
        uVar1 = 1;
      }
      else if (uVar2 < 0x17) {
        uVar1 = 3;
      }
      else {
        uVar1 = 4;
      }
      *(undefined *)(param_1 + 0xd) = uVar1;
      *(undefined2 *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

