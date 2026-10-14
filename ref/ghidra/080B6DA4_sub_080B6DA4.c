// sub_080B6DA4 at 0x080B6DA4 (thumb)

undefined4 sub_080B6DA4(int param_1)

{
  wchar16 wVar1;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xe) = 1;
  wVar1 = L"^__``aaaaabbbbbcccccddddd"[*(byte *)(param_1 + 0x11)];
  (&DAT_02022ad4)[(ushort)wVar1 >> 3] =
       (byte)(1 << ((ushort)wVar1 & 7)) | (&DAT_02022ad4)[(ushort)wVar1 >> 3];
  if ((ushort)wVar1 == 0x61) {
    if ((ushort)((DAT_02022868 & 0x7fff) + 0x708) < 0x8000) {
      DAT_02022868 = DAT_02022868 + 0x708 | 0x8000;
    }
    else {
      DAT_02022868 = 0xffff;
    }
  }
  *(undefined *)(param_1 + 0xbe) = 4;
  sub_080B6E24(param_1);
  return in_lr;
}

