// sub_080F65B0 at 0x080F65B0 (thumb)

undefined4 sub_080F65B0(int param_1)

{
  byte bVar1;
  undefined uVar2;
  undefined4 in_lr;
  
  DAT_02002410 = DAT_02002410 & 0xdfff;
  if (*(byte *)(param_1 + 0xe07) < 0x10) {
    *(byte *)(param_1 + 0xe07) = *(byte *)(param_1 + 0xe07) + 1;
  }
  bVar1 = *(byte *)(param_1 + 0xe03);
  if (*(char *)(*(int *)(param_1 + 0x64ac) + 0xce) != '\x01') {
    if ((DAT_02002136 & 0x40) != 0) {
      uVar2 = sub_080FE390(bVar1 + 4,5);
      *(undefined *)(param_1 + 0xe03) = uVar2;
    }
    if ((DAT_02002136 & 0x80) != 0) {
      uVar2 = sub_080FE390(*(byte *)(param_1 + 0xe03) + 1,5);
      *(undefined *)(param_1 + 0xe03) = uVar2;
    }
  }
  if ((uint)bVar1 != (uint)*(byte *)(param_1 + 0xe03)) {
    sub_0800471C(1);
  }
  if ((DAT_02002134 & 1) != 0) {
    *(undefined *)(param_1 + 0xe02) = 0;
    *(undefined *)(param_1 + 0xe05) = 0;
    *(undefined *)(param_1 + 3) = 1;
    *(undefined *)(param_1 + 0xe17) = 0;
    if (*(char *)(param_1 + 0xe08) != '\0') {
      sub_08004230();
    }
    *(undefined *)(param_1 + 0xe08) = 0x4d;
    sub_080040A8(0x4d,0);
    sub_080041E4(*(undefined *)(param_1 + 0xe08));
    sub_0800471C(2);
  }
  return in_lr;
}

