// sub_080D2CB0 at 0x080D2CB0 (thumb)

undefined4 sub_080D2CB0(int param_1)

{
  undefined4 *puVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    puVar1 = *(undefined4 **)(param_1 + 0x28);
    sub_0800393C(&DAT_085d8974,(DAT_0202fbb6 - 0x200) * 0x20 + 0x10000);
    sub_08003E14(&DAT_085d8980,(DAT_0202f9b6 - 4) * 0x20 + 0x200);
    sub_08017700(param_1,0xd301);
    *(undefined4 *)(param_1 + 0x54) = *puVar1;
    *(undefined4 *)(param_1 + 0x58) = puVar1[1];
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  sub_080177F4(param_1);
  return in_lr;
}

