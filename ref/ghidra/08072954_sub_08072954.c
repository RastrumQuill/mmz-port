// sub_08072954 at 0x08072954 (thumb)

undefined4 sub_08072954(int param_1)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    if ((*(ushort *)(param_1 + 0x90) & 0x40) == 0) {
      pbVar3 = (byte *)(param_1 + 199);
      *pbVar3 = *pbVar3 + 1;
      bVar1 = *(byte *)(param_1 + 0x13);
      *(byte *)(param_1 + 0x13) = bVar1 + 1;
      if (((bVar1 & 3) == 0) &&
         (uVar2 = DAT_02022890 * 0x343fd + 0x269ec3, DAT_02022890 = uVar2 & 0x7fffffff,
         (uVar2 * 2 >> 0x11 & 1) != 0)) {
        sub_08099484(param_1,*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50),10,2);
      }
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0xbc) + (short)(&DAT_080c8e24)[*pbVar3] * 8;
      sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b14b4 + (uint)*(byte *)(param_1 + 0xd) * 4));
    }
    else {
      DAT_02022ae1 = DAT_02022ae1 & 0xe7;
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 8);
      sub_08072A64(param_1);
    }
  }
  else if (*(byte *)(*(int *)(param_1 + 0x20) + 0xc) < 2) {
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x50);
    sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b14c0 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}

