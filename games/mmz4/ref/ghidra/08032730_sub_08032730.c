// sub_08032730 at 0x08032730 (thumb)

undefined4 sub_08032730(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x71) != '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined *)(param_1 + 0x170) = 1;
    sub_08001EA4(&DAT_08c4412c,(uint)DAT_0202e05e * 0x20 + 0x10000);
    sub_08002208(&DAT_08c44138,(DAT_0202de5e - 0xe) * 0x20 + 0x200);
    *(undefined *)(param_1 + 0xf) = 2;
  }
  return in_lr;
}

