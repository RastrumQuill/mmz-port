// sub_08080760 at 0x08080760 (thumb)

undefined4 sub_08080760(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,*(undefined2 *)(&DAT_08340c0a + (uint)*(byte *)(param_1 + 0x11) * 10));
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  sub_0808090C(param_1);
  bVar1 = *(byte *)(param_1 + 0x12);
  if (bVar1 == 0x18) {
    sub_080032EC(0xd0);
  }
  else if (bVar1 < 0x19) {
    if ((bVar1 == 8) && (bVar1 = sub_08065AEC(param_1,0x32), bVar1 < 6)) {
      bVar1 = 6 - bVar1;
      if (3 < bVar1) {
        bVar1 = 3;
      }
      for (; bVar1 != 0; bVar1 = bVar1 - 1) {
        sub_08080A6C(param_1,param_1 + 0x54,bVar1 * 'U',*(undefined *)(param_1 + 0x11));
      }
    }
  }
  else if (bVar1 == 0x60) {
    *(undefined *)(param_1 + 0xd) = 5;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

