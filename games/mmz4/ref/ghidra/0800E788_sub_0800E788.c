// sub_0800E788 at 0x0800E788 (thumb)

undefined4 sub_0800E788(int param_1)

{
  ushort uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar1 = DAT_0202e8b9 & 0x20;
    if ((DAT_0202e8b9 & 0x20) != 0) {
      sub_080074C0(2,3,0x4b);
      sub_080074C0(2,4,0x5b);
      sub_080074C0(1,3,0x4a);
      sub_080074C0(1,4,0x5a);
      uVar1 = 1;
    }
    *(ushort *)(param_1 + 0x10) = uVar1;
    DAT_0202ea60 = 0x38000;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if ((*(short *)(param_1 + 0x10) == 0) && ((DAT_0202e8b9 & 0x20) != 0)) {
    sub_080074C0(2,3,0x4b);
    sub_080074C0(2,4,0x5b);
    sub_080074C0(1,3,0x4a);
    sub_080074C0(1,4,0x5a);
    *(undefined2 *)(param_1 + 0x10) = 1;
  }
  return in_lr;
}

