// sub_080D2BA8 at 0x080D2BA8 (thumb)

undefined4 sub_080D2BA8(int param_1)

{
  bool bVar1;
  byte bVar2;
  undefined2 uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar3 = sub_080EF118(param_1,*(undefined4 *)
                                  (&DAT_08349f54 + (uint)*(byte *)(param_1 + 0x10) * 4));
    *(undefined2 *)(param_1 + 0xba) = uVar3;
    sub_080DEF4C(*(undefined2 *)(param_1 + 0xba));
    sub_080127E4(param_1,*(undefined2 *)(param_1 + 0xc2));
    if (*(char *)(param_1 + 0xb9) != '\0') {
      bVar1 = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202e130 + 0x54);
      if (bVar1) {
        bVar2 = *(byte *)(param_1 + 10) | 0x10;
      }
      else {
        bVar2 = *(byte *)(param_1 + 10) & 0xef;
      }
      *(byte *)(param_1 + 10) = bVar2;
      *(bool *)(param_1 + 0x4c) = bVar1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    }
    if (*(char *)(param_1 + 0x10) == '\x11') {
      sub_080032EC(2);
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (DAT_0202f65a == 0) {
    DAT_0202e138 = 0;
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

