// sub_0801AEF8 at 0x0801AEF8 (thumb)

undefined4 sub_0801AEF8(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    DAT_0202e188 = 0x1e0;
    DAT_0202df88 = 10;
    sub_08001D30(&DAT_08c44cd0,0xd120);
    sub_08002208(&DAT_08c44cdc,(DAT_0202df88 - 7) * 0x20 + 0x200);
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x6c) = 0;
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x74) = 0;
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x7c) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(int *)(param_1 + 0x34) - 0x1401U < 0x20f) {
    if (*(int *)(param_1 + 0x68) == 0) {
      uVar1 = sub_080F7DEC(&DAT_08837b58,0,3);
      *(undefined4 *)(param_1 + 0x68) = uVar1;
    }
    if (*(int *)(param_1 + 0x6c) == 0) {
      uVar1 = sub_080F7DEC(&DAT_08837b60,0,3);
LAB_0801afca:
      *(undefined4 *)(param_1 + 0x6c) = uVar1;
    }
  }
  else {
    if (*(int *)(param_1 + 0x68) != 0) {
      sub_080E8F60();
      *(undefined4 *)(param_1 + 0x68) = 0;
    }
    if (*(int *)(param_1 + 0x6c) != 0) {
      sub_080E8F60();
      uVar1 = 0;
      goto LAB_0801afca;
    }
  }
  if (*(int *)(param_1 + 0x34) - 0x14a1U < 0x1df) {
    if (*(int *)(param_1 + 0x70) == 0) {
      uVar1 = sub_080F7DEC(&DAT_08837b68,0,3);
      *(undefined4 *)(param_1 + 0x70) = uVar1;
    }
    if (*(int *)(param_1 + 0x74) != 0) goto LAB_0801b028;
    uVar1 = sub_080F7DEC(&DAT_08837b70,0,3);
  }
  else {
    if (*(int *)(param_1 + 0x70) != 0) {
      sub_080E8F60();
      *(undefined4 *)(param_1 + 0x70) = 0;
    }
    if (*(int *)(param_1 + 0x74) == 0) goto LAB_0801b028;
    sub_080E8F60();
    uVar1 = 0;
  }
  *(undefined4 *)(param_1 + 0x74) = uVar1;
LAB_0801b028:
  if (*(int *)(param_1 + 0x34) - 0x1541U < 0x20f) {
    if (*(int *)(param_1 + 0x78) == 0) {
      uVar1 = sub_080F7DEC(&DAT_08837b78,0,3);
      *(undefined4 *)(param_1 + 0x78) = uVar1;
    }
    if (*(int *)(param_1 + 0x7c) != 0) {
      return in_lr;
    }
    uVar1 = sub_080F7DEC(&DAT_08837b80,0,3);
  }
  else {
    if (*(int *)(param_1 + 0x78) != 0) {
      sub_080E8F60();
      *(undefined4 *)(param_1 + 0x78) = 0;
    }
    if (*(int *)(param_1 + 0x7c) == 0) {
      return in_lr;
    }
    sub_080E8F60();
    uVar1 = 0;
  }
  *(undefined4 *)(param_1 + 0x7c) = uVar1;
  return in_lr;
}

